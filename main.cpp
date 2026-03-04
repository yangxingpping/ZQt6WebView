#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWebView>

#include "ZHttpServer.h"
#include <thread>

using std::thread;

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    auto httpV = []()
        {
            ZHttpServer server;
            server.Start();
        };
    thread th(httpV);
    th.detach();


    QtWebView::initialize();

    auto dir = QDir::currentPath();

    QString path = QCoreApplication::applicationDirPath()
        + "/../../html/home.html";

    QUrl url = QUrl::fromLocalFile(path);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("ZQt6WebView", "Main");
    //engine.load("file:///C:/Users/youngxp/Documents/occt/ZQt6WebView/webMain.qml");
    /*engine.rootContext()->setContextProperty("homeUrl", url.toString());
    engine.load(QUrl::fromLocalFile("../webMain.qml"));
    engine.rootContext()->setContextProperty("homeUrl", url.toString());*/

    return app.exec();
}
