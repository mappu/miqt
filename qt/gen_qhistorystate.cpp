#include <QAbstractState>
#include <QAbstractTransition>
#include <QEvent>
#include <QHistoryState>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhistorystate.h>
#include "gen_qhistorystate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHistoryState_OnEntry(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHistoryState_OnExit(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QHistoryState_Event(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHistoryState final : public QHistoryState {
public:

	MiqtVirtualQHistoryState(): QHistoryState() {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType typeVal): QHistoryState(typeVal) {};
	MiqtVirtualQHistoryState(QState* parent): QHistoryState(parent) {};
	MiqtVirtualQHistoryState(QHistoryState::HistoryType typeVal, QState* parent): QHistoryState(typeVal, parent) {};

	virtual ~MiqtVirtualQHistoryState() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void onEntry(QEvent* event) override {
		if (handle__OnEntry == 0) {
			QHistoryState::onEntry(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_OnEntry(this, handle__OnEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnEntry(QEvent* event) {

		QHistoryState::onEntry(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OnExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void onExit(QEvent* event) override {
		if (handle__OnExit == 0) {
			QHistoryState::onExit(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHistoryState_OnExit(this, handle__OnExit, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_OnExit(QEvent* event) {

		QHistoryState::onExit(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QHistoryState::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QHistoryState_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QHistoryState::event(e);

	}

};

QHistoryState* QHistoryState_new() {
	return new MiqtVirtualQHistoryState();
}

QHistoryState* QHistoryState_new2(int typeVal) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
	return new MiqtVirtualQHistoryState(parent);
}

QHistoryState* QHistoryState_new4(int typeVal, QState* parent) {
	return new MiqtVirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

void QHistoryState_virtbase(QHistoryState* src, QAbstractState** outptr_QAbstractState) {
	*outptr_QAbstractState = static_cast<QAbstractState*>(src);
}

QMetaObject* QHistoryState_MetaObject(const QHistoryState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHistoryState_Metacast(QHistoryState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHistoryState_Tr(const char* s) {
	QString _ret = QHistoryState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf8(const char* s) {
	QString _ret = QHistoryState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

int QHistoryState_HistoryType(const QHistoryState* self) {
	QHistoryState::HistoryType _ret = self->historyType();
	return static_cast<int>(_ret);
}

void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal) {
	self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

struct miqt_string QHistoryState_Tr2(const char* s, const char* c) {
	QString _ret = QHistoryState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf82(const char* s, const char* c) {
	QString _ret = QHistoryState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHistoryState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHistoryState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHistoryState_override_virtual_OnEntry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) )->handle__OnEntry = slot;
}

void QHistoryState_virtualbase_OnEntry(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_OnEntry(event);
}

void QHistoryState_override_virtual_OnExit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) )->handle__OnExit = slot;
}

void QHistoryState_virtualbase_OnExit(void* self, QEvent* event) {
	( (MiqtVirtualQHistoryState*)(self) )->virtualbase_OnExit(event);
}

void QHistoryState_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHistoryState*>( (QHistoryState*)(self) )->handle__Event = slot;
}

bool QHistoryState_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQHistoryState*)(self) )->virtualbase_Event(e);
}

void QHistoryState_Delete(QHistoryState* self) {
	delete self;
}

