#include <QChildEvent>
#include <QEvent>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsavefile.h>
#include "gen_qsavefile.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QSaveFile_FileName(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_Open(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_WriteData(QSaveFile*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSaveFile_IsSequential(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_Pos(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_Seek(QSaveFile*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_AtEnd(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_Size(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_Resize(QSaveFile*, intptr_t, long long);
int miqt_exec_callback_QSaveFile_Permissions(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_SetPermissions(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_ReadData(QSaveFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QSaveFile_ReadLineData(QSaveFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QSaveFile_Reset(QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_BytesAvailable(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_BytesToWrite(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_CanReadLine(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_WaitForReadyRead(QSaveFile*, intptr_t, int);
bool miqt_exec_callback_QSaveFile_WaitForBytesWritten(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_SkipData(QSaveFile*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_Event(QSaveFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QSaveFile_EventFilter(QSaveFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSaveFile_TimerEvent(QSaveFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSaveFile_ChildEvent(QSaveFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSaveFile_CustomEvent(QSaveFile*, intptr_t, QEvent*);
void miqt_exec_callback_QSaveFile_ConnectNotify(QSaveFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSaveFile_DisconnectNotify(QSaveFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSaveFile final : public QSaveFile {
public:

	MiqtVirtualQSaveFile(const QString& name): QSaveFile(name) {};
	MiqtVirtualQSaveFile(): QSaveFile() {};
	MiqtVirtualQSaveFile(const QString& name, QObject* parent): QSaveFile(name, parent) {};
	MiqtVirtualQSaveFile(QObject* parent): QSaveFile(parent) {};

	virtual ~MiqtVirtualQSaveFile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__FileName == 0) {
			return QSaveFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QSaveFile_FileName(this, handle__FileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FileName() const {

		QString _ret = QSaveFile::fileName();
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
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (handle__Open == 0) {
			return QSaveFile::open(flags);
		}
		
		QIODeviceBase::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int flags) {

		return QSaveFile::open(static_cast<QIODeviceBase::OpenMode>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QSaveFile::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QSaveFile::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QSaveFile::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_IsSequential(this, handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QSaveFile::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QSaveFile::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_Pos(this, handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QSaveFile::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__Seek == 0) {
			return QSaveFile::seek(offset);
		}
		
		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long offset) {

		return QSaveFile::seek(static_cast<qint64>(offset));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QSaveFile::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_AtEnd(this, handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QSaveFile::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QSaveFile::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_Size(this, handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QSaveFile::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__Resize == 0) {
			return QSaveFile::resize(sz);
		}
		
		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_Resize(this, handle__Resize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Resize(long long sz) {

		return QSaveFile::resize(static_cast<qint64>(sz));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__Permissions == 0) {
			return QSaveFile::permissions();
		}
		

		int callback_return_value = miqt_exec_callback_QSaveFile_Permissions(this, handle__Permissions);

		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Permissions() const {

		QFileDevice::Permissions _ret = QSaveFile::permissions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__SetPermissions == 0) {
			return QSaveFile::setPermissions(permissionSpec);
		}
		
		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_SetPermissions(this, handle__SetPermissions, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPermissions(int permissionSpec) {

		return QSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QSaveFile::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QSaveFile::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QSaveFile::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QSaveFile::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QSaveFile::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QSaveFile::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QSaveFile::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_BytesAvailable(this, handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QSaveFile::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QSaveFile::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_BytesToWrite(this, handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QSaveFile::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QSaveFile::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_CanReadLine(this, handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QSaveFile::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QSaveFile::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSaveFile_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QSaveFile::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QSaveFile::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSaveFile_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QSaveFile::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QSaveFile::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QSaveFile::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSaveFile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSaveFile_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSaveFile::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSaveFile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSaveFile_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSaveFile::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSaveFile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSaveFile::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSaveFile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSaveFile::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSaveFile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSaveFile::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSaveFile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSaveFile_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSaveFile::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSaveFile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSaveFile_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSaveFile::disconnectNotify(*signal);

	}

};

QSaveFile* QSaveFile_new(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
	return new MiqtVirtualQSaveFile();
}

QSaveFile* QSaveFile_new3(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
	return new MiqtVirtualQSaveFile(parent);
}

void QSaveFile_virtbase(QSaveFile* src, QFileDevice** outptr_QFileDevice) {
	*outptr_QFileDevice = static_cast<QFileDevice*>(src);
}

QMetaObject* QSaveFile_MetaObject(const QSaveFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSaveFile_Metacast(QSaveFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSaveFile_Tr(const char* s) {
	QString _ret = QSaveFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_FileName(const QSaveFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSaveFile_SetFileName(QSaveFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

bool QSaveFile_Open(QSaveFile* self, int flags) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(flags));
}

bool QSaveFile_Commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(const QSaveFile* self) {
	return self->directWriteFallback();
}

struct miqt_string QSaveFile_Tr2(const char* s, const char* c) {
	QString _ret = QSaveFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSaveFile_override_virtual_FileName(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FileName = slot;
	return true;
}

struct miqt_string QSaveFile_virtualbase_FileName(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_FileName();
}

bool QSaveFile_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QSaveFile_virtualbase_Open(void* self, int flags) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Open(flags);
}

bool QSaveFile_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QSaveFile_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QSaveFile_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QSaveFile_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_IsSequential();
}

bool QSaveFile_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QSaveFile_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Pos();
}

bool QSaveFile_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QSaveFile_virtualbase_Seek(void* self, long long offset) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Seek(offset);
}

bool QSaveFile_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QSaveFile_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_AtEnd();
}

bool QSaveFile_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QSaveFile_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Size();
}

bool QSaveFile_override_virtual_Resize(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resize = slot;
	return true;
}

bool QSaveFile_virtualbase_Resize(void* self, long long sz) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Resize(sz);
}

bool QSaveFile_override_virtual_Permissions(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Permissions = slot;
	return true;
}

int QSaveFile_virtualbase_Permissions(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Permissions();
}

bool QSaveFile_override_virtual_SetPermissions(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPermissions = slot;
	return true;
}

bool QSaveFile_virtualbase_SetPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_SetPermissions(permissionSpec);
}

bool QSaveFile_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QSaveFile_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QSaveFile_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QSaveFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QSaveFile_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QSaveFile_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Reset();
}

bool QSaveFile_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QSaveFile_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_BytesAvailable();
}

bool QSaveFile_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QSaveFile_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_BytesToWrite();
}

bool QSaveFile_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QSaveFile_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_CanReadLine();
}

bool QSaveFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QSaveFile_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QSaveFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QSaveFile_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QSaveFile_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QSaveFile_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_SkipData(maxSize);
}

bool QSaveFile_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSaveFile_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Event(event);
}

bool QSaveFile_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSaveFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSaveFile_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSaveFile_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_TimerEvent(event);
}

bool QSaveFile_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSaveFile_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ChildEvent(event);
}

bool QSaveFile_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSaveFile_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_CustomEvent(event);
}

bool QSaveFile_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSaveFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSaveFile_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSaveFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSaveFile_Delete(QSaveFile* self) {
	delete self;
}

