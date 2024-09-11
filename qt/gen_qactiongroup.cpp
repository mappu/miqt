#include <QAction>
#include <QActionGroup>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qactiongroup.h"

#include "gen_qactiongroup.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QActionGroup* QActionGroup_new(QObject* parent) {
	return new QActionGroup(parent);
}

QMetaObject* QActionGroup_MetaObject(const QActionGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QActionGroup_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QActionGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_AddActionWithText(QActionGroup* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(text_QString);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(*icon, text_QString);
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

void QActionGroup_Actions(const QActionGroup* self, QAction*** _out, size_t* _out_len) {
	QList<QAction*> ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** __out = static_cast<QAction**>(malloc(sizeof(QAction*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QAction* QActionGroup_CheckedAction(const QActionGroup* self) {
	return self->checkedAction();
}

bool QActionGroup_IsExclusive(const QActionGroup* self) {
	return self->isExclusive();
}

bool QActionGroup_IsEnabled(const QActionGroup* self) {
	return self->isEnabled();
}

bool QActionGroup_IsVisible(const QActionGroup* self) {
	return self->isVisible();
}

uintptr_t QActionGroup_ExclusionPolicy(const QActionGroup* self) {
	QActionGroup::ExclusionPolicy ret = self->exclusionPolicy();
	return static_cast<uintptr_t>(ret);
}

void QActionGroup_SetEnabled(QActionGroup* self, bool enabled) {
	self->setEnabled(enabled);
}

void QActionGroup_SetDisabled(QActionGroup* self, bool b) {
	self->setDisabled(b);
}

void QActionGroup_SetVisible(QActionGroup* self, bool visible) {
	self->setVisible(visible);
}

void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

void QActionGroup_SetExclusionPolicy(QActionGroup* self, uintptr_t policy) {
	self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_connect_Triggered(QActionGroup* self, void* slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered), self, [=](QAction* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_connect_Hovered(QActionGroup* self, void* slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered), self, [=](QAction* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QActionGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QActionGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QActionGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QActionGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QActionGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QActionGroup_Delete(QActionGroup* self) {
	delete self;
}

