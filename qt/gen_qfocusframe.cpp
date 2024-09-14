#include <QFocusFrame>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qfocusframe.h"
#include "gen_qfocusframe.h"
#include "_cgo_export.h"

QFocusFrame* QFocusFrame_new() {
	return new QFocusFrame();
}

QFocusFrame* QFocusFrame_new2(QWidget* parent) {
	return new QFocusFrame(parent);
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QFocusFrame_Tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFocusFrame_TrUtf8(const char* s) {
	QString _ret = QFocusFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
	return self->widget();
}

struct miqt_string* QFocusFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFocusFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFocusFrame_TrUtf82(const char* s, const char* c) {
	QString _ret = QFocusFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFocusFrame_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QFocusFrame_Delete(QFocusFrame* self) {
	delete self;
}

