#include <QMetaObject>
#include <QCoreApplication>

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void mainthread_exec(intptr_t cb) {
    QMetaObject::invokeMethod(qApp, [=]{
        mainthread_exec_handle(cb);
    }, Qt::QueuedConnection);
}
