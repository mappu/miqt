#include "gen_qsystemtrayicon.h"
#include "qsystemtrayicon.h"

#include <QIcon>
#include <QMenu>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QSystemTrayIcon>


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

QMetaObject* QSystemTrayIcon_MetaObject(QSystemTrayIcon* self) {
	return (QMetaObject*) self->metaObject();
}

void QSystemTrayIcon_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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

QMenu* QSystemTrayIcon_ContextMenu(QSystemTrayIcon* self) {
	return self->contextMenu();
}

QIcon* QSystemTrayIcon_Icon(QSystemTrayIcon* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QSystemTrayIcon_ToolTip(QSystemTrayIcon* self, char** _out, int* _out_Strlen) {
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

QRect* QSystemTrayIcon_Geometry(QSystemTrayIcon* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QSystemTrayIcon_IsVisible(QSystemTrayIcon* self) {
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

void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self) {
	self->messageClicked();
}

void QSystemTrayIcon_connect_MessageClicked(QSystemTrayIcon* self, void* slot) {
	QSystemTrayIcon::connect(self, static_cast<void (QSystemTrayIcon::*)()>(&QSystemTrayIcon::messageClicked), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSystemTrayIcon_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSystemTrayIcon::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSystemTrayIcon_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

void QSystemTrayIcon_Delete(QSystemTrayIcon* self) {
	delete self;
}

