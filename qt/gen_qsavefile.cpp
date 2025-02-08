#include <QChildEvent>
#include <QEvent>
#include <QFileDevice>
#include <QIODevice>
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

struct miqt_string miqt_exec_callback_QSaveFile_fileName(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_open(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_writeData(QSaveFile*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSaveFile_isSequential(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_pos(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_seek(QSaveFile*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_atEnd(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_size(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_resize(QSaveFile*, intptr_t, long long);
int miqt_exec_callback_QSaveFile_permissions(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_setPermissions(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_readData(QSaveFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QSaveFile_readLineData(QSaveFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QSaveFile_reset(QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_bytesAvailable(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_bytesToWrite(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_canReadLine(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_waitForReadyRead(QSaveFile*, intptr_t, int);
bool miqt_exec_callback_QSaveFile_waitForBytesWritten(QSaveFile*, intptr_t, int);
bool miqt_exec_callback_QSaveFile_event(QSaveFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QSaveFile_eventFilter(QSaveFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSaveFile_timerEvent(QSaveFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSaveFile_childEvent(QSaveFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSaveFile_customEvent(QSaveFile*, intptr_t, QEvent*);
void miqt_exec_callback_QSaveFile_connectNotify(QSaveFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSaveFile_disconnectNotify(QSaveFile*, intptr_t, QMetaMethod*);
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
	intptr_t handle__fileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__fileName == 0) {
			return QSaveFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QSaveFile_fileName(this, handle__fileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_fileName() const {

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
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode flags) override {
		if (handle__open == 0) {
			return QSaveFile::open(flags);
		}
		
		QIODevice::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int flags) {

		return QSaveFile::open(static_cast<QIODevice::OpenMode>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QSaveFile::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* data, long long len) {

		qint64 _ret = QSaveFile::writeData(data, static_cast<qint64>(len));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QSaveFile::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QSaveFile::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QSaveFile::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QSaveFile::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__seek == 0) {
			return QSaveFile::seek(offset);
		}
		
		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long offset) {

		return QSaveFile::seek(static_cast<qint64>(offset));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QSaveFile::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QSaveFile::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QSaveFile::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QSaveFile::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__resize == 0) {
			return QSaveFile::resize(sz);
		}
		
		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_resize(this, handle__resize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_resize(long long sz) {

		return QSaveFile::resize(static_cast<qint64>(sz));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__permissions == 0) {
			return QSaveFile::permissions();
		}
		

		int callback_return_value = miqt_exec_callback_QSaveFile_permissions(this, handle__permissions);

		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_permissions() const {

		QFileDevice::Permissions _ret = QSaveFile::permissions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__setPermissions == 0) {
			return QSaveFile::setPermissions(permissionSpec);
		}
		
		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_setPermissions(this, handle__setPermissions, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setPermissions(int permissionSpec) {

		return QSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QSaveFile::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* data, long long maxlen) {

		qint64 _ret = QSaveFile::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QSaveFile::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSaveFile_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QSaveFile::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QSaveFile::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QSaveFile::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QSaveFile::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QSaveFile::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QSaveFile::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QSaveFile::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QSaveFile::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QSaveFile::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QSaveFile::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSaveFile_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QSaveFile::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QSaveFile::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSaveFile_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QSaveFile::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSaveFile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSaveFile_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSaveFile::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSaveFile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSaveFile_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSaveFile::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSaveFile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSaveFile::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSaveFile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSaveFile::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSaveFile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSaveFile_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSaveFile::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSaveFile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSaveFile_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSaveFile::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSaveFile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSaveFile_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSaveFile::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSaveFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QSaveFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QSaveFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSaveFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSaveFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSaveFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSaveFile_metaObject(const QSaveFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSaveFile_metacast(QSaveFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSaveFile_tr(const char* s) {
	QString _ret = QSaveFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_trUtf8(const char* s) {
	QString _ret = QSaveFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_fileName(const QSaveFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSaveFile_setFileName(QSaveFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

bool QSaveFile_open(QSaveFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QSaveFile_commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_cancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_setDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_directWriteFallback(const QSaveFile* self) {
	return self->directWriteFallback();
}

struct miqt_string QSaveFile_tr2(const char* s, const char* c) {
	QString _ret = QSaveFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_trUtf82(const char* s, const char* c) {
	QString _ret = QSaveFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSaveFile_override_virtual_fileName(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fileName = slot;
	return true;
}

struct miqt_string QSaveFile_virtualbase_fileName(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_fileName();
}

bool QSaveFile_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QSaveFile_virtualbase_open(void* self, int flags) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_open(flags);
}

bool QSaveFile_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QSaveFile_virtualbase_writeData(void* self, const char* data, long long len) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_writeData(data, len);
}

bool QSaveFile_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QSaveFile_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_isSequential();
}

bool QSaveFile_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QSaveFile_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_pos();
}

bool QSaveFile_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QSaveFile_virtualbase_seek(void* self, long long offset) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_seek(offset);
}

bool QSaveFile_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QSaveFile_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_atEnd();
}

bool QSaveFile_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QSaveFile_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_size();
}

bool QSaveFile_override_virtual_resize(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resize = slot;
	return true;
}

bool QSaveFile_virtualbase_resize(void* self, long long sz) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_resize(sz);
}

bool QSaveFile_override_virtual_permissions(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__permissions = slot;
	return true;
}

int QSaveFile_virtualbase_permissions(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_permissions();
}

bool QSaveFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPermissions = slot;
	return true;
}

bool QSaveFile_virtualbase_setPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_setPermissions(permissionSpec);
}

bool QSaveFile_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QSaveFile_virtualbase_readData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_readData(data, maxlen);
}

bool QSaveFile_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QSaveFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QSaveFile_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QSaveFile_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_reset();
}

bool QSaveFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QSaveFile_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_bytesAvailable();
}

bool QSaveFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QSaveFile_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_bytesToWrite();
}

bool QSaveFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QSaveFile_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_canReadLine();
}

bool QSaveFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QSaveFile_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QSaveFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QSaveFile_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QSaveFile_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSaveFile_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_event(event);
}

bool QSaveFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSaveFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSaveFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSaveFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_timerEvent(event);
}

bool QSaveFile_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSaveFile_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_childEvent(event);
}

bool QSaveFile_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSaveFile_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_customEvent(event);
}

bool QSaveFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSaveFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_connectNotify(signal);
}

bool QSaveFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSaveFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSaveFile*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSaveFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQSaveFile::OpenMode>(openMode));

}

void QSaveFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QSaveFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSaveFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSaveFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSaveFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSaveFile_delete(QSaveFile* self) {
	delete self;
}

