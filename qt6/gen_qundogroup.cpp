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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QUndoGroup_activeStackChanged(intptr_t, QUndoStack*);
void miqt_exec_callback_QUndoGroup_indexChanged(intptr_t, int);
void miqt_exec_callback_QUndoGroup_cleanChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_canUndoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_canRedoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_undoTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QUndoGroup_redoTextChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QUndoGroup_event(QUndoGroup*, intptr_t, QEvent*);
bool miqt_exec_callback_QUndoGroup_eventFilter(QUndoGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUndoGroup_timerEvent(QUndoGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUndoGroup_childEvent(QUndoGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUndoGroup_customEvent(QUndoGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoGroup_connectNotify(QUndoGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUndoGroup_disconnectNotify(QUndoGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUndoGroup final : public QUndoGroup {
public:

	MiqtVirtualQUndoGroup(): QUndoGroup() {};
	MiqtVirtualQUndoGroup(QObject* parent): QUndoGroup(parent) {};

	virtual ~MiqtVirtualQUndoGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUndoGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoGroup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QUndoGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUndoGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QUndoGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QUndoGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QUndoGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QUndoGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QUndoGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QUndoGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoGroup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QUndoGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QUndoGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoGroup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QUndoGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QUndoGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QUndoGroup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QUndoGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QUndoGroup_metaObject(const QUndoGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoGroup_metacast(QUndoGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoGroup_tr(const char* s) {
	QString _ret = QUndoGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoGroup_addStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_removeStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

struct miqt_array /* of QUndoStack* */  QUndoGroup_stacks(const QUndoGroup* self) {
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

QUndoStack* QUndoGroup_activeStack(const QUndoGroup* self) {
	return self->activeStack();
}

QAction* QUndoGroup_createUndoAction(const QUndoGroup* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoGroup_createRedoAction(const QUndoGroup* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoGroup_canUndo(const QUndoGroup* self) {
	return self->canUndo();
}

bool QUndoGroup_canRedo(const QUndoGroup* self) {
	return self->canRedo();
}

struct miqt_string QUndoGroup_undoText(const QUndoGroup* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_redoText(const QUndoGroup* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoGroup_isClean(const QUndoGroup* self) {
	return self->isClean();
}

void QUndoGroup_undo(QUndoGroup* self) {
	self->undo();
}

void QUndoGroup_redo(QUndoGroup* self) {
	self->redo();
}

void QUndoGroup_setActiveStack(QUndoGroup* self, QUndoStack* stack) {
	self->setActiveStack(stack);
}

void QUndoGroup_activeStackChanged(QUndoGroup* self, QUndoStack* stack) {
	self->activeStackChanged(stack);
}

void QUndoGroup_connect_activeStackChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(QUndoStack*)>(&QUndoGroup::activeStackChanged), self, [=](QUndoStack* stack) {
		QUndoStack* sigval1 = stack;
		miqt_exec_callback_QUndoGroup_activeStackChanged(slot, sigval1);
	});
}

void QUndoGroup_indexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_connect_indexChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(int)>(&QUndoGroup::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoGroup_indexChanged(slot, sigval1);
	});
}

void QUndoGroup_cleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_connect_cleanChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoGroup_cleanChanged(slot, sigval1);
	});
}

void QUndoGroup_canUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_connect_canUndoChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoGroup_canUndoChanged(slot, sigval1);
	});
}

void QUndoGroup_canRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_connect_canRedoChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoGroup_canRedoChanged(slot, sigval1);
	});
}

void QUndoGroup_undoTextChanged(QUndoGroup* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoGroup_connect_undoTextChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoGroup_undoTextChanged(slot, sigval1);
	});
}

void QUndoGroup_redoTextChanged(QUndoGroup* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoGroup_connect_redoTextChanged(QUndoGroup* self, intptr_t slot) {
	MiqtVirtualQUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoGroup_redoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoGroup_tr2(const char* s, const char* c) {
	QString _ret = QUndoGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoGroup_createUndoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_createRedoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

bool QUndoGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QUndoGroup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_event(event);
}

bool QUndoGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUndoGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QUndoGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QUndoGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_timerEvent(event);
}

bool QUndoGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QUndoGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_childEvent(event);
}

bool QUndoGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QUndoGroup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_customEvent(event);
}

bool QUndoGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QUndoGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_connectNotify(signal);
}

bool QUndoGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QUndoGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoGroup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QUndoGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QUndoGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QUndoGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QUndoGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoGroup* self_cast = dynamic_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QUndoGroup_delete(QUndoGroup* self) {
	delete self;
}

