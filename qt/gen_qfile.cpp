#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qfile.h>
#include "gen_qfile.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QFile_FileName(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_Open(QFile*, intptr_t, int);
long long miqt_exec_callback_QFile_Size(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_Resize(QFile*, intptr_t, long long);
int miqt_exec_callback_QFile_Permissions(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_SetPermissions(QFile*, intptr_t, int);
void miqt_exec_callback_QFile_Close(QFile*, intptr_t);
bool miqt_exec_callback_QFile_IsSequential(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_Pos(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_Seek(QFile*, intptr_t, long long);
bool miqt_exec_callback_QFile_AtEnd(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_ReadData(QFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QFile_WriteData(QFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QFile_ReadLineData(QFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QFile_Reset(QFile*, intptr_t);
long long miqt_exec_callback_QFile_BytesAvailable(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_BytesToWrite(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_CanReadLine(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_WaitForReadyRead(QFile*, intptr_t, int);
bool miqt_exec_callback_QFile_WaitForBytesWritten(QFile*, intptr_t, int);
bool miqt_exec_callback_QFile_Event(QFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QFile_EventFilter(QFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFile_TimerEvent(QFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFile_ChildEvent(QFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFile_CustomEvent(QFile*, intptr_t, QEvent*);
void miqt_exec_callback_QFile_ConnectNotify(QFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFile_DisconnectNotify(QFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFile final : public QFile {
public:

	MiqtVirtualQFile(): QFile() {};
	MiqtVirtualQFile(const QString& name): QFile(name) {};
	MiqtVirtualQFile(QObject* parent): QFile(parent) {};
	MiqtVirtualQFile(const QString& name, QObject* parent): QFile(name, parent) {};

	virtual ~MiqtVirtualQFile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__FileName == 0) {
			return QFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QFile_FileName(this, handle__FileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FileName() const {

		QString _ret = QFile::fileName();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode flags) override {
		if (handle__Open == 0) {
			return QFile::open(flags);
		}
		
		QIODevice::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QFile_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int flags) {

		return QFile::open(static_cast<QIODevice::OpenMode>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QFile::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QFile_Size(this, handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QFile::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__Resize == 0) {
			return QFile::resize(sz);
		}
		
		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);

		bool callback_return_value = miqt_exec_callback_QFile_Resize(this, handle__Resize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Resize(long long sz) {

		return QFile::resize(static_cast<qint64>(sz));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__Permissions == 0) {
			return QFile::permissions();
		}
		

		int callback_return_value = miqt_exec_callback_QFile_Permissions(this, handle__Permissions);

		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Permissions() const {

		QFileDevice::Permissions _ret = QFile::permissions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__SetPermissions == 0) {
			return QFile::setPermissions(permissionSpec);
		}
		
		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);

		bool callback_return_value = miqt_exec_callback_QFile_SetPermissions(this, handle__SetPermissions, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPermissions(int permissionSpec) {

		return QFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QFile::close();
			return;
		}
		

		miqt_exec_callback_QFile_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QFile::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QFile::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QFile_IsSequential(this, handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QFile::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QFile::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QFile_Pos(this, handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QFile::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__Seek == 0) {
			return QFile::seek(offset);
		}
		
		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);

		bool callback_return_value = miqt_exec_callback_QFile_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long offset) {

		return QFile::seek(static_cast<qint64>(offset));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QFile::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QFile_AtEnd(this, handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QFile::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QFile::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QFile_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QFile::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QFile::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QFile_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QFile::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QFile::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QFile_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QFile::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QFile::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QFile_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QFile::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QFile::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QFile_BytesAvailable(this, handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QFile::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QFile::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QFile_BytesToWrite(this, handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QFile::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QFile::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QFile_CanReadLine(this, handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QFile::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QFile::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QFile_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QFile::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QFile::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QFile_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QFile::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QFile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFile_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QFile::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QFile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFile_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QFile::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFile_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFile::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QFile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFile_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QFile::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFile_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFile::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFile_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFile::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFile_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFile::disconnectNotify(*signal);

	}

};

QFile* QFile_new() {
	return new MiqtVirtualQFile();
}

QFile* QFile_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
	return new MiqtVirtualQFile(parent);
}

QFile* QFile_new4(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQFile(name_QString, parent);
}

void QFile_virtbase(QFile* src, QFileDevice** outptr_QFileDevice) {
	*outptr_QFileDevice = static_cast<QFileDevice*>(src);
}

QMetaObject* QFile_MetaObject(const QFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFile_Metacast(QFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFile_Tr(const char* s) {
	QString _ret = QFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_TrUtf8(const char* s) {
	QString _ret = QFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_FileName(const QFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFile_SetFileName(QFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

struct miqt_string QFile_EncodeName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QFile::encodeName(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_DecodeName(struct miqt_string localFileName) {
	QByteArray localFileName_QByteArray(localFileName.data, localFileName.len);
	QString _ret = QFile::decodeName(localFileName_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_DecodeNameWithLocalFileName(const char* localFileName) {
	QString _ret = QFile::decodeName(localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_Exists(const QFile* self) {
	return self->exists();
}

bool QFile_ExistsWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::exists(fileName_QString);
}

struct miqt_string QFile_ReadLink(const QFile* self) {
	QString _ret = self->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_ReadLinkWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = QFile::readLink(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_SymLinkTarget(const QFile* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_SymLinkTargetWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = QFile::symLinkTarget(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_Remove(QFile* self) {
	return self->remove();
}

bool QFile_RemoveWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_MoveToTrashWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

bool QFile_Rename2(struct miqt_string oldName, struct miqt_string newName) {
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->link(newName_QString);
}

bool QFile_Link2(struct miqt_string oldname, struct miqt_string newName) {
	QString oldname_QString = QString::fromUtf8(oldname.data, oldname.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::link(oldname_QString, newName_QString);
}

bool QFile_Copy(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->copy(newName_QString);
}

bool QFile_Copy2(struct miqt_string fileName, struct miqt_string newName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open(QFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QFile_Open3(QFile* self, int fd, int ioFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags));
}

long long QFile_Size(const QFile* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFile_Resize(QFile* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

bool QFile_Resize2(struct miqt_string filename, long long sz) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_Permissions(const QFile* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

int QFile_PermissionsWithFilename(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QFileDevice::Permissions _ret = QFile::permissions(filename_QString);
	return static_cast<int>(_ret);
}

bool QFile_SetPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_SetPermissions2(struct miqt_string filename, int permissionSpec) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

struct miqt_string QFile_Tr2(const char* s, const char* c) {
	QString _ret = QFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_TrUtf82(const char* s, const char* c) {
	QString _ret = QFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

bool QFile_override_virtual_FileName(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FileName = slot;
	return true;
}

struct miqt_string QFile_virtualbase_FileName(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_FileName();
}

bool QFile_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QFile_virtualbase_Open(void* self, int flags) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_Open(flags);
}

bool QFile_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QFile_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_Size();
}

bool QFile_override_virtual_Resize(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resize = slot;
	return true;
}

bool QFile_virtualbase_Resize(void* self, long long sz) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_Resize(sz);
}

bool QFile_override_virtual_Permissions(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Permissions = slot;
	return true;
}

int QFile_virtualbase_Permissions(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_Permissions();
}

bool QFile_override_virtual_SetPermissions(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPermissions = slot;
	return true;
}

bool QFile_virtualbase_SetPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_SetPermissions(permissionSpec);
}

bool QFile_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QFile_virtualbase_Close(void* self) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_Close();
}

bool QFile_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QFile_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_IsSequential();
}

bool QFile_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QFile_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_Pos();
}

bool QFile_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QFile_virtualbase_Seek(void* self, long long offset) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_Seek(offset);
}

bool QFile_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QFile_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_AtEnd();
}

bool QFile_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QFile_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QFile_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QFile_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QFile_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QFile_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QFile_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_Reset();
}

bool QFile_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QFile_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_BytesAvailable();
}

bool QFile_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QFile_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_BytesToWrite();
}

bool QFile_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QFile_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQFile*)(self) )->virtualbase_CanReadLine();
}

bool QFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QFile_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QFile_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QFile_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFile_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_Event(event);
}

bool QFile_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFile*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QFile_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFile_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_TimerEvent(event);
}

bool QFile_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFile_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_ChildEvent(event);
}

bool QFile_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFile_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_CustomEvent(event);
}

bool QFile_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFile_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFile*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QFile_Delete(QFile* self) {
	delete self;
}

