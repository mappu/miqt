#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUndoGroup>
#include <QUndoStack>
#include <qundogroup.h>
#include "gen_qundogroup.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQUndoGroup : public virtual QUndoGroup {
public:

	MiqtVirtualQUndoGroup(): QUndoGroup() {};
	MiqtVirtualQUndoGroup(QObject* parent): QUndoGroup(parent) {};

	virtual ~MiqtVirtualQUndoGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QUndoGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QUndoGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QUndoGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoGroup_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QUndoGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QUndoGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QUndoGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QUndoGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QUndoGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QUndoGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QUndoGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QUndoGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoGroup_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QUndoGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QUndoGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoGroup_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QUndoGroup::disconnectNotify(*signal);

	}

};

QUndoGroup* QUndoGroup_new() {
	return new MiqtVirtualQUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
	return new MiqtVirtualQUndoGroup(parent);
}

void QUndoGroup_virtbase(QUndoGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QUndoGroup_MetaObject(const QUndoGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoGroup_Metacast(QUndoGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoGroup_Tr(const char* s) {
	QString _ret = QUndoGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

struct miqt_array /* of QUndoStack* */  QUndoGroup_Stacks(const QUndoGroup* self) {
	QList<QUndoStack *> _ret = self->stacks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUndoStack** _arr = static_cast<QUndoStack**>(malloc(sizeof(QUndoStack*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self) {
	return self->activeStack();
}

QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoGroup_CanUndo(const QUndoGroup* self) {
	return self->canUndo();
}

bool QUndoGroup_CanRedo(const QUndoGroup* self) {
	return self->canRedo();
}

struct miqt_string QUndoGroup_UndoText(const QUndoGroup* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_RedoText(const QUndoGroup* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoGroup_IsClean(const QUndoGroup* self) {
	return self->isClean();
}

void QUndoGroup_Undo(QUndoGroup* self) {
	self->undo();
}

void QUndoGroup_Redo(QUndoGroup* self) {
	self->redo();
}

void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack) {
	self->setActiveStack(stack);
}

void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack) {
	self->activeStackChanged(stack);
}

void QUndoGroup_connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(QUndoStack*)>(&QUndoGroup::activeStackChanged), self, [=](QUndoStack* stack) {
		QUndoStack* sigval1 = stack;
		miqt_exec_callback_QUndoGroup_ActiveStackChanged(slot, sigval1);
	});
}

void QUndoGroup_IndexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_connect_IndexChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(int)>(&QUndoGroup::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoGroup_IndexChanged(slot, sigval1);
	});
}

void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_connect_CleanChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoGroup_CleanChanged(slot, sigval1);
	});
}

void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_connect_CanUndoChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoGroup_CanUndoChanged(slot, sigval1);
	});
}

void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_connect_CanRedoChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoGroup_CanRedoChanged(slot, sigval1);
	});
}

void QUndoGroup_UndoTextChanged(QUndoGroup* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoGroup_connect_UndoTextChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoGroup_UndoTextChanged(slot, sigval1);
	});
}

void QUndoGroup_RedoTextChanged(QUndoGroup* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoGroup_connect_RedoTextChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoGroup_RedoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoGroup_Tr2(const char* s, const char* c) {
	QString _ret = QUndoGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoGroup_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__Event = slot;
}

bool QUndoGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_Event(event);
}

void QUndoGroup_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__EventFilter = slot;
}

bool QUndoGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_EventFilter(watched, event);
}

void QUndoGroup_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__TimerEvent = slot;
}

void QUndoGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_TimerEvent(event);
}

void QUndoGroup_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__ChildEvent = slot;
}

void QUndoGroup_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_ChildEvent(event);
}

void QUndoGroup_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__CustomEvent = slot;
}

void QUndoGroup_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_CustomEvent(event);
}

void QUndoGroup_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__ConnectNotify = slot;
}

void QUndoGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_ConnectNotify(signal);
}

void QUndoGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) )->handle__DisconnectNotify = slot;
}

void QUndoGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QUndoGroup_Delete(QUndoGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQUndoGroup*>( self );
	} else {
		delete self;
	}
}

