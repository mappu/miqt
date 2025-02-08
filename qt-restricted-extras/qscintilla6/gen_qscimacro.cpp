#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscimacro.h>
#include "gen_qscimacro.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciMacro_play(QsciMacro*, intptr_t);
void miqt_exec_callback_QsciMacro_startRecording(QsciMacro*, intptr_t);
void miqt_exec_callback_QsciMacro_endRecording(QsciMacro*, intptr_t);
bool miqt_exec_callback_QsciMacro_event(QsciMacro*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciMacro_eventFilter(QsciMacro*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciMacro_timerEvent(QsciMacro*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciMacro_childEvent(QsciMacro*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciMacro_customEvent(QsciMacro*, intptr_t, QEvent*);
void miqt_exec_callback_QsciMacro_connectNotify(QsciMacro*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciMacro_disconnectNotify(QsciMacro*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciMacro final : public QsciMacro {
public:

	MiqtVirtualQsciMacro(QsciScintilla* parent): QsciMacro(parent) {};
	MiqtVirtualQsciMacro(const QString& asc, QsciScintilla* parent): QsciMacro(asc, parent) {};

	virtual ~MiqtVirtualQsciMacro() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__play = 0;

	// Subclass to allow providing a Go implementation
	virtual void play() override {
		if (handle__play == 0) {
			QsciMacro::play();
			return;
		}
		

		miqt_exec_callback_QsciMacro_play(this, handle__play);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_play() {

		QsciMacro::play();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startRecording = 0;

	// Subclass to allow providing a Go implementation
	virtual void startRecording() override {
		if (handle__startRecording == 0) {
			QsciMacro::startRecording();
			return;
		}
		

		miqt_exec_callback_QsciMacro_startRecording(this, handle__startRecording);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startRecording() {

		QsciMacro::startRecording();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__endRecording = 0;

	// Subclass to allow providing a Go implementation
	virtual void endRecording() override {
		if (handle__endRecording == 0) {
			QsciMacro::endRecording();
			return;
		}
		

		miqt_exec_callback_QsciMacro_endRecording(this, handle__endRecording);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_endRecording() {

		QsciMacro::endRecording();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciMacro::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciMacro_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QsciMacro::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciMacro::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciMacro_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QsciMacro::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciMacro::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciMacro_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QsciMacro::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciMacro::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciMacro_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QsciMacro::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciMacro::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciMacro_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QsciMacro::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciMacro::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciMacro_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QsciMacro::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciMacro::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciMacro_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QsciMacro::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QsciMacro_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciMacro_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciMacro_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciMacro_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciMacro* QsciMacro_new(QsciScintilla* parent) {
	return new MiqtVirtualQsciMacro(parent);
}

QsciMacro* QsciMacro_new2(struct miqt_string asc, QsciScintilla* parent) {
	QString asc_QString = QString::fromUtf8(asc.data, asc.len);
	return new MiqtVirtualQsciMacro(asc_QString, parent);
}

void QsciMacro_virtbase(QsciMacro* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QsciMacro_metaObject(const QsciMacro* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciMacro_metacast(QsciMacro* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciMacro_tr(const char* s) {
	QString _ret = QsciMacro::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciMacro_clear(QsciMacro* self) {
	self->clear();
}

bool QsciMacro_load(QsciMacro* self, struct miqt_string asc) {
	QString asc_QString = QString::fromUtf8(asc.data, asc.len);
	return self->load(asc_QString);
}

struct miqt_string QsciMacro_save(const QsciMacro* self) {
	QString _ret = self->save();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciMacro_play(QsciMacro* self) {
	self->play();
}

void QsciMacro_startRecording(QsciMacro* self) {
	self->startRecording();
}

void QsciMacro_endRecording(QsciMacro* self) {
	self->endRecording();
}

struct miqt_string QsciMacro_tr2(const char* s, const char* c) {
	QString _ret = QsciMacro::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciMacro_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciMacro::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciMacro_override_virtual_play(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__play = slot;
	return true;
}

void QsciMacro_virtualbase_play(void* self) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_play();
}

bool QsciMacro_override_virtual_startRecording(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startRecording = slot;
	return true;
}

void QsciMacro_virtualbase_startRecording(void* self) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_startRecording();
}

bool QsciMacro_override_virtual_endRecording(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__endRecording = slot;
	return true;
}

void QsciMacro_virtualbase_endRecording(void* self) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_endRecording();
}

bool QsciMacro_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciMacro_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciMacro*)(self) )->virtualbase_event(event);
}

bool QsciMacro_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciMacro_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciMacro*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QsciMacro_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciMacro_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_timerEvent(event);
}

bool QsciMacro_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciMacro_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_childEvent(event);
}

bool QsciMacro_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciMacro_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_customEvent(event);
}

bool QsciMacro_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciMacro_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_connectNotify(signal);
}

bool QsciMacro_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciMacro_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciMacro*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QsciMacro_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciMacro_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciMacro_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciMacro_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciMacro* self_cast = dynamic_cast<MiqtVirtualQsciMacro*>( (QsciMacro*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciMacro_delete(QsciMacro* self) {
	delete self;
}

