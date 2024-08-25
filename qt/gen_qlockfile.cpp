#include "gen_qlockfile.h"
#include "qlockfile.h"

#include <QLockFile>
#include <QString>


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

int QLockFile_StaleLockTime(QLockFile* self) {
	return self->staleLockTime();
}

bool QLockFile_IsLocked(QLockFile* self) {
	return self->isLocked();
}

bool QLockFile_RemoveStaleLockFile(QLockFile* self) {
	return self->removeStaleLockFile();
}

bool QLockFile_TryLock1(QLockFile* self, int timeout) {
	return self->tryLock(static_cast<int>(timeout));
}

void QLockFile_Delete(QLockFile* self) {
	delete self;
}

