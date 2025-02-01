#include <QGenericPluginFactory>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgenericpluginfactory.h>
#include "gen_qgenericpluginfactory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of struct miqt_string */  QGenericPluginFactory_keys() {
	QStringList _ret = QGenericPluginFactory::keys();
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

QObject* QGenericPluginFactory_create(struct miqt_string param1, struct miqt_string param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return QGenericPluginFactory::create(param1_QString, param2_QString);
}

void QGenericPluginFactory_delete(QGenericPluginFactory* self) {
	delete self;
}

