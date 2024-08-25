#include "gen_qsystemsemaphore.h"
#include "qsystemsemaphore.h"

#include <QString>
#include <QSystemSemaphore>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QSystemSemaphore_Key(QSystemSemaphore* self, char** _out, int* _out_Strlen) {
	QString ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSystemSemaphore_Acquire(QSystemSemaphore* self) {
	return self->acquire();
}

bool QSystemSemaphore_Release(QSystemSemaphore* self) {
	return self->release();
}

void QSystemSemaphore_ErrorString(QSystemSemaphore* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n) {
	return self->release(static_cast<int>(n));
}

void QSystemSemaphore_Delete(QSystemSemaphore* self) {
	delete self;
}

