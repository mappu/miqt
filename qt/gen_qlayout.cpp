#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qlayout.h>
#include "gen_qlayout.h"
#include "_cgo_export.h"

QMetaObject* QLayout_MetaObject(const QLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLayout_Metacast(QLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLayout_Tr(const char* s) {
	QString _ret = QLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_TrUtf8(const char* s) {
	QString _ret = QLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLayout_Margin(const QLayout* self) {
	return self->margin();
}

void QLayout_SetMargin(QLayout* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QLayout_Spacing(const QLayout* self) {
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

void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_ContentsMargins(const QLayout* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QLayout_ContentsRect(const QLayout* self) {
	return new QRect(self->contentsRect());
}

bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment) {
	return self->setAlignment(w, static_cast<Qt::Alignment>(alignment));
}

bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment) {
	return self->setAlignment(l, static_cast<Qt::Alignment>(alignment));
}

void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint) {
	self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_SizeConstraint(const QLayout* self) {
	QLayout::SizeConstraint _ret = self->sizeConstraint();
	return static_cast<int>(_ret);
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
	self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(const QLayout* self) {
	return self->menuBar();
}

QWidget* QLayout_ParentWidget(const QLayout* self) {
	return self->parentWidget();
}

void QLayout_Invalidate(QLayout* self) {
	self->invalidate();
}

QRect* QLayout_Geometry(const QLayout* self) {
	return new QRect(self->geometry());
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

int QLayout_ExpandingDirections(const QLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

QSize* QLayout_MinimumSize(const QLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayout_MaximumSize(const QLayout* self) {
	return new QSize(self->maximumSize());
}

void QLayout_SetGeometry(QLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QLayoutItem* QLayout_ItemAt(const QLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QLayout_IndexOf(const QLayout* self, QWidget* param1) {
	return self->indexOf(param1);
}

int QLayout_IndexOfWithQLayoutItem(const QLayout* self, QLayoutItem* param1) {
	return self->indexOf(param1);
}

int QLayout_Count(const QLayout* self) {
	return self->count();
}

bool QLayout_IsEmpty(const QLayout* self) {
	return self->isEmpty();
}

int QLayout_ControlTypes(const QLayout* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to) {
	return self->replaceWidget(from, to);
}

int QLayout_TotalHeightForWidth(const QLayout* self, int w) {
	return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_TotalMinimumSize(const QLayout* self) {
	return new QSize(self->totalMinimumSize());
}

QSize* QLayout_TotalMaximumSize(const QLayout* self) {
	return new QSize(self->totalMaximumSize());
}

QSize* QLayout_TotalSizeHint(const QLayout* self) {
	return new QSize(self->totalSizeHint());
}

QLayout* QLayout_Layout(QLayout* self) {
	return self->layout();
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QLayout_IsEnabled(const QLayout* self) {
	return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(QWidget* w, QSize* s) {
	return new QSize(QLayout::closestAcceptableSize(w, *s));
}

struct miqt_string QLayout_Tr2(const char* s, const char* c) {
	QString _ret = QLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QLayoutItem* QLayout_ReplaceWidget3(QLayout* self, QWidget* from, QWidget* to, int options) {
	return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

void QLayout_Delete(QLayout* self) {
	delete self;
}

