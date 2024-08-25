#include "gen_qobject.h"
#include "qobject.h"

#include <QByteArray>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectData>
#include <QObjectUserData>
#include <QSignalBlocker>
#include <QString>
#include <QThread>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QObjectData_DynamicMetaObject(QObjectData* self) {
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

QMetaObject* QObject_MetaObject(QObject* self) {
	return (QMetaObject*) self->metaObject();
}

void QObject_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QObject_Event(QObject* self, QEvent* event) {
	return self->event(event);
}

bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

void QObject_ObjectName(QObject* self, char** _out, int* _out_Strlen) {
	QString ret = self->objectName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_SetObjectName(QObject* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setObjectName(name_QString);
}

bool QObject_IsWidgetType(QObject* self) {
	return self->isWidgetType();
}

bool QObject_IsWindowType(QObject* self) {
	return self->isWindowType();
}

bool QObject_SignalsBlocked(QObject* self) {
	return self->signalsBlocked();
}

bool QObject_BlockSignals(QObject* self, bool b) {
	return self->blockSignals(b);
}

QThread* QObject_Thread(QObject* self) {
	return self->thread();
}

void QObject_MoveToThread(QObject* self, QThread* thread) {
	self->moveToThread(thread);
}

void QObject_KillTimer(QObject* self, int id) {
	self->killTimer(static_cast<int>(id));
}

void QObject_Children(QObject* self, QObject*** _out, size_t* _out_len) {
	QList<QObject *> ret = self->children();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** __out = static_cast<QObject**>(malloc(sizeof(QObject*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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

bool QObject_Disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member) {
	return QObject::disconnect(sender, *signal, receiver, *member);
}

void QObject_DumpObjectTree(QObject* self) {
	self->dumpObjectTree();
}

void QObject_DumpObjectInfo(QObject* self) {
	self->dumpObjectInfo();
}

void QObject_DumpObjectTree2(QObject* self) {
	self->dumpObjectTree();
}

void QObject_DumpObjectInfo2(QObject* self) {
	self->dumpObjectInfo();
}

bool QObject_SetProperty(QObject* self, char* name, QVariant* value) {
	return self->setProperty(name, *value);
}

QVariant* QObject_Property(QObject* self, char* name) {
	QVariant ret = self->property(name);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QObject_DynamicPropertyNames(QObject* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->dynamicPropertyNames();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

unsigned int QObject_RegisterUserData() {
	return QObject::registerUserData();
}

void QObject_SetUserData(QObject* self, unsigned int id, QObjectUserData* data) {
	self->setUserData(static_cast<uint>(id), data);
}

QObjectUserData* QObject_UserData(QObject* self, unsigned int id) {
	return self->userData(static_cast<uint>(id));
}

void QObject_Destroyed(QObject* self) {
	self->destroyed();
}

QObject* QObject_Parent(QObject* self) {
	return self->parent();
}

bool QObject_Inherits(QObject* self, char* classname) {
	return self->inherits(classname);
}

void QObject_DeleteLater(QObject* self) {
	self->deleteLater();
}

void QObject_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QObject_Destroyed1(QObject* self, QObject* param1) {
	self->destroyed(param1);
}

void QObject_connect_Destroyed1(QObject* self, void* slot) {
	QObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=](QObject* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QObject_Delete(QObject* self) {
	delete self;
}

QObjectUserData* QObjectUserData_new() {
	return new QObjectUserData();
}

void QObjectUserData_Delete(QObjectUserData* self) {
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

