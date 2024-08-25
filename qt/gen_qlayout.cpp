#include "gen_qlayout.h"
#include "qlayout.h"

#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QLayout_MetaObject(QLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void QLayout_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLayout_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QLayout_Margin(QLayout* self) {
	return self->margin();
}

void QLayout_SetMargin(QLayout* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QLayout_Spacing(QLayout* self) {
	return self->spacing();
}

void QLayout_SetSpacing(QLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLayout_SetContentsMarginsWithMargins(QLayout* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QLayout_GetContentsMargins(QLayout* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_ContentsMargins(QLayout* self) {
	QMargins ret = self->contentsMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

QRect* QLayout_ContentsRect(QLayout* self) {
	QRect ret = self->contentsRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
	self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(QLayout* self) {
	return self->menuBar();
}

QWidget* QLayout_ParentWidget(QLayout* self) {
	return self->parentWidget();
}

void QLayout_Invalidate(QLayout* self) {
	self->invalidate();
}

QRect* QLayout_Geometry(QLayout* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QLayout_Activate(QLayout* self) {
	return self->activate();
}

void QLayout_Update(QLayout* self) {
	self->update();
}

void QLayout_AddWidget(QLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QLayout_AddItem(QLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QLayout_RemoveWidget(QLayout* self, QWidget* w) {
	self->removeWidget(w);
}

void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1) {
	self->removeItem(param1);
}

QSize* QLayout_MinimumSize(QLayout* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayout_MaximumSize(QLayout* self) {
	QSize ret = self->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLayout_SetGeometry(QLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QLayoutItem* QLayout_ItemAt(QLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QLayout_IndexOf(QLayout* self, QWidget* param1) {
	return self->indexOf(param1);
}

int QLayout_IndexOfWithQLayoutItem(QLayout* self, QLayoutItem* param1) {
	return self->indexOf(param1);
}

int QLayout_Count(QLayout* self) {
	return self->count();
}

bool QLayout_IsEmpty(QLayout* self) {
	return self->isEmpty();
}

int QLayout_TotalHeightForWidth(QLayout* self, int w) {
	return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_TotalMinimumSize(QLayout* self) {
	QSize ret = self->totalMinimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayout_TotalMaximumSize(QLayout* self) {
	QSize ret = self->totalMaximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QLayout_TotalSizeHint(QLayout* self) {
	QSize ret = self->totalSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QLayout* QLayout_Layout(QLayout* self) {
	return self->layout();
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QLayout_IsEnabled(QLayout* self) {
	return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(QWidget* w, QSize* s) {
	QSize ret = QLayout::closestAcceptableSize(w, *s);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLayout_Delete(QLayout* self) {
	delete self;
}

