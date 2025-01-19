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

void miqt_exec_callback_QAudioRecorder_AudioInputChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAudioRecorder_AvailableAudioInputsChanged(intptr_t);
QMediaObject* miqt_exec_callback_QAudioRecorder_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QAudioRecorder_SetMediaObject(void*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QAudioRecorder_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioRecorder_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioRecorder_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioRecorder_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioRecorder_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioRecorder_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioRecorder_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioRecorder final : public QAudioRecorder {
public:

	MiqtVirtualQAudioRecorder(): QAudioRecorder() {};
	MiqtVirtualQAudioRecorder(QObject* parent): QAudioRecorder(parent) {};

	virtual ~MiqtVirtualQAudioRecorder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QAudioRecorder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QAudioRecorder_MediaObject(const_cast<MiqtVirtualQAudioRecorder*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QAudioRecorder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QAudioRecorder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QAudioRecorder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioRecorder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioRecorder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioRecorder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioRecorder_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioRecorder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioRecorder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioRecorder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioRecorder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioRecorder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioRecorder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioRecorder_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioRecorder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioRecorder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRecorder_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioRecorder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioRecorder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioRecorder_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioRecorder::disconnectNotify(*signal);

	}

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

QMetaObject* QAudioRecorder_MetaObject(const QAudioRecorder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioRecorder_Metacast(QAudioRecorder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioRecorder_Tr(const char* s) {
	QString _ret = QAudioRecorder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_TrUtf8(const char* s) {
	QString _ret = QAudioRecorder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioRecorder_AudioInputs(const QAudioRecorder* self) {
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

struct miqt_string QAudioRecorder_DefaultAudioInput(const QAudioRecorder* self) {
	QString _ret = self->defaultAudioInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_AudioInputDescription(const QAudioRecorder* self, struct miqt_string name) {
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

struct miqt_string QAudioRecorder_AudioInput(const QAudioRecorder* self) {
	QString _ret = self->audioInput();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioRecorder_SetAudioInput(QAudioRecorder* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAudioInput(name_QString);
}

void QAudioRecorder_AudioInputChanged(QAudioRecorder* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->audioInputChanged(name_QString);
}

void QAudioRecorder_connect_AudioInputChanged(QAudioRecorder* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder::connect(self, static_cast<void (QAudioRecorder::*)(const QString&)>(&QAudioRecorder::audioInputChanged), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QAudioRecorder_AudioInputChanged(slot, sigval1);
	});
}

void QAudioRecorder_AvailableAudioInputsChanged(QAudioRecorder* self) {
	self->availableAudioInputsChanged();
}

void QAudioRecorder_connect_AvailableAudioInputsChanged(QAudioRecorder* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder::connect(self, static_cast<void (QAudioRecorder::*)()>(&QAudioRecorder::availableAudioInputsChanged), self, [=]() {
		miqt_exec_callback_QAudioRecorder_AvailableAudioInputsChanged(slot);
	});
}

struct miqt_string QAudioRecorder_Tr2(const char* s, const char* c) {
	QString _ret = QAudioRecorder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioRecorder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioRecorder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioRecorder_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioRecorder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioRecorder_override_virtual_MediaObject(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MediaObject = slot;
	return true;
}

QMediaObject* QAudioRecorder_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQAudioRecorder*)(self) )->virtualbase_MediaObject();
}

bool QAudioRecorder_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMediaObject = slot;
	return true;
}

bool QAudioRecorder_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_SetMediaObject(object);
}

bool QAudioRecorder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAudioRecorder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_Event(event);
}

bool QAudioRecorder_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAudioRecorder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAudioRecorder_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_TimerEvent(event);
}

bool QAudioRecorder_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_ChildEvent(event);
}

bool QAudioRecorder_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAudioRecorder_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_CustomEvent(event);
}

bool QAudioRecorder_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAudioRecorder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAudioRecorder_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioRecorder* self_cast = dynamic_cast<MiqtVirtualQAudioRecorder*>( (QAudioRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAudioRecorder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioRecorder*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioRecorder_Delete(QAudioRecorder* self) {
	delete self;
}

