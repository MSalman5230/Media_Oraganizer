#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	QWidget::setWindowTitle ( "MediaOraganizer" );
    //QIcon icon(":/Icons/Icons/File-Media.png");
    //QWidget::setWindowIcon(icon);

    //connect(&iContentId,&ContentId::content,this,&MainWindow::GetContent );
    connect(this,&MainWindow::stop,&iContentId,&ContentId::stop);
    connect(&iContentId,&ContentId::AnalyzingContentDone,this,&MainWindow::OnAnalyzingContentDone );
    connect(&iContentId,&ContentId::cancel,this,&MainWindow::OnCancel );
    connect(&iContentId,&ContentId::MoveStatus,this,&MainWindow::onMoveStatus );
    connect(&iContentId,&ContentId::PercentageCompleted,this,&MainWindow::onPercentageCompleted );
    connect(&iContentId,&ContentId::Completed,this,&MainWindow::OnCompleted );
    connect(&iContentId,&ContentId::StartedToMove,this,&MainWindow::onStartedToMove );
    connect(&iContentId,&ContentId::NoMoved,this,&MainWindow::on_NoMoved);
    connect(this,&MainWindow::moved,&iContentId,&ContentId::onMoved);

    ui->stackedWidget->setCurrentIndex(0);
    ui->NxtBtn->setEnabled(false);

    QFile LocFile("Locations.txt");
    if(LocFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString s1=LocFile.readLine(),s2=LocFile.readLine(),s3=LocFile.readLine();
        s1.chop(1);s2.chop(1);s3.chop(1);
        ui->lineEdit->setText(s1);
        ui->lineEdit_2->setText(s2);
        ui->lineEdit_3->setText(s3);
        
    }
    //QTextStream stream(&logfile);


}

MainWindow::~MainWindow()
{
    emit stop();
    delete ui;
}

void MainWindow::GetContent(QString type,QString location)//Getting content while analyzing
{
    ui->textBrowser->append(type + " : "+ location + "\n");
}

void MainWindow::OnAnalyzingContentDone(int TVMatchedNo,int MoviesNo)//Displaying Number os Analzed Content
{
    ui->textBrowser->append("Content Anazying Done\nFound: \n\tTV Shows : " + QString::number(TVMatchedNo) + "\n\tMovies : " + QString::number(MoviesNo) + "\n" );
   //
}

void MainWindow::OnCancel()// Displaying Output on cancel
{
    ui->textBrowser->append("Task Canceled\n");
    //ui->stackedWidget->setCurrentIndex(0);
    ui->GoBtn1->setEnabled(true);
    ui->NxtBtn->setEnabled(true);

}

void MainWindow::onMoveStatus(bool MoveSucess, QString filename,bool LogStatus,bool AlreadyExist)//Loging all the file that are moving
{
    if(MoveSucess)
    {
        ui->textBrowser->append("Moved: " + filename + "\n");
        emit moved(filename);
    }
    else if(AlreadyExist)
    {
        ui->textBrowser->append("Failed[Already Exist] : " + filename + "\n");
    }
    else if(!MoveSucess && !AlreadyExist && !LogStatus)
    {
        ui->textBrowser->append("Error Moving : " + filename + "\n");
    }

    /*else
    {
        ui->textBrowser->append("Failed : " + filename + "\n");
    }*/
}

void MainWindow::onPercentageCompleted(int PercentageCompleted)//Changeing progressbar Value
{
    ui->progressBar->setValue(PercentageCompleted);
}

void MainWindow::OnCompleted()//On Completing the whole ContendiD Thread
{
    ui->textBrowser->append("Completed\n===================================================================\n");
    ui->GoBtn1->setEnabled(true);
    ui->NxtBtn->setEnabled(true);

}

void MainWindow::onStartedToMove()
{
    ui->textBrowser->append("Starting to Move Files\n");
}

void MainWindow::on_NoMoved()
{
    ui->textBrowser->append("No File were Moved\nCheck Log.txt\n");
}

void MainWindow::on_BrowseBtn1_clicked()//Browse Source Location
{

    ui->lineEdit->setText(QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                            "C:/",
                                                            QFileDialog::ShowDirsOnly
                                                            | QFileDialog::DontResolveSymlinks));
}

void MainWindow::on_BrowseBtn2_clicked()//Browse TV Shows Location
{
    ui->lineEdit_2->setText(QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                            "C:/",
                                                            QFileDialog::ShowDirsOnly
                                                            | QFileDialog::DontResolveSymlinks));
}

void MainWindow::on_BrowseBtn3_clicked()//Browse Movie Location
{
    ui->lineEdit_3->setText(QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                            "C:/",
                                                            QFileDialog::ShowDirsOnly
                                                            | QFileDialog::DontResolveSymlinks));
}

void MainWindow::on_GoBtn1_clicked()//Clicking Go buttion Starting ContentiD thread
{

         QFuture<void> test = QtConcurrent::run(&this->iContentId,&ContentId::Start,QString(ui->lineEdit->text()),QString(ui->lineEdit_2->text()) ,QString(ui->lineEdit_3->text()),bool(ui->radioButton->isChecked()));
         ui->GoBtn1->setEnabled(false);
         ui->NxtBtn->setEnabled(false);
         ui->stackedWidget->setCurrentIndex(1);
         QFile LocFile("Locations.txt");
         LocFile.open(QIODevice::WriteOnly | QIODevice::Text);
         QTextStream stream(&LocFile);
         stream<<ui->lineEdit->text()<<"\n";
         stream<<ui->lineEdit_2->text()<<"\n";
         stream<<ui->lineEdit_3->text()<<"\n";






       // ui->textBrowser->append("Already Running");



}

void MainWindow::on_StopBtn1_clicked()//Clicking Stop button
{
    ui->textBrowser->append("Stoping Please Wait\n");
    emit stop();

}


void MainWindow::on_NxtBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_ReturnBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->NxtBtn->setEnabled(false);
}
