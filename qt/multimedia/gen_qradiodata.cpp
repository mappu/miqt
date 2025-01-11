#include <QChildEvent>
#include <QEvent>
#include <QMediaBindableInterface>
#include <QMediaObject>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRadioData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qradiodata.h>
#include "gen_qradiodata.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QRadioData_StationIdChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_ProgramTypeChanged(intptr_t, int);
void miqt_exec_callback_QRadioData_ProgramTypeNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_StationNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_RadioTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_AlternativeFrequenciesEnabledChanged(intptr_t, bool);
void miqt_exec_callback_QRadioData_ErrorWithError(intptr_t, int);
QMediaObject* miqt_exec_callback_QRadioData_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QRadioData_SetMediaObject(void*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QRadioData_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QRadioData_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRadioData_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRadioData_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRadioData_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioData_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRadioData_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRadioData : public virtual QRadioData {
public:

	MiqtVirtualQRadioData(QMediaObject* mediaObject): QRadioData(mediaObject) {};
	MiqtVirtualQRadioData(QMediaObject* mediaObject, QObject* parent): QRadioData(mediaObject, parent) {};

	virtual ~MiqtVirtualQRadioData() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QRadioData::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QRadioData_MediaObject(const_cast<MiqtVirtualQRadioData*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QRadioData::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* mediaObject) override {
		if (handle__SetMediaObject == 0) {
			return QRadioData::setMediaObject(mediaObject);
		}
		
		QMediaObject* sigval1 = mediaObject;

		bool callback_return_value = miqt_exec_callback_QRadioData_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* mediaObject) {

		return QRadioData::setMediaObject(mediaObject);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QRadioData::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRadioData_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QRadioData::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRadioData::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRadioData_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRadioData::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QRadioData::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QRadioData::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRadioData::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRadioData::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRadioData::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRadioData::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRadioData::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioData_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRadioData::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRadioData::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioData_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRadioData::disconnectNotify(*signal);

	}

};

QRadioData* QRadioData_new(QMediaObject* mediaObject) {
	return new MiqtVirtualQRadioData(mediaObject);
}

QRadioData* QRadioData_new2(QMediaObject* mediaObject, QObject* parent) {
	return new MiqtVirtualQRadioData(mediaObject, parent);
}

void QRadioData_virtbase(QRadioData* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QRadioData_MetaObject(const QRadioData* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioData_Metacast(QRadioData* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioData_Tr(const char* s) {
	QString _ret = QRadioData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf8(const char* s) {
	QString _ret = QRadioData::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_Availability(const QRadioData* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QMediaObject* QRadioData_MediaObject(const QRadioData* self) {
	return self->mediaObject();
}

struct miqt_string QRadioData_StationId(const QRadioData* self) {
	QString _ret = self->stationId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_ProgramType(const QRadioData* self) {
	QRadioData::ProgramType _ret = self->programType();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_ProgramTypeName(const QRadioData* self) {
	QString _ret = self->programTypeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_StationName(const QRadioData* self) {
	QString _ret = self->stationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_RadioText(const QRadioData* self) {
	QString _ret = self->radioText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioData_IsAlternativeFrequenciesEnabled(const QRadioData* self) {
	return self->isAlternativeFrequenciesEnabled();
}

int QRadioData_Error(const QRadioData* self) {
	QRadioData::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_ErrorString(const QRadioData* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioData_SetAlternativeFrequenciesEnabled(QRadioData* self, bool enabled) {
	self->setAlternativeFrequenciesEnabled(enabled);
}

void QRadioData_StationIdChanged(QRadioData* self, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationIdChanged(stationId_QString);
}

void QRadioData_connect_StationIdChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationIdChanged), self, [=](QString stationId) {
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval1 = stationId_ms;
		miqt_exec_callback_QRadioData_StationIdChanged(slot, sigval1);
	});
}

void QRadioData_ProgramTypeChanged(QRadioData* self, int programType) {
	self->programTypeChanged(static_cast<QRadioData::ProgramType>(programType));
}

void QRadioData_connect_ProgramTypeChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::ProgramType)>(&QRadioData::programTypeChanged), self, [=](QRadioData::ProgramType programType) {
		QRadioData::ProgramType programType_ret = programType;
		int sigval1 = static_cast<int>(programType_ret);
		miqt_exec_callback_QRadioData_ProgramTypeChanged(slot, sigval1);
	});
}

void QRadioData_ProgramTypeNameChanged(QRadioData* self, struct miqt_string programTypeName) {
	QString programTypeName_QString = QString::fromUtf8(programTypeName.data, programTypeName.len);
	self->programTypeNameChanged(programTypeName_QString);
}

void QRadioData_connect_ProgramTypeNameChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::programTypeNameChanged), self, [=](QString programTypeName) {
		QString programTypeName_ret = programTypeName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray programTypeName_b = programTypeName_ret.toUtf8();
		struct miqt_string programTypeName_ms;
		programTypeName_ms.len = programTypeName_b.length();
		programTypeName_ms.data = static_cast<char*>(malloc(programTypeName_ms.len));
		memcpy(programTypeName_ms.data, programTypeName_b.data(), programTypeName_ms.len);
		struct miqt_string sigval1 = programTypeName_ms;
		miqt_exec_callback_QRadioData_ProgramTypeNameChanged(slot, sigval1);
	});
}

void QRadioData_StationNameChanged(QRadioData* self, struct miqt_string stationName) {
	QString stationName_QString = QString::fromUtf8(stationName.data, stationName.len);
	self->stationNameChanged(stationName_QString);
}

void QRadioData_connect_StationNameChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationNameChanged), self, [=](QString stationName) {
		QString stationName_ret = stationName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationName_b = stationName_ret.toUtf8();
		struct miqt_string stationName_ms;
		stationName_ms.len = stationName_b.length();
		stationName_ms.data = static_cast<char*>(malloc(stationName_ms.len));
		memcpy(stationName_ms.data, stationName_b.data(), stationName_ms.len);
		struct miqt_string sigval1 = stationName_ms;
		miqt_exec_callback_QRadioData_StationNameChanged(slot, sigval1);
	});
}

void QRadioData_RadioTextChanged(QRadioData* self, struct miqt_string radioText) {
	QString radioText_QString = QString::fromUtf8(radioText.data, radioText.len);
	self->radioTextChanged(radioText_QString);
}

void QRadioData_connect_RadioTextChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::radioTextChanged), self, [=](QString radioText) {
		QString radioText_ret = radioText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray radioText_b = radioText_ret.toUtf8();
		struct miqt_string radioText_ms;
		radioText_ms.len = radioText_b.length();
		radioText_ms.data = static_cast<char*>(malloc(radioText_ms.len));
		memcpy(radioText_ms.data, radioText_b.data(), radioText_ms.len);
		struct miqt_string sigval1 = radioText_ms;
		miqt_exec_callback_QRadioData_RadioTextChanged(slot, sigval1);
	});
}

void QRadioData_AlternativeFrequenciesEnabledChanged(QRadioData* self, bool enabled) {
	self->alternativeFrequenciesEnabledChanged(enabled);
}

void QRadioData_connect_AlternativeFrequenciesEnabledChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(bool)>(&QRadioData::alternativeFrequenciesEnabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QRadioData_AlternativeFrequenciesEnabledChanged(slot, sigval1);
	});
}

void QRadioData_ErrorWithError(QRadioData* self, int error) {
	self->error(static_cast<QRadioData::Error>(error));
}

void QRadioData_connect_ErrorWithError(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::Error)>(&QRadioData::error), self, [=](QRadioData::Error error) {
		QRadioData::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QRadioData_ErrorWithError(slot, sigval1);
	});
}

struct miqt_string QRadioData_Tr2(const char* s, const char* c) {
	QString _ret = QRadioData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioData::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioData::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioData_override_virtual_MediaObject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__MediaObject = slot;
}

QMediaObject* QRadioData_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQRadioData*)(self) )->virtualbase_MediaObject();
}

void QRadioData_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__SetMediaObject = slot;
}

bool QRadioData_virtualbase_SetMediaObject(void* self, QMediaObject* mediaObject) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_SetMediaObject(mediaObject);
}

void QRadioData_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__Event = slot;
}

bool QRadioData_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_Event(event);
}

void QRadioData_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__EventFilter = slot;
}

bool QRadioData_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_EventFilter(watched, event);
}

void QRadioData_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__TimerEvent = slot;
}

void QRadioData_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_TimerEvent(event);
}

void QRadioData_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__ChildEvent = slot;
}

void QRadioData_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_ChildEvent(event);
}

void QRadioData_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__CustomEvent = slot;
}

void QRadioData_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_CustomEvent(event);
}

void QRadioData_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__ConnectNotify = slot;
}

void QRadioData_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_ConnectNotify(signal);
}

void QRadioData_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) )->handle__DisconnectNotify = slot;
}

void QRadioData_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QRadioData_Delete(QRadioData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQRadioData*>( self );
	} else {
		delete self;
	}
}

