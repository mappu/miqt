#include <QIcon>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QWidget>
#include "qundoview.h"

#include "gen_qundoview.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUndoView* QUndoView_new() {
	return new QUndoView();
}

QUndoView* QUndoView_new2(QUndoStack* stack) {
	return new QUndoView(stack);
}

QUndoView* QUndoView_new3(QUndoGroup* group) {
	return new QUndoView(group);
}

QUndoView* QUndoView_new4(QWidget* parent) {
	return new QUndoView(parent);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
	return new QUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
	return new QUndoView(group, parent);
}

QMetaObject* QUndoView_MetaObject(const QUndoView* self) {
	return (QMetaObject*) self->metaObject();
}

void QUndoView_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
	return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, const char* label, size_t label_Strlen) {
	QString label_QString = QString::fromUtf8(label, label_Strlen);
	self->setEmptyLabel(label_QString);
}

void QUndoView_EmptyLabel(const QUndoView* self, char** _out, int* _out_Strlen) {
	QString ret = self->emptyLabel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
	QIcon ret = self->cleanIcon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

void QUndoView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoView_Delete(QUndoView* self) {
	delete self;
}

