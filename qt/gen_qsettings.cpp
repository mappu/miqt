#include "gen_qsettings.h"
#include "qsettings.h"

#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QTextCodec>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSettings* QSettings_new(const char* organization, size_t organization_Strlen) {
	QString organization_QString = QString::fromUtf8(organization, organization_Strlen);
	return new QSettings(organization_QString);
}

QSettings* QSettings_new2() {
	return new QSettings();
}

QSettings* QSettings_new3(const char* organization, size_t organization_Strlen, const char* application, size_t application_Strlen) {
	QString organization_QString = QString::fromUtf8(organization, organization_Strlen);
	QString application_QString = QString::fromUtf8(application, application_Strlen);
	return new QSettings(organization_QString, application_QString);
}

QSettings* QSettings_new4(const char* organization, size_t organization_Strlen, const char* application, size_t application_Strlen, QObject* parent) {
	QString organization_QString = QString::fromUtf8(organization, organization_Strlen);
	QString application_QString = QString::fromUtf8(application, application_Strlen);
	return new QSettings(organization_QString, application_QString, parent);
}

QSettings* QSettings_new5(QObject* parent) {
	return new QSettings(parent);
}

QMetaObject* QSettings_MetaObject(QSettings* self) {
	return (QMetaObject*) self->metaObject();
}

void QSettings_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSettings::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSettings::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_Clear(QSettings* self) {
	self->clear();
}

void QSettings_Sync(QSettings* self) {
	self->sync();
}

bool QSettings_IsAtomicSyncRequired(QSettings* self) {
	return self->isAtomicSyncRequired();
}

void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable) {
	self->setAtomicSyncRequired(enable);
}

void QSettings_BeginGroup(QSettings* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->beginGroup(prefix_QString);
}

void QSettings_EndGroup(QSettings* self) {
	self->endGroup();
}

void QSettings_Group(QSettings* self, char** _out, int* _out_Strlen) {
	QString ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QSettings_BeginReadArray(QSettings* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return self->beginReadArray(prefix_QString);
}

void QSettings_BeginWriteArray(QSettings* self, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->beginWriteArray(prefix_QString);
}

void QSettings_EndArray(QSettings* self) {
	self->endArray();
}

void QSettings_SetArrayIndex(QSettings* self, int i) {
	self->setArrayIndex(static_cast<int>(i));
}

void QSettings_AllKeys(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->allKeys();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QSettings_ChildKeys(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->childKeys();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QSettings_ChildGroups(QSettings* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->childGroups();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

bool QSettings_IsWritable(QSettings* self) {
	return self->isWritable();
}

void QSettings_SetValue(QSettings* self, const char* key, size_t key_Strlen, QVariant* value) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->setValue(key_QString, *value);
}

QVariant* QSettings_Value(QSettings* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QVariant ret = self->value(key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QSettings_Remove(QSettings* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->remove(key_QString);
}

bool QSettings_Contains(QSettings* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->contains(key_QString);
}

void QSettings_SetFallbacksEnabled(QSettings* self, bool b) {
	self->setFallbacksEnabled(b);
}

bool QSettings_FallbacksEnabled(QSettings* self) {
	return self->fallbacksEnabled();
}

void QSettings_FileName(QSettings* self, char** _out, int* _out_Strlen) {
	QString ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_OrganizationName(QSettings* self, char** _out, int* _out_Strlen) {
	QString ret = self->organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_ApplicationName(QSettings* self, char** _out, int* _out_Strlen) {
	QString ret = self->applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_SetIniCodec(QSettings* self, QTextCodec* codec) {
	self->setIniCodec(codec);
}

void QSettings_SetIniCodecWithCodecName(QSettings* self, char* codecName) {
	self->setIniCodec(codecName);
}

QTextCodec* QSettings_IniCodec(QSettings* self) {
	return self->iniCodec();
}

void QSettings_SetSystemIniPath(const char* dir, size_t dir_Strlen) {
	QString dir_QString = QString::fromUtf8(dir, dir_Strlen);
	QSettings::setSystemIniPath(dir_QString);
}

void QSettings_SetUserIniPath(const char* dir, size_t dir_Strlen) {
	QString dir_QString = QString::fromUtf8(dir, dir_Strlen);
	QSettings::setUserIniPath(dir_QString);
}

void QSettings_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSettings::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSettings::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSettings::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSettings::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSettings_BeginWriteArray2(QSettings* self, const char* prefix, size_t prefix_Strlen, int size) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	self->beginWriteArray(prefix_QString, static_cast<int>(size));
}

QVariant* QSettings_Value2(QSettings* self, const char* key, size_t key_Strlen, QVariant* defaultValue) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QVariant ret = self->value(key_QString, *defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QSettings_Delete(QSettings* self) {
	delete self;
}

