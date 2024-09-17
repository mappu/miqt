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
#include "_cgo_export.h"

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

struct miqt_string* QUndoView_Tr(const char* s) {
	QString _ret = QUndoView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoView_TrUtf8(const char* s) {
	QString _ret = QUndoView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
	return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, struct miqt_string* label) {
	QString label_QString = QString::fromUtf8(&label->data, label->len);
	self->setEmptyLabel(label_QString);
}

struct miqt_string* QUndoView_EmptyLabel(const QUndoView* self) {
	QString _ret = self->emptyLabel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
	return new QIcon(self->cleanIcon());
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

struct miqt_string* QUndoView_Tr2(const char* s, const char* c) {
	QString _ret = QUndoView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoView_TrUtf82(const char* s, const char* c) {
	QString _ret = QUndoView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUndoView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUndoView_Delete(QUndoView* self) {
	delete self;
}

