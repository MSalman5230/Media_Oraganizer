#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QtConcurrent>
#include <QFile>
#include <QTextStream>
#include "contentid.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void stop();
    void moved(QString filename);

public slots:
    void GetContent(QString type,QString location);
    void OnAnalyzingContentDone(int,int);
    void OnCancel();
    void onMoveStatus(bool,QString,bool,bool);
    void onPercentageCompleted(int PercentageCompleted);
    void OnCompleted();
    void onStartedToMove();
    void on_NoMoved();

private slots:
    void on_BrowseBtn1_clicked();

    void on_BrowseBtn2_clicked();

    void on_BrowseBtn3_clicked();

    void on_GoBtn1_clicked();

    void on_StopBtn1_clicked();

    void on_NxtBtn_clicked();

    void on_ReturnBtn_clicked();



private:
    Ui::MainWindow *ui;
    ContentId iContentId;




};

#endif // MAINWINDOW_H
