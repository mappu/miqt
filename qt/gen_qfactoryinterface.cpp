#include <QFactoryInterface>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfactoryinterface.h"
#include "gen_qfactoryinterface.h"
#include "_cgo_export.h"

struct miqt_array* QFactoryInterface_Keys(const QFactoryInterface* self) {
	QStringList _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
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

void QFactoryInterface_Delete(QFactoryInterface* self) {
	delete self;
}

