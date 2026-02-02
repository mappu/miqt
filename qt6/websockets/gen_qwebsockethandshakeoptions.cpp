#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebSocketHandshakeOptions>
#include <qwebsockethandshakeoptions.h>
#include "gen_qwebsockethandshakeoptions.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new() {
	return new (std::nothrow) QWebSocketHandshakeOptions();
}

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new2(QWebSocketHandshakeOptions* other) {
	return new (std::nothrow) QWebSocketHandshakeOptions(*other);
}

void QWebSocketHandshakeOptions_operatorAssign(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other) {
	self->operator=(*other);
}

void QWebSocketHandshakeOptions_swap(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other) {
	self->swap(*other);
}

struct miqt_array /* of struct miqt_string */  QWebSocketHandshakeOptions_subprotocols(const QWebSocketHandshakeOptions* self) {
	QStringList _ret = self->subprotocols();
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

void QWebSocketHandshakeOptions_setSubprotocols(QWebSocketHandshakeOptions* self, struct miqt_array /* of struct miqt_string */  protocols) {
	QStringList protocols_QList;
	protocols_QList.reserve(protocols.len);
	struct miqt_string* protocols_arr = static_cast<struct miqt_string*>(protocols.data);
	for(size_t i = 0; i < protocols.len; ++i) {
		QString protocols_arr_i_QString = QString::fromUtf8(protocols_arr[i].data, protocols_arr[i].len);
		protocols_QList.push_back(protocols_arr_i_QString);
	}
	self->setSubprotocols(protocols_QList);
}

void QWebSocketHandshakeOptions_delete(QWebSocketHandshakeOptions* self) {
	delete self;
}

