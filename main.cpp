#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include "handlers.h"
#include <QDebug>
//#include "main.moc"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<handlersCpp>("handlers.cpp", 1, 0, "HandlersCpp");

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Trivia_LP2", "Main");



    return app.exec();
}

