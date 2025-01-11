#include <QAbstractSocket>
#include <QByteArray>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QOcspResponse>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslKey>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QVariant>
#include <qsslsocket.h>
#include "gen_qsslsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSslSocket_Encrypted(intptr_t);
void miqt_exec_callback_QSslSocket_PeerVerifyError(intptr_t, QSslError*);
void miqt_exec_callback_QSslSocket_SslErrors(intptr_t, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QSslSocket_ModeChanged(intptr_t, int);
void miqt_exec_callback_QSslSocket_EncryptedBytesWritten(intptr_t, long long);
void miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QSslSocket_NewSessionTicketReceived(intptr_t);
void miqt_exec_callback_QSslSocket_AlertSent(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QSslSocket_AlertReceived(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QSslSocket_HandshakeInterruptedOnError(intptr_t, QSslError*);
void miqt_exec_callback_QSslSocket_Resume(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_SetSocketDescriptor(void*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QSslSocket_ConnectToHost(void*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QSslSocket_DisconnectFromHost(void*, intptr_t);
void miqt_exec_callback_QSslSocket_SetSocketOption(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QSslSocket_SocketOption(void*, intptr_t, int);
long long miqt_exec_callback_QSslSocket_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QSslSocket_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_CanReadLine(void*, intptr_t);
void miqt_exec_callback_QSslSocket_Close(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_AtEnd(void*, intptr_t);
void miqt_exec_callback_QSslSocket_SetReadBufferSize(void*, intptr_t, long long);
bool miqt_exec_callback_QSslSocket_WaitForConnected(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForBytesWritten(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForDisconnected(void*, intptr_t, int);
long long miqt_exec_callback_QSslSocket_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QSslSocket_SkipData(void*, intptr_t, long long);
long long miqt_exec_callback_QSslSocket_WriteData(void*, intptr_t, const char*, long long);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSslSocket : public virtual QSslSocket {
public:

	MiqtVirtualQSslSocket(): QSslSocket() {};
	MiqtVirtualQSslSocket(QObject* parent): QSslSocket(parent) {};

	virtual ~MiqtVirtualQSslSocket() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QSslSocket::resume();
			return;
		}
		

		miqt_exec_callback_QSslSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QSslSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QSslSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QSslSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QSslSocket::connectToHost(hostName, port, openMode, protocol);
			return;
		}
		
		const QString hostName_ret = hostName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray hostName_b = hostName_ret.toUtf8();
		struct miqt_string hostName_ms;
		hostName_ms.len = hostName_b.length();
		hostName_ms.data = static_cast<char*>(malloc(hostName_ms.len));
		memcpy(hostName_ms.data, hostName_b.data(), hostName_ms.len);
		struct miqt_string sigval1 = hostName_ms;
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QSslSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QSslSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QSslSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QSslSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QSslSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QSslSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QSslSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QSslSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QSslSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSslSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QSslSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QSslSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_BytesAvailable(const_cast<MiqtVirtualQSslSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QSslSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QSslSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_BytesToWrite(const_cast<MiqtVirtualQSslSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QSslSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QSslSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_CanReadLine(const_cast<MiqtVirtualQSslSocket*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QSslSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QSslSocket::close();
			return;
		}
		

		miqt_exec_callback_QSslSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QSslSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QSslSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_AtEnd(const_cast<MiqtVirtualQSslSocket*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QSslSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QSslSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QSslSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QSslSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QSslSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QSslSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QSslSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QSslSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QSslSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QSslSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QSslSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QSslSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QSslSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QSslSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QSslSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QSslSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QSslSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QSslSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

};

QSslSocket* QSslSocket_new() {
	return new MiqtVirtualQSslSocket();
}

QSslSocket* QSslSocket_new2(QObject* parent) {
	return new MiqtVirtualQSslSocket(parent);
}

void QSslSocket_virtbase(QSslSocket* src, QTcpSocket** outptr_QTcpSocket) {
	*outptr_QTcpSocket = static_cast<QTcpSocket*>(src);
}

QMetaObject* QSslSocket_MetaObject(const QSslSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSslSocket_Metacast(QSslSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSslSocket_Tr(const char* s) {
	QString _ret = QSslSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_Resume(QSslSocket* self) {
	self->resume();
}

void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString);
}

bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QSslSocket_ConnectToHost(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
	self->disconnectFromHost();
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QSslSocket_Mode(const QSslSocket* self) {
	QSslSocket::SslMode _ret = self->mode();
	return static_cast<int>(_ret);
}

bool QSslSocket_IsEncrypted(const QSslSocket* self) {
	return self->isEncrypted();
}

int QSslSocket_Protocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslSocket_SetProtocol(QSslSocket* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslSocket_PeerVerifyMode(const QSslSocket* self) {
	QSslSocket::PeerVerifyMode _ret = self->peerVerifyMode();
	return static_cast<int>(_ret);
}

void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslSocket_PeerVerifyDepth(const QSslSocket* self) {
	return self->peerVerifyDepth();
}

void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth) {
	self->setPeerVerifyDepth(static_cast<int>(depth));
}

struct miqt_string QSslSocket_PeerVerifyName(const QSslSocket* self) {
	QString _ret = self->peerVerifyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_SetPeerVerifyName(QSslSocket* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->setPeerVerifyName(hostName_QString);
}

long long QSslSocket_BytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
	return self->canReadLine();
}

void QSslSocket_Close(QSslSocket* self) {
	self->close();
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
	return self->atEnd();
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesToWrite();
	return static_cast<long long>(_ret);
}

QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config) {
	self->setSslConfiguration(*config);
}

void QSslSocket_SetLocalCertificateChain(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  localChain) {
	QList<QSslCertificate> localChain_QList;
	localChain_QList.reserve(localChain.len);
	QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
	for(size_t i = 0; i < localChain.len; ++i) {
		localChain_QList.push_back(*(localChain_arr[i]));
	}
	self->setLocalCertificateChain(localChain_QList);
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_LocalCertificateChain(const QSslSocket* self) {
	QList<QSslCertificate> _ret = self->localCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString);
}

QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->localCertificate());
}

QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->peerCertificate());
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_PeerCertificateChain(const QSslSocket* self) {
	QList<QSslCertificate> _ret = self->peerCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslSocket_SessionProtocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->sessionProtocol();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QOcspResponse* */  QSslSocket_OcspResponses(const QSslSocket* self) {
	QList<QOcspResponse> _ret = self->ocspResponses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QOcspResponse** _arr = static_cast<QOcspResponse**>(malloc(sizeof(QOcspResponse*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QOcspResponse(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key) {
	self->setPrivateKey(*key);
}

void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString);
}

QSslKey* QSslSocket_PrivateKey(const QSslSocket* self) {
	return new QSslKey(self->privateKey());
}

bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
	return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

struct miqt_array /* of QSslError* */  QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
	QList<QSslError> _ret = self->sslHandshakeErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_SupportsSsl() {
	return QSslSocket::supportsSsl();
}

long QSslSocket_SslLibraryVersionNumber() {
	return QSslSocket::sslLibraryVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryVersionString() {
	QString _ret = QSslSocket::sslLibraryVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QSslSocket_SslLibraryBuildVersionNumber() {
	return QSslSocket::sslLibraryBuildVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryBuildVersionString() {
	QString _ret = QSslSocket::sslLibraryBuildVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QSslSocket_AvailableBackends() {
	QList<QString> _ret = QSslSocket::availableBackends();
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

struct miqt_string QSslSocket_ActiveBackend() {
	QString _ret = QSslSocket::activeBackend();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSslSocket_SetActiveBackend(struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	return QSslSocket::setActiveBackend(backendName_QString);
}

struct miqt_array /* of int */  QSslSocket_SupportedProtocols() {
	QList<QSsl::SslProtocol> _ret = QSslSocket::supportedProtocols();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::SslProtocol _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsProtocolSupported(int protocol) {
	return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol));
}

struct miqt_array /* of int */  QSslSocket_ImplementedClasses() {
	QList<QSsl::ImplementedClass> _ret = QSslSocket::implementedClasses();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::ImplementedClass _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsClassImplemented(int cl) {
	return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl));
}

struct miqt_array /* of int */  QSslSocket_SupportedFeatures() {
	QList<QSsl::SupportedFeature> _ret = QSslSocket::supportedFeatures();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::SupportedFeature _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsFeatureSupported(int feat) {
	return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat));
}

void QSslSocket_IgnoreSslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->ignoreSslErrors(errors_QList);
}

void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self) {
	self->continueInterruptedHandshake();
}

void QSslSocket_StartClientEncryption(QSslSocket* self) {
	self->startClientEncryption();
}

void QSslSocket_StartServerEncryption(QSslSocket* self) {
	self->startServerEncryption();
}

void QSslSocket_IgnoreSslErrors2(QSslSocket* self) {
	self->ignoreSslErrors();
}

void QSslSocket_Encrypted(QSslSocket* self) {
	self->encrypted();
}

void QSslSocket_connect_Encrypted(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::encrypted), self, [=]() {
		miqt_exec_callback_QSslSocket_Encrypted(slot);
	});
}

void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* error) {
	self->peerVerifyError(*error);
}

void QSslSocket_connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::peerVerifyError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslSocket_PeerVerifyError(slot, sigval1);
	});
}

void QSslSocket_SslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QSslSocket_connect_SslErrors(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QList<QSslError>&)>(&QSslSocket::sslErrors), self, [=](const QList<QSslError>& errors) {
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
		miqt_exec_callback_QSslSocket_SslErrors(slot, sigval1);
	});
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
	self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_connect_ModeChanged(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslSocket::SslMode)>(&QSslSocket::modeChanged), self, [=](QSslSocket::SslMode newMode) {
		QSslSocket::SslMode newMode_ret = newMode;
		int sigval1 = static_cast<int>(newMode_ret);
		miqt_exec_callback_QSslSocket_ModeChanged(slot, sigval1);
	});
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
	self->encryptedBytesWritten(static_cast<qint64>(totalBytes));
}

void QSslSocket_connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(qint64)>(&QSslSocket::encryptedBytesWritten), self, [=](qint64 totalBytes) {
		qint64 totalBytes_ret = totalBytes;
		long long sigval1 = static_cast<long long>(totalBytes_ret);
		miqt_exec_callback_QSslSocket_EncryptedBytesWritten(slot, sigval1);
	});
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslPreSharedKeyAuthenticator*)>(&QSslSocket::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
	self->newSessionTicketReceived();
}

void QSslSocket_connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::newSessionTicketReceived), self, [=]() {
		miqt_exec_callback_QSslSocket_NewSessionTicketReceived(slot);
	});
}

void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslSocket_connect_AlertSent(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslSocket::alertSent), self, [=](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType typeVal_ret = typeVal;
		int sigval2 = static_cast<int>(typeVal_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QSslSocket_AlertSent(slot, sigval1, sigval2, sigval3);
	});
}

void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslSocket_connect_AlertReceived(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslSocket::alertReceived), self, [=](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType typeVal_ret = typeVal;
		int sigval2 = static_cast<int>(typeVal_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QSslSocket_AlertReceived(slot, sigval1, sigval2, sigval3);
	});
}

void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, QSslError* error) {
	self->handshakeInterruptedOnError(*error);
}

void QSslSocket_connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::handshakeInterruptedOnError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslSocket_HandshakeInterruptedOnError(slot, sigval1);
	});
}

struct miqt_string QSslSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSslSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_SetLocalCertificate2(QSslSocket* self, struct miqt_string fileName, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString, static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey2(QSslSocket* self, struct miqt_string fileName, int algorithm) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

void QSslSocket_SetPrivateKey3(QSslSocket* self, struct miqt_string fileName, int algorithm, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey4(QSslSocket* self, struct miqt_string fileName, int algorithm, int format, struct miqt_string passPhrase) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), passPhrase_QByteArray);
}

bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs) {
	return self->waitForEncrypted(static_cast<int>(msecs));
}

struct miqt_array /* of int */  QSslSocket_SupportedProtocols1(struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	QList<QSsl::SslProtocol> _ret = QSslSocket::supportedProtocols(backendName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::SslProtocol _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsProtocolSupported2(int protocol, struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol), backendName_QString);
}

struct miqt_array /* of int */  QSslSocket_ImplementedClasses1(struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	QList<QSsl::ImplementedClass> _ret = QSslSocket::implementedClasses(backendName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::ImplementedClass _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsClassImplemented2(int cl, struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl), backendName_QString);
}

struct miqt_array /* of int */  QSslSocket_SupportedFeatures1(struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	QList<QSsl::SupportedFeature> _ret = QSslSocket::supportedFeatures(backendName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QSsl::SupportedFeature _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_IsFeatureSupported2(int feat, struct miqt_string backendName) {
	QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
	return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat), backendName_QString);
}

void QSslSocket_override_virtual_Resume(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__Resume = slot;
}

void QSslSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Resume();
}

void QSslSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__SetSocketDescriptor = slot;
}

bool QSslSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

void QSslSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__ConnectToHost = slot;
}

void QSslSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, openMode, protocol);
}

void QSslSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__DisconnectFromHost = slot;
}

void QSslSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_DisconnectFromHost();
}

void QSslSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__SetSocketOption = slot;
}

void QSslSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

void QSslSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__SocketOption = slot;
}

QVariant* QSslSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SocketOption(option);
}

void QSslSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__BytesAvailable = slot;
}

long long QSslSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_BytesAvailable();
}

void QSslSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__BytesToWrite = slot;
}

long long QSslSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_BytesToWrite();
}

void QSslSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__CanReadLine = slot;
}

bool QSslSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_CanReadLine();
}

void QSslSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__Close = slot;
}

void QSslSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Close();
}

void QSslSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__AtEnd = slot;
}

bool QSslSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_AtEnd();
}

void QSslSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__SetReadBufferSize = slot;
}

void QSslSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

void QSslSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__WaitForConnected = slot;
}

bool QSslSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

void QSslSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__WaitForReadyRead = slot;
}

bool QSslSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QSslSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QSslSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QSslSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__WaitForDisconnected = slot;
}

bool QSslSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

void QSslSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__ReadData = slot;
}

long long QSslSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QSslSocket_override_virtual_SkipData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__SkipData = slot;
}

long long QSslSocket_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SkipData(maxSize);
}

void QSslSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) )->handle__WriteData = slot;
}

long long QSslSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

void QSslSocket_Delete(QSslSocket* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSslSocket*>( self );
	} else {
		delete self;
	}
}

