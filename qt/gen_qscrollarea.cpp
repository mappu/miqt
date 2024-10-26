#include <QMetaObject>
#include <QScrollArea>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qscrollarea.h>
#include "gen_qscrollarea.h"
#include "_cgo_export.h"

QScrollArea* QScrollArea_new(QWidget* parent) {
	return new QScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
	return new QScrollArea();
}

QMetaObject* QScrollArea_MetaObject(const QScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollArea_Metacast(QScrollArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollArea_Tr(const char* s) {
	QString _ret = QScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf8(const char* s) {
	QString _ret = QScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QScrollArea_Widget(const QScrollArea* self) {
	return self->widget();
}

void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QScrollArea_TakeWidget(QScrollArea* self) {
	return self->takeWidget();
}

bool QScrollArea_WidgetResizable(const QScrollArea* self) {
	return self->widgetResizable();
}

void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable) {
	self->setWidgetResizable(resizable);
}

QSize* QScrollArea_SizeHint(const QScrollArea* self) {
	return new QSize(self->sizeHint());
}

bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
	return self->focusNextPrevChild(next);
}

int QScrollArea_Alignment(const QScrollArea* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
	self->ensureWidgetVisible(childWidget);
}

struct miqt_string QScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf82(const char* s, const char* c) {
	QString _ret = QScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin));
}

void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin));
}

void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_Delete(QScrollArea* self) {
	delete self;
}

