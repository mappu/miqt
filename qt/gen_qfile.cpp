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

struct miqt_string miqt_exec_callback_QFile_fileName(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_open(QFile*, intptr_t, int);
long long miqt_exec_callback_QFile_size(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_resize(QFile*, intptr_t, long long);
int miqt_exec_callback_QFile_permissions(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_setPermissions(QFile*, intptr_t, int);
void miqt_exec_callback_QFile_close(QFile*, intptr_t);
bool miqt_exec_callback_QFile_isSequential(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_pos(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_seek(QFile*, intptr_t, long long);
bool miqt_exec_callback_QFile_atEnd(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_readData(QFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QFile_writeData(QFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QFile_readLineData(QFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QFile_reset(QFile*, intptr_t);
long long miqt_exec_callback_QFile_bytesAvailable(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_bytesToWrite(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_canReadLine(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_waitForReadyRead(QFile*, intptr_t, int);
bool miqt_exec_callback_QFile_waitForBytesWritten(QFile*, intptr_t, int);
bool miqt_exec_callback_QFile_event(QFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QFile_eventFilter(QFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFile_timerEvent(QFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFile_childEvent(QFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFile_customEvent(QFile*, intptr_t, QEvent*);
void miqt_exec_callback_QFile_connectNotify(QFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFile_disconnectNotify(QFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFile final : public QFile {
public:

	MiqtVirtualQFile(): QFile() {}
	MiqtVirtualQFile(const QString& name): QFile(name) {}
	MiqtVirtualQFile(QObject* parent): QFile(parent) {}
	MiqtVirtualQFile(const QString& name, QObject* parent): QFile(name, parent) {}

	virtual ~MiqtVirtualQFile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__fileName == 0) {
			return QFile::fileName();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QFile_fileName(this, handle__fileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QFile_virtualbase_fileName(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode flags) override {
		if (handle__open == 0) {
			return QFile::open(flags);
		}

		QIODevice::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);
		bool callback_return_value = miqt_exec_callback_QFile_open(this, handle__open, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_open(void* self, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QFile::size();
		}

		long long callback_return_value = miqt_exec_callback_QFile_size(this, handle__size);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__resize == 0) {
			return QFile::resize(sz);
		}

		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);
		bool callback_return_value = miqt_exec_callback_QFile_resize(this, handle__resize, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_resize(void* self, long long sz);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__permissions == 0) {
			return QFile::permissions();
		}

		int callback_return_value = miqt_exec_callback_QFile_permissions(this, handle__permissions);
		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	friend int QFile_virtualbase_permissions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__setPermissions == 0) {
			return QFile::setPermissions(permissionSpec);
		}

		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);
		bool callback_return_value = miqt_exec_callback_QFile_setPermissions(this, handle__setPermissions, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_setPermissions(void* self, int permissionSpec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QFile::close();
			return;
		}

		miqt_exec_callback_QFile_close(this, handle__close);

	}

	friend void QFile_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QFile::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QFile_isSequential(this, handle__isSequential);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QFile::pos();
		}

		long long callback_return_value = miqt_exec_callback_QFile_pos(this, handle__pos);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__seek == 0) {
			return QFile::seek(offset);
		}

		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);
		bool callback_return_value = miqt_exec_callback_QFile_seek(this, handle__seek, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_seek(void* self, long long offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QFile::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QFile_atEnd(this, handle__atEnd);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QFile::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QFile_readData(this, handle__readData, sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QFile::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QFile_writeData(this, handle__writeData, sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QFile::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QFile_readLineData(this, handle__readLineData, sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QFile::reset();
		}

		bool callback_return_value = miqt_exec_callback_QFile_reset(this, handle__reset);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QFile::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QFile_bytesAvailable(this, handle__bytesAvailable);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QFile::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QFile_bytesToWrite(this, handle__bytesToWrite);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QFile::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QFile_canReadLine(this, handle__canReadLine);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QFile::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QFile_waitForReadyRead(this, handle__waitForReadyRead, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QFile::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QFile_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFile::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QFile_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFile::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QFile_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFile::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QFile_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QFile_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFile::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QFile_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QFile_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFile::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFile_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QFile_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFile::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFile_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFile::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFile_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFile* QFile_new() {
	return new (std::nothrow) MiqtVirtualQFile();
}

QFile* QFile_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQFile(parent);
}

QFile* QFile_new4(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQFile(name_QString, parent);
}

void QFile_virtbase(QFile* src, QFileDevice** outptr_QFileDevice) {
	*outptr_QFileDevice = static_cast<QFileDevice*>(src);
}

QMetaObject* QFile_metaObject(const QFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFile_metacast(QFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFile_tr(const char* s) {
	QString _ret = QFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_trUtf8(const char* s) {
	QString _ret = QFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_fileName(const QFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFile_setFileName(QFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

struct miqt_string QFile_encodeName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QFile::encodeName(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_decodeName(struct miqt_string localFileName) {
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

struct miqt_string QFile_decodeNameWithLocalFileName(const char* localFileName) {
	QString _ret = QFile::decodeName(localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_exists(const QFile* self) {
	return self->exists();
}

bool QFile_existsWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::exists(fileName_QString);
}

struct miqt_string QFile_readLink(const QFile* self) {
	QString _ret = self->readLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_readLinkWithFileName(struct miqt_string fileName) {
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

struct miqt_string QFile_symLinkTarget(const QFile* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_symLinkTargetWithFileName(struct miqt_string fileName) {
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

bool QFile_remove(QFile* self) {
	return self->remove();
}

bool QFile_removeWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::remove(fileName_QString);
}

bool QFile_moveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_moveToTrashWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::moveToTrash(fileName_QString);
}

bool QFile_rename(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

bool QFile_rename2(struct miqt_string oldName, struct miqt_string newName) {
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_link(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->link(newName_QString);
}

bool QFile_link2(struct miqt_string oldname, struct miqt_string newName) {
	QString oldname_QString = QString::fromUtf8(oldname.data, oldname.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::link(oldname_QString, newName_QString);
}

bool QFile_copy(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->copy(newName_QString);
}

bool QFile_copy2(struct miqt_string fileName, struct miqt_string newName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_open(QFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QFile_open3(QFile* self, int fd, int ioFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags));
}

long long QFile_size(const QFile* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFile_resize(QFile* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

bool QFile_resize2(struct miqt_string filename, long long sz) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_permissions(const QFile* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

int QFile_permissionsWithFilename(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QFileDevice::Permissions _ret = QFile::permissions(filename_QString);
	return static_cast<int>(_ret);
}

bool QFile_setPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_setPermissions2(struct miqt_string filename, int permissionSpec) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

struct miqt_string QFile_tr2(const char* s, const char* c) {
	QString _ret = QFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_trUtf82(const char* s, const char* c) {
	QString _ret = QFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_open5(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODevice::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

bool QFile_override_virtual_fileName(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fileName = slot;
	return true;
}

struct miqt_string QFile_virtualbase_fileName(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = slot;
	return true;
}

bool QFile_virtualbase_open(void* self, int flags) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::open(static_cast<MiqtVirtualQFile::OpenMode>(flags));
}

bool QFile_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = slot;
	return true;
}

long long QFile_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::size();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_resize(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resize = slot;
	return true;
}

bool QFile_virtualbase_resize(void* self, long long sz) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::resize(static_cast<qint64>(sz));
}

bool QFile_override_virtual_permissions(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__permissions = slot;
	return true;
}

int QFile_virtualbase_permissions(const void* self) {
	MiqtVirtualQFile::Permissions _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::permissions();
	return static_cast<int>(_ret);
}

bool QFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPermissions = slot;
	return true;
}

bool QFile_virtualbase_setPermissions(void* self, int permissionSpec) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::setPermissions(static_cast<MiqtVirtualQFile::Permissions>(permissionSpec));
}

bool QFile_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = slot;
	return true;
}

void QFile_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::close();
}

bool QFile_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = slot;
	return true;
}

bool QFile_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::isSequential();
}

bool QFile_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = slot;
	return true;
}

long long QFile_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::pos();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = slot;
	return true;
}

bool QFile_virtualbase_seek(void* self, long long offset) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::seek(static_cast<qint64>(offset));
}

bool QFile_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = slot;
	return true;
}

bool QFile_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::atEnd();
}

bool QFile_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = slot;
	return true;
}

long long QFile_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = slot;
	return true;
}

long long QFile_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = slot;
	return true;
}

long long QFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

bool QFile_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::reset();
}

bool QFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QFile_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QFile_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = slot;
	return true;
}

bool QFile_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::canReadLine();
}

bool QFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QFile_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::waitForReadyRead(static_cast<int>(msecs));
}

bool QFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QFile_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::waitForBytesWritten(static_cast<int>(msecs));
}

bool QFile_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QFile_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::event(event);
}

bool QFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::eventFilter(watched, event);
}

bool QFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::timerEvent(event);
}

bool QFile_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QFile_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::childEvent(event);
}

bool QFile_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QFile_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::customEvent(event);
}

bool QFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::connectNotify(*signal);
}

bool QFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::disconnectNotify(*signal);
}

void QFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQFile::OpenMode>(openMode));
}

void QFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFile_delete(QFile* self) {
	delete self;
}

