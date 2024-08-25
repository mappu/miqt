#include "gen_qabstractscrollarea.h"
#include "qabstractscrollarea.h"

#include <QAbstractScrollArea>
#include <QMetaObject>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAbstractScrollArea* QAbstractScrollArea_new() {
	return new QAbstractScrollArea();
}

QAbstractScrollArea* QAbstractScrollArea_new2(QWidget* parent) {
	return new QAbstractScrollArea(parent);
}

QMetaObject* QAbstractScrollArea_MetaObject(QAbstractScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void QAbstractScrollArea_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractScrollArea_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(QAbstractScrollArea* self) {
	return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setVerticalScrollBar(scrollbar);
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(QAbstractScrollArea* self) {
	return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(QAbstractScrollArea* self) {
	return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
	self->setCornerWidget(widget);
}

QWidget* QAbstractScrollArea_Viewport(QAbstractScrollArea* self) {
	return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
	self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(QAbstractScrollArea* self) {
	QSize ret = self->maximumViewportSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QAbstractScrollArea_MinimumSizeHint(QAbstractScrollArea* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QAbstractScrollArea_SizeHint(QAbstractScrollArea* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	self->setupViewport(viewport);
}

void QAbstractScrollArea_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractScrollArea_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractScrollArea_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractScrollArea_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
	delete self;
}

