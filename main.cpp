#include <QtDeclarative/QDeclarativeView>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/qdeclarative.h>
#include <QtDeclarative/QDeclarativeEngine>
#include <QApplication>
#include "qmlapplicationviewer.h"
#include "androidmediaplayer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/QJavaMedia/main.qml"));
    viewer.showExpanded();

    SimpleAndroidMediaPlayer media;

    viewer.rootContext()->setContextProperty("media", &media);

    return app->exec();
}
