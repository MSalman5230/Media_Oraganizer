#ifndef CONTENTID_H
#define CONTENTID_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QDirIterator>
#include <QFileInfo>
#include <QFile>
#include <QList>



class ContentId : public QObject
{
    Q_OBJECT
public:
    explicit ContentId(QObject *parent = nullptr);
    ~ContentId();
    void Start(QString SourceLoc,QString TVLoc,QString MovieLoc,bool CreateFolder);

signals:
    void content(QString type,QString location);
    void cancel();
    void AnalyzingContentDone(int,int);
    void PercentageCompleted(int);
    void MoveStatus(bool,QString,bool,bool);
    void Completed();
    void StartedToMove();
    void NoMoved();


public slots:
    void stop();
    void onMoved(QString filename);

private:
    bool mStop;
};

#endif // CONTENTID_H
