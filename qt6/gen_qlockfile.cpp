#include <QLockFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlockfile.h>
#include "gen_qlockfile.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLockFile* QLockFile_new(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QLockFile(fileName_QString);
}

struct miqt_string QLockFile_fileName(const QLockFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLockFile_lock(QLockFile* self) {
	return self->lock();
}

bool QLockFile_tryLock(QLockFile* self) {
	return self->tryLock();
}

void QLockFile_unlock(QLockFile* self) {
	self->unlock();
}

void QLockFile_setStaleLockTime(QLockFile* self, int staleLockTime) {
	self->setStaleLockTime(static_cast<int>(staleLockTime));
}

int QLockFile_staleLockTime(const QLockFile* self) {
	return self->staleLockTime();
}

bool QLockFile_isLocked(const QLockFile* self) {
	return self->isLocked();
}

bool QLockFile_removeStaleLockFile(QLockFile* self) {
	return self->removeStaleLockFile();
}

int QLockFile_error(const QLockFile* self) {
	QLockFile::LockError _ret = self->error();
	return static_cast<int>(_ret);
}

bool QLockFile_tryLock1(QLockFile* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QLockFile_delete(QLockFile* self) {
	delete self;
}

