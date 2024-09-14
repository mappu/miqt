#include <QAbstractState>
#include <QAbstractTransition>
#include <QHistoryState>
#include <QMetaObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qhistorystate.h"
#include "gen_qhistorystate.h"
#include "_cgo_export.h"

QHistoryState* QHistoryState_new() {
	return new QHistoryState();
}

QHistoryState* QHistoryState_new2(uintptr_t typeVal) {
	return new QHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
	return new QHistoryState(parent);
}

QHistoryState* QHistoryState_new4(uintptr_t typeVal, QState* parent) {
	return new QHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

QMetaObject* QHistoryState_MetaObject(const QHistoryState* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QHistoryState_Tr(const char* s) {
	QString _ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QHistoryState_TrUtf8(const char* s) {
	QString _ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self) {
	return self->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
	self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(const QHistoryState* self) {
	return self->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
	self->setDefaultState(state);
}

uintptr_t QHistoryState_HistoryType(const QHistoryState* self) {
	QHistoryState::HistoryType _ret = self->historyType();
	return static_cast<uintptr_t>(_ret);
}

void QHistoryState_SetHistoryType(QHistoryState* self, uintptr_t typeVal) {
	self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

struct miqt_string* QHistoryState_Tr2(const char* s, const char* c) {
	QString _ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QHistoryState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QHistoryState_TrUtf82(const char* s, const char* c) {
	QString _ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QHistoryState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QHistoryState_Delete(QHistoryState* self) {
	delete self;
}

