#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include <qgesturerecognizer.h>
#include "gen_qgesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

QGesture* miqt_exec_callback_QGestureRecognizer_create(QGestureRecognizer*, intptr_t, QObject*);
int miqt_exec_callback_QGestureRecognizer_recognize(QGestureRecognizer*, intptr_t, QGesture*, QObject*, QEvent*);
void miqt_exec_callback_QGestureRecognizer_reset(QGestureRecognizer*, intptr_t, QGesture*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGestureRecognizer final : public QGestureRecognizer {
public:

	MiqtVirtualQGestureRecognizer(): QGestureRecognizer() {};

	virtual ~MiqtVirtualQGestureRecognizer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QGesture* create(QObject* target) override {
		if (handle__create == 0) {
			return QGestureRecognizer::create(target);
		}
		
		QObject* sigval1 = target;

		QGesture* callback_return_value = miqt_exec_callback_QGestureRecognizer_create(this, handle__create, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGesture* virtualbase_create(QObject* target) {

		return QGestureRecognizer::create(target);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__recognize = 0;

	// Subclass to allow providing a Go implementation
	virtual QGestureRecognizer::Result recognize(QGesture* state, QObject* watched, QEvent* event) override {
		if (handle__recognize == 0) {
			return QGestureRecognizer::Result(); // Pure virtual, there is no base we can call
		}
		
		QGesture* sigval1 = state;
		QObject* sigval2 = watched;
		QEvent* sigval3 = event;

		int callback_return_value = miqt_exec_callback_QGestureRecognizer_recognize(this, handle__recognize, sigval1, sigval2, sigval3);

		return static_cast<QGestureRecognizer::Result>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset(QGesture* state) override {
		if (handle__reset == 0) {
			QGestureRecognizer::reset(state);
			return;
		}
		
		QGesture* sigval1 = state;

		miqt_exec_callback_QGestureRecognizer_reset(this, handle__reset, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset(QGesture* state) {

		QGestureRecognizer::reset(state);

	}

};

QGestureRecognizer* QGestureRecognizer_new() {
	return new MiqtVirtualQGestureRecognizer();
}

QGesture* QGestureRecognizer_create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

int QGestureRecognizer_recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	QGestureRecognizer::Result _ret = self->recognize(state, watched, event);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

int QGestureRecognizer_registerRecognizer(QGestureRecognizer* recognizer) {
	Qt::GestureType _ret = QGestureRecognizer::registerRecognizer(recognizer);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_unregisterRecognizer(int type) {
	QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(type));
}

void QGestureRecognizer_operatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
	self->operator=(*param1);
}

bool QGestureRecognizer_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQGestureRecognizer* self_cast = dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

QGesture* QGestureRecognizer_virtualbase_create(void* self, QObject* target) {
	return ( (MiqtVirtualQGestureRecognizer*)(self) )->virtualbase_create(target);
}

bool QGestureRecognizer_override_virtual_recognize(void* self, intptr_t slot) {
	MiqtVirtualQGestureRecognizer* self_cast = dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__recognize = slot;
	return true;
}

bool QGestureRecognizer_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQGestureRecognizer* self_cast = dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QGestureRecognizer_virtualbase_reset(void* self, QGesture* state) {
	( (MiqtVirtualQGestureRecognizer*)(self) )->virtualbase_reset(state);
}

void QGestureRecognizer_delete(QGestureRecognizer* self) {
	delete self;
}

