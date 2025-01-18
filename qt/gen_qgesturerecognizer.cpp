#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include <qgesturerecognizer.h>
#include "gen_qgesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

QGesture* miqt_exec_callback_QGestureRecognizer_Create(void*, intptr_t, QObject*);
int miqt_exec_callback_QGestureRecognizer_Recognize(void*, intptr_t, QGesture*, QObject*, QEvent*);
void miqt_exec_callback_QGestureRecognizer_Reset(void*, intptr_t, QGesture*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGestureRecognizer final : public QGestureRecognizer {
public:

	MiqtVirtualQGestureRecognizer(): QGestureRecognizer() {};

	virtual ~MiqtVirtualQGestureRecognizer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QGesture* create(QObject* target) override {
		if (handle__Create == 0) {
			return QGestureRecognizer::create(target);
		}
		
		QObject* sigval1 = target;

		QGesture* callback_return_value = miqt_exec_callback_QGestureRecognizer_Create(this, handle__Create, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGesture* virtualbase_Create(QObject* target) {

		return QGestureRecognizer::create(target);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Recognize = 0;

	// Subclass to allow providing a Go implementation
	virtual QGestureRecognizer::Result recognize(QGesture* state, QObject* watched, QEvent* event) override {
		if (handle__Recognize == 0) {
			return QGestureRecognizer::Result(); // Pure virtual, there is no base we can call
		}
		
		QGesture* sigval1 = state;
		QObject* sigval2 = watched;
		QEvent* sigval3 = event;

		int callback_return_value = miqt_exec_callback_QGestureRecognizer_Recognize(this, handle__Recognize, sigval1, sigval2, sigval3);

		return static_cast<QGestureRecognizer::Result>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset(QGesture* state) override {
		if (handle__Reset == 0) {
			QGestureRecognizer::reset(state);
			return;
		}
		
		QGesture* sigval1 = state;

		miqt_exec_callback_QGestureRecognizer_Reset(this, handle__Reset, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset(QGesture* state) {

		QGestureRecognizer::reset(state);

	}

};

QGestureRecognizer* QGestureRecognizer_new() {
	return new MiqtVirtualQGestureRecognizer();
}

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	QGestureRecognizer::Result _ret = self->recognize(state, watched, event);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
	Qt::GestureType _ret = QGestureRecognizer::registerRecognizer(recognizer);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_UnregisterRecognizer(int typeVal) {
	QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
	self->operator=(*param1);
}

void QGestureRecognizer_override_virtual_Create(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) )->handle__Create = slot;
}

QGesture* QGestureRecognizer_virtualbase_Create(void* self, QObject* target) {
	return ( (MiqtVirtualQGestureRecognizer*)(self) )->virtualbase_Create(target);
}

void QGestureRecognizer_override_virtual_Recognize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) )->handle__Recognize = slot;
}

void QGestureRecognizer_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGestureRecognizer*>( (QGestureRecognizer*)(self) )->handle__Reset = slot;
}

void QGestureRecognizer_virtualbase_Reset(void* self, QGesture* state) {
	( (MiqtVirtualQGestureRecognizer*)(self) )->virtualbase_Reset(state);
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
	delete self;
}

