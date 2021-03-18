#include "contentid.h"
#include "funtions.h"



ContentId::ContentId(QObject *parent) : QObject(parent)
{

}

ContentId::~ContentId()
{

}

void ContentId::Start(QString SourceLoc,QString TVLoc,QString MovieLoc,bool CreateFolder)
{

    QList <QString>TVPathList;
    QList <QString>MoviePathList;
    mStop=false;bool movesucess=false;
    QDirIterator dirIt(SourceLoc);

    while(dirIt.hasNext())
    {
        //QThread::msleep(200);
        if(mStop==true){emit cancel();qDebug()<<"Cancled!!!";return;}
        dirIt.next();
        QString name = dirIt.fileName();
        if(name[0]!='.')
        {
            //Analyzing String
            for(int i=0;i<name.length()-1;i++)
            {
                QString TempYear;
                TempYear.append(name[i]);TempYear.append(name[i+1]);TempYear.append(name[i+2]);TempYear.append(name[i+3]);
                if(mStop==true){emit cancel();qDebug()<<"Cancled!!!";return;}
                //Search for TV Show
                //Using S01E01 condition
                if(  (name[i]=='S'||name[i]=='s') && name[i+1].isDigit() && name[i+2].isDigit() && (name[i+3]=='E'||name[i+3]=='e') && name[i+4].isDigit() && name[i+5].isDigit() )
                {
                    qDebug()<<"TVShow"<<dirIt.filePath()<<endl;
                    //MoveTV(dirIt.filePath(),TVLoc);
                    TVPathList.append(dirIt.filePath());
                    emit content("TVShow",dirIt.fileName());
                    goto nextfile;
                }//End Of TV Show Search
                //Search for Movie
                //Only using 4 consicutive digit for the string which indicate years eg 2015

                else if((name[i].isDigit()&& name[i+1].isDigit()&& name[i+2].isDigit()&& name[i+3].isDigit()) && (name[i+4]!='p'||name[i+4]!='P')&& TempYear.toInt()>1850 && TempYear.toInt()<2050 && !name.contains("Awards",Qt::CaseInsensitive))
                {
                    //If Movie is Without Folder
                    if(dirIt.fileInfo().isFile() && dirIt.fileInfo().size()>467001600 && (dirIt.fileInfo().suffix()=="mkv" || dirIt.fileInfo().suffix()=="mp4" || dirIt.fileInfo().suffix()=="avi"))
                    {
                        if(!TVorNot(dirIt.fileName()))
                        {
                            qDebug()<<"Movie"<<dirIt.filePath()<<endl;
                            MoviePathList.append(dirIt.filePath());
                            emit content("Movie",dirIt.fileName());
                            goto nextfile;
                        }

                    }//End of Movie without folder
                    //If Movie is inside a folder
                    else if(dirIt.fileInfo().isDir())
                    {
                        //Checking files inside folder
                        QDirIterator dirIt2(dirIt.filePath(),QDirIterator::Subdirectories);
                        while(dirIt2.hasNext())
                        {
                            if(mStop==true){emit cancel();qDebug()<<"Cancled!!!";return;}
                            dirIt2.next();
                            if(dirIt2.fileInfo().isFile() && dirIt2.fileInfo().size()>467001600 && (dirIt2.fileInfo().suffix()=="mkv" || dirIt2.fileInfo().suffix()=="mp4" || dirIt2.fileInfo().suffix()=="avi"))
                            {
                                if(!TVorNot(dirIt.fileName()))
                                {
                                    qDebug()<<"Movie"<<dirIt.filePath()<<endl;
                                    MoviePathList.append(dirIt.filePath());
                                    emit content("Movie",dirIt.fileName());
                                    goto nextfile;
                                }
                            }
                        }//End of Checking files inside folder
                    }
                 }//End of Movie Search
                //qDebug()<<"String Loop"<<endl;
            }//end of for loop(String analyze)
        }//End of if for '.' and '..' dir
        nextfile:;
    }//End of DirIterator

    int TVMatchedNo;
    int MoviesNo;
    int TotalMedia;
    int MovedMedia=0;

    /*if(!CreateFolder)
    {
         //TVMatchedNo=MatchedTV(TVPathList,TVLoc);
         TVMatchedNo=TVPathList.size();
    }
    else
    {
        TVMatchedNo=TVPathList.size();
    }*/

    TVMatchedNo=TVPathList.size();
    MoviesNo=MoviePathList.size();
    TotalMedia=TVMatchedNo+MoviesNo;

    emit AnalyzingContentDone(TVMatchedNo,MoviesNo);//Analyzing of Files Done

    qDebug()<<"Analyzing of Files Done";
    //
/////////////////////////2nd Part Moving the Files////////////////////////////////




    qDebug()<<"TV Show To Move "<<TVMatchedNo<<endl;
    qDebug()<<"Movies to Move "<<MoviesNo<<endl;
    qDebug()<<"Total to Move "<<TotalMedia<<endl;
    bool LogStatus=false,AlreadyExist=false;
    //Moveing Media
    if(TotalMedia!=0)emit StartedToMove();
    if(TotalMedia==0)emit PercentageCompleted(100);
    int actualMoved=0;
    for(int i=0;i<TVPathList.size();i++)
    {
        QFileInfo fileinfo(TVPathList[i]);
        if(mStop==true){emit cancel();qDebug()<<"Cancled!!!";return;}
        movesucess=MoveTV(TVPathList[i],TVLoc,CreateFolder,LogStatus,AlreadyExist);
        emit MoveStatus(movesucess,fileinfo.fileName(),LogStatus,AlreadyExist);
        MovedMedia++;
        if(movesucess)
        {
            qDebug()<<"Move DONE!!"<<fileinfo.fileName()<<endl;
            actualMoved++;
        }
        if(TotalMedia!=0)emit PercentageCompleted((MovedMedia*100)/TotalMedia);
        else emit PercentageCompleted(100);

        qDebug()<<"Fucking "<<endl;
    }
    LogStatus=false;
    movesucess=false;
    for(int i=0;i<MoviePathList.size();i++)
    {
        QFileInfo fileinfo(MoviePathList[i]);
        if(mStop==true){emit cancel();qDebug()<<"Cancled!!!";return;}
        if(MovieLoc!=NULL)
            {movesucess=MoveMovie(MoviePathList[i],MovieLoc,AlreadyExist);}
        emit MoveStatus(movesucess,fileinfo.fileName(),LogStatus,AlreadyExist);
        MovedMedia++;
        if(movesucess)
        {
            qDebug()<<"MOVE DONE!!"<<fileinfo.fileName()<<endl;
            actualMoved++;
        }

       if(TotalMedia!=0)emit PercentageCompleted((MovedMedia*100)/TotalMedia);
       else emit PercentageCompleted(100);

    }
    if(actualMoved==0)emit NoMoved();
    emit Completed();

///////Last Part/////////////////////////
   /* if(mStop==true)
    {
        Canceled:
        ;

    }*/

}//End pf Fun








void ContentId::stop()
{
    mStop=true;
}

void ContentId::onMoved(QString filename)
{
    OnlyMovedFiles(filename);
}

