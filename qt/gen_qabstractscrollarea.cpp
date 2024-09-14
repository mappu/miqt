#include <QAbstractScrollArea>
#include <QList>
#include <QMetaObject>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qabstractscrollarea.h"
#include "gen_qabstractscrollarea.h"
#include "_cgo_export.h"

QAbstractScrollArea* QAbstractScrollArea_new() {
	return new QAbstractScrollArea();
}

QAbstractScrollArea* QAbstractScrollArea_new2(QWidget* parent) {
	return new QAbstractScrollArea(parent);
}

QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QAbstractScrollArea_Tr(const char* s) {
	QString _ret = QAbstractScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractScrollArea_TrUtf8(const char* s) {
	QString _ret = QAbstractScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->verticalScrollBarPolicy();
	return static_cast<uintptr_t>(_ret);
}

void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, uintptr_t verticalScrollBarPolicy) {
	self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
	return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setVerticalScrollBar(scrollbar);
}

uintptr_t QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->horizontalScrollBarPolicy();
	return static_cast<uintptr_t>(_ret);
}

void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, uintptr_t horizontalScrollBarPolicy) {
	self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
	return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self) {
	return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
	self->setCornerWidget(widget);
}

void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
	self->addScrollBarWidget(widget, static_cast<Qt::Alignment>(alignment));
}

struct miqt_array* QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment) {
	QWidgetList _ret = self->scrollBarWidgets(static_cast<Qt::Alignment>(alignment));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self) {
	return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
	self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self) {
	QSize _ret = self->maximumViewportSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self) {
	QSize _ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
	QSize _ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	self->setupViewport(viewport);
}

uintptr_t QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
	QAbstractScrollArea::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<uintptr_t>(_ret);
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, uintptr_t policy) {
	self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

struct miqt_string* QAbstractScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractScrollArea_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractScrollArea_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
	delete self;
}

