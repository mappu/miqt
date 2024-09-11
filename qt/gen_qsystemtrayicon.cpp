#include <QIcon>
#include <QMenu>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemTrayIcon>
#include "qsystemtrayicon.h"

#include "gen_qsystemtrayicon.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSystemTrayIcon* QSystemTrayIcon_new() {
	return new QSystemTrayIcon();
}

QSystemTrayIcon* QSystemTrayIcon_new2(QIcon* icon) {
	return new QSystemTrayIcon(*icon);
}

QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent) {
	return new QSystemTrayIcon(parent);
}

QSystemTrayIcon* QSystemTrayIcon_new4(QIcon* icon, QObject* parent) {
	return new QSystemTrayIcon(*icon, parent);
}

QMetaObject* QSystemTrayIcon_MetaObject(const QSystemTrayIcon* self) {
	return (QMetaObject*) self->metaObject();
}

void QSystemTrayIcon_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu) {
	self->setContextMenu(menu);
}

QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self) {
	return self->contextMenu();
}

QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	self->setToolTip(tip_QString);
}

bool QSystemTrayIcon_IsSystemTrayAvailable() {
	return QSystemTrayIcon::isSystemTrayAvailable();
}

bool QSystemTrayIcon_SupportsMessages() {
	return QSystemTrayIcon::supportsMessages();
}

QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self) {
	return self->isVisible();
}

void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible) {
	self->setVisible(visible);
}

void QSystemTrayIcon_Show(QSystemTrayIcon* self) {
	self->show();
}

void QSystemTrayIcon_Hide(QSystemTrayIcon* self) {
	self->hide();
}

void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, QIcon* icon) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString msg_QString = QString::fromUtf8(msg, msg_Strlen);
	self->showMessage(title_QString, msg_QString, *icon);
}

void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString msg_QString = QString::fromUtf8(msg, msg_Strlen);
	self->showMessage(title_QString, msg_QString);
}

void QSystemTrayIcon_Activated(QSystemTrayIcon* self, uintptr_t reason) {
	self->activated(static_cast<QSystemTrayIcon::ActivationReason>(reason));
}

void QSystemTrayIcon_connect_Activated(QSystemTrayIcon* self, void* slot) {
	QSystemTrayIcon::connect(self, static_cast<void (QSystemTrayIcon::*)(QSystemTrayIcon::ActivationReason)>(&QSystemTrayIcon::activated), self, [=](QSystemTrayIcon::ActivationReason reason) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
	self->messageClicked();
}

void QSystemTrayIcon_connect_MessageClicked(QSystemTrayIcon* self, void* slot) {
	QSystemTrayIcon::connect(self, static_cast<void (QSystemTrayIcon::*)()>(&QSystemTrayIcon::messageClicked), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSystemTrayIcon_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, QIcon* icon, int msecs) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString msg_QString = QString::fromUtf8(msg, msg_Strlen);
	self->showMessage(title_QString, msg_QString, *icon, static_cast<int>(msecs));
}

void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, uintptr_t icon) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString msg_QString = QString::fromUtf8(msg, msg_Strlen);
	self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon));
}

void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, uintptr_t icon, int msecs) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	QString msg_QString = QString::fromUtf8(msg, msg_Strlen);
	self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon), static_cast<int>(msecs));
}

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
	delete self;
}

