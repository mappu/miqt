#include <QRunnable>
#include <qrunnable.h>
#include "gen_qrunnable.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QRunnable_Run(QRunnable*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRunnable final : public QRunnable {
public:

	MiqtVirtualQRunnable(): QRunnable() {};

	virtual ~MiqtVirtualQRunnable() override = default;

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

bool QRunnable_override_virtual_Run(void* self, intptr_t slot) {
	MiqtVirtualQRunnable* self_cast = dynamic_cast<MiqtVirtualQRunnable*>( (QRunnable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Run = slot;
	return true;
}

void QRunnable_Delete(QRunnable* self) {
	delete self;
}

