#include <QChildEvent>
#include <QEvent>
#include <QMaskGenerator>
#include <QMetaMethod>
#include <QObject>
#include <QTimerEvent>
#include <qmaskgenerator.h>
#include "gen_qmaskgenerator.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QMaskGenerator_seed(QMaskGenerator*, intptr_t);
unsigned int miqt_exec_callback_QMaskGenerator_nextMask(QMaskGenerator*, intptr_t);
bool miqt_exec_callback_QMaskGenerator_event(QMaskGenerator*, intptr_t, QEvent*);
bool miqt_exec_callback_QMaskGenerator_eventFilter(QMaskGenerator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMaskGenerator_timerEvent(QMaskGenerator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMaskGenerator_childEvent(QMaskGenerator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMaskGenerator_customEvent(QMaskGenerator*, intptr_t, QEvent*);
void miqt_exec_callback_QMaskGenerator_connectNotify(QMaskGenerator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMaskGenerator_disconnectNotify(QMaskGenerator*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMaskGenerator final : public QMaskGenerator {
public:

	MiqtVirtualQMaskGenerator(): QMaskGenerator() {}
	MiqtVirtualQMaskGenerator(QObject* parent): QMaskGenerator(parent) {}

	virtual ~MiqtVirtualQMaskGenerator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seed = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seed() override {
		if (handle__seed == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QMaskGenerator_seed(this, handle__seed);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextMask = 0;

	// Subclass to allow providing a Go implementation
	virtual quint32 nextMask() override {
		if (handle__nextMask == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		unsigned int callback_return_value = miqt_exec_callback_QMaskGenerator_nextMask(this, handle__nextMask);
		return static_cast<quint32>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMaskGenerator::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMaskGenerator_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QMaskGenerator_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMaskGenerator::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMaskGenerator_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMaskGenerator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMaskGenerator::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QMaskGenerator_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMaskGenerator::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QMaskGenerator_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMaskGenerator::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QMaskGenerator_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMaskGenerator::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMaskGenerator_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QMaskGenerator_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMaskGenerator::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMaskGenerator_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QMaskGenerator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QMaskGenerator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMaskGenerator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMaskGenerator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMaskGenerator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMaskGenerator* QMaskGenerator_new() {
	return new (std::nothrow) MiqtVirtualQMaskGenerator();
}

QMaskGenerator* QMaskGenerator_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQMaskGenerator(parent);
}

void QMaskGenerator_virtbase(QMaskGenerator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

bool QMaskGenerator_seed(QMaskGenerator* self) {
	return self->seed();
}

unsigned int QMaskGenerator_nextMask(QMaskGenerator* self) {
	quint32 _ret = self->nextMask();
	return static_cast<unsigned int>(_ret);
}

bool QMaskGenerator_override_virtual_seed(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seed = slot;
	return true;
}

bool QMaskGenerator_override_virtual_nextMask(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextMask = slot;
	return true;
}

bool QMaskGenerator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QMaskGenerator_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::event(event);
}

bool QMaskGenerator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMaskGenerator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::eventFilter(watched, event);
}

bool QMaskGenerator_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QMaskGenerator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::timerEvent(event);
}

bool QMaskGenerator_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QMaskGenerator_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::childEvent(event);
}

bool QMaskGenerator_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QMaskGenerator_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::customEvent(event);
}

bool QMaskGenerator_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QMaskGenerator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::connectNotify(*signal);
}

bool QMaskGenerator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMaskGenerator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::disconnectNotify(*signal);
}

QObject* QMaskGenerator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMaskGenerator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMaskGenerator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMaskGenerator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMaskGenerator_delete(QMaskGenerator* self) {
	delete self;
}

