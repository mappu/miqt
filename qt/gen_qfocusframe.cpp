#include <QFocusFrame>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qfocusframe.h"

#include "gen_qfocusframe.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFocusFrame* QFocusFrame_new() {
	return new QFocusFrame();
}

QFocusFrame* QFocusFrame_new2(QWidget* parent) {
	return new QFocusFrame(parent);
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void QFocusFrame_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
	return self->widget();
}

void QFocusFrame_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFocusFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFocusFrame_Delete(QFocusFrame* self) {
	delete self;
}

