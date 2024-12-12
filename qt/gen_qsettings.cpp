#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#include <QTimerEvent>
#include <QVariant>
#include <qsettings.h>
#include "gen_qsettings.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQSettings : public virtual QSettings {
public:

	MiqtVirtualQSettings(const QString& organization): QSettings(organization) {};
	MiqtVirtualQSettings(QSettings::Scope scope, const QString& organization): QSettings(scope, organization) {};
	MiqtVirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization): QSettings(format, scope, organization) {};
	MiqtVirtualQSettings(const QString& fileName, QSettings::Format format): QSettings(fileName, format) {};
	MiqtVirtualQSettings(): QSettings() {};
	MiqtVirtualQSettings(QSettings::Scope scope): QSettings(scope) {};
	MiqtVirtualQSettings(const QString& organization, const QString& application): QSettings(organization, application) {};
	MiqtVirtualQSettings(const QString& organization, const QString& application, QObject* parent): QSettings(organization, application, parent) {};
	MiqtVirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application): QSettings(scope, organization, application) {};
	MiqtVirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent): QSettings(scope, organization, application, parent) {};
	MiqtVirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application): QSettings(format, scope, organization, application) {};
	MiqtVirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent): QSettings(format, scope, organization, application, parent) {};
	MiqtVirtualQSettings(const QString& fileName, QSettings::Format format, QObject* parent): QSettings(fileName, format, parent) {};
	MiqtVirtualQSettings(QObject* parent): QSettings(parent) {};
	MiqtVirtualQSettings(QSettings::Scope scope, QObject* parent): QSettings(scope, parent) {};

	virtual ~MiqtVirtualQSettings() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSettings::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSettings_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSettings::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSettings::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSettings_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSettings::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSettings::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSettings_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSettings::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSettings::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSettings_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSettings::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSettings::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSettings_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSettings::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSettings::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSettings_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSettings::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSettings::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSettings_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSettings::disconnectNotify(*signal);

	}

};

QSettings* QSettings_new(struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new MiqtVirtualQSettings(organization_QString);
}

QSettings* QSettings_new2(int scope, struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new3(int format, int scope, struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new4(struct miqt_string fileName, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format));
}

QSettings* QSettings_new5() {
	return new MiqtVirtualQSettings();
}

QSettings* QSettings_new6(int scope) {
	return new MiqtVirtualQSettings(static_cast<QSettings::Scope>(scope));
}

QSettings* QSettings_new7(struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(organization_QString, application_QString);
}

QSettings* QSettings_new8(struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(organization_QString, application_QString, parent);
}

QSettings* QSettings_new9(int scope, struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new10(int scope, struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new11(int format, int scope, struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new12(int format, int scope, struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new MiqtVirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new13(struct miqt_string fileName, int format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format), parent);
}

QSettings* QSettings_new14(QObject* parent) {
	return new MiqtVirtualQSettings(parent);
}

QSettings* QSettings_new15(int scope, QObject* parent) {
	return new MiqtVirtualQSettings(static_cast<QSettings::Scope>(scope), parent);
}

void QSettings_virtbase(QSettings* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSettings_MetaObject(const QSettings* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSettings_Metacast(QSettings* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSettings_Tr(const char* s) {
	QString _ret = QSettings::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_TrUtf8(const char* s) {
	QString _ret = QSettings::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_Clear(QSettings* self) {
	self->clear();
}

void QSettings_Sync(QSettings* self) {
	self->sync();
}

int QSettings_Status(const QSettings* self) {
	QSettings::Status _ret = self->status();
	return static_cast<int>(_ret);
}

bool QSettings_IsAtomicSyncRequired(const QSettings* self) {
	return self->isAtomicSyncRequired();
}

void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable) {
	self->setAtomicSyncRequired(enable);
}

void QSettings_BeginGroup(QSettings* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->beginGroup(prefix_QString);
}

void QSettings_EndGroup(QSettings* self) {
	self->endGroup();
}

struct miqt_string QSettings_Group(const QSettings* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSettings_BeginReadArray(QSettings* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->beginReadArray(prefix_QString);
}

void QSettings_BeginWriteArray(QSettings* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->beginWriteArray(prefix_QString);
}

void QSettings_EndArray(QSettings* self) {
	self->endArray();
}

void QSettings_SetArrayIndex(QSettings* self, int i) {
	self->setArrayIndex(static_cast<int>(i));
}

struct miqt_array /* of struct miqt_string */  QSettings_AllKeys(const QSettings* self) {
	QStringList _ret = self->allKeys();
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

struct miqt_array /* of struct miqt_string */  QSettings_ChildKeys(const QSettings* self) {
	QStringList _ret = self->childKeys();
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

struct miqt_array /* of struct miqt_string */  QSettings_ChildGroups(const QSettings* self) {
	QStringList _ret = self->childGroups();
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

bool QSettings_IsWritable(const QSettings* self) {
	return self->isWritable();
}

void QSettings_SetValue(QSettings* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setValue(key_QString, *value);
}

QVariant* QSettings_Value(const QSettings* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->value(key_QString));
}

void QSettings_Remove(QSettings* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

bool QSettings_Contains(const QSettings* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

void QSettings_SetFallbacksEnabled(QSettings* self, bool b) {
	self->setFallbacksEnabled(b);
}

bool QSettings_FallbacksEnabled(const QSettings* self) {
	return self->fallbacksEnabled();
}

struct miqt_string QSettings_FileName(const QSettings* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSettings_Format(const QSettings* self) {
	QSettings::Format _ret = self->format();
	return static_cast<int>(_ret);
}

int QSettings_Scope(const QSettings* self) {
	QSettings::Scope _ret = self->scope();
	return static_cast<int>(_ret);
}

struct miqt_string QSettings_OrganizationName(const QSettings* self) {
	QString _ret = self->organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_ApplicationName(const QSettings* self) {
	QString _ret = self->applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_SetIniCodec(QSettings* self, QTextCodec* codec) {
	self->setIniCodec(codec);
}

void QSettings_SetIniCodecWithCodecName(QSettings* self, const char* codecName) {
	self->setIniCodec(codecName);
}

QTextCodec* QSettings_IniCodec(const QSettings* self) {
	return self->iniCodec();
}

void QSettings_SetDefaultFormat(int format) {
	QSettings::setDefaultFormat(static_cast<QSettings::Format>(format));
}

int QSettings_DefaultFormat() {
	QSettings::Format _ret = QSettings::defaultFormat();
	return static_cast<int>(_ret);
}

void QSettings_SetSystemIniPath(struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QSettings::setSystemIniPath(dir_QString);
}

void QSettings_SetUserIniPath(struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QSettings::setUserIniPath(dir_QString);
}

void QSettings_SetPath(int format, int scope, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QSettings::setPath(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), path_QString);
}

struct miqt_string QSettings_Tr2(const char* s, const char* c) {
	QString _ret = QSettings::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSettings::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_TrUtf82(const char* s, const char* c) {
	QString _ret = QSettings::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSettings::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_BeginWriteArray2(QSettings* self, struct miqt_string prefix, int size) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->beginWriteArray(prefix_QString, static_cast<int>(size));
}

QVariant* QSettings_Value2(const QSettings* self, struct miqt_string key, QVariant* defaultValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->value(key_QString, *defaultValue));
}

void QSettings_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__Event = slot;
}

bool QSettings_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSettings*)(self) )->virtualbase_Event(event);
}

void QSettings_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__EventFilter = slot;
}

bool QSettings_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSettings*)(self) )->virtualbase_EventFilter(watched, event);
}

void QSettings_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__TimerEvent = slot;
}

void QSettings_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_TimerEvent(event);
}

void QSettings_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__ChildEvent = slot;
}

void QSettings_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_ChildEvent(event);
}

void QSettings_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__CustomEvent = slot;
}

void QSettings_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_CustomEvent(event);
}

void QSettings_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__ConnectNotify = slot;
}

void QSettings_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_ConnectNotify(signal);
}

void QSettings_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) )->handle__DisconnectNotify = slot;
}

void QSettings_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSettings_Delete(QSettings* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSettings*>( self );
	} else {
		delete self;
	}
}

