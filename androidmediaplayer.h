#ifndef ANDROIDMEDIAPLAYER_H
#define ANDROIDMEDIAPLAYER_H
#include <QApplication>
#include <jni.h>

class SimpleAndroidMediaPlayer: public QObject
{
    Q_OBJECT

public:
    SimpleAndroidMediaPlayer();
    ~SimpleAndroidMediaPlayer();

public slots:
    Q_INVOKABLE bool playUrl(const QString &url);

private:
    jobject m_qtActivity;

};

#endif // ANDROIDMEDIAPLAYER_H
