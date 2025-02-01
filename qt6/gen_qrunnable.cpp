#include <QRunnable>
#include <qrunnable.h>
#include "gen_qrunnable.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QRunnable_run(QRunnable*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRunnable final : public QRunnable {
public:

	MiqtVirtualQRunnable(): QRunnable() {};

	virtual ~MiqtVirtualQRunnable() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__run = 0;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (handle__run == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QRunnable_run(this, handle__run);

		
	}

};

QRunnable* QRunnable_new() {
	return new MiqtVirtualQRunnable();
}

void QRunnable_run(QRunnable* self) {
	self->run();
}

bool QRunnable_autoDelete(const QRunnable* self) {
	return self->autoDelete();
}

void QRunnable_setAutoDelete(QRunnable* self, bool autoDelete) {
	self->setAutoDelete(autoDelete);
}

bool QRunnable_override_virtual_run(void* self, intptr_t slot) {
	MiqtVirtualQRunnable* self_cast = dynamic_cast<MiqtVirtualQRunnable*>( (QRunnable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__run = slot;
	return true;
}

void QRunnable_delete(QRunnable* self) {
	delete self;
}

