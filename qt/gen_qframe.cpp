#include "gen_qframe.h"
#include "qframe.h"

#include <QFrame>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QFrame_MetaObject(QFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void QFrame_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFrame_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QFrame_FrameStyle(QFrame* self) {
	return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(static_cast<int>(frameStyle));
}

int QFrame_FrameWidth(QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_SizeHint(QFrame* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QFrame_LineWidth(QFrame* self) {
	return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QFrame_MidLineWidth(QFrame* self) {
	return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(static_cast<int>(midLineWidth));
}

QRect* QFrame_FrameRect(QFrame* self) {
	QRect ret = self->frameRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QFrame_SetFrameRect(QFrame* self, QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

void QFrame_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFrame_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFrame_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFrame_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFrame_Delete(QFrame* self) {
	delete self;
}

