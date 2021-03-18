#ifndef FUNTIONS_H
#define FUNTIONS_H
#include <QObject>
#include <QDebug>
#include <QThread>
#include <QDirIterator>
#include <QFileInfo>
#include <QDir>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

bool MoveTV(QString filepath,QString TVLoc,bool CreateFolder,bool &LogStatus,bool &AlreadyExist);
void GetShowInfo(QString filename,QString &ShowName,QString &Season,QString &Episode,QString &FinalFileName,QFileInfo fileinfo);
void GetShowName(QString filename,QString &ShowName);
void GetPaths(QString filepath,QString &SourcePath,QString &DestinationPath);
int MatchedTV(QString filepath,QString TVLoc);
void LogFile(QString);
bool MoveMovie(QString filepath, QString MovieLoc, bool &AlreadyExist);
void GetMovieInfo(QFileInfo fileinfo,QString &MovieName,QString &Year);
bool MovePath(QString src, QString dst);
bool TVorNot(QString filename);
void OnlyMovedFiles(QString filename);
void DeleteUtorrentDatFile(QString Loc);





bool MoveTV(QString filepath,QString TVLoc,bool CreateFolder,bool &LogStatus,bool &AlreadyExist)
{
    QString ShowName,Season,Episode,FinalFileName,DestinationPath,SourcePath;
    QFileInfo fileinfo(filepath);
    GetShowInfo(fileinfo.fileName(),ShowName,Season,Episode,FinalFileName,fileinfo);
    qDebug()<<ShowName<<" "<<Season<<" "<<Episode<<" "<<FinalFileName;
    /////Getting File loc for folder tv show///
   if(fileinfo.isDir())
    {
        QDirIterator dirIt(filepath);
        while(dirIt.hasNext())
        {
            dirIt.next();
            if(dirIt.fileInfo().isFile() && !dirIt.fileName().contains("sample",Qt::CaseInsensitive)&&(dirIt.fileInfo().suffix()=="mp4" ||dirIt.fileInfo().suffix()=="mkv" || dirIt.fileInfo().suffix()=="avi") )
            {
                SourcePath=dirIt.filePath();
            }

        }

    }
    else
    {
        SourcePath=filepath;
    }
    if(fileinfo.isDir())DestinationPath=TVLoc+ "/" + ShowName +"/Season " + Season +"/"+FinalFileName+SourcePath.right(4);
    else DestinationPath=TVLoc+ "/" + ShowName +"/Season " + Season +"/"+FinalFileName;

    qDebug()<<SourcePath<<DestinationPath;
    ////////////////Which One To Move///////////////
    //////////////////Creating Folder And Moving/////////////////////////////
    bool MoveSucess=false;
    LogStatus=false;
    AlreadyExist=false;
    if(CreateFolder==false)
    {
        QDirIterator dirIt(TVLoc);
        while(dirIt.hasNext())
        {
            dirIt.next();
            {
                if(dirIt.fileName()[0]!='.')
                {
                    if(dirIt.fileName().compare(ShowName,Qt::CaseInsensitive)==0 && dirIt.fileInfo().isDir())
                    {

                        QDir().mkdir(TVLoc+ "/" + ShowName +"/Season " + Season );
                        MoveSucess=QFile::rename(SourcePath, DestinationPath);
                        LogStatus=false;
                        qDebug()<<"Moving : "<<dirIt.fileName()<<endl;
                        break;

                    }
                    else
                    {
                        if(!dirIt.hasNext())
                        {
                            LogFile("No Folder Found [Destination]: "+ FinalFileName);
                            LogStatus=true;
                        }

                    }
                }

            }
        }
    }

    else if(CreateFolder==true)
    {
        QDir().mkpath(TVLoc+ "/" + ShowName +"/Season " + Season );
        MoveSucess=QFile::rename(SourcePath, DestinationPath);
        qDebug()<<"Moving : "<<ShowName<<endl;
    }
    if(MoveSucess)
    {
        //QDir().removeRecursively(filepath);
        QDir(filepath).removeRecursively();
    }
    /*else
    {
        if(!LogStatus)LogFile("Error Moving File:"+ FinalFileName);

    }*/

    //////////////////////End of Creating folder and Moving/////////////////
    if(!MoveSucess)
    {
        if(QDir().exists(DestinationPath))
        {
            LogFile("File Already exists: "+ FinalFileName);
            AlreadyExist=true;
        }
        else if(!LogStatus)
        {
           LogFile("Error Moving: "+ FinalFileName);
           AlreadyExist=false;
        }
    }
   // QDir().e
    return MoveSucess;




}

/////////////////Small Funtions/////////////////

//GetShowInfo Fun//
void GetShowInfo(QString filename,QString &ShowName,QString &Season,QString &Episode,QString &FinalFileName,QFileInfo fileinfo)
{
    if(filename.contains("[ www.torrenting.com ] - "))filename.replace(QString("[ www.torrenting.com ] - "),QString(""));
    else if(filename.contains("From [ WWW.TORRENTING.COM ] - "))filename.replace(QString("From [ WWW.TORRENTING.COM ] - "),QString(""));
    else if(filename.contains("www.Torrenting.com - "))filename.replace(QString("www.Torrenting.com - "),QString(""));
    else if(filename.contains("www.torrenting.com - "))filename.replace(QString("www.torrenting.com - "),QString(""));
    else if(filename.contains("www.SceneTime.com - "))filename.replace(QString("www.SceneTime.com - "),QString(""));

    filename[0]=filename[0].toUpper();

    for(int i=0;i<filename.length()-1;i++)
    {
        if(  (filename[i]=='S'||filename[i]=='s') && filename[i+1].isDigit() && filename[i+2].isDigit() && (filename[i+3]=='E'||filename[i+3]=='e') && filename[i+4].isDigit() && filename[i+5].isDigit() )
        {
            //Name
            for(int j=0;j<i-1;j++)
            {
                ShowName=ShowName+filename[j];

            }
            for(int j=0;j<i;j++)
            {
                if(ShowName[j]=='.')
                {
                    ShowName[j]=' ';
                    ShowName[j+1]=ShowName[j+1].toUpper();

                }


            }

            //Season
            if(filename[i+1]=='0')
            {
                Season=filename[i+2];
            }
            else
            {
                Season=filename[i+1];
                Season=Season  + filename[i+2];
            }

            //Episode
            if(filename[i+4]=='0')
            {
                Episode=filename[i+5];
            }
            else
            {
                Episode=filename[i+4];
                Episode=Episode+filename[i+5];
            }
            //FinalFileName//
            FinalFileName=filename;
            for(int j=0;j<i;j++)
            {
                if(FinalFileName[j]=='.')
                {
                    FinalFileName[j+1]=FinalFileName[j+1].toUpper();
                }
            }
            if(fileinfo.isFile())
            for(int j=i;j<FinalFileName.length()-3;j++)
            {
                if(FinalFileName[j]=='x' && FinalFileName[j+1]=='2')continue;
               // FinalFileName[j]=FinalFileName[j].toUpper();
            }
            else
            {

                for(int j=i;j<FinalFileName.length()-1;j++)
                {
                    if(FinalFileName[j]=='x' && FinalFileName[j+1]=='2')continue;
                    //FinalFileName[j]=FinalFileName[j].toUpper();
                }
            }
            if(FinalFileName.contains("ETTV"))
                FinalFileName.replace(QString("[ETTV]"),QString("[ettv]"));

            else if(FinalFileName.contains("EZTV"))
                FinalFileName.replace(QString("[EZTV]"),QString("[eztv]"));

            break;
        }
    }
}
//SHow NAME ONLY

/*void GetShowName(QString filename,QString &ShowName)
{
    if(filename.contains("[ www.torrenting.com ] - "))filename.replace(QString("[ www.torrenting.com ] - "),QString(""));
    if(filename.contains("'"))filename.replace(QString("'"),QString(""));
    filename[0]=filename[0].toUpper();

    for(int i=0;i<filename.length()-1;i++)
    {
        if(  (filename[i]=='S'||filename[i]=='s') && filename[i+1].isDigit() && filename[i+2].isDigit() && (filename[i+3]=='E'||filename[i+3]=='e') && filename[i+4].isDigit() && filename[i+5].isDigit() )
        {
            //Name
            for(int j=0;j<i-1;j++)
            {
                ShowName=ShowName+filename[j];

            }
            for(int j=0;j<i;j++)
            {
                if(ShowName[j]=='.')
                {
                    ShowName[j]=' ';
                    ShowName[j+1]=ShowName[j+1].toUpper();

                }


            }
        }
    }
}

//GetPaths//



//Match File Name

int MatchedTV(QList <QString> filepath,QString TVLoc)
{
    int counter=0;
    for(int i=0;i<filepath.size();i++)
    {
        QString ShowName;
        QFileInfo info(filepath[i]);
        GetShowName(info.fileName(),ShowName);
        QDirIterator dirIt(TVLoc);

        while(dirIt.hasNext())
        {
            dirIt.next();
            {
                if(dirIt.fileName().compare(ShowName,Qt::CaseInsensitive)==0)
                {
                    counter++;
                    goto next;
                }
            }
        }
        next:;
    }
    return counter;

}*/
//////////////////////Movies Fun//////////////////////////

bool MoveMovie(QString filepath,QString MovieLoc,bool &AlreadyExist)
{
    QString MovieName,Year,SourcePath,DestinationPath;
    QFileInfo fileinfo(filepath);
    GetMovieInfo(fileinfo,MovieName,Year);
    qDebug()<<"Movie Name "<<MovieName<<" Year "<<Year;
    SourcePath= filepath;
    ///Setting Destination Path
    if(Year.isEmpty())
    {
        if(fileinfo.isFile())
        {
            QDir().mkdir(MovieLoc+ "/" + MovieName  );
            DestinationPath=MovieLoc + "/" + MovieName + "/" + fileinfo.fileName();
        }
        else
        {
            DestinationPath=MovieLoc + "/" + MovieName;
        }
    }
    else
    {
        if(fileinfo.isFile())
        {
            QDir().mkdir(MovieLoc+ "/" + MovieName + " (" + Year + ")"  );
            DestinationPath=MovieLoc + "/" + MovieName + " (" + Year + ")" +  "/" + fileinfo.fileName();
        }
        else
        {
            DestinationPath=MovieLoc + "/" + MovieName+ " (" + Year + ")";
        }
    }

    bool MoveSucess=false;
    QDir dir;
    qDebug()<<"Moving : "<<MovieName<<endl;

    if(fileinfo.isFile()) MoveSucess=dir.rename(SourcePath,DestinationPath);

    else if(fileinfo.isDir())
    {
        if(!QDir().exists(DestinationPath))
        {
            MoveSucess=MovePath(SourcePath,DestinationPath);
        }
    }


   /* if(MoveSucess==false)
    {
        LogFile("Error Moving:"+ MovieName);
    }*/
    if(!MoveSucess)
    {
        if(QDir().exists(DestinationPath))
        {
            LogFile("File Already exists: "+ MovieName);
            AlreadyExist=true;
        }
        else
        {
            LogFile("Error Moving: "+ MovieName);
            AlreadyExist=false;


        }
    }
    else
    {
        if(QFileInfo(DestinationPath).isDir())DeleteUtorrentDatFile(DestinationPath);
    }
    return MoveSucess;



}


void GetMovieInfo(QFileInfo fileinfo,QString &MovieName,QString &Year)
{
    QString filename =  fileinfo.fileName();bool flag=false;
    for(int i=filename.length()-1;i>=0;i--)
    {
        if(filename[i].isDigit() && filename[i-1].isDigit() && filename[i-2].isDigit() && filename[i-3].isDigit() &&(filename[i+1]!='p' || filename[i+1]!='P') )
        {
            QString tempyear;
            tempyear.append(filename[i-3]); tempyear.append(filename[i-2]); tempyear.append(filename[i-1]); tempyear.append(filename[i]);
            qDebug()<<"In get Movie INfo"<<tempyear;
            if(tempyear.toInt()<2050 && tempyear.toInt()>1850)
            {
               // qDebug()<<"In get Movie INfo"<<tempyear;
                Year=tempyear;
                i=i-4;
                for(int j=0;j<i;j++)
                {   if(!(filename[j]==' '&& j==i-1))
                        MovieName.append(filename[j]);
                }
                for(int i=0;i<MovieName.length()-1;i++)
                {
                    if(MovieName[i]=='.')
                    {
                        MovieName[i]=' ';
                    }
                }

                flag=true;
                break;
            }

        }




    }
    if(!flag)
    {
        if(fileinfo.isFile())MovieName=fileinfo.fileName().remove(fileinfo.fileName().length()-4,4);
        else MovieName=fileinfo.fileName();

        Year="";
    }
}

///MOVE PATH
bool MovePath(QString src, QString dst)
{
    bool Sucess=false;
    QDir().mkpath(dst);
    QDirIterator DirIt(src,QDirIterator::Subdirectories),DirIt2(dst);
    while(DirIt.hasNext())
    {
        DirIt.next();
        {
            if(DirIt.fileName()[0]!='.')
            {
                QString s3=DirIt.filePath().replace(src,"");
                if(DirIt.fileInfo().isDir())
                {

                    QDir().mkpath(dst + "/" + s3 );
                }
                 if(DirIt.fileInfo().isFile())
                 {
                    if(QFile::rename(DirIt.filePath(),dst+s3))
                    {
                       // qDebug()<<"Moved: "<<DirIt.fileName();
                        Sucess=true;
                    }
                    else
                    {
                       // qDebug()<<"Failed: "<<DirIt.fileName();
                        Sucess=false;
                        break;
                    }
                 }
            }
        }
    }
    if(Sucess)QDir(src).removeRecursively();
     //qDebug()<<"MoveSuccesfull: "<<Sucess;
     return Sucess;

}
bool TVorNot(QString filename)
{
    int flag=0;
    for(int i=0;i<filename.length()-1;i++)
    {
        if(  (filename[i]=='S'||filename[i]=='s') && filename[i+1].isDigit() && filename[i+2].isDigit() && (filename[i+3]=='E'||filename[i+3]=='e') && filename[i+4].isDigit() && filename[i+5].isDigit() )
            flag=1;
    }
    if(flag==1)return true;
    else return false;
}

void LogFile(QString S)
{
    QFile logfile("Log.txt");
    logfile.open(QIODevice::Append | QIODevice::Text);
    QTextStream stream(&logfile);
    stream<<S<<endl;
}

void OnlyMovedFiles(QString filename)
{

    QFile Readfile("RecentlyMovedFiles.txt");
    Readfile.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream1(&Readfile);
   // while(!Readfile.)
    QString PreviousText = stream1.readAll();
    qDebug()<<"PreviousText "<<PreviousText;
    Readfile.close();

    QFile Writefile("RecentlyMovedFiles.txt");
    Writefile.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream stream2(&Writefile);
    stream2<<QDate::currentDate().toString("dd-MM-yyyy")<<" : "<<filename<<endl;
    stream2<<PreviousText;
    stream2.flush();
    Writefile.close();
}
void DeleteUtorrentDatFile(QString Loc)
{
    QDirIterator dirIt(Loc, QDir::AllEntries | QDir::NoSymLinks, QDirIterator::Subdirectories );
    while(dirIt.hasNext())
    {
        dirIt.next();
        if(dirIt.fileName().contains("uTorrentPartFile"))
        {
            QFile(dirIt.filePath()).remove();
        }
    }
}

#endif // FUNTIONS_H
