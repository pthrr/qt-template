#include "MyBackend.h"
#include <QDebug>

MyBackend::MyBackend( QObject* parent )
    : QObject( parent )
{
}

void MyBackend::doSomething()
{
    qDebug() << "Called from QML";
    emit someSignal();
}
