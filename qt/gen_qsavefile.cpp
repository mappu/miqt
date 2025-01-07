#include <QFileDevice>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsavefile.h>
#include "gen_qsavefile.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QSaveFile_FileName(void*, intptr_t);
bool miqt_exec_callback_QSaveFile_Open(void*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_WriteData(void*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSaveFile_IsSequential(void*, intptr_t);
long long miqt_exec_callback_QSaveFile_Pos(void*, intptr_t);
bool miqt_exec_callback_QSaveFile_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_AtEnd(void*, intptr_t);
long long miqt_exec_callback_QSaveFile_Size(void*, intptr_t);
bool miqt_exec_callback_QSaveFile_Resize(void*, intptr_t, long long);
int miqt_exec_callback_QSaveFile_Permissions(void*, intptr_t);
bool miqt_exec_callback_QSaveFile_SetPermissions(void*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QSaveFile_ReadLineData(void*, intptr_t, char*, long long);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSaveFile : public virtual QSaveFile {
public:

	MiqtVirtualQSaveFile(const QString& name): QSaveFile(name) {};
	MiqtVirtualQSaveFile(): QSaveFile() {};
	MiqtVirtualQSaveFile(const QString& name, QObject* parent): QSaveFile(name, parent) {};
	MiqtVirtualQSaveFile(QObject* parent): QSaveFile(parent) {};

	virtual ~MiqtVirtualQSaveFile() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__FileName == 0) {
			return QSaveFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QSaveFile_FileName(const_cast<MiqtVirtualQSaveFile*>(this), handle__FileName);
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
	virtual bool open(QIODevice::OpenMode flags) override {
		if (handle__Open == 0) {
			return QSaveFile::open(flags);
		}
		
		QIODevice::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QSaveFile_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int flags) {

		return QSaveFile::open(static_cast<QIODevice::OpenMode>(flags));

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
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_IsSequential(const_cast<MiqtVirtualQSaveFile*>(this), handle__IsSequential);

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
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_Pos(const_cast<MiqtVirtualQSaveFile*>(this), handle__Pos);

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
		

		bool callback_return_value = miqt_exec_callback_QSaveFile_AtEnd(const_cast<MiqtVirtualQSaveFile*>(this), handle__AtEnd);

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
		

		long long callback_return_value = miqt_exec_callback_QSaveFile_Size(const_cast<MiqtVirtualQSaveFile*>(this), handle__Size);

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
		

		int callback_return_value = miqt_exec_callback_QSaveFile_Permissions(const_cast<MiqtVirtualQSaveFile*>(this), handle__Permissions);

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

struct miqt_string QSaveFile_TrUtf8(const char* s) {
	QString _ret = QSaveFile::trUtf8(s);
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
	return self->open(static_cast<QIODevice::OpenMode>(flags));
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

struct miqt_string QSaveFile_TrUtf82(const char* s, const char* c) {
	QString _ret = QSaveFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSaveFile_override_virtual_FileName(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__FileName = slot;
}

struct miqt_string QSaveFile_virtualbase_FileName(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_FileName();
}

void QSaveFile_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Open = slot;
}

bool QSaveFile_virtualbase_Open(void* self, int flags) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Open(flags);
}

void QSaveFile_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__WriteData = slot;
}

long long QSaveFile_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_WriteData(data, lenVal);
}

void QSaveFile_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__IsSequential = slot;
}

bool QSaveFile_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_IsSequential();
}

void QSaveFile_override_virtual_Pos(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Pos = slot;
}

long long QSaveFile_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Pos();
}

void QSaveFile_override_virtual_Seek(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Seek = slot;
}

bool QSaveFile_virtualbase_Seek(void* self, long long offset) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Seek(offset);
}

void QSaveFile_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__AtEnd = slot;
}

bool QSaveFile_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_AtEnd();
}

void QSaveFile_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Size = slot;
}

long long QSaveFile_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Size();
}

void QSaveFile_override_virtual_Resize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Resize = slot;
}

bool QSaveFile_virtualbase_Resize(void* self, long long sz) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_Resize(sz);
}

void QSaveFile_override_virtual_Permissions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__Permissions = slot;
}

int QSaveFile_virtualbase_Permissions(const void* self) {
	return ( (const MiqtVirtualQSaveFile*)(self) )->virtualbase_Permissions();
}

void QSaveFile_override_virtual_SetPermissions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__SetPermissions = slot;
}

bool QSaveFile_virtualbase_SetPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_SetPermissions(permissionSpec);
}

void QSaveFile_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__ReadData = slot;
}

long long QSaveFile_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QSaveFile_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) )->handle__ReadLineData = slot;
}

long long QSaveFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSaveFile*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QSaveFile_Delete(QSaveFile* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSaveFile*>( self );
	} else {
		delete self;
	}
}

