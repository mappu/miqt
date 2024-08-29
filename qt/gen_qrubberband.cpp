#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QRubberBand>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qrubberband.h"

#include "gen_qrubberband.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRubberBand* QRubberBand_new(uintptr_t param1) {
	return new QRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(uintptr_t param1, QWidget* param2) {
	return new QRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

QMetaObject* QRubberBand_MetaObject(QRubberBand* self) {
	return (QMetaObject*) const_cast<const QRubberBand*>(self)->metaObject();
}

void QRubberBand_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRubberBand_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QRubberBand_Shape(QRubberBand* self) {
	QRubberBand::Shape ret = const_cast<const QRubberBand*>(self)->shape();
	return static_cast<uintptr_t>(ret);
}

void QRubberBand_SetGeometry(QRubberBand* self, QRect* r) {
	self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QRubberBand_MoveWithQPoint(QRubberBand* self, QPoint* p) {
	self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_ResizeWithQSize(QRubberBand* self, QSize* s) {
	self->resize(*s);
}

void QRubberBand_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRubberBand_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRubberBand_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRubberBand_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRubberBand::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRubberBand_Delete(QRubberBand* self) {
	delete self;
}

