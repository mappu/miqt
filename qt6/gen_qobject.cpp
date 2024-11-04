#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QObjectData>
#include <QSignalBlocker>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QVariant>
#include <qobject.h>
#include "gen_qobject.h"
#include "_cgo_export.h"

QMetaObject* QObjectData_DynamicMetaObject(const QObjectData* self) {
	return self->dynamicMetaObject();
}

void QObjectData_Delete(QObjectData* self) {
	delete self;
}

QObject* QObject_new() {
	return new QObject();
}

QObject* QObject_new2(QObject* parent) {
	return new QObject(parent);
}

QMetaObject* QObject_MetaObject(const QObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObject_Metacast(QObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObject_Tr(const char* s) {
	QString _ret = QObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObject_Event(QObject* self, QEvent* event) {
	return self->event(event);
}

bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

struct miqt_string QObject_ObjectName(const QObject* self) {
	QString _ret = self->objectName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QObject_SetObjectName(QObject* self, QAnyStringView* name) {
	self->setObjectName(*name);
}

bool QObject_IsWidgetType(const QObject* self) {
	return self->isWidgetType();
}

bool QObject_IsWindowType(const QObject* self) {
	return self->isWindowType();
}

bool QObject_IsQuickItemType(const QObject* self) {
	return self->isQuickItemType();
}

bool QObject_SignalsBlocked(const QObject* self) {
	return self->signalsBlocked();
}

bool QObject_BlockSignals(QObject* self, bool b) {
	return self->blockSignals(b);
}

QThread* QObject_Thread(const QObject* self) {
	return self->thread();
}

void QObject_MoveToThread(QObject* self, QThread* thread) {
	self->moveToThread(thread);
}

int QObject_StartTimer(QObject* self, int interval) {
	return self->startTimer(static_cast<int>(interval));
}

void QObject_KillTimer(QObject* self, int id) {
	self->killTimer(static_cast<int>(id));
}

struct miqt_array QObject_Children(const QObject* self) {
	const QObjectList& _ret = self->children();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QObject_SetParent(QObject* self, QObject* parent) {
	self->setParent(parent);
}

void QObject_InstallEventFilter(QObject* self, QObject* filterObj) {
	self->installEventFilter(filterObj);
}

void QObject_RemoveEventFilter(QObject* self, QObject* obj) {
	self->removeEventFilter(obj);
}

QMetaObject__Connection* QObject_Connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method) {
	return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method));
}

QMetaObject__Connection* QObject_Connect2(const QObject* self, QObject* sender, const char* signal, const char* member) {
	return new QMetaObject::Connection(self->connect(sender, signal, member));
}

bool QObject_Disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member) {
	return QObject::disconnect(sender, *signal, receiver, *member);
}

bool QObject_DisconnectWithQMetaObjectConnection(QMetaObject__Connection* param1) {
	return QObject::disconnect(*param1);
}

void QObject_DumpObjectTree(const QObject* self) {
	self->dumpObjectTree();
}

void QObject_DumpObjectInfo(const QObject* self) {
	self->dumpObjectInfo();
}

bool QObject_SetProperty(QObject* self, const char* name, QVariant* value) {
	return self->setProperty(name, *value);
}

QVariant* QObject_Property(const QObject* self, const char* name) {
	return new QVariant(self->property(name));
}

struct miqt_array QObject_DynamicPropertyNames(const QObject* self) {
	QList<QByteArray> _ret = self->dynamicPropertyNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QBindingStorage* QObject_BindingStorage(QObject* self) {
	return self->bindingStorage();
}

QBindingStorage* QObject_BindingStorage2(const QObject* self) {
	return (QBindingStorage*) self->bindingStorage();
}

void QObject_Destroyed(QObject* self) {
	self->destroyed();
}

void QObject_connect_Destroyed(QObject* self, intptr_t slot) {
	QObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=]() {
		miqt_exec_callback_QObject_Destroyed(slot);
	});
}

QObject* QObject_Parent(const QObject* self) {
	return self->parent();
}

bool QObject_Inherits(const QObject* self, const char* classname) {
	return self->inherits(classname);
}

void QObject_DeleteLater(QObject* self) {
	self->deleteLater();
}

struct miqt_string QObject_Tr2(const char* s, const char* c) {
	QString _ret = QObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QObject_StartTimer2(QObject* self, int interval, int timerType) {
	return self->startTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType));
}

QMetaObject__Connection* QObject_Connect5(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, int typeVal) {
	return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method, static_cast<Qt::ConnectionType>(typeVal)));
}

QMetaObject__Connection* QObject_Connect4(const QObject* self, QObject* sender, const char* signal, const char* member, int typeVal) {
	return new QMetaObject::Connection(self->connect(sender, signal, member, static_cast<Qt::ConnectionType>(typeVal)));
}

void QObject_Destroyed1(QObject* self, QObject* param1) {
	self->destroyed(param1);
}

void QObject_connect_Destroyed1(QObject* self, intptr_t slot) {
	QObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=](QObject* param1) {
		QObject* sigval1 = param1;
		miqt_exec_callback_QObject_Destroyed1(slot, sigval1);
	});
}

void QObject_Delete(QObject* self) {
	delete self;
}

QSignalBlocker* QSignalBlocker_new(QObject* o) {
	return new QSignalBlocker(o);
}

QSignalBlocker* QSignalBlocker_new2(QObject* o) {
	return new QSignalBlocker(*o);
}

void QSignalBlocker_Reblock(QSignalBlocker* self) {
	self->reblock();
}

void QSignalBlocker_Unblock(QSignalBlocker* self) {
	self->unblock();
}

void QSignalBlocker_Delete(QSignalBlocker* self) {
	delete self;
}

