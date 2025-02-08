#include <QAudioRecorder>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaBindableInterface>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiorecorder.h>
#include "gen_qaudiorecorder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioRecorder_audioInputChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAudioRecorder_availableAudioInputsChanged(intptr_t);
QMediaObject* miqt_exec_callback_QAudioRecorder_mediaObject(const QAudioRecorder*, intptr_t);
bool miqt_exec_callback_QAudioRecorder_setMediaObject(QAudioRecorder*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QAudioRecorder_event(QAudioRecorder*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioRecorder_eventFilter(QAudioRecorder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioRecorder_timerEvent(QAudioRecorder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioRecorder_childEvent(QAudioRecorder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioRecorder_customEvent(QAudioRecorder*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioRecorder_connectNotify(QAudioRecorder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioRecorder_disconnectNotify(QAudioRecorder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioRecorder final : public QAudioRecorder {
public:

	MiqtVirtualQAudioRecorder(): QAudioRecorder() {};
	MiqtVirtualQAudioRecorder(QObject* parent): QAudioRecorder(parent) {};

	virtual ~MiqtVirtualQAudioRecorder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__mediaObject == 0) {
			return QAudioRecorder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QAudioRecorder_mediaObject(this, handle__mediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_mediaObject() const {

		return QAudioRecorder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__setMediaObject == 0) {
			return QAudioRecorder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_setMediaObject(this, handle__setMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setMediaObject(QMediaObject* object) {

		return QAudioRecorder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioRecorder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioRecorder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioRecorder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioRecorder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioRecorder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioRecorder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioRecorder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioRecorder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioRecorder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioRecorder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioRecorder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRecorder_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioRecorder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioRecorder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRecorder_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioRecorder::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioRecorder* QAudioRecorder_new() {
	return new MiqtVirtualQAudioRecorder();
}

QAudioRecorder* QAudioRecorder_new2(QObject* parent) {
	return new MiqtVirtualQAudioRecorder(parent);
}

void QAudioRecorder_virtbase(QAudioRecorder* src, QMediaRecorder** outptr_QMediaRecorder) {
	*outptr_QMediaRecorder = static_cast<QMediaRecorder*>(src);
}

QMetaObject* QAudioRecorder_metaObject(const QAudioRecorder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioRecorder_metacast(QAudioRecorder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioRecorder_tr(const char* s) {
	QString _ret = QAudioRecorder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_trUtf8(const char* s) {
	QString _ret = QAudioRecorder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioRecorder_audioInputs(const QAudioRecorder* self) {
	QStringList _ret = self->audioInputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAudioRecorder_defaultAudioInput(const QAudioRecorder* self) {
	QString _ret = self->defaultAudioInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_audioInputDescription(const QAudioRecorder* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->audioInputDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_audioInput(const QAudioRecorder* self) {
	QString _ret = self->audioInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioRecorder_setAudioInput(QAudioRecorder* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAudioInput(name_QString);
}

void QAudioRecorder_audioInputChanged(QAudioRecorder* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->audioInputChanged(name_QString);
}

void QAudioRecorder_connect_audioInputChanged(QAudioRecorder* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder::connect(self, static_cast<void (QAudioRecorder::*)(const QString&)>(&QAudioRecorder::audioInputChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QAudioRecorder_audioInputChanged(slot, sigval1);
	});
}

void QAudioRecorder_availableAudioInputsChanged(QAudioRecorder* self) {
	self->availableAudioInputsChanged();
}

void QAudioRecorder_connect_availableAudioInputsChanged(QAudioRecorder* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder::connect(self, static_cast<void (QAudioRecorder::*)()>(&QAudioRecorder::availableAudioInputsChanged), self, [=]() {
		miqt_exec_callback_QAudioRecorder_availableAudioInputsChanged(slot);
	});
}

struct miqt_string QAudioRecorder_tr2(const char* s, const char* c) {
	QString _ret = QAudioRecorder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioRecorder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioRecorder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioRecorder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioRecorder_override_virtual_mediaObject(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mediaObject = slot;
	return true;
}

QMediaObject* QAudioRecorder_virtualbase_mediaObject(const void* self) {
	return ( (const MiqtVirtualQAudioRecorder*)(self) )->virtualbase_mediaObject();
}

bool QAudioRecorder_override_virtual_setMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMediaObject = slot;
	return true;
}

bool QAudioRecorder_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_setMediaObject(object);
}

bool QAudioRecorder_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioRecorder_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_event(event);
}

bool QAudioRecorder_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioRecorder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioRecorder_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioRecorder_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_childEvent(event);
}

bool QAudioRecorder_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_customEvent(event);
}

bool QAudioRecorder_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioRecorder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioRecorder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioRecorder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioRecorder_delete(QAudioRecorder* self) {
	delete self;
}

