#include <QAnyStringView>
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
#include <QTimerEvent>
#include <QVariant>
#include <qsettings.h>
#include "gen_qsettings.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QSettings_event(QSettings*, intptr_t, QEvent*);
bool miqt_exec_callback_QSettings_eventFilter(QSettings*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSettings_timerEvent(QSettings*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSettings_childEvent(QSettings*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSettings_customEvent(QSettings*, intptr_t, QEvent*);
void miqt_exec_callback_QSettings_connectNotify(QSettings*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSettings_disconnectNotify(QSettings*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSettings final : public QSettings {
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

	virtual ~MiqtVirtualQSettings() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSettings::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSettings_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSettings::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSettings::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSettings_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSettings::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSettings::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSettings_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSettings::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSettings::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSettings_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSettings::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSettings::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSettings_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSettings::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSettings::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSettings_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSettings::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSettings::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSettings_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSettings::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSettings_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSettings_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSettings_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSettings_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSettings_metaObject(const QSettings* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSettings_metacast(QSettings* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSettings_tr(const char* s) {
	QString _ret = QSettings::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_clear(QSettings* self) {
	self->clear();
}

void QSettings_sync(QSettings* self) {
	self->sync();
}

int QSettings_status(const QSettings* self) {
	QSettings::Status _ret = self->status();
	return static_cast<int>(_ret);
}

bool QSettings_isAtomicSyncRequired(const QSettings* self) {
	return self->isAtomicSyncRequired();
}

void QSettings_setAtomicSyncRequired(QSettings* self, bool enable) {
	self->setAtomicSyncRequired(enable);
}

void QSettings_beginGroup(QSettings* self, QAnyStringView* prefix) {
	self->beginGroup(*prefix);
}

void QSettings_endGroup(QSettings* self) {
	self->endGroup();
}

struct miqt_string QSettings_group(const QSettings* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSettings_beginReadArray(QSettings* self, QAnyStringView* prefix) {
	return self->beginReadArray(*prefix);
}

void QSettings_beginWriteArray(QSettings* self, QAnyStringView* prefix) {
	self->beginWriteArray(*prefix);
}

void QSettings_endArray(QSettings* self) {
	self->endArray();
}

void QSettings_setArrayIndex(QSettings* self, int i) {
	self->setArrayIndex(static_cast<int>(i));
}

struct miqt_array /* of struct miqt_string */  QSettings_allKeys(const QSettings* self) {
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

struct miqt_array /* of struct miqt_string */  QSettings_childKeys(const QSettings* self) {
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

struct miqt_array /* of struct miqt_string */  QSettings_childGroups(const QSettings* self) {
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

bool QSettings_isWritable(const QSettings* self) {
	return self->isWritable();
}

void QSettings_setValue(QSettings* self, QAnyStringView* key, QVariant* value) {
	self->setValue(*key, *value);
}

QVariant* QSettings_value(const QSettings* self, QAnyStringView* key, QVariant* defaultValue) {
	return new QVariant(self->value(*key, *defaultValue));
}

QVariant* QSettings_valueWithKey(const QSettings* self, QAnyStringView* key) {
	return new QVariant(self->value(*key));
}

void QSettings_remove(QSettings* self, QAnyStringView* key) {
	self->remove(*key);
}

bool QSettings_contains(const QSettings* self, QAnyStringView* key) {
	return self->contains(*key);
}

void QSettings_setFallbacksEnabled(QSettings* self, bool b) {
	self->setFallbacksEnabled(b);
}

bool QSettings_fallbacksEnabled(const QSettings* self) {
	return self->fallbacksEnabled();
}

struct miqt_string QSettings_fileName(const QSettings* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSettings_format(const QSettings* self) {
	QSettings::Format _ret = self->format();
	return static_cast<int>(_ret);
}

int QSettings_scope(const QSettings* self) {
	QSettings::Scope _ret = self->scope();
	return static_cast<int>(_ret);
}

struct miqt_string QSettings_organizationName(const QSettings* self) {
	QString _ret = self->organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_applicationName(const QSettings* self) {
	QString _ret = self->applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_setDefaultFormat(int format) {
	QSettings::setDefaultFormat(static_cast<QSettings::Format>(format));
}

int QSettings_defaultFormat() {
	QSettings::Format _ret = QSettings::defaultFormat();
	return static_cast<int>(_ret);
}

void QSettings_setPath(int format, int scope, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QSettings::setPath(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), path_QString);
}

struct miqt_string QSettings_tr2(const char* s, const char* c) {
	QString _ret = QSettings::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSettings_tr3(const char* s, const char* c, int n) {
	QString _ret = QSettings::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSettings_beginWriteArray2(QSettings* self, QAnyStringView* prefix, int size) {
	self->beginWriteArray(*prefix, static_cast<int>(size));
}

bool QSettings_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSettings_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSettings*)(self) )->virtualbase_event(event);
}

bool QSettings_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSettings_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSettings*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSettings_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSettings_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_timerEvent(event);
}

bool QSettings_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSettings_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_childEvent(event);
}

bool QSettings_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSettings_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_customEvent(event);
}

bool QSettings_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSettings_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_connectNotify(signal);
}

bool QSettings_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSettings_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSettings*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSettings_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSettings_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSettings_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSettings_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSettings* self_cast = dynamic_cast<MiqtVirtualQSettings*>( (QSettings*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSettings_delete(QSettings* self) {
	delete self;
}

