#include <QLockFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlockfile.h>
#include "gen_qlockfile.h"
#include "_cgo_export.h"

void QLockFile_new(struct miqt_string fileName, QLockFile** outptr_QLockFile) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QLockFile* ret = new QLockFile(fileName_QString);
	*outptr_QLockFile = ret;
}

bool QLockFile_Lock(QLockFile* self) {
	return self->lock();
}

bool QLockFile_TryLock(QLockFile* self) {
	return self->tryLock();
}

void QLockFile_Unlock(QLockFile* self) {
	self->unlock();
}

void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime) {
	self->setStaleLockTime(static_cast<int>(staleLockTime));
}

int QLockFile_StaleLockTime(const QLockFile* self) {
	return self->staleLockTime();
}

bool QLockFile_IsLocked(const QLockFile* self) {
	return self->isLocked();
}

bool QLockFile_RemoveStaleLockFile(QLockFile* self) {
	return self->removeStaleLockFile();
}

int QLockFile_Error(const QLockFile* self) {
	QLockFile::LockError _ret = self->error();
	return static_cast<int>(_ret);
}

bool QLockFile_TryLock1(QLockFile* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QLockFile_Delete(QLockFile* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLockFile*>( self );
	} else {
		delete self;
	}
}

