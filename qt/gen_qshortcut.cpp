#include <QKeySequence>
#include <QMetaObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qshortcut.h>
#include "gen_qshortcut.h"
#include "_cgo_export.h"

QShortcut* QShortcut_new(QWidget* parent) {
	return new QShortcut(parent);
}

QShortcut* QShortcut_new2(QKeySequence* key, QWidget* parent) {
	return new QShortcut(*key, parent);
}

QShortcut* QShortcut_new3(QKeySequence* key, QWidget* parent, const char* member) {
	return new QShortcut(*key, parent, member);
}

QShortcut* QShortcut_new4(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember) {
	return new QShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, int shortcutContext) {
	return new QShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(shortcutContext));
}

QMetaObject* QShortcut_MetaObject(const QShortcut* self) {
	return (QMetaObject*) self->metaObject();
}

void* QShortcut_Metacast(QShortcut* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QShortcut_Tr(const char* s) {
	QString _ret = QShortcut::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QShortcut_TrUtf8(const char* s) {
	QString _ret = QShortcut::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QShortcut_SetKey(QShortcut* self, QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
	return new QKeySequence(self->key());
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, int context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_Context(const QShortcut* self) {
	Qt::ShortcutContext _ret = self->context();
	return static_cast<int>(_ret);
}

void QShortcut_SetWhatsThis(QShortcut* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setWhatsThis(text_QString);
}

struct miqt_string* QShortcut_WhatsThis(const QShortcut* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QShortcut_SetAutoRepeat(QShortcut* self, bool on) {
	self->setAutoRepeat(on);
}

bool QShortcut_AutoRepeat(const QShortcut* self) {
	return self->autoRepeat();
}

int QShortcut_Id(const QShortcut* self) {
	return self->id();
}

QWidget* QShortcut_ParentWidget(const QShortcut* self) {
	return self->parentWidget();
}

void QShortcut_Activated(QShortcut* self) {
	self->activated();
}

void QShortcut_connect_Activated(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activated), self, [=]() {
		miqt_exec_callback_QShortcut_Activated(slot);
	});
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously), self, [=]() {
		miqt_exec_callback_QShortcut_ActivatedAmbiguously(slot);
	});
}

struct miqt_string* QShortcut_Tr2(const char* s, const char* c) {
	QString _ret = QShortcut::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QShortcut_Tr3(const char* s, const char* c, int n) {
	QString _ret = QShortcut::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QShortcut_TrUtf82(const char* s, const char* c) {
	QString _ret = QShortcut::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QShortcut_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QShortcut::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QShortcut_Delete(QShortcut* self) {
	delete self;
}

