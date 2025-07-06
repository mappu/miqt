#include <QDate>
#include <QLibraryInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qlibraryinfo.h>
#include "gen_qlibraryinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QLibraryInfo_licensee() {
	QString _ret = QLibraryInfo::licensee();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLibraryInfo_licensedProducts() {
	QString _ret = QLibraryInfo::licensedProducts();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QLibraryInfo_buildDate() {
	return new QDate(QLibraryInfo::buildDate());
}

const char* QLibraryInfo_build() {
	return (const char*) QLibraryInfo::build();
}

bool QLibraryInfo_isDebugBuild() {
	return QLibraryInfo::isDebugBuild();
}

QVersionNumber* QLibraryInfo_version() {
	return new QVersionNumber(QLibraryInfo::version());
}

struct miqt_string QLibraryInfo_location(int param1) {
	QString _ret = QLibraryInfo::location(static_cast<QLibraryInfo::LibraryLocation>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QLibraryInfo_platformPluginArguments(struct miqt_string platformName) {
	QString platformName_QString = QString::fromUtf8(platformName.data, platformName.len);
	QStringList _ret = QLibraryInfo::platformPluginArguments(platformName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
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
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QLibraryInfo_delete(QLibraryInfo* self) {
	delete self;
}

