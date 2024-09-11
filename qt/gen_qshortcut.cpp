#include <QKeySequence>
#include <QMetaObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qshortcut.h"

#include "gen_qshortcut.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QShortcut* QShortcut_new5(QKeySequence* key, QWidget* parent, const char* member, const char* ambiguousMember, uintptr_t shortcutContext) {
	return new QShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(shortcutContext));
}

QMetaObject* QShortcut_MetaObject(const QShortcut* self) {
	return (QMetaObject*) self->metaObject();
}

void QShortcut_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_SetKey(QShortcut* self, QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
	QKeySequence ret = self->key();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, uintptr_t context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

uintptr_t QShortcut_Context(const QShortcut* self) {
	Qt::ShortcutContext ret = self->context();
	return static_cast<uintptr_t>(ret);
}

void QShortcut_SetWhatsThis(QShortcut* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setWhatsThis(text_QString);
}

void QShortcut_WhatsThis(const QShortcut* self, char** _out, int* _out_Strlen) {
	QString ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QShortcut_connect_Activated(QShortcut* self, void* slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activated), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, void* slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QShortcut_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QShortcut::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QShortcut_Delete(QShortcut* self) {
	delete self;
}

