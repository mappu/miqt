#include <QAuthenticator>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMaskGenerator>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWebSocket>
#include <QWebSocketHandshakeOptions>
#include <qwebsocket.h>
#include "gen_qwebsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebSocket_aboutToClose(intptr_t);
void miqt_exec_callback_QWebSocket_connected(intptr_t);
void miqt_exec_callback_QWebSocket_disconnected(intptr_t);
void miqt_exec_callback_QWebSocket_stateChanged(intptr_t, int);
void miqt_exec_callback_QWebSocket_proxyAuthenticationRequired(intptr_t, QNetworkProxy*, QAuthenticator*);
void miqt_exec_callback_QWebSocket_readChannelFinished(intptr_t);
void miqt_exec_callback_QWebSocket_textFrameReceived(intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QWebSocket_binaryFrameReceived(intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QWebSocket_textMessageReceived(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebSocket_binaryMessageReceived(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebSocket_errorWithError(intptr_t, int);
void miqt_exec_callback_QWebSocket_pong(intptr_t, unsigned long long, struct miqt_string);
void miqt_exec_callback_QWebSocket_bytesWritten(intptr_t, long long);
void miqt_exec_callback_QWebSocket_peerVerifyError(intptr_t, QSslError*);
void miqt_exec_callback_QWebSocket_sslErrors(intptr_t, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QWebSocket_preSharedKeyAuthenticationRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QWebSocket_alertSent(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QWebSocket_alertReceived(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QWebSocket_handshakeInterruptedOnError(intptr_t, QSslError*);
bool miqt_exec_callback_QWebSocket_event(QWebSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebSocket_eventFilter(QWebSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebSocket_timerEvent(QWebSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebSocket_childEvent(QWebSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebSocket_customEvent(QWebSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QWebSocket_connectNotify(QWebSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebSocket_disconnectNotify(QWebSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebSocket final : public QWebSocket {
public:

	MiqtVirtualQWebSocket(): QWebSocket() {}
	MiqtVirtualQWebSocket(const QString& origin): QWebSocket(origin) {}
	MiqtVirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version): QWebSocket(origin, version) {}
	MiqtVirtualQWebSocket(const QString& origin, QWebSocketProtocol::Version version, QObject* parent): QWebSocket(origin, version, parent) {}

	virtual ~MiqtVirtualQWebSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebSocket::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWebSocket_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QWebSocket_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebSocket::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWebSocket_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWebSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebSocket::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWebSocket_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QWebSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebSocket::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWebSocket_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QWebSocket_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebSocket::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebSocket_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QWebSocket_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebSocket::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebSocket_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QWebSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebSocket::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebSocket_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QWebSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QWebSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebSocket* QWebSocket_new() {
	return new (std::nothrow) MiqtVirtualQWebSocket();
}

QWebSocket* QWebSocket_new2(struct miqt_string origin) {
	QString origin_QString = QString::fromUtf8(origin.data, origin.len);
	return new (std::nothrow) MiqtVirtualQWebSocket(origin_QString);
}

QWebSocket* QWebSocket_new3(struct miqt_string origin, int version) {
	QString origin_QString = QString::fromUtf8(origin.data, origin.len);
	return new (std::nothrow) MiqtVirtualQWebSocket(origin_QString, static_cast<QWebSocketProtocol::Version>(version));
}

QWebSocket* QWebSocket_new4(struct miqt_string origin, int version, QObject* parent) {
	QString origin_QString = QString::fromUtf8(origin.data, origin.len);
	return new (std::nothrow) MiqtVirtualQWebSocket(origin_QString, static_cast<QWebSocketProtocol::Version>(version), parent);
}

void QWebSocket_virtbase(QWebSocket* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebSocket_metaObject(const QWebSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebSocket_metacast(QWebSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebSocket_tr(const char* s) {
	QString _ret = QWebSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSocket_abort(QWebSocket* self) {
	self->abort();
}

int QWebSocket_error(const QWebSocket* self) {
	QAbstractSocket::SocketError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QWebSocket_errorString(const QWebSocket* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebSocket_flush(QWebSocket* self) {
	return self->flush();
}

bool QWebSocket_isValid(const QWebSocket* self) {
	return self->isValid();
}

QHostAddress* QWebSocket_localAddress(const QWebSocket* self) {
	return new QHostAddress(self->localAddress());
}

unsigned short QWebSocket_localPort(const QWebSocket* self) {
	quint16 _ret = self->localPort();
	return static_cast<unsigned short>(_ret);
}

int QWebSocket_pauseMode(const QWebSocket* self) {
	QAbstractSocket::PauseModes _ret = self->pauseMode();
	return static_cast<int>(_ret);
}

QHostAddress* QWebSocket_peerAddress(const QWebSocket* self) {
	return new QHostAddress(self->peerAddress());
}

struct miqt_string QWebSocket_peerName(const QWebSocket* self) {
	QString _ret = self->peerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned short QWebSocket_peerPort(const QWebSocket* self) {
	quint16 _ret = self->peerPort();
	return static_cast<unsigned short>(_ret);
}

QNetworkProxy* QWebSocket_proxy(const QWebSocket* self) {
	return new QNetworkProxy(self->proxy());
}

void QWebSocket_setProxy(QWebSocket* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

void QWebSocket_setMaskGenerator(QWebSocket* self, QMaskGenerator* maskGenerator) {
	self->setMaskGenerator(maskGenerator);
}

QMaskGenerator* QWebSocket_maskGenerator(const QWebSocket* self) {
	return (QMaskGenerator*) self->maskGenerator();
}

long long QWebSocket_readBufferSize(const QWebSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QWebSocket_setReadBufferSize(QWebSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

void QWebSocket_resume(QWebSocket* self) {
	self->resume();
}

void QWebSocket_setPauseMode(QWebSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

int QWebSocket_state(const QWebSocket* self) {
	QAbstractSocket::SocketState _ret = self->state();
	return static_cast<int>(_ret);
}

int QWebSocket_version(const QWebSocket* self) {
	QWebSocketProtocol::Version _ret = self->version();
	return static_cast<int>(_ret);
}

struct miqt_string QWebSocket_resourceName(const QWebSocket* self) {
	QString _ret = self->resourceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebSocket_requestUrl(const QWebSocket* self) {
	return new QUrl(self->requestUrl());
}

QNetworkRequest* QWebSocket_request(const QWebSocket* self) {
	return new QNetworkRequest(self->request());
}

QWebSocketHandshakeOptions* QWebSocket_handshakeOptions(const QWebSocket* self) {
	return new QWebSocketHandshakeOptions(self->handshakeOptions());
}

struct miqt_string QWebSocket_origin(const QWebSocket* self) {
	QString _ret = self->origin();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSocket_subprotocol(const QWebSocket* self) {
	QString _ret = self->subprotocol();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebSocket_closeCode(const QWebSocket* self) {
	QWebSocketProtocol::CloseCode _ret = self->closeCode();
	return static_cast<int>(_ret);
}

struct miqt_string QWebSocket_closeReason(const QWebSocket* self) {
	QString _ret = self->closeReason();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QWebSocket_sendTextMessage(QWebSocket* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	qint64 _ret = self->sendTextMessage(message_QString);
	return static_cast<long long>(_ret);
}

long long QWebSocket_sendBinaryMessage(QWebSocket* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	qint64 _ret = self->sendBinaryMessage(data_QByteArray);
	return static_cast<long long>(_ret);
}

void QWebSocket_ignoreSslErrors(QWebSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->ignoreSslErrors(errors_QList);
}

void QWebSocket_continueInterruptedHandshake(QWebSocket* self) {
	self->continueInterruptedHandshake();
}

void QWebSocket_setSslConfiguration(QWebSocket* self, QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QWebSocket_sslConfiguration(const QWebSocket* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

long long QWebSocket_bytesToWrite(const QWebSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

void QWebSocket_setMaxAllowedIncomingFrameSize(QWebSocket* self, unsigned long long maxAllowedIncomingFrameSize) {
	self->setMaxAllowedIncomingFrameSize(static_cast<quint64>(maxAllowedIncomingFrameSize));
}

unsigned long long QWebSocket_maxAllowedIncomingFrameSize(const QWebSocket* self) {
	quint64 _ret = self->maxAllowedIncomingFrameSize();
	return static_cast<unsigned long long>(_ret);
}

void QWebSocket_setMaxAllowedIncomingMessageSize(QWebSocket* self, unsigned long long maxAllowedIncomingMessageSize) {
	self->setMaxAllowedIncomingMessageSize(static_cast<quint64>(maxAllowedIncomingMessageSize));
}

unsigned long long QWebSocket_maxAllowedIncomingMessageSize(const QWebSocket* self) {
	quint64 _ret = self->maxAllowedIncomingMessageSize();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QWebSocket_maxIncomingMessageSize() {
	quint64 _ret = QWebSocket::maxIncomingMessageSize();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QWebSocket_maxIncomingFrameSize() {
	quint64 _ret = QWebSocket::maxIncomingFrameSize();
	return static_cast<unsigned long long>(_ret);
}

void QWebSocket_setOutgoingFrameSize(QWebSocket* self, unsigned long long outgoingFrameSize) {
	self->setOutgoingFrameSize(static_cast<quint64>(outgoingFrameSize));
}

unsigned long long QWebSocket_outgoingFrameSize(const QWebSocket* self) {
	quint64 _ret = self->outgoingFrameSize();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QWebSocket_maxOutgoingFrameSize() {
	quint64 _ret = QWebSocket::maxOutgoingFrameSize();
	return static_cast<unsigned long long>(_ret);
}

void QWebSocket_close(QWebSocket* self) {
	self->close();
}

void QWebSocket_open(QWebSocket* self, QUrl* url) {
	self->open(*url);
}

void QWebSocket_openWithRequest(QWebSocket* self, QNetworkRequest* request) {
	self->open(*request);
}

void QWebSocket_open2(QWebSocket* self, QUrl* url, QWebSocketHandshakeOptions* options) {
	self->open(*url, *options);
}

void QWebSocket_open3(QWebSocket* self, QNetworkRequest* request, QWebSocketHandshakeOptions* options) {
	self->open(*request, *options);
}

void QWebSocket_ping(QWebSocket* self) {
	self->ping();
}

void QWebSocket_ignoreSslErrors2(QWebSocket* self) {
	self->ignoreSslErrors();
}

void QWebSocket_aboutToClose(QWebSocket* self) {
	self->aboutToClose();
}

void QWebSocket_connect_aboutToClose(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)()>(&QWebSocket::aboutToClose), self, [=]() {
		miqt_exec_callback_QWebSocket_aboutToClose(slot);
	});
}

void QWebSocket_connected(QWebSocket* self) {
	self->connected();
}

void QWebSocket_connect_connected(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)()>(&QWebSocket::connected), self, [=]() {
		miqt_exec_callback_QWebSocket_connected(slot);
	});
}

void QWebSocket_disconnected(QWebSocket* self) {
	self->disconnected();
}

void QWebSocket_connect_disconnected(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)()>(&QWebSocket::disconnected), self, [=]() {
		miqt_exec_callback_QWebSocket_disconnected(slot);
	});
}

void QWebSocket_stateChanged(QWebSocket* self, int state) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(state));
}

void QWebSocket_connect_stateChanged(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(QAbstractSocket::SocketState)>(&QWebSocket::stateChanged), self, [=](QAbstractSocket::SocketState state) {
		QAbstractSocket::SocketState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebSocket_stateChanged(slot, sigval1);
	});
}

void QWebSocket_proxyAuthenticationRequired(QWebSocket* self, QNetworkProxy* proxy, QAuthenticator* pAuthenticator) {
	self->proxyAuthenticationRequired(*proxy, pAuthenticator);
}

void QWebSocket_connect_proxyAuthenticationRequired(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QWebSocket::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* pAuthenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = pAuthenticator;
		miqt_exec_callback_QWebSocket_proxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QWebSocket_readChannelFinished(QWebSocket* self) {
	self->readChannelFinished();
}

void QWebSocket_connect_readChannelFinished(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)()>(&QWebSocket::readChannelFinished), self, [=]() {
		miqt_exec_callback_QWebSocket_readChannelFinished(slot);
	});
}

void QWebSocket_textFrameReceived(QWebSocket* self, struct miqt_string frame, bool isLastFrame) {
	QString frame_QString = QString::fromUtf8(frame.data, frame.len);
	self->textFrameReceived(frame_QString, isLastFrame);
}

void QWebSocket_connect_textFrameReceived(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QString&, bool)>(&QWebSocket::textFrameReceived), self, [=](const QString& frame, bool isLastFrame) {
		const QString frame_ret = frame;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray frame_b = frame_ret.toUtf8();
		struct miqt_string frame_ms;
		frame_ms.len = frame_b.length();
		frame_ms.data = static_cast<char*>(malloc(frame_ms.len));
		memcpy(frame_ms.data, frame_b.data(), frame_ms.len);
		struct miqt_string sigval1 = frame_ms;
		bool sigval2 = isLastFrame;
		miqt_exec_callback_QWebSocket_textFrameReceived(slot, sigval1, sigval2);
	});
}

void QWebSocket_binaryFrameReceived(QWebSocket* self, struct miqt_string frame, bool isLastFrame) {
	QByteArray frame_QByteArray(frame.data, frame.len);
	self->binaryFrameReceived(frame_QByteArray, isLastFrame);
}

void QWebSocket_connect_binaryFrameReceived(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QByteArray&, bool)>(&QWebSocket::binaryFrameReceived), self, [=](const QByteArray& frame, bool isLastFrame) {
		const QByteArray frame_qb = frame;
		struct miqt_string frame_ms;
		frame_ms.len = frame_qb.length();
		frame_ms.data = static_cast<char*>(malloc(frame_ms.len));
		memcpy(frame_ms.data, frame_qb.data(), frame_ms.len);
		struct miqt_string sigval1 = frame_ms;
		bool sigval2 = isLastFrame;
		miqt_exec_callback_QWebSocket_binaryFrameReceived(slot, sigval1, sigval2);
	});
}

void QWebSocket_textMessageReceived(QWebSocket* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->textMessageReceived(message_QString);
}

void QWebSocket_connect_textMessageReceived(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QString&)>(&QWebSocket::textMessageReceived), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QWebSocket_textMessageReceived(slot, sigval1);
	});
}

void QWebSocket_binaryMessageReceived(QWebSocket* self, struct miqt_string message) {
	QByteArray message_QByteArray(message.data, message.len);
	self->binaryMessageReceived(message_QByteArray);
}

void QWebSocket_connect_binaryMessageReceived(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QByteArray&)>(&QWebSocket::binaryMessageReceived), self, [=](const QByteArray& message) {
		const QByteArray message_qb = message;
		struct miqt_string message_ms;
		message_ms.len = message_qb.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_qb.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QWebSocket_binaryMessageReceived(slot, sigval1);
	});
}

void QWebSocket_errorWithError(QWebSocket* self, int error) {
	self->error(static_cast<QAbstractSocket::SocketError>(error));
}

void QWebSocket_connect_errorWithError(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(QAbstractSocket::SocketError)>(&QWebSocket::error), self, [=](QAbstractSocket::SocketError error) {
		QAbstractSocket::SocketError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QWebSocket_errorWithError(slot, sigval1);
	});
}

void QWebSocket_pong(QWebSocket* self, unsigned long long elapsedTime, struct miqt_string payload) {
	QByteArray payload_QByteArray(payload.data, payload.len);
	self->pong(static_cast<quint64>(elapsedTime), payload_QByteArray);
}

void QWebSocket_connect_pong(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(quint64, const QByteArray&)>(&QWebSocket::pong), self, [=](quint64 elapsedTime, const QByteArray& payload) {
		quint64 elapsedTime_ret = elapsedTime;
		unsigned long long sigval1 = static_cast<unsigned long long>(elapsedTime_ret);
		const QByteArray payload_qb = payload;
		struct miqt_string payload_ms;
		payload_ms.len = payload_qb.length();
		payload_ms.data = static_cast<char*>(malloc(payload_ms.len));
		memcpy(payload_ms.data, payload_qb.data(), payload_ms.len);
		struct miqt_string sigval2 = payload_ms;
		miqt_exec_callback_QWebSocket_pong(slot, sigval1, sigval2);
	});
}

void QWebSocket_bytesWritten(QWebSocket* self, long long bytes) {
	self->bytesWritten(static_cast<qint64>(bytes));
}

void QWebSocket_connect_bytesWritten(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(qint64)>(&QWebSocket::bytesWritten), self, [=](qint64 bytes) {
		qint64 bytes_ret = bytes;
		long long sigval1 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QWebSocket_bytesWritten(slot, sigval1);
	});
}

void QWebSocket_peerVerifyError(QWebSocket* self, QSslError* error) {
	self->peerVerifyError(*error);
}

void QWebSocket_connect_peerVerifyError(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QSslError&)>(&QWebSocket::peerVerifyError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QWebSocket_peerVerifyError(slot, sigval1);
	});
}

void QWebSocket_sslErrors(QWebSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QWebSocket_connect_sslErrors(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QList<QSslError>&)>(&QWebSocket::sslErrors), self, [=](const QList<QSslError>& errors) {
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval1 = errors_out;
		miqt_exec_callback_QWebSocket_sslErrors(slot, sigval1);
	});
}

void QWebSocket_preSharedKeyAuthenticationRequired(QWebSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QWebSocket_connect_preSharedKeyAuthenticationRequired(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(QSslPreSharedKeyAuthenticator*)>(&QWebSocket::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QWebSocket_preSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QWebSocket_alertSent(QWebSocket* self, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QWebSocket_connect_alertSent(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QWebSocket::alertSent), self, [=](QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QWebSocket_alertSent(slot, sigval1, sigval2, sigval3);
	});
}

void QWebSocket_alertReceived(QWebSocket* self, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QWebSocket_connect_alertReceived(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QWebSocket::alertReceived), self, [=](QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QWebSocket_alertReceived(slot, sigval1, sigval2, sigval3);
	});
}

void QWebSocket_handshakeInterruptedOnError(QWebSocket* self, QSslError* error) {
	self->handshakeInterruptedOnError(*error);
}

void QWebSocket_connect_handshakeInterruptedOnError(QWebSocket* self, intptr_t slot) {
	QWebSocket::connect(self, static_cast<void (QWebSocket::*)(const QSslError&)>(&QWebSocket::handshakeInterruptedOnError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QWebSocket_handshakeInterruptedOnError(slot, sigval1);
	});
}

struct miqt_string QWebSocket_tr2(const char* s, const char* c) {
	QString _ret = QWebSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSocket_closeWithCloseCode(QWebSocket* self, int closeCode) {
	self->close(static_cast<QWebSocketProtocol::CloseCode>(closeCode));
}

void QWebSocket_close2(QWebSocket* self, int closeCode, struct miqt_string reason) {
	QString reason_QString = QString::fromUtf8(reason.data, reason.len);
	self->close(static_cast<QWebSocketProtocol::CloseCode>(closeCode), reason_QString);
}

void QWebSocket_pingWithPayload(QWebSocket* self, struct miqt_string payload) {
	QByteArray payload_QByteArray(payload.data, payload.len);
	self->ping(payload_QByteArray);
}

bool QWebSocket_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QWebSocket_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::event(event);
}

bool QWebSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::eventFilter(watched, event);
}

bool QWebSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::timerEvent(event);
}

bool QWebSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QWebSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::childEvent(event);
}

bool QWebSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QWebSocket_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::customEvent(event);
}

bool QWebSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::connectNotify(*signal);
}

bool QWebSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebSocket*>(self)->QWebSocket::disconnectNotify(*signal);
}

QObject* QWebSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWebSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWebSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWebSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebSocket* self_cast = dynamic_cast<MiqtVirtualQWebSocket*>( (QWebSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWebSocket_delete(QWebSocket* self) {
	delete self;
}

