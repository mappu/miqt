#include <QMetaObject>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qparallelanimationgroup.h"
#include "gen_qparallelanimationgroup.h"
#include "_cgo_export.h"

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	return new QParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	return new QParallelAnimationGroup(parent);
}

QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QParallelAnimationGroup_Tr(const char* s) {
	QString _ret = QParallelAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QParallelAnimationGroup_TrUtf8(const char* s) {
	QString _ret = QParallelAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
	return self->duration();
}

struct miqt_string* QParallelAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QParallelAnimationGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QParallelAnimationGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
	delete self;
}

