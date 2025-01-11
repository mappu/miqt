#include <QMetaObject>
#include <QCoreApplication>

#include "mainthread.h"

extern "C" {
    void mainthread_exec_handle(intptr_t);
}

void mainthread_exec(intptr_t cb) {
    QMetaObject::invokeMethod(qApp, [=]{
        mainthread_exec_handle(cb);
    }, Qt::QueuedConnection);
}
