#include <QAction>
#include <QActionGroup>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qactiongroup.h>
#include "gen_qactiongroup.h"
#include "_cgo_export.h"

QActionGroup* QActionGroup_new(QObject* parent) {
	return new QActionGroup(parent);
}

QMetaObject* QActionGroup_MetaObject(const QActionGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QActionGroup_Metacast(QActionGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QActionGroup_Tr(const char* s) {
	QString _ret = QActionGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_AddActionWithText(QActionGroup* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

struct miqt_array QActionGroup_Actions(const QActionGroup* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
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

int QActionGroup_ExclusionPolicy(const QActionGroup* self) {
	QActionGroup::ExclusionPolicy _ret = self->exclusionPolicy();
	return static_cast<int>(_ret);
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

void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy) {
	self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_connect_Triggered(QActionGroup* self, intptr_t slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_Triggered(slot, sigval1);
	});
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_connect_Hovered(QActionGroup* self, intptr_t slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_Hovered(slot, sigval1);
	});
}

struct miqt_string QActionGroup_Tr2(const char* s, const char* c) {
	QString _ret = QActionGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QActionGroup_Delete(QActionGroup* self) {
	delete self;
}

