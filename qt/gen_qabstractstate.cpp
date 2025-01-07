#include <QAbstractState>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractstate.h>
#include "gen_qabstractstate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractState_ActiveChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractState_virtbase(QAbstractState* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractState_MetaObject(const QAbstractState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractState_Metacast(QAbstractState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractState_Tr(const char* s) {
	QString _ret = QAbstractState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractState_TrUtf8(const char* s) {
	QString _ret = QAbstractState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QState* QAbstractState_ParentState(const QAbstractState* self) {
	return self->parentState();
}

QStateMachine* QAbstractState_Machine(const QAbstractState* self) {
	return self->machine();
}

bool QAbstractState_Active(const QAbstractState* self) {
	return self->active();
}

void QAbstractState_ActiveChanged(QAbstractState* self, bool active) {
	self->activeChanged(active);
}

void QAbstractState_connect_ActiveChanged(QAbstractState* self, intptr_t slot) {
	QAbstractState::connect(self, static_cast<void (QAbstractState::*)(bool)>(&QAbstractState::activeChanged), self, [=](bool active) {
		bool sigval1 = active;
		miqt_exec_callback_QAbstractState_ActiveChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractState_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractState_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractState_Delete(QAbstractState* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractState*>( self );
	} else {
		delete self;
	}
}

