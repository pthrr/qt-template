#pragma once

#include <QObject>

class MyBackend : public QObject
{
    Q_OBJECT
public:
    explicit MyBackend( QObject* parent = nullptr );

signals:
    void someSignal();

public slots:
    void doSomething();
};
