#include <QRunnable>
#include <qrunnable.h>
#include "gen_qrunnable.h"
#include "_cgo_export.h"

void QRunnable_Run(QRunnable* self) {
	self->run();
}

bool QRunnable_AutoDelete(const QRunnable* self) {
	return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete) {
	self->setAutoDelete(autoDelete);
}

void QRunnable_Delete(QRunnable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRunnable*>( self );
	} else {
		delete self;
	}
}

