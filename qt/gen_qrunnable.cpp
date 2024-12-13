#include <QRunnable>
#include <qrunnable.h>
#include "gen_qrunnable.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQRunnable : public virtual QRunnable {
public:

	MiqtVirtualQRunnable(): QRunnable() {};

	virtual ~MiqtVirtualQRunnable() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Run = 0;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (handle__Run == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QRunnable_Run(this, handle__Run);

		
	}

};

QRunnable* QRunnable_new() {
	return new MiqtVirtualQRunnable();
}

void QRunnable_Run(QRunnable* self) {
	self->run();
}

bool QRunnable_AutoDelete(const QRunnable* self) {
	return self->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool _autoDelete) {
	self->setAutoDelete(_autoDelete);
}

void QRunnable_OperatorAssign(QRunnable* self, QRunnable* param1) {
	self->operator=(*param1);
}

void QRunnable_override_virtual_Run(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRunnable*>( (QRunnable*)(self) )->handle__Run = slot;
}

void QRunnable_Delete(QRunnable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQRunnable*>( self );
	} else {
		delete self;
	}
}

