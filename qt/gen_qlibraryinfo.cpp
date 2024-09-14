#include <QDate>
#include <QLibraryInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include "qlibraryinfo.h"
#include "gen_qlibraryinfo.h"
#include "_cgo_export.h"

struct miqt_string* QLibraryInfo_Licensee() {
	QString _ret = QLibraryInfo::licensee();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLibraryInfo_LicensedProducts() {
	QString _ret = QLibraryInfo::licensedProducts();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDate* QLibraryInfo_BuildDate() {
	QDate _ret = QLibraryInfo::buildDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(_ret));
}

const char* QLibraryInfo_Build() {
	return (const char*) QLibraryInfo::build();
}

bool QLibraryInfo_IsDebugBuild() {
	return QLibraryInfo::isDebugBuild();
}

QVersionNumber* QLibraryInfo_Version() {
	QVersionNumber _ret = QLibraryInfo::version();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(_ret));
}

struct miqt_string* QLibraryInfo_Location(uintptr_t param1) {
	QString _ret = QLibraryInfo::location(static_cast<QLibraryInfo::LibraryLocation>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QLibraryInfo_PlatformPluginArguments(struct miqt_string* platformName) {
	QString platformName_QString = QString::fromUtf8(&platformName->data, platformName->len);
	QStringList _ret = QLibraryInfo::platformPluginArguments(platformName_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QLibraryInfo_Delete(QLibraryInfo* self) {
	delete self;
}

