#include <QLockFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qlockfile.h"

#include "gen_qlockfile.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLockFile* QLockFile_new(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QLockFile(fileName_QString);
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

uintptr_t QLockFile_Error(const QLockFile* self) {
	QLockFile::LockError ret = self->error();
	return static_cast<uintptr_t>(ret);
}

bool QLockFile_TryLock1(QLockFile* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QLockFile_Delete(QLockFile* self) {
	delete self;
}

