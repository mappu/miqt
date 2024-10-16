#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstracttransition.h>
#include "gen_qabstracttransition.h"
#include "_cgo_export.h"

QMetaObject* QAbstractTransition_MetaObject(const QAbstractTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTransition_Metacast(QAbstractTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QAbstractTransition_Tr(const char* s) {
	QString _ret = QAbstractTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTransition_TrUtf8(const char* s) {
	QString _ret = QAbstractTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QState* QAbstractTransition_SourceState(const QAbstractTransition* self) {
	return self->sourceState();
}

QAbstractState* QAbstractTransition_TargetState(const QAbstractTransition* self) {
	return self->targetState();
}

void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target) {
	self->setTargetState(target);
}

struct miqt_array* QAbstractTransition_TargetStates(const QAbstractTransition* self) {
	QList<QAbstractState *> _ret = self->targetStates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QAbstractTransition_SetTargetStates(QAbstractTransition* self, struct miqt_array* /* of QAbstractState* */ targets) {
	QList<QAbstractState *> targets_QList;
	targets_QList.reserve(targets->len);
	QAbstractState** targets_arr = static_cast<QAbstractState**>(targets->data);
	for(size_t i = 0; i < targets->len; ++i) {
		targets_QList.push_back(targets_arr[i]);
	}
	self->setTargetStates(targets_QList);
}

int QAbstractTransition_TransitionType(const QAbstractTransition* self) {
	QAbstractTransition::TransitionType _ret = self->transitionType();
	return static_cast<int>(_ret);
}

void QAbstractTransition_SetTransitionType(QAbstractTransition* self, int typeVal) {
	self->setTransitionType(static_cast<QAbstractTransition::TransitionType>(typeVal));
}

QStateMachine* QAbstractTransition_Machine(const QAbstractTransition* self) {
	return self->machine();
}

void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

struct miqt_array* QAbstractTransition_Animations(const QAbstractTransition* self) {
	QList<QAbstractAnimation *> _ret = self->animations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAnimation** _arr = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QAbstractTransition_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractTransition_Delete(QAbstractTransition* self) {
	delete self;
}

