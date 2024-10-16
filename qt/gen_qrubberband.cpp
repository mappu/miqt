#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QRubberBand>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qrubberband.h>
#include "gen_qrubberband.h"
#include "_cgo_export.h"

QRubberBand* QRubberBand_new(int param1) {
	return new QRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
	return new QRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

QMetaObject* QRubberBand_MetaObject(const QRubberBand* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRubberBand_Metacast(QRubberBand* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QRubberBand_Tr(const char* s) {
	QString _ret = QRubberBand::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRubberBand_TrUtf8(const char* s) {
	QString _ret = QRubberBand::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QRubberBand_Shape(const QRubberBand* self) {
	QRubberBand::Shape _ret = self->shape();
	return static_cast<int>(_ret);
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

struct miqt_string* QRubberBand_Tr2(const char* s, const char* c) {
	QString _ret = QRubberBand::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRubberBand_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRubberBand_TrUtf82(const char* s, const char* c) {
	QString _ret = QRubberBand::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRubberBand_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QRubberBand_Delete(QRubberBand* self) {
	delete self;
}

