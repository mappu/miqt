#include <QDrag>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qdrag.h"

#include "gen_qdrag.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDrag* QDrag_new(QObject* dragSource) {
	return new QDrag(dragSource);
}

QMetaObject* QDrag_MetaObject(QDrag* self) {
	return (QMetaObject*) const_cast<const QDrag*>(self)->metaObject();
}

void QDrag_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_MimeData(QDrag* self) {
	return const_cast<const QDrag*>(self)->mimeData();
}

void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(QDrag* self) {
	QPixmap ret = const_cast<const QDrag*>(self)->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(QDrag* self) {
	QPoint ret = const_cast<const QDrag*>(self)->hotSpot();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QObject* QDrag_Source(QDrag* self) {
	return const_cast<const QDrag*>(self)->source();
}

QObject* QDrag_Target(QDrag* self) {
	return const_cast<const QDrag*>(self)->target();
}

uintptr_t QDrag_Start(QDrag* self) {
	Qt::DropAction ret = self->start();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QDrag_Exec(QDrag* self) {
	Qt::DropAction ret = self->exec();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QDrag_Exec2(QDrag* self, int supportedActions, uintptr_t defaultAction) {
	Qt::DropAction ret = self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
	return static_cast<uintptr_t>(ret);
}

void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, uintptr_t action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(QDrag* self, uintptr_t action) {
	QPixmap ret = const_cast<const QDrag*>(self)->dragCursor(static_cast<Qt::DropAction>(action));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

int QDrag_SupportedActions(QDrag* self) {
	Qt::DropActions ret = const_cast<const QDrag*>(self)->supportedActions();
	return static_cast<int>(ret);
}

uintptr_t QDrag_DefaultAction(QDrag* self) {
	Qt::DropAction ret = const_cast<const QDrag*>(self)->defaultAction();
	return static_cast<uintptr_t>(ret);
}

void QDrag_Cancel() {
	QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, uintptr_t action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_connect_ActionChanged(QDrag* self, void* slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), self, [=](Qt::DropAction action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_TargetChanged(QDrag* self, void* slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDrag_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDrag_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDrag::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QDrag_Start1(QDrag* self, int supportedActions) {
	Qt::DropAction ret = self->start(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QDrag_Exec1(QDrag* self, int supportedActions) {
	Qt::DropAction ret = self->exec(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<uintptr_t>(ret);
}

void QDrag_Delete(QDrag* self) {
	delete self;
}

