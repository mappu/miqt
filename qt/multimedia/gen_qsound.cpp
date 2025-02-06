#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsound.h>
#include "gen_qsound.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QSound_event(QSound*, intptr_t, QEvent*);
bool miqt_exec_callback_QSound_eventFilter(QSound*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSound_timerEvent(QSound*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSound_childEvent(QSound*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSound_customEvent(QSound*, intptr_t, QEvent*);
void miqt_exec_callback_QSound_connectNotify(QSound*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSound_disconnectNotify(QSound*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSound final : public QSound {
public:

	MiqtVirtualQSound(const QString& filename): QSound(filename) {};
	MiqtVirtualQSound(const QString& filename, QObject* parent): QSound(filename, parent) {};

	virtual ~MiqtVirtualQSound() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSound::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSound_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSound::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSound::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSound_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSound::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSound::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSound_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSound::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSound::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSound_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSound::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSound::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSound_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSound::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSound::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSound_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSound::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSound::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSound_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSound::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSound* QSound_new(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new MiqtVirtualQSound(filename_QString);
}

QSound* QSound_new2(struct miqt_string filename, QObject* parent) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new MiqtVirtualQSound(filename_QString, parent);
}

void QSound_virtbase(QSound* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSound_metaObject(const QSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSound_metacast(QSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSound_tr(const char* s) {
	QString _ret = QSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_trUtf8(const char* s) {
	QString _ret = QSound::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSound_play(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QSound::play(filename_QString);
}

int QSound_loops(const QSound* self) {
	return self->loops();
}

int QSound_loopsRemaining(const QSound* self) {
	return self->loopsRemaining();
}

void QSound_setLoops(QSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

struct miqt_string QSound_fileName(const QSound* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSound_isFinished(const QSound* self) {
	return self->isFinished();
}

void QSound_play2(QSound* self) {
	self->play();
}

void QSound_stop(QSound* self) {
	self->stop();
}

struct miqt_string QSound_tr2(const char* s, const char* c) {
	QString _ret = QSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_tr3(const char* s, const char* c, int n) {
	QString _ret = QSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_trUtf82(const char* s, const char* c) {
	QString _ret = QSound::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSound::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSound_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSound_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSound*)(self) )->virtualbase_event(event);
}

bool QSound_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSound*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSound_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSound_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSound*)(self) )->virtualbase_timerEvent(event);
}

bool QSound_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSound_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSound*)(self) )->virtualbase_childEvent(event);
}

bool QSound_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSound_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSound*)(self) )->virtualbase_customEvent(event);
}

bool QSound_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSound_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSound*)(self) )->virtualbase_connectNotify(signal);
}

bool QSound_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSound*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSound* self_cast = dynamic_cast<MiqtVirtualQSound*>( (QSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSound_delete(QSound* self) {
	delete self;
}

