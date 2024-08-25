#include "gen_qsizegrip.h"
#include "qsizegrip.h"

#include <QMetaObject>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	return new QSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(QSizeGrip* self) {
	return (QMetaObject*) self->metaObject();
}

void QSizeGrip_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSizeGrip_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QSizeGrip_SizeHint(QSizeGrip* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

void QSizeGrip_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSizeGrip_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSizeGrip_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSizeGrip_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSizeGrip::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSizeGrip_Delete(QSizeGrip* self) {
	delete self;
}

