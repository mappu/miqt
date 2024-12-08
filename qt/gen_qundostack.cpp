#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUndoCommand>
#include <QUndoStack>
#include <qundostack.h>
#include "gen_qundostack.h"
#include "_cgo_export.h"

class MiqtVirtualQUndoCommand : public virtual QUndoCommand {
public:

	MiqtVirtualQUndoCommand(): QUndoCommand() {};
	MiqtVirtualQUndoCommand(const QString& text): QUndoCommand(text) {};
	MiqtVirtualQUndoCommand(QUndoCommand* parent): QUndoCommand(parent) {};
	MiqtVirtualQUndoCommand(const QString& text, QUndoCommand* parent): QUndoCommand(text, parent) {};

	virtual ~MiqtVirtualQUndoCommand() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Undo = 0;

	// Subclass to allow providing a Go implementation
	virtual void undo() override {
		if (handle__Undo == 0) {
			QUndoCommand::undo();
			return;
		}
		

		miqt_exec_callback_QUndoCommand_Undo(this, handle__Undo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Undo() {

		QUndoCommand::undo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redo = 0;

	// Subclass to allow providing a Go implementation
	virtual void redo() override {
		if (handle__Redo == 0) {
			QUndoCommand::redo();
			return;
		}
		

		miqt_exec_callback_QUndoCommand_Redo(this, handle__Redo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Redo() {

		QUndoCommand::redo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Id = 0;

	// Subclass to allow providing a Go implementation
	virtual int id() const override {
		if (handle__Id == 0) {
			return QUndoCommand::id();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoCommand_Id(const_cast<MiqtVirtualQUndoCommand*>(this), handle__Id);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Id() const {

		return QUndoCommand::id();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MergeWith = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mergeWith(const QUndoCommand* other) override {
		if (handle__MergeWith == 0) {
			return QUndoCommand::mergeWith(other);
		}
		
		QUndoCommand* sigval1 = (QUndoCommand*) other;

		bool callback_return_value = miqt_exec_callback_QUndoCommand_MergeWith(this, handle__MergeWith, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MergeWith(QUndoCommand* other) {

		return QUndoCommand::mergeWith(other);

	}

};

QUndoCommand* QUndoCommand_new() {
	return new MiqtVirtualQUndoCommand();
}

QUndoCommand* QUndoCommand_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQUndoCommand(text_QString);
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
	return new MiqtVirtualQUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(struct miqt_string text, QUndoCommand* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQUndoCommand(text_QString, parent);
}

void QUndoCommand_Undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_Redo(QUndoCommand* self) {
	self->redo();
}

struct miqt_string QUndoCommand_Text(const QUndoCommand* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoCommand_ActionText(const QUndoCommand* self) {
	QString _ret = self->actionText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoCommand_SetText(QUndoCommand* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QUndoCommand_IsObsolete(const QUndoCommand* self) {
	return self->isObsolete();
}

void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_Id(const QUndoCommand* self) {
	return self->id();
}

bool QUndoCommand_MergeWith(QUndoCommand* self, QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_ChildCount(const QUndoCommand* self) {
	return self->childCount();
}

QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index) {
	return (QUndoCommand*) self->child(static_cast<int>(index));
}

void QUndoCommand_override_virtual_Undo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) )->handle__Undo = slot;
}

void QUndoCommand_virtualbase_Undo(void* self) {
	( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_Undo();
}

void QUndoCommand_override_virtual_Redo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) )->handle__Redo = slot;
}

void QUndoCommand_virtualbase_Redo(void* self) {
	( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_Redo();
}

void QUndoCommand_override_virtual_Id(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) )->handle__Id = slot;
}

int QUndoCommand_virtualbase_Id(const void* self) {
	return ( (const MiqtVirtualQUndoCommand*)(self) )->virtualbase_Id();
}

void QUndoCommand_override_virtual_MergeWith(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) )->handle__MergeWith = slot;
}

bool QUndoCommand_virtualbase_MergeWith(void* self, QUndoCommand* other) {
	return ( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_MergeWith(other);
}

void QUndoCommand_Delete(QUndoCommand* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQUndoCommand*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQUndoStack : public virtual QUndoStack {
public:

	MiqtVirtualQUndoStack(): QUndoStack() {};
	MiqtVirtualQUndoStack(QObject* parent): QUndoStack(parent) {};

	virtual ~MiqtVirtualQUndoStack() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QUndoStack::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoStack_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QUndoStack::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QUndoStack::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoStack_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QUndoStack::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QUndoStack::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QUndoStack::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QUndoStack::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QUndoStack::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QUndoStack::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QUndoStack::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QUndoStack::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoStack_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QUndoStack::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QUndoStack::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoStack_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QUndoStack::disconnectNotify(*signal);

	}

};

QUndoStack* QUndoStack_new() {
	return new MiqtVirtualQUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
	return new MiqtVirtualQUndoStack(parent);
}

void QUndoStack_virtbase(QUndoStack* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QUndoStack_MetaObject(const QUndoStack* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoStack_Metacast(QUndoStack* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoStack_Tr(const char* s) {
	QString _ret = QUndoStack::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_TrUtf8(const char* s) {
	QString _ret = QUndoStack::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoStack_Clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_CanUndo(const QUndoStack* self) {
	return self->canUndo();
}

bool QUndoStack_CanRedo(const QUndoStack* self) {
	return self->canRedo();
}

struct miqt_string QUndoStack_UndoText(const QUndoStack* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_RedoText(const QUndoStack* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QUndoStack_Count(const QUndoStack* self) {
	return self->count();
}

int QUndoStack_Index(const QUndoStack* self) {
	return self->index();
}

struct miqt_string QUndoStack_Text(const QUndoStack* self, int idx) {
	QString _ret = self->text(static_cast<int>(idx));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoStack_IsActive(const QUndoStack* self) {
	return self->isActive();
}

bool QUndoStack_IsClean(const QUndoStack* self) {
	return self->isClean();
}

int QUndoStack_CleanIndex(const QUndoStack* self) {
	return self->cleanIndex();
}

void QUndoStack_BeginMacro(QUndoStack* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->beginMacro(text_QString);
}

void QUndoStack_EndMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_SetUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_UndoLimit(const QUndoStack* self) {
	return self->undoLimit();
}

QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index) {
	return (QUndoCommand*) self->command(static_cast<int>(index));
}

void QUndoStack_SetClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_ResetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_SetIndex(QUndoStack* self, int idx) {
	self->setIndex(static_cast<int>(idx));
}

void QUndoStack_Undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_Redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_SetActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_IndexChanged(QUndoStack* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_connect_IndexChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoStack_IndexChanged(slot, sigval1);
	});
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_connect_CleanChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoStack_CleanChanged(slot, sigval1);
	});
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_connect_CanUndoChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoStack_CanUndoChanged(slot, sigval1);
	});
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_connect_CanRedoChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoStack_CanRedoChanged(slot, sigval1);
	});
}

void QUndoStack_UndoTextChanged(QUndoStack* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoStack_connect_UndoTextChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoStack_UndoTextChanged(slot, sigval1);
	});
}

void QUndoStack_RedoTextChanged(QUndoStack* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoStack_connect_RedoTextChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoStack_RedoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoStack_Tr2(const char* s, const char* c) {
	QString _ret = QUndoStack::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_TrUtf82(const char* s, const char* c) {
	QString _ret = QUndoStack::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_SetActive1(QUndoStack* self, bool active) {
	self->setActive(active);
}

void QUndoStack_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__Event = slot;
}

bool QUndoStack_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoStack*)(self) )->virtualbase_Event(event);
}

void QUndoStack_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__EventFilter = slot;
}

bool QUndoStack_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUndoStack*)(self) )->virtualbase_EventFilter(watched, event);
}

void QUndoStack_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__TimerEvent = slot;
}

void QUndoStack_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_TimerEvent(event);
}

void QUndoStack_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__ChildEvent = slot;
}

void QUndoStack_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_ChildEvent(event);
}

void QUndoStack_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__CustomEvent = slot;
}

void QUndoStack_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_CustomEvent(event);
}

void QUndoStack_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__ConnectNotify = slot;
}

void QUndoStack_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_ConnectNotify(signal);
}

void QUndoStack_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) )->handle__DisconnectNotify = slot;
}

void QUndoStack_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QUndoStack_Delete(QUndoStack* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQUndoStack*>( self );
	} else {
		delete self;
	}
}

