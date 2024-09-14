#include <QMetaObject>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qsizegrip.h"
#include "gen_qsizegrip.h"
#include "_cgo_export.h"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	return new QSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QSizeGrip_Tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSizeGrip_TrUtf8(const char* s) {
	QString _ret = QSizeGrip::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
	QSize _ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string* QSizeGrip_Tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSizeGrip_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSizeGrip_TrUtf82(const char* s, const char* c) {
	QString _ret = QSizeGrip::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSizeGrip_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSizeGrip_Delete(QSizeGrip* self) {
	delete self;
}

