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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QUndoCommand_undo(QUndoCommand*, intptr_t);
void miqt_exec_callback_QUndoCommand_redo(QUndoCommand*, intptr_t);
int miqt_exec_callback_QUndoCommand_id(const QUndoCommand*, intptr_t);
bool miqt_exec_callback_QUndoCommand_mergeWith(QUndoCommand*, intptr_t, QUndoCommand*);
void miqt_exec_callback_QUndoStack_indexChanged(intptr_t, int);
void miqt_exec_callback_QUndoStack_cleanChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_canUndoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_canRedoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_undoTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QUndoStack_redoTextChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QUndoStack_event(QUndoStack*, intptr_t, QEvent*);
bool miqt_exec_callback_QUndoStack_eventFilter(QUndoStack*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUndoStack_timerEvent(QUndoStack*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUndoStack_childEvent(QUndoStack*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUndoStack_customEvent(QUndoStack*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoStack_connectNotify(QUndoStack*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUndoStack_disconnectNotify(QUndoStack*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUndoCommand final : public QUndoCommand {
public:

	MiqtVirtualQUndoCommand(): QUndoCommand() {};
	MiqtVirtualQUndoCommand(const QString& text): QUndoCommand(text) {};
	MiqtVirtualQUndoCommand(QUndoCommand* parent): QUndoCommand(parent) {};
	MiqtVirtualQUndoCommand(const QString& text, QUndoCommand* parent): QUndoCommand(text, parent) {};

	virtual ~MiqtVirtualQUndoCommand() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__undo = 0;

	// Subclass to allow providing a Go implementation
	virtual void undo() override {
		if (handle__undo == 0) {
			QUndoCommand::undo();
			return;
		}
		

		miqt_exec_callback_QUndoCommand_undo(this, handle__undo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_undo() {

		QUndoCommand::undo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redo = 0;

	// Subclass to allow providing a Go implementation
	virtual void redo() override {
		if (handle__redo == 0) {
			QUndoCommand::redo();
			return;
		}
		

		miqt_exec_callback_QUndoCommand_redo(this, handle__redo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_redo() {

		QUndoCommand::redo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__id = 0;

	// Subclass to allow providing a Go implementation
	virtual int id() const override {
		if (handle__id == 0) {
			return QUndoCommand::id();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoCommand_id(this, handle__id);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_id() const {

		return QUndoCommand::id();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mergeWith = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mergeWith(const QUndoCommand* other) override {
		if (handle__mergeWith == 0) {
			return QUndoCommand::mergeWith(other);
		}
		
		QUndoCommand* sigval1 = (QUndoCommand*) other;

		bool callback_return_value = miqt_exec_callback_QUndoCommand_mergeWith(this, handle__mergeWith, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_mergeWith(QUndoCommand* other) {

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

void QUndoCommand_undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_redo(QUndoCommand* self) {
	self->redo();
}

struct miqt_string QUndoCommand_text(const QUndoCommand* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoCommand_actionText(const QUndoCommand* self) {
	QString _ret = self->actionText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoCommand_setText(QUndoCommand* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QUndoCommand_isObsolete(const QUndoCommand* self) {
	return self->isObsolete();
}

void QUndoCommand_setObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_id(const QUndoCommand* self) {
	return self->id();
}

bool QUndoCommand_mergeWith(QUndoCommand* self, QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_childCount(const QUndoCommand* self) {
	return self->childCount();
}

QUndoCommand* QUndoCommand_child(const QUndoCommand* self, int index) {
	return (QUndoCommand*) self->child(static_cast<int>(index));
}

bool QUndoCommand_override_virtual_undo(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__undo = slot;
	return true;
}

void QUndoCommand_virtualbase_undo(void* self) {
	( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_undo();
}

bool QUndoCommand_override_virtual_redo(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redo = slot;
	return true;
}

void QUndoCommand_virtualbase_redo(void* self) {
	( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_redo();
}

bool QUndoCommand_override_virtual_id(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__id = slot;
	return true;
}

int QUndoCommand_virtualbase_id(const void* self) {
	return ( (const MiqtVirtualQUndoCommand*)(self) )->virtualbase_id();
}

bool QUndoCommand_override_virtual_mergeWith(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = dynamic_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mergeWith = slot;
	return true;
}

bool QUndoCommand_virtualbase_mergeWith(void* self, QUndoCommand* other) {
	return ( (MiqtVirtualQUndoCommand*)(self) )->virtualbase_mergeWith(other);
}

void QUndoCommand_delete(QUndoCommand* self) {
	delete self;
}

class MiqtVirtualQUndoStack final : public QUndoStack {
public:

	MiqtVirtualQUndoStack(): QUndoStack() {};
	MiqtVirtualQUndoStack(QObject* parent): QUndoStack(parent) {};

	virtual ~MiqtVirtualQUndoStack() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUndoStack::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoStack_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QUndoStack::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUndoStack::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoStack_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QUndoStack::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QUndoStack::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QUndoStack::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QUndoStack::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QUndoStack::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QUndoStack::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoStack_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QUndoStack::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QUndoStack::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoStack_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QUndoStack::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QUndoStack::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoStack_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QUndoStack::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QUndoStack_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoStack_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoStack_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoStack_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QUndoStack_metaObject(const QUndoStack* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoStack_metacast(QUndoStack* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoStack_tr(const char* s) {
	QString _ret = QUndoStack::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_trUtf8(const char* s) {
	QString _ret = QUndoStack::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoStack_clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_canUndo(const QUndoStack* self) {
	return self->canUndo();
}

bool QUndoStack_canRedo(const QUndoStack* self) {
	return self->canRedo();
}

struct miqt_string QUndoStack_undoText(const QUndoStack* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_redoText(const QUndoStack* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QUndoStack_count(const QUndoStack* self) {
	return self->count();
}

int QUndoStack_index(const QUndoStack* self) {
	return self->index();
}

struct miqt_string QUndoStack_text(const QUndoStack* self, int idx) {
	QString _ret = self->text(static_cast<int>(idx));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_createUndoAction(const QUndoStack* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoStack_createRedoAction(const QUndoStack* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoStack_isActive(const QUndoStack* self) {
	return self->isActive();
}

bool QUndoStack_isClean(const QUndoStack* self) {
	return self->isClean();
}

int QUndoStack_cleanIndex(const QUndoStack* self) {
	return self->cleanIndex();
}

void QUndoStack_beginMacro(QUndoStack* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->beginMacro(text_QString);
}

void QUndoStack_endMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_setUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_undoLimit(const QUndoStack* self) {
	return self->undoLimit();
}

QUndoCommand* QUndoStack_command(const QUndoStack* self, int index) {
	return (QUndoCommand*) self->command(static_cast<int>(index));
}

void QUndoStack_setClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_resetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_setIndex(QUndoStack* self, int idx) {
	self->setIndex(static_cast<int>(idx));
}

void QUndoStack_undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_setActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_indexChanged(QUndoStack* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_connect_indexChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoStack_indexChanged(slot, sigval1);
	});
}

void QUndoStack_cleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_connect_cleanChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoStack_cleanChanged(slot, sigval1);
	});
}

void QUndoStack_canUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_connect_canUndoChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoStack_canUndoChanged(slot, sigval1);
	});
}

void QUndoStack_canRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_connect_canRedoChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoStack_canRedoChanged(slot, sigval1);
	});
}

void QUndoStack_undoTextChanged(QUndoStack* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoStack_connect_undoTextChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoStack_undoTextChanged(slot, sigval1);
	});
}

void QUndoStack_redoTextChanged(QUndoStack* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoStack_connect_redoTextChanged(QUndoStack* self, intptr_t slot) {
	MiqtVirtualQUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoStack_redoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoStack_tr2(const char* s, const char* c) {
	QString _ret = QUndoStack::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_trUtf82(const char* s, const char* c) {
	QString _ret = QUndoStack::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_createUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_createRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_setActive1(QUndoStack* self, bool active) {
	self->setActive(active);
}

bool QUndoStack_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QUndoStack_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoStack*)(self) )->virtualbase_event(event);
}

bool QUndoStack_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUndoStack_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUndoStack*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QUndoStack_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QUndoStack_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_timerEvent(event);
}

bool QUndoStack_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QUndoStack_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_childEvent(event);
}

bool QUndoStack_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QUndoStack_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_customEvent(event);
}

bool QUndoStack_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QUndoStack_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_connectNotify(signal);
}

bool QUndoStack_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QUndoStack_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoStack*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QUndoStack_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QUndoStack_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QUndoStack_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QUndoStack_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoStack* self_cast = dynamic_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QUndoStack_delete(QUndoStack* self) {
	delete self;
}

