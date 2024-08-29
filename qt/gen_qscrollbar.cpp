#include <QEvent>
#include <QMetaObject>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qscrollbar.h"

#include "gen_qscrollbar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QScrollBar* QScrollBar_new() {
	return new QScrollBar();
}

QScrollBar* QScrollBar_new2(uintptr_t param1) {
	return new QScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new3(QWidget* parent) {
	return new QScrollBar(parent);
}

QScrollBar* QScrollBar_new4(uintptr_t param1, QWidget* parent) {
	return new QScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QScrollBar_MetaObject(QScrollBar* self) {
	return (QMetaObject*) const_cast<const QScrollBar*>(self)->metaObject();
}

void QScrollBar_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScrollBar_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QScrollBar_SizeHint(QScrollBar* self) {
	QSize ret = const_cast<const QScrollBar*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

void QScrollBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScrollBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScrollBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScrollBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScrollBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScrollBar_Delete(QScrollBar* self) {
	delete self;
}

