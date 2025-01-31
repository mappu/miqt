#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryFile>
#include <QTimerEvent>
#include <qtemporaryfile.h>
#include "gen_qtemporaryfile.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QTemporaryFile_FileName(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_OpenWithFlags(QTemporaryFile*, intptr_t, int);
long long miqt_exec_callback_QTemporaryFile_Size(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_Resize(QTemporaryFile*, intptr_t, long long);
int miqt_exec_callback_QTemporaryFile_Permissions(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_SetPermissions(QTemporaryFile*, intptr_t, int);
void miqt_exec_callback_QTemporaryFile_Close(QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_IsSequential(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_Pos(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_Seek(QTemporaryFile*, intptr_t, long long);
bool miqt_exec_callback_QTemporaryFile_AtEnd(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_ReadData(QTemporaryFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QTemporaryFile_WriteData(QTemporaryFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QTemporaryFile_ReadLineData(QTemporaryFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QTemporaryFile_Reset(QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_BytesAvailable(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_BytesToWrite(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_CanReadLine(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_WaitForReadyRead(QTemporaryFile*, intptr_t, int);
bool miqt_exec_callback_QTemporaryFile_WaitForBytesWritten(QTemporaryFile*, intptr_t, int);
long long miqt_exec_callback_QTemporaryFile_SkipData(QTemporaryFile*, intptr_t, long long);
bool miqt_exec_callback_QTemporaryFile_Event(QTemporaryFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QTemporaryFile_EventFilter(QTemporaryFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTemporaryFile_TimerEvent(QTemporaryFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTemporaryFile_ChildEvent(QTemporaryFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTemporaryFile_CustomEvent(QTemporaryFile*, intptr_t, QEvent*);
void miqt_exec_callback_QTemporaryFile_ConnectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTemporaryFile_DisconnectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTemporaryFile final : public QTemporaryFile {
public:

	MiqtVirtualQTemporaryFile(): QTemporaryFile() {};
	MiqtVirtualQTemporaryFile(const QString& templateName): QTemporaryFile(templateName) {};
	MiqtVirtualQTemporaryFile(QObject* parent): QTemporaryFile(parent) {};
	MiqtVirtualQTemporaryFile(const QString& templateName, QObject* parent): QTemporaryFile(templateName, parent) {};

	virtual ~MiqtVirtualQTemporaryFile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__FileName == 0) {
			return QTemporaryFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTemporaryFile_FileName(this, handle__FileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FileName() const {

		QString _ret = QTemporaryFile::fileName();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpenWithFlags = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (handle__OpenWithFlags == 0) {
			return QTemporaryFile::open(flags);
		}
		
		QIODeviceBase::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_OpenWithFlags(this, handle__OpenWithFlags, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OpenWithFlags(int flags) {

		return QTemporaryFile::open(static_cast<QIODeviceBase::OpenMode>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QTemporaryFile::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_Size(this, handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QTemporaryFile::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__Resize == 0) {
			return QTemporaryFile::resize(sz);
		}
		
		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_Resize(this, handle__Resize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Resize(long long sz) {

		return QTemporaryFile::resize(static_cast<qint64>(sz));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__Permissions == 0) {
			return QTemporaryFile::permissions();
		}
		

		int callback_return_value = miqt_exec_callback_QTemporaryFile_Permissions(this, handle__Permissions);

		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Permissions() const {

		QFileDevice::Permissions _ret = QTemporaryFile::permissions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__SetPermissions == 0) {
			return QTemporaryFile::setPermissions(permissionSpec);
		}
		
		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_SetPermissions(this, handle__SetPermissions, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPermissions(int permissionSpec) {

		return QTemporaryFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QTemporaryFile::close();
			return;
		}
		

		miqt_exec_callback_QTemporaryFile_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QTemporaryFile::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QTemporaryFile::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_IsSequential(this, handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QTemporaryFile::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QTemporaryFile::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_Pos(this, handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QTemporaryFile::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__Seek == 0) {
			return QTemporaryFile::seek(offset);
		}
		
		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long offset) {

		return QTemporaryFile::seek(static_cast<qint64>(offset));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QTemporaryFile::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_AtEnd(this, handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QTemporaryFile::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QTemporaryFile::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QTemporaryFile::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QTemporaryFile::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QTemporaryFile::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QTemporaryFile::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QTemporaryFile::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QTemporaryFile::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QTemporaryFile::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QTemporaryFile::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_BytesAvailable(this, handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QTemporaryFile::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QTemporaryFile::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_BytesToWrite(this, handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QTemporaryFile::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QTemporaryFile::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_CanReadLine(this, handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QTemporaryFile::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QTemporaryFile::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QTemporaryFile::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QTemporaryFile::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QTemporaryFile::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTemporaryFile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTemporaryFile::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTemporaryFile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTemporaryFile::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTemporaryFile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTemporaryFile::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTemporaryFile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTemporaryFile::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTemporaryFile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTemporaryFile::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTemporaryFile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTemporaryFile_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTemporaryFile::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTemporaryFile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTemporaryFile_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTemporaryFile::disconnectNotify(*signal);

	}

};

QTemporaryFile* QTemporaryFile_new() {
	return new MiqtVirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(struct miqt_string templateName) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new MiqtVirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
	return new MiqtVirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(struct miqt_string templateName, QObject* parent) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new MiqtVirtualQTemporaryFile(templateName_QString, parent);
}

void QTemporaryFile_virtbase(QTemporaryFile* src, QFile** outptr_QFile) {
	*outptr_QFile = static_cast<QFile*>(src);
}

QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTemporaryFile_Tr(const char* s) {
	QString _ret = QTemporaryFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_AutoRemove(const QTemporaryFile* self) {
	return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
	return self->open();
}

struct miqt_string QTemporaryFile_FileName(const QTemporaryFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self) {
	QString _ret = self->fileTemplate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileTemplate(name_QString);
}

bool QTemporaryFile_Rename(QTemporaryFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file) {
	return QTemporaryFile::createNativeFile(*file);
}

struct miqt_string QTemporaryFile_Tr2(const char* s, const char* c) {
	QString _ret = QTemporaryFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_override_virtual_FileName(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FileName = slot;
	return true;
}

struct miqt_string QTemporaryFile_virtualbase_FileName(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_FileName();
}

bool QTemporaryFile_override_virtual_OpenWithFlags(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpenWithFlags = slot;
	return true;
}

bool QTemporaryFile_virtualbase_OpenWithFlags(void* self, int flags) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_OpenWithFlags(flags);
}

bool QTemporaryFile_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QTemporaryFile_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Size();
}

bool QTemporaryFile_override_virtual_Resize(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resize = slot;
	return true;
}

bool QTemporaryFile_virtualbase_Resize(void* self, long long sz) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Resize(sz);
}

bool QTemporaryFile_override_virtual_Permissions(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Permissions = slot;
	return true;
}

int QTemporaryFile_virtualbase_Permissions(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Permissions();
}

bool QTemporaryFile_override_virtual_SetPermissions(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPermissions = slot;
	return true;
}

bool QTemporaryFile_virtualbase_SetPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_SetPermissions(permissionSpec);
}

bool QTemporaryFile_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QTemporaryFile_virtualbase_Close(void* self) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Close();
}

bool QTemporaryFile_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QTemporaryFile_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_IsSequential();
}

bool QTemporaryFile_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QTemporaryFile_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Pos();
}

bool QTemporaryFile_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QTemporaryFile_virtualbase_Seek(void* self, long long offset) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Seek(offset);
}

bool QTemporaryFile_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QTemporaryFile_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_AtEnd();
}

bool QTemporaryFile_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QTemporaryFile_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QTemporaryFile_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QTemporaryFile_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QTemporaryFile_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Reset();
}

bool QTemporaryFile_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QTemporaryFile_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_BytesAvailable();
}

bool QTemporaryFile_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QTemporaryFile_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_BytesToWrite();
}

bool QTemporaryFile_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QTemporaryFile_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_CanReadLine();
}

bool QTemporaryFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QTemporaryFile_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QTemporaryFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QTemporaryFile_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QTemporaryFile_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_SkipData(maxSize);
}

bool QTemporaryFile_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTemporaryFile_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Event(event);
}

bool QTemporaryFile_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTemporaryFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTemporaryFile_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_TimerEvent(event);
}

bool QTemporaryFile_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_ChildEvent(event);
}

bool QTemporaryFile_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_CustomEvent(event);
}

bool QTemporaryFile_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTemporaryFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTemporaryFile_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTemporaryFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
	delete self;
}

