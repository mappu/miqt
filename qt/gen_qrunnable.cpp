#include "gen_qrunnable.h"
#include "qrunnable.h"

#include <QRunnable>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QRunnable_Run(QRunnable* self) {
	self->run();
}

bool QRunnable_AutoDelete(QRunnable* self) {
	return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool _autoDelete) {
	self->setAutoDelete(_autoDelete);
}

void QRunnable_OperatorAssign(QRunnable* self, QRunnable* param1) {
	self->operator=(*param1);
}

void QRunnable_Delete(QRunnable* self) {
	delete self;
}

