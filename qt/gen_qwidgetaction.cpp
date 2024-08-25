#include "gen_qwidgetaction.h"
#include "qwidgetaction.h"

#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QWidget>
#include <QWidgetAction>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWidgetAction* QWidgetAction_new(QObject* parent) {
	return new QWidgetAction(parent);
}

QMetaObject* QWidgetAction_MetaObject(QWidgetAction* self) {
	return (QMetaObject*) self->metaObject();
}

void QWidgetAction_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

void QWidgetAction_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QWidgetAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWidgetAction_Delete(QWidgetAction* self) {
	delete self;
}

