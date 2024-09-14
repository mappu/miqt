#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWidgetAction>
#include "qwidgetaction.h"
#include "gen_qwidgetaction.h"
#include "_cgo_export.h"

QWidgetAction* QWidgetAction_new(QObject* parent) {
	return new QWidgetAction(parent);
}

QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QWidgetAction_Tr(const char* s) {
	QString _ret = QWidgetAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWidgetAction_TrUtf8(const char* s) {
	QString _ret = QWidgetAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

struct miqt_string* QWidgetAction_Tr2(const char* s, const char* c) {
	QString _ret = QWidgetAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWidgetAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWidgetAction_TrUtf82(const char* s, const char* c) {
	QString _ret = QWidgetAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QWidgetAction_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QWidgetAction_Delete(QWidgetAction* self) {
	delete self;
}

