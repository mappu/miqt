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
#include "_cgo_export.h"

QScrollBar* QScrollBar_new() {
	return new QScrollBar();
}

QScrollBar* QScrollBar_new2(int param1) {
	return new QScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new3(QWidget* parent) {
	return new QScrollBar(parent);
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
	return new QScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QScrollBar_MetaObject(const QScrollBar* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QScrollBar_Tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScrollBar_TrUtf8(const char* s) {
	QString _ret = QScrollBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string* QScrollBar_Tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScrollBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScrollBar_TrUtf82(const char* s, const char* c) {
	QString _ret = QScrollBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScrollBar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QScrollBar_Delete(QScrollBar* self) {
	delete self;
}

