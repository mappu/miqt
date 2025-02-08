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

void miqt_exec_callback_QRadioData_stationIdChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_programTypeChanged(intptr_t, int);
void miqt_exec_callback_QRadioData_programTypeNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_stationNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_radioTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioData_alternativeFrequenciesEnabledChanged(intptr_t, bool);
void miqt_exec_callback_QRadioData_errorWithError(intptr_t, int);
QMediaObject* miqt_exec_callback_QRadioData_mediaObject(const QRadioData*, intptr_t);
bool miqt_exec_callback_QRadioData_setMediaObject(QRadioData*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QRadioData_event(QRadioData*, intptr_t, QEvent*);
bool miqt_exec_callback_QRadioData_eventFilter(QRadioData*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRadioData_timerEvent(QRadioData*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRadioData_childEvent(QRadioData*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRadioData_customEvent(QRadioData*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioData_connectNotify(QRadioData*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRadioData_disconnectNotify(QRadioData*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRadioData final : public QRadioData {
public:

	MiqtVirtualQRadioData(QMediaObject* mediaObject): QRadioData(mediaObject) {};
	MiqtVirtualQRadioData(QMediaObject* mediaObject, QObject* parent): QRadioData(mediaObject, parent) {};

	virtual ~MiqtVirtualQRadioData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__mediaObject == 0) {
			return QRadioData::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QRadioData_mediaObject(this, handle__mediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_mediaObject() const {

		return QRadioData::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* mediaObject) override {
		if (handle__setMediaObject == 0) {
			return QRadioData::setMediaObject(mediaObject);
		}
		
		QMediaObject* sigval1 = mediaObject;

		bool callback_return_value = miqt_exec_callback_QRadioData_setMediaObject(this, handle__setMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setMediaObject(QMediaObject* mediaObject) {

		return QRadioData::setMediaObject(mediaObject);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QRadioData::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRadioData_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QRadioData::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRadioData::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRadioData_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRadioData::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRadioData::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QRadioData::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRadioData::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRadioData::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRadioData::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioData_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRadioData::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRadioData::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioData_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRadioData::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRadioData::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioData_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRadioData::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QRadioData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRadioData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRadioData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRadioData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QRadioData_metaObject(const QRadioData* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioData_metacast(QRadioData* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioData_tr(const char* s) {
	QString _ret = QRadioData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_trUtf8(const char* s) {
	QString _ret = QRadioData::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_availability(const QRadioData* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QMediaObject* QRadioData_mediaObject(const QRadioData* self) {
	return self->mediaObject();
}

struct miqt_string QRadioData_stationId(const QRadioData* self) {
	QString _ret = self->stationId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_programType(const QRadioData* self) {
	QRadioData::ProgramType _ret = self->programType();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_programTypeName(const QRadioData* self) {
	QString _ret = self->programTypeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_stationName(const QRadioData* self) {
	QString _ret = self->stationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_radioText(const QRadioData* self) {
	QString _ret = self->radioText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioData_isAlternativeFrequenciesEnabled(const QRadioData* self) {
	return self->isAlternativeFrequenciesEnabled();
}

int QRadioData_error(const QRadioData* self) {
	QRadioData::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_errorString(const QRadioData* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioData_setAlternativeFrequenciesEnabled(QRadioData* self, bool enabled) {
	self->setAlternativeFrequenciesEnabled(enabled);
}

void QRadioData_stationIdChanged(QRadioData* self, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationIdChanged(stationId_QString);
}

void QRadioData_connect_stationIdChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationIdChanged), self, [=](QString stationId) {
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval1 = stationId_ms;
		miqt_exec_callback_QRadioData_stationIdChanged(slot, sigval1);
	});
}

void QRadioData_programTypeChanged(QRadioData* self, int programType) {
	self->programTypeChanged(static_cast<QRadioData::ProgramType>(programType));
}

void QRadioData_connect_programTypeChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::ProgramType)>(&QRadioData::programTypeChanged), self, [=](QRadioData::ProgramType programType) {
		QRadioData::ProgramType programType_ret = programType;
		int sigval1 = static_cast<int>(programType_ret);
		miqt_exec_callback_QRadioData_programTypeChanged(slot, sigval1);
	});
}

void QRadioData_programTypeNameChanged(QRadioData* self, struct miqt_string programTypeName) {
	QString programTypeName_QString = QString::fromUtf8(programTypeName.data, programTypeName.len);
	self->programTypeNameChanged(programTypeName_QString);
}

void QRadioData_connect_programTypeNameChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::programTypeNameChanged), self, [=](QString programTypeName) {
		QString programTypeName_ret = programTypeName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray programTypeName_b = programTypeName_ret.toUtf8();
		struct miqt_string programTypeName_ms;
		programTypeName_ms.len = programTypeName_b.length();
		programTypeName_ms.data = static_cast<char*>(malloc(programTypeName_ms.len));
		memcpy(programTypeName_ms.data, programTypeName_b.data(), programTypeName_ms.len);
		struct miqt_string sigval1 = programTypeName_ms;
		miqt_exec_callback_QRadioData_programTypeNameChanged(slot, sigval1);
	});
}

void QRadioData_stationNameChanged(QRadioData* self, struct miqt_string stationName) {
	QString stationName_QString = QString::fromUtf8(stationName.data, stationName.len);
	self->stationNameChanged(stationName_QString);
}

void QRadioData_connect_stationNameChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationNameChanged), self, [=](QString stationName) {
		QString stationName_ret = stationName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationName_b = stationName_ret.toUtf8();
		struct miqt_string stationName_ms;
		stationName_ms.len = stationName_b.length();
		stationName_ms.data = static_cast<char*>(malloc(stationName_ms.len));
		memcpy(stationName_ms.data, stationName_b.data(), stationName_ms.len);
		struct miqt_string sigval1 = stationName_ms;
		miqt_exec_callback_QRadioData_stationNameChanged(slot, sigval1);
	});
}

void QRadioData_radioTextChanged(QRadioData* self, struct miqt_string radioText) {
	QString radioText_QString = QString::fromUtf8(radioText.data, radioText.len);
	self->radioTextChanged(radioText_QString);
}

void QRadioData_connect_radioTextChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::radioTextChanged), self, [=](QString radioText) {
		QString radioText_ret = radioText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray radioText_b = radioText_ret.toUtf8();
		struct miqt_string radioText_ms;
		radioText_ms.len = radioText_b.length();
		radioText_ms.data = static_cast<char*>(malloc(radioText_ms.len));
		memcpy(radioText_ms.data, radioText_b.data(), radioText_ms.len);
		struct miqt_string sigval1 = radioText_ms;
		miqt_exec_callback_QRadioData_radioTextChanged(slot, sigval1);
	});
}

void QRadioData_alternativeFrequenciesEnabledChanged(QRadioData* self, bool enabled) {
	self->alternativeFrequenciesEnabledChanged(enabled);
}

void QRadioData_connect_alternativeFrequenciesEnabledChanged(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(bool)>(&QRadioData::alternativeFrequenciesEnabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QRadioData_alternativeFrequenciesEnabledChanged(slot, sigval1);
	});
}

void QRadioData_errorWithError(QRadioData* self, int error) {
	self->error(static_cast<QRadioData::Error>(error));
}

void QRadioData_connect_errorWithError(QRadioData* self, intptr_t slot) {
	MiqtVirtualQRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::Error)>(&QRadioData::error), self, [=](QRadioData::Error error) {
		QRadioData::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QRadioData_errorWithError(slot, sigval1);
	});
}

struct miqt_string QRadioData_tr2(const char* s, const char* c) {
	QString _ret = QRadioData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_trUtf82(const char* s, const char* c) {
	QString _ret = QRadioData::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioData::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioData_override_virtual_mediaObject(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mediaObject = slot;
	return true;
}

QMediaObject* QRadioData_virtualbase_mediaObject(const void* self) {
	return ( (const MiqtVirtualQRadioData*)(self) )->virtualbase_mediaObject();
}

bool QRadioData_override_virtual_setMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMediaObject = slot;
	return true;
}

bool QRadioData_virtualbase_setMediaObject(void* self, QMediaObject* mediaObject) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_setMediaObject(mediaObject);
}

bool QRadioData_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRadioData_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_event(event);
}

bool QRadioData_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRadioData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRadioData*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRadioData_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRadioData_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_timerEvent(event);
}

bool QRadioData_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRadioData_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_childEvent(event);
}

bool QRadioData_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRadioData_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_customEvent(event);
}

bool QRadioData_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRadioData_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_connectNotify(signal);
}

bool QRadioData_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRadioData_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioData*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QRadioData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRadioData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRadioData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRadioData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRadioData* self_cast = dynamic_cast<MiqtVirtualQRadioData*>( (QRadioData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRadioData_delete(QRadioData* self) {
	delete self;
}

