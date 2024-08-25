#include "gen_qfileiconprovider.h"
#include "qfileiconprovider.h"

#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileIconProvider* QFileIconProvider_new() {
	return new QFileIconProvider();
}

QIcon* QFileIconProvider_Icon(QFileIconProvider* self, QFileInfo* info) {
	QIcon ret = self->icon(*info);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QFileIconProvider_Type(QFileIconProvider* self, QFileInfo* info, char** _out, int* _out_Strlen) {
	QString ret = self->type(*info);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileIconProvider_Delete(QFileIconProvider* self) {
	delete self;
}

