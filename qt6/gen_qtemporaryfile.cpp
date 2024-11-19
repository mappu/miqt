#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryFile>
#include <qtemporaryfile.h>
#include "gen_qtemporaryfile.h"
#include "_cgo_export.h"

class MiqtVirtualQTemporaryFile : public virtual QTemporaryFile {
public:

	MiqtVirtualQTemporaryFile(): QTemporaryFile() {};
	MiqtVirtualQTemporaryFile(const QString& templateName): QTemporaryFile(templateName) {};
	MiqtVirtualQTemporaryFile(QObject* parent): QTemporaryFile(parent) {};
	MiqtVirtualQTemporaryFile(const QString& templateName, QObject* parent): QTemporaryFile(templateName, parent) {};

	virtual ~MiqtVirtualQTemporaryFile() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__FileName == 0) {
			return QTemporaryFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTemporaryFile_FileName(const_cast<MiqtVirtualQTemporaryFile*>(this), handle__FileName);
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
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_Size(const_cast<MiqtVirtualQTemporaryFile*>(this), handle__Size);

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
		

		int callback_return_value = miqt_exec_callback_QTemporaryFile_Permissions(const_cast<MiqtVirtualQTemporaryFile*>(this), handle__Permissions);

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

};

void QTemporaryFile_new(QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQTemporaryFile* ret = new MiqtVirtualQTemporaryFile();
	*outptr_QTemporaryFile = ret;
	*outptr_QFile = static_cast<QFile*>(ret);
	*outptr_QFileDevice = static_cast<QFileDevice*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

void QTemporaryFile_new2(struct miqt_string templateName, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	MiqtVirtualQTemporaryFile* ret = new MiqtVirtualQTemporaryFile(templateName_QString);
	*outptr_QTemporaryFile = ret;
	*outptr_QFile = static_cast<QFile*>(ret);
	*outptr_QFileDevice = static_cast<QFileDevice*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

void QTemporaryFile_new3(QObject* parent, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQTemporaryFile* ret = new MiqtVirtualQTemporaryFile(parent);
	*outptr_QTemporaryFile = ret;
	*outptr_QFile = static_cast<QFile*>(ret);
	*outptr_QFileDevice = static_cast<QFileDevice*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

void QTemporaryFile_new4(struct miqt_string templateName, QObject* parent, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	MiqtVirtualQTemporaryFile* ret = new MiqtVirtualQTemporaryFile(templateName_QString, parent);
	*outptr_QTemporaryFile = ret;
	*outptr_QFile = static_cast<QFile*>(ret);
	*outptr_QFileDevice = static_cast<QFileDevice*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
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

void QTemporaryFile_override_virtual_FileName(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__FileName = slot;
}

struct miqt_string QTemporaryFile_virtualbase_FileName(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_FileName();
}

void QTemporaryFile_override_virtual_OpenWithFlags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__OpenWithFlags = slot;
}

bool QTemporaryFile_virtualbase_OpenWithFlags(void* self, int flags) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_OpenWithFlags(flags);
}

void QTemporaryFile_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__Size = slot;
}

long long QTemporaryFile_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Size();
}

void QTemporaryFile_override_virtual_Resize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__Resize = slot;
}

bool QTemporaryFile_virtualbase_Resize(void* self, long long sz) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Resize(sz);
}

void QTemporaryFile_override_virtual_Permissions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__Permissions = slot;
}

int QTemporaryFile_virtualbase_Permissions(const void* self) {
	return ( (const MiqtVirtualQTemporaryFile*)(self) )->virtualbase_Permissions();
}

void QTemporaryFile_override_virtual_SetPermissions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) )->handle__SetPermissions = slot;
}

bool QTemporaryFile_virtualbase_SetPermissions(void* self, int permissionSpec) {
	return ( (MiqtVirtualQTemporaryFile*)(self) )->virtualbase_SetPermissions(permissionSpec);
}

void QTemporaryFile_Delete(QTemporaryFile* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTemporaryFile*>( self );
	} else {
		delete self;
	}
}

