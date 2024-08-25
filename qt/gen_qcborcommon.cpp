#include "gen_qcborcommon.h"
#include "qcborcommon.h"

#include <QCborError>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QCborError_ToString(QCborError* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCborError_Delete(QCborError* self) {
	delete self;
}

