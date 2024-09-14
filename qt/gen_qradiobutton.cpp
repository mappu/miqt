#include <QMetaObject>
#include <QRadioButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qradiobutton.h"
#include "gen_qradiobutton.h"
#include "_cgo_export.h"

QRadioButton* QRadioButton_new() {
	return new QRadioButton();
}

QRadioButton* QRadioButton_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QRadioButton(text_QString);
}

QRadioButton* QRadioButton_new3(QWidget* parent) {
	return new QRadioButton(parent);
}

QRadioButton* QRadioButton_new4(struct miqt_string* text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QRadioButton(text_QString, parent);
}

QMetaObject* QRadioButton_MetaObject(const QRadioButton* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QRadioButton_Tr(const char* s) {
	QString _ret = QRadioButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRadioButton_TrUtf8(const char* s) {
	QString _ret = QRadioButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QRadioButton_SizeHint(const QRadioButton* self) {
	QSize _ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
	QSize _ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

struct miqt_string* QRadioButton_Tr2(const char* s, const char* c) {
	QString _ret = QRadioButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRadioButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRadioButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QRadioButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QRadioButton_Delete(QRadioButton* self) {
	delete self;
}

