#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QDesignerDnDItemInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowManagerInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformwindowmanager.h>
#include "gen_abstractformwindowmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowAdded(intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowRemoved(intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindowChanged(intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowSettingsChanged(intptr_t, QDesignerFormWindowInterface*);
QAction* miqt_exec_callback_QDesignerFormWindowManagerInterface_action(const QDesignerFormWindowManagerInterface*, intptr_t, int);
QActionGroup* miqt_exec_callback_QDesignerFormWindowManagerInterface_actionGroup(const QDesignerFormWindowManagerInterface*, intptr_t, int);
QDesignerFormWindowInterface* miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindow(const QDesignerFormWindowManagerInterface*, intptr_t);
int miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowCount(const QDesignerFormWindowManagerInterface*, intptr_t);
QDesignerFormWindowInterface* miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindow(const QDesignerFormWindowManagerInterface*, intptr_t, int);
QDesignerFormWindowInterface* miqt_exec_callback_QDesignerFormWindowManagerInterface_createFormWindow(QDesignerFormWindowManagerInterface*, intptr_t, QWidget*, int);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerFormWindowManagerInterface_core(const QDesignerFormWindowManagerInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_dragItems(QDesignerFormWindowManagerInterface*, intptr_t, struct miqt_array /* of QDesignerDnDItemInterface* */ );
QPixmap* miqt_exec_callback_QDesignerFormWindowManagerInterface_createPreviewPixmap(const QDesignerFormWindowManagerInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_addFormWindow(QDesignerFormWindowManagerInterface*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_removeFormWindow(QDesignerFormWindowManagerInterface*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_setActiveFormWindow(QDesignerFormWindowManagerInterface*, intptr_t, QDesignerFormWindowInterface*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_showPreview(QDesignerFormWindowManagerInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_closeAllPreviews(QDesignerFormWindowManagerInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_showPluginDialog(QDesignerFormWindowManagerInterface*, intptr_t);
bool miqt_exec_callback_QDesignerFormWindowManagerInterface_event(QDesignerFormWindowManagerInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerFormWindowManagerInterface_eventFilter(QDesignerFormWindowManagerInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_timerEvent(QDesignerFormWindowManagerInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_childEvent(QDesignerFormWindowManagerInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_customEvent(QDesignerFormWindowManagerInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_connectNotify(QDesignerFormWindowManagerInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerFormWindowManagerInterface_disconnectNotify(QDesignerFormWindowManagerInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerFormWindowManagerInterface final : public QDesignerFormWindowManagerInterface {
public:

	MiqtVirtualQDesignerFormWindowManagerInterface(): QDesignerFormWindowManagerInterface() {}
	MiqtVirtualQDesignerFormWindowManagerInterface(QObject* parent): QDesignerFormWindowManagerInterface(parent) {}

	virtual ~MiqtVirtualQDesignerFormWindowManagerInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__action = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* action(QDesignerFormWindowManagerInterface::Action action) const override {
		if (handle__action == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowManagerInterface::Action action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		QAction* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_action(this, handle__action, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionGroup* actionGroup(QDesignerFormWindowManagerInterface::ActionGroup actionGroup) const override {
		if (handle__actionGroup == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowManagerInterface::ActionGroup actionGroup_ret = actionGroup;
		int sigval1 = static_cast<int>(actionGroup_ret);
		QActionGroup* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_actionGroup(this, handle__actionGroup, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activeFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormWindowInterface* activeFormWindow() const override {
		if (handle__activeFormWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindow(this, handle__activeFormWindow);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formWindowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int formWindowCount() const override {
		if (handle__formWindowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowCount(this, handle__formWindowCount);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormWindowInterface* formWindow(int index) const override {
		if (handle__formWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QDesignerFormWindowInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindow(this, handle__formWindow, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormWindowInterface* createFormWindow(QWidget* parentWidget, Qt::WindowFlags flags) override {
		if (handle__createFormWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = parentWidget;
		Qt::WindowFlags flags_ret = flags;
		int sigval2 = static_cast<int>(flags_ret);
		QDesignerFormWindowInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_createFormWindow(this, handle__createFormWindow, sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_core(this, handle__core);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragItems = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragItems(const QList<QDesignerDnDItemInterface *>& item_list) override {
		if (handle__dragItems == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QList<QDesignerDnDItemInterface *>& item_list_ret = item_list;
		// Convert QList<> from C++ memory to manually-managed C memory
		QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * item_list_ret.length()));
		for (size_t i = 0, e = item_list_ret.length(); i < e; ++i) {
			item_list_arr[i] = item_list_ret[i];
		}
		struct miqt_array item_list_out;
		item_list_out.len = item_list_ret.length();
		item_list_out.data = static_cast<void*>(item_list_arr);
		struct miqt_array /* of QDesignerDnDItemInterface* */  sigval1 = item_list_out;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_dragItems(this, handle__dragItems, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createPreviewPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap createPreviewPixmap() const override {
		if (handle__createPreviewPixmap == 0) {
			return QPixmap(); // Pure virtual, there is no base we can call
		}

		QPixmap* callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_createPreviewPixmap(this, handle__createPreviewPixmap);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void addFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__addFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_addFormWindow(this, handle__addFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__removeFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_removeFormWindow(this, handle__removeFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setActiveFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void setActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__setActiveFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_setActiveFormWindow(this, handle__setActiveFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showPreview = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPreview() override {
		if (handle__showPreview == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerFormWindowManagerInterface_showPreview(this, handle__showPreview);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeAllPreviews = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeAllPreviews() override {
		if (handle__closeAllPreviews == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerFormWindowManagerInterface_closeAllPreviews(this, handle__closeAllPreviews);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showPluginDialog = 0;

	// Subclass to allow providing a Go implementation
	virtual void showPluginDialog() override {
		if (handle__showPluginDialog == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerFormWindowManagerInterface_showPluginDialog(this, handle__showPluginDialog);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerFormWindowManagerInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerFormWindowManagerInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerFormWindowManagerInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowManagerInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerFormWindowManagerInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerFormWindowManagerInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerFormWindowManagerInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerFormWindowManagerInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerFormWindowManagerInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerFormWindowManagerInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerFormWindowManagerInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerFormWindowManagerInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormWindowManagerInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerFormWindowManagerInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerFormWindowManagerInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerFormWindowManagerInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerFormWindowManagerInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerFormWindowManagerInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormWindowManagerInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerFormWindowManagerInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerFormWindowManagerInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerFormWindowManagerInterface();
}

QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerFormWindowManagerInterface(parent);
}

void QDesignerFormWindowManagerInterface_virtbase(QDesignerFormWindowManagerInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerFormWindowManagerInterface_metaObject(const QDesignerFormWindowManagerInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerFormWindowManagerInterface_metacast(QDesignerFormWindowManagerInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerFormWindowManagerInterface_tr(const char* s) {
	QString _ret = QDesignerFormWindowManagerInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowManagerInterface_trUtf8(const char* s) {
	QString _ret = QDesignerFormWindowManagerInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QDesignerFormWindowManagerInterface_action(const QDesignerFormWindowManagerInterface* self, int action) {
	return self->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
}

QActionGroup* QDesignerFormWindowManagerInterface_actionGroup(const QDesignerFormWindowManagerInterface* self, int actionGroup) {
	return self->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
}

QAction* QDesignerFormWindowManagerInterface_actionCut(const QDesignerFormWindowManagerInterface* self) {
	return self->actionCut();
}

QAction* QDesignerFormWindowManagerInterface_actionCopy(const QDesignerFormWindowManagerInterface* self) {
	return self->actionCopy();
}

QAction* QDesignerFormWindowManagerInterface_actionPaste(const QDesignerFormWindowManagerInterface* self) {
	return self->actionPaste();
}

QAction* QDesignerFormWindowManagerInterface_actionDelete(const QDesignerFormWindowManagerInterface* self) {
	return self->actionDelete();
}

QAction* QDesignerFormWindowManagerInterface_actionSelectAll(const QDesignerFormWindowManagerInterface* self) {
	return self->actionSelectAll();
}

QAction* QDesignerFormWindowManagerInterface_actionLower(const QDesignerFormWindowManagerInterface* self) {
	return self->actionLower();
}

QAction* QDesignerFormWindowManagerInterface_actionRaise(const QDesignerFormWindowManagerInterface* self) {
	return self->actionRaise();
}

QAction* QDesignerFormWindowManagerInterface_actionUndo(const QDesignerFormWindowManagerInterface* self) {
	return self->actionUndo();
}

QAction* QDesignerFormWindowManagerInterface_actionRedo(const QDesignerFormWindowManagerInterface* self) {
	return self->actionRedo();
}

QAction* QDesignerFormWindowManagerInterface_actionHorizontalLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionHorizontalLayout();
}

QAction* QDesignerFormWindowManagerInterface_actionVerticalLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionVerticalLayout();
}

QAction* QDesignerFormWindowManagerInterface_actionSplitHorizontal(const QDesignerFormWindowManagerInterface* self) {
	return self->actionSplitHorizontal();
}

QAction* QDesignerFormWindowManagerInterface_actionSplitVertical(const QDesignerFormWindowManagerInterface* self) {
	return self->actionSplitVertical();
}

QAction* QDesignerFormWindowManagerInterface_actionGridLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionGridLayout();
}

QAction* QDesignerFormWindowManagerInterface_actionFormLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionFormLayout();
}

QAction* QDesignerFormWindowManagerInterface_actionBreakLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionBreakLayout();
}

QAction* QDesignerFormWindowManagerInterface_actionAdjustSize(const QDesignerFormWindowManagerInterface* self) {
	return self->actionAdjustSize();
}

QAction* QDesignerFormWindowManagerInterface_actionSimplifyLayout(const QDesignerFormWindowManagerInterface* self) {
	return self->actionSimplifyLayout();
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_activeFormWindow(const QDesignerFormWindowManagerInterface* self) {
	return self->activeFormWindow();
}

int QDesignerFormWindowManagerInterface_formWindowCount(const QDesignerFormWindowManagerInterface* self) {
	return self->formWindowCount();
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_formWindow(const QDesignerFormWindowManagerInterface* self, int index) {
	return self->formWindow(static_cast<int>(index));
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_createFormWindow(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, int flags) {
	return self->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
}

QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_core(const QDesignerFormWindowManagerInterface* self) {
	return self->core();
}

void QDesignerFormWindowManagerInterface_dragItems(QDesignerFormWindowManagerInterface* self, struct miqt_array /* of QDesignerDnDItemInterface* */  item_list) {
	QList<QDesignerDnDItemInterface *> item_list_QList;
	item_list_QList.reserve(item_list.len);
	QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
	for(size_t i = 0; i < item_list.len; ++i) {
		item_list_QList.push_back(item_list_arr[i]);
	}
	self->dragItems(item_list_QList);
}

QPixmap* QDesignerFormWindowManagerInterface_createPreviewPixmap(const QDesignerFormWindowManagerInterface* self) {
	return new QPixmap(self->createPreviewPixmap());
}

void QDesignerFormWindowManagerInterface_formWindowAdded(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->formWindowAdded(formWindow);
}

void QDesignerFormWindowManagerInterface_connect_formWindowAdded(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
	QDesignerFormWindowManagerInterface::connect(self, static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowAdded), self, [=](QDesignerFormWindowInterface* formWindow) {
		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowAdded(slot, sigval1);
	});
}

void QDesignerFormWindowManagerInterface_formWindowRemoved(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->formWindowRemoved(formWindow);
}

void QDesignerFormWindowManagerInterface_connect_formWindowRemoved(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
	QDesignerFormWindowManagerInterface::connect(self, static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowRemoved), self, [=](QDesignerFormWindowInterface* formWindow) {
		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowRemoved(slot, sigval1);
	});
}

void QDesignerFormWindowManagerInterface_activeFormWindowChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->activeFormWindowChanged(formWindow);
}

void QDesignerFormWindowManagerInterface_connect_activeFormWindowChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
	QDesignerFormWindowManagerInterface::connect(self, static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::activeFormWindowChanged), self, [=](QDesignerFormWindowInterface* formWindow) {
		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindowChanged(slot, sigval1);
	});
}

void QDesignerFormWindowManagerInterface_formWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* fw) {
	self->formWindowSettingsChanged(fw);
}

void QDesignerFormWindowManagerInterface_connect_formWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
	QDesignerFormWindowManagerInterface::connect(self, static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowSettingsChanged), self, [=](QDesignerFormWindowInterface* fw) {
		QDesignerFormWindowInterface* sigval1 = fw;
		miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowSettingsChanged(slot, sigval1);
	});
}

void QDesignerFormWindowManagerInterface_addFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->addFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_removeFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->removeFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_setActiveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->setActiveFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_showPreview(QDesignerFormWindowManagerInterface* self) {
	self->showPreview();
}

void QDesignerFormWindowManagerInterface_closeAllPreviews(QDesignerFormWindowManagerInterface* self) {
	self->closeAllPreviews();
}

void QDesignerFormWindowManagerInterface_showPluginDialog(QDesignerFormWindowManagerInterface* self) {
	self->showPluginDialog();
}

struct miqt_string QDesignerFormWindowManagerInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerFormWindowManagerInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowManagerInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormWindowManagerInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowManagerInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerFormWindowManagerInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerFormWindowManagerInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerFormWindowManagerInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerFormWindowManagerInterface_override_virtual_action(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__action = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_actionGroup(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionGroup = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_activeFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__activeFormWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_formWindowCount(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formWindowCount = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_formWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_createFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createFormWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_dragItems(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragItems = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_createPreviewPixmap(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createPreviewPixmap = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_addFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addFormWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_removeFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeFormWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_setActiveFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setActiveFormWindow = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_showPreview(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showPreview = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_closeAllPreviews(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeAllPreviews = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_showPluginDialog(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showPluginDialog = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::event(event);
}

bool QDesignerFormWindowManagerInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerFormWindowManagerInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::eventFilter(watched, event);
}

bool QDesignerFormWindowManagerInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerFormWindowManagerInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::timerEvent(event);
}

bool QDesignerFormWindowManagerInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerFormWindowManagerInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::childEvent(event);
}

bool QDesignerFormWindowManagerInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerFormWindowManagerInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::customEvent(event);
}

bool QDesignerFormWindowManagerInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerFormWindowManagerInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::connectNotify(*signal);
}

bool QDesignerFormWindowManagerInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerFormWindowManagerInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>(self)->QDesignerFormWindowManagerInterface::disconnectNotify(*signal);
}

QObject* QDesignerFormWindowManagerInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerFormWindowManagerInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerFormWindowManagerInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerFormWindowManagerInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerFormWindowManagerInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowManagerInterface*>( (QDesignerFormWindowManagerInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerFormWindowManagerInterface_delete(QDesignerFormWindowManagerInterface* self) {
	delete self;
}

