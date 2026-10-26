#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwebkitglobal.h>
#include "gen_qwebkitglobal.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string miqt_QWebKitVersion2() {

	QString _ret = qWebKitVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int miqt_QWebKitMajorVersion2() {

	return qWebKitMajorVersion();
}

int miqt_QWebKitMinorVersion2() {

	return qWebKitMinorVersion();
}

