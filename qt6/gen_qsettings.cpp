#include <QAnyStringView>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsettings.h>
#include "gen_qsettings.h"
#include "_cgo_export.h"

QSettings* QSettings_new(struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new QSettings(organization_QString);
}

QSettings* QSettings_new2(int scope, struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new QSettings(static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new3(int format, int scope, struct miqt_string organization) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	return new QSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new4(struct miqt_string fileName, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QSettings(fileName_QString, static_cast<QSettings::Format>(format));
}

QSettings* QSettings_new5() {
	return new QSettings();
}

QSettings* QSettings_new6(int scope) {
	return new QSettings(static_cast<QSettings::Scope>(scope));
}

QSettings* QSettings_new7(struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(organization_QString, application_QString);
}

QSettings* QSettings_new8(struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(organization_QString, application_QString, parent);
}

QSettings* QSettings_new9(int scope, struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new10(int scope, struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new11(int format, int scope, struct miqt_string organization, struct miqt_string application) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new12(int format, int scope, struct miqt_string organization, struct miqt_string application, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization.data, organization.len);
	QString application_QString = QString::fromUtf8(application.data, application.len);
	return new QSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new13(struct miqt_string fileName, int format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QSettings(fileName_QString, static_cast<QSettings::Format>(format), parent);
}

QSettings* QSettings_new14(QObject* parent) {
	return new QSettings(parent);
}

QSettings* QSettings_new15(int scope, QObject* parent) {
	return new QSettings(static_cast<QSettings::Scope>(scope), parent);
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

void QSettings_BeginGroup(QSettings* self, QAnyStringView* prefix) {
	self->beginGroup(*prefix);
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

int QSettings_BeginReadArray(QSettings* self, QAnyStringView* prefix) {
	return self->beginReadArray(*prefix);
}

void QSettings_BeginWriteArray(QSettings* self, QAnyStringView* prefix) {
	self->beginWriteArray(*prefix);
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

void QSettings_SetValue(QSettings* self, QAnyStringView* key, QVariant* value) {
	self->setValue(*key, *value);
}

QVariant* QSettings_Value(const QSettings* self, QAnyStringView* key, QVariant* defaultValue) {
	return new QVariant(self->value(*key, *defaultValue));
}

QVariant* QSettings_ValueWithKey(const QSettings* self, QAnyStringView* key) {
	return new QVariant(self->value(*key));
}

void QSettings_Remove(QSettings* self, QAnyStringView* key) {
	self->remove(*key);
}

bool QSettings_Contains(const QSettings* self, QAnyStringView* key) {
	return self->contains(*key);
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

void QSettings_SetDefaultFormat(int format) {
	QSettings::setDefaultFormat(static_cast<QSettings::Format>(format));
}

int QSettings_DefaultFormat() {
	QSettings::Format _ret = QSettings::defaultFormat();
	return static_cast<int>(_ret);
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

void QSettings_BeginWriteArray2(QSettings* self, QAnyStringView* prefix, int size) {
	self->beginWriteArray(*prefix, static_cast<int>(size));
}

void QSettings_Delete(QSettings* self) {
	delete self;
}

