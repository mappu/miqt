#include <QDrag>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdrag.h>
#include "gen_qdrag.h"
#include "_cgo_export.h"

QDrag* QDrag_new(QObject* dragSource) {
	return new QDrag(dragSource);
}

QMetaObject* QDrag_MetaObject(const QDrag* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDrag_Metacast(QDrag* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDrag_Tr(const char* s) {
	QString _ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_TrUtf8(const char* s) {
	QString _ret = QDrag::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_MimeData(const QDrag* self) {
	return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(const QDrag* self) {
	return new QPixmap(self->pixmap());
}

void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(const QDrag* self) {
	return new QPoint(self->hotSpot());
}

QObject* QDrag_Source(const QDrag* self) {
	return self->source();
}

QObject* QDrag_Target(const QDrag* self) {
	return self->target();
}

int QDrag_Start(QDrag* self) {
	Qt::DropAction _ret = self->start();
	return static_cast<int>(_ret);
}

int QDrag_Exec(QDrag* self) {
	Qt::DropAction _ret = self->exec();
	return static_cast<int>(_ret);
}

int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
	return static_cast<int>(_ret);
}

void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, int action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(const QDrag* self, int action) {
	return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_SupportedActions(const QDrag* self) {
	Qt::DropActions _ret = self->supportedActions();
	return static_cast<int>(_ret);
}

int QDrag_DefaultAction(const QDrag* self) {
	Qt::DropAction _ret = self->defaultAction();
	return static_cast<int>(_ret);
}

void QDrag_Cancel() {
	QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, int action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_connect_ActionChanged(QDrag* self, intptr_t slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), self, [=](Qt::DropAction action) {
		Qt::DropAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		miqt_exec_callback_QDrag_ActionChanged(slot, sigval1);
	});
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_TargetChanged(QDrag* self, intptr_t slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		QObject* sigval1 = newTarget;
		miqt_exec_callback_QDrag_TargetChanged(slot, sigval1);
	});
}

struct miqt_string QDrag_Tr2(const char* s, const char* c) {
	QString _ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_TrUtf82(const char* s, const char* c) {
	QString _ret = QDrag::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDrag::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDrag_Start1(QDrag* self, int supportedActions) {
	Qt::DropAction _ret = self->start(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<int>(_ret);
}

int QDrag_Exec1(QDrag* self, int supportedActions) {
	Qt::DropAction _ret = self->exec(static_cast<Qt::DropActions>(supportedActions));
	return static_cast<int>(_ret);
}

void QDrag_Delete(QDrag* self) {
	delete self;
}

