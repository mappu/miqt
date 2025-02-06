#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <qabstractitemdelegate.h>
#include "gen_qabstractitemdelegate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractItemDelegate_commitData(intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemDelegate_closeEditor(intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemDelegate_sizeHintChanged(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_closeEditor2(intptr_t, QWidget*, int);
void miqt_exec_callback_QAbstractItemDelegate_paint(const QAbstractItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QAbstractItemDelegate_sizeHint(const QAbstractItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QAbstractItemDelegate_createEditor(const QAbstractItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_destroyEditor(const QAbstractItemDelegate*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_setEditorData(const QAbstractItemDelegate*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_setModelData(const QAbstractItemDelegate*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_updateEditorGeometry(const QAbstractItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QAbstractItemDelegate_editorEvent(QAbstractItemDelegate*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QAbstractItemDelegate_helpEvent(QAbstractItemDelegate*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QAbstractItemDelegate_paintingRoles(const QAbstractItemDelegate*, intptr_t);
bool miqt_exec_callback_QAbstractItemDelegate_event(QAbstractItemDelegate*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemDelegate_eventFilter(QAbstractItemDelegate*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractItemDelegate_timerEvent(QAbstractItemDelegate*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemDelegate_childEvent(QAbstractItemDelegate*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemDelegate_customEvent(QAbstractItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemDelegate_connectNotify(QAbstractItemDelegate*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemDelegate_disconnectNotify(QAbstractItemDelegate*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractItemDelegate final : public QAbstractItemDelegate {
public:

	MiqtVirtualQAbstractItemDelegate(): QAbstractItemDelegate() {};
	MiqtVirtualQAbstractItemDelegate(QObject* parent): QAbstractItemDelegate(parent) {};

	virtual ~MiqtVirtualQAbstractItemDelegate() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__sizeHint == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemDelegate_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__createEditor == 0) {
			return QAbstractItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QAbstractItemDelegate_createEditor(this, handle__createEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_createEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QAbstractItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__destroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__destroyEditor == 0) {
			QAbstractItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_destroyEditor(this, handle__destroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_destroyEditor(QWidget* editor, QModelIndex* index) const {

		QAbstractItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__setEditorData == 0) {
			QAbstractItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_setEditorData(this, handle__setEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditorData(QWidget* editor, QModelIndex* index) const {

		QAbstractItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__setModelData == 0) {
			QAbstractItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_setModelData(this, handle__setModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QAbstractItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__updateEditorGeometry == 0) {
			QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_updateEditorGeometry(this, handle__updateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QAbstractItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__editorEvent == 0) {
			return QAbstractItemDelegate::editorEvent(event, model, option, index);
		}
		
		QEvent* sigval1 = event;
		QAbstractItemModel* sigval2 = model;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_editorEvent(this, handle__editorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_editorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QAbstractItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__helpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__helpEvent == 0) {
			return QAbstractItemDelegate::helpEvent(event, view, option, index);
		}
		
		QHelpEvent* sigval1 = event;
		QAbstractItemView* sigval2 = view;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_helpEvent(this, handle__helpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_helpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QAbstractItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<int> paintingRoles() const override {
		if (handle__paintingRoles == 0) {
			return QAbstractItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QAbstractItemDelegate_paintingRoles(this, handle__paintingRoles);
		QList<int> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<int>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of int */  virtualbase_paintingRoles() const {

		QList<int> _ret = QAbstractItemDelegate::paintingRoles();
		// Convert QList<> from C++ memory to manually-managed C memory
		int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = _ret[i];
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractItemDelegate::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractItemDelegate::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractItemDelegate::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractItemDelegate::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractItemDelegate::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractItemDelegate::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractItemDelegate::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractItemDelegate::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractItemDelegate::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractItemDelegate::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractItemDelegate::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemDelegate_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractItemDelegate::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractItemDelegate::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemDelegate_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractItemDelegate::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAbstractItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractItemDelegate* QAbstractItemDelegate_new() {
	return new MiqtVirtualQAbstractItemDelegate();
}

QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent) {
	return new MiqtVirtualQAbstractItemDelegate(parent);
}

void QAbstractItemDelegate_virtbase(QAbstractItemDelegate* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractItemDelegate_metaObject(const QAbstractItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemDelegate_metacast(QAbstractItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemDelegate_tr(const char* s) {
	QString _ret = QAbstractItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemDelegate_paint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_sizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QAbstractItemDelegate_createEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_destroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_setEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QAbstractItemDelegate_setModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_updateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_editorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->editorEvent(event, model, *option, *index);
}

bool QAbstractItemDelegate_helpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->helpEvent(event, view, *option, *index);
}

struct miqt_array /* of int */  QAbstractItemDelegate_paintingRoles(const QAbstractItemDelegate* self) {
	QList<int> _ret = self->paintingRoles();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAbstractItemDelegate_commitData(QAbstractItemDelegate* self, QWidget* editor) {
	self->commitData(editor);
}

void QAbstractItemDelegate_connect_commitData(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*)>(&QAbstractItemDelegate::commitData), self, [=](QWidget* editor) {
		QWidget* sigval1 = editor;
		miqt_exec_callback_QAbstractItemDelegate_commitData(slot, sigval1);
	});
}

void QAbstractItemDelegate_closeEditor(QAbstractItemDelegate* self, QWidget* editor) {
	self->closeEditor(editor);
}

void QAbstractItemDelegate_connect_closeEditor(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor) {
		QWidget* sigval1 = editor;
		miqt_exec_callback_QAbstractItemDelegate_closeEditor(slot, sigval1);
	});
}

void QAbstractItemDelegate_sizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1) {
	self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_connect_sizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(const QModelIndex&)>(&QAbstractItemDelegate::sizeHintChanged), self, [=](const QModelIndex& param1) {
		const QModelIndex& param1_ret = param1;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&param1_ret);
		miqt_exec_callback_QAbstractItemDelegate_sizeHintChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractItemDelegate_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemDelegate_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemDelegate_closeEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint) {
	self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_connect_closeEditor2(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemDelegate_closeEditor2(slot, sigval1, sigval2);
	});
}

bool QAbstractItemDelegate_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

bool QAbstractItemDelegate_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

bool QAbstractItemDelegate_override_virtual_createEditor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createEditor = slot;
	return true;
}

QWidget* QAbstractItemDelegate_virtualbase_createEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_createEditor(parent, option, index);
}

bool QAbstractItemDelegate_override_virtual_destroyEditor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__destroyEditor = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_destroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_destroyEditor(editor, index);
}

bool QAbstractItemDelegate_override_virtual_setEditorData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditorData = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_setEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_setEditorData(editor, index);
}

bool QAbstractItemDelegate_override_virtual_setModelData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModelData = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_setModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_setModelData(editor, model, index);
}

bool QAbstractItemDelegate_override_virtual_updateEditorGeometry(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometry = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_updateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_updateEditorGeometry(editor, option, index);
}

bool QAbstractItemDelegate_override_virtual_editorEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorEvent = slot;
	return true;
}

bool QAbstractItemDelegate_virtualbase_editorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_editorEvent(event, model, option, index);
}

bool QAbstractItemDelegate_override_virtual_helpEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__helpEvent = slot;
	return true;
}

bool QAbstractItemDelegate_virtualbase_helpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_helpEvent(event, view, option, index);
}

bool QAbstractItemDelegate_override_virtual_paintingRoles(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintingRoles = slot;
	return true;
}

struct miqt_array /* of int */  QAbstractItemDelegate_virtualbase_paintingRoles(const void* self) {
	return ( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_paintingRoles();
}

bool QAbstractItemDelegate_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractItemDelegate_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_event(event);
}

bool QAbstractItemDelegate_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractItemDelegate_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractItemDelegate_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractItemDelegate_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractItemDelegate_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractItemDelegate_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractItemDelegate_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractItemDelegate_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAbstractItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemDelegate* self_cast = dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractItemDelegate_delete(QAbstractItemDelegate* self) {
	delete self;
}

