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
#include "_cgo_export.h"

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

struct miqt_string* QSystemTrayIcon_Tr(const char* s) {
	QString _ret = QSystemTrayIcon::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSystemTrayIcon_TrUtf8(const char* s) {
	QString _ret = QSystemTrayIcon::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu) {
	self->setContextMenu(menu);
}

QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self) {
	return self->contextMenu();
}

QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self) {
	QIcon _ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(_ret));
}

void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string* QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, struct miqt_string* tip) {
	QString tip_QString = QString::fromUtf8(&tip->data, tip->len);
	self->setToolTip(tip_QString);
}

bool QSystemTrayIcon_IsSystemTrayAvailable() {
	return QSystemTrayIcon::isSystemTrayAvailable();
}

bool QSystemTrayIcon_SupportsMessages() {
	return QSystemTrayIcon::supportsMessages();
}

QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self) {
	QRect _ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
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

void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, struct miqt_string* title, struct miqt_string* msg, QIcon* icon) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString msg_QString = QString::fromUtf8(&msg->data, msg->len);
	self->showMessage(title_QString, msg_QString, *icon);
}

void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, struct miqt_string* title, struct miqt_string* msg) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString msg_QString = QString::fromUtf8(&msg->data, msg->len);
	self->showMessage(title_QString, msg_QString);
}

void QSystemTrayIcon_Activated(QSystemTrayIcon* self, uintptr_t reason) {
	self->activated(static_cast<QSystemTrayIcon::ActivationReason>(reason));
}

void QSystemTrayIcon_connect_Activated(QSystemTrayIcon* self, void* slot) {
	QSystemTrayIcon::connect(self, static_cast<void (QSystemTrayIcon::*)(QSystemTrayIcon::ActivationReason)>(&QSystemTrayIcon::activated), self, [=](QSystemTrayIcon::ActivationReason reason) {
		QSystemTrayIcon::ActivationReason reason_ret = reason;
		uintptr_t sigval1 = static_cast<uintptr_t>(reason_ret);
		miqt_exec_callback_QSystemTrayIcon_Activated(slot, sigval1);
	});
}

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
	self->messageClicked();
}

void QSystemTrayIcon_connect_MessageClicked(QSystemTrayIcon* self, void* slot) {
	QSystemTrayIcon::connect(self, static_cast<void (QSystemTrayIcon::*)()>(&QSystemTrayIcon::messageClicked), self, [=]() {
		miqt_exec_callback_QSystemTrayIcon_MessageClicked(slot);
	});
}

struct miqt_string* QSystemTrayIcon_Tr2(const char* s, const char* c) {
	QString _ret = QSystemTrayIcon::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSystemTrayIcon_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSystemTrayIcon::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSystemTrayIcon_TrUtf82(const char* s, const char* c) {
	QString _ret = QSystemTrayIcon::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSystemTrayIcon_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSystemTrayIcon::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, struct miqt_string* title, struct miqt_string* msg, QIcon* icon, int msecs) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString msg_QString = QString::fromUtf8(&msg->data, msg->len);
	self->showMessage(title_QString, msg_QString, *icon, static_cast<int>(msecs));
}

void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, struct miqt_string* title, struct miqt_string* msg, uintptr_t icon) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString msg_QString = QString::fromUtf8(&msg->data, msg->len);
	self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon));
}

void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, struct miqt_string* title, struct miqt_string* msg, uintptr_t icon, int msecs) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
	QString msg_QString = QString::fromUtf8(&msg->data, msg->len);
	self->showMessage(title_QString, msg_QString, static_cast<QSystemTrayIcon::MessageIcon>(icon), static_cast<int>(msecs));
}

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
	delete self;
}

