#include <QFrame>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qframe.h>
#include "gen_qframe.h"
#include "_cgo_export.h"

QFrame* QFrame_new() {
	return new QFrame();
}

QFrame* QFrame_new2(QWidget* parent) {
	return new QFrame(parent);
}

QFrame* QFrame_new3(QWidget* parent, int f) {
	return new QFrame(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QFrame_MetaObject(const QFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFrame_Metacast(QFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QFrame_Tr(const char* s) {
	QString _ret = QFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFrame_TrUtf8(const char* s) {
	QString _ret = QFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QFrame_FrameStyle(const QFrame* self) {
	return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_FrameWidth(const QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_SizeHint(const QFrame* self) {
	return new QSize(self->sizeHint());
}

int QFrame_FrameShape(const QFrame* self) {
	QFrame::Shape _ret = self->frameShape();
	return static_cast<int>(_ret);
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
	self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
	QFrame::Shadow _ret = self->frameShadow();
	return static_cast<int>(_ret);
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
	self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
	return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_MidLineWidth(const QFrame* self) {
	return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_FrameRect(const QFrame* self) {
	return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

struct miqt_string* QFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFrame_TrUtf82(const char* s, const char* c) {
	QString _ret = QFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFrame_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFrame_Delete(QFrame* self) {
	delete self;
}

