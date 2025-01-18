#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QFontMetrics>
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

void miqt_exec_callback_QAbstractItemDelegate_CommitData(intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemDelegate_CloseEditor(intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemDelegate_SizeHintChanged(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_CloseEditor2(intptr_t, QWidget*, int);
void miqt_exec_callback_QAbstractItemDelegate_Paint(void*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QAbstractItemDelegate_SizeHint(void*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QAbstractItemDelegate_CreateEditor(void*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_DestroyEditor(void*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_SetEditorData(void*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_SetModelData(void*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QAbstractItemDelegate_UpdateEditorGeometry(void*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QAbstractItemDelegate_EditorEvent(void*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QAbstractItemDelegate_HelpEvent(void*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QAbstractItemDelegate_PaintingRoles(void*, intptr_t);
bool miqt_exec_callback_QAbstractItemDelegate_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemDelegate_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractItemDelegate_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemDelegate_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemDelegate_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemDelegate_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemDelegate_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractItemDelegate final : public QAbstractItemDelegate {
public:

	MiqtVirtualQAbstractItemDelegate(): QAbstractItemDelegate() {};
	MiqtVirtualQAbstractItemDelegate(QObject* parent): QAbstractItemDelegate(parent) {};

	virtual ~MiqtVirtualQAbstractItemDelegate() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__Paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_Paint(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__SizeHint == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemDelegate_SizeHint(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__CreateEditor == 0) {
			return QAbstractItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QAbstractItemDelegate_CreateEditor(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__CreateEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_CreateEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QAbstractItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DestroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__DestroyEditor == 0) {
			QAbstractItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_DestroyEditor(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__DestroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DestroyEditor(QWidget* editor, QModelIndex* index) const {

		QAbstractItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__SetEditorData == 0) {
			QAbstractItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_SetEditorData(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__SetEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditorData(QWidget* editor, QModelIndex* index) const {

		QAbstractItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__SetModelData == 0) {
			QAbstractItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemDelegate_SetModelData(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__SetModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QAbstractItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__UpdateEditorGeometry == 0) {
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

		miqt_exec_callback_QAbstractItemDelegate_UpdateEditorGeometry(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__UpdateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QAbstractItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__EditorEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_EditorEvent(this, handle__EditorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EditorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QAbstractItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HelpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__HelpEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_HelpEvent(this, handle__HelpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HelpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QAbstractItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<int> paintingRoles() const override {
		if (handle__PaintingRoles == 0) {
			return QAbstractItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QAbstractItemDelegate_PaintingRoles(const_cast<MiqtVirtualQAbstractItemDelegate*>(this), handle__PaintingRoles);
		QVector<int> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<int>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of int */  virtualbase_PaintingRoles() const {

		QVector<int> _ret = QAbstractItemDelegate::paintingRoles();
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
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractItemDelegate::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractItemDelegate::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractItemDelegate::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemDelegate_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractItemDelegate::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractItemDelegate::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractItemDelegate::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractItemDelegate::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractItemDelegate::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractItemDelegate::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemDelegate_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractItemDelegate::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractItemDelegate::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemDelegate_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractItemDelegate::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractItemDelegate::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemDelegate_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractItemDelegate::disconnectNotify(*signal);

	}

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

QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemDelegate_Metacast(QAbstractItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemDelegate_Tr(const char* s) {
	QString _ret = QAbstractItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemDelegate_TrUtf8(const char* s) {
	QString _ret = QAbstractItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->editorEvent(event, model, *option, *index);
}

struct miqt_string QAbstractItemDelegate_ElidedText(QFontMetrics* fontMetrics, int width, int mode, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QAbstractItemDelegate::elidedText(*fontMetrics, static_cast<int>(width), static_cast<Qt::TextElideMode>(mode), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->helpEvent(event, view, *option, *index);
}

struct miqt_array /* of int */  QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self) {
	QVector<int> _ret = self->paintingRoles();
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

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
	self->commitData(editor);
}

void QAbstractItemDelegate_connect_CommitData(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*)>(&QAbstractItemDelegate::commitData), self, [=](QWidget* editor) {
		QWidget* sigval1 = editor;
		miqt_exec_callback_QAbstractItemDelegate_CommitData(slot, sigval1);
	});
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
	self->closeEditor(editor);
}

void QAbstractItemDelegate_connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor) {
		QWidget* sigval1 = editor;
		miqt_exec_callback_QAbstractItemDelegate_CloseEditor(slot, sigval1);
	});
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1) {
	self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(const QModelIndex&)>(&QAbstractItemDelegate::sizeHintChanged), self, [=](const QModelIndex& param1) {
		const QModelIndex& param1_ret = param1;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&param1_ret);
		miqt_exec_callback_QAbstractItemDelegate_SizeHintChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemDelegate_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemDelegate_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint) {
	self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot) {
	MiqtVirtualQAbstractItemDelegate::connect(self, static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor), self, [=](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemDelegate_CloseEditor2(slot, sigval1, sigval2);
	});
}

void QAbstractItemDelegate_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__Paint = slot;
}

void QAbstractItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__SizeHint = slot;
}

void QAbstractItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__CreateEditor = slot;
}

QWidget* QAbstractItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_CreateEditor(parent, option, index);
}

void QAbstractItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__DestroyEditor = slot;
}

void QAbstractItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_DestroyEditor(editor, index);
}

void QAbstractItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__SetEditorData = slot;
}

void QAbstractItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_SetEditorData(editor, index);
}

void QAbstractItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__SetModelData = slot;
}

void QAbstractItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_SetModelData(editor, model, index);
}

void QAbstractItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__UpdateEditorGeometry = slot;
}

void QAbstractItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_UpdateEditorGeometry(editor, option, index);
}

void QAbstractItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__EditorEvent = slot;
}

bool QAbstractItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_EditorEvent(event, model, option, index);
}

void QAbstractItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__HelpEvent = slot;
}

bool QAbstractItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_HelpEvent(event, view, option, index);
}

void QAbstractItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__PaintingRoles = slot;
}

struct miqt_array /* of int */  QAbstractItemDelegate_virtualbase_PaintingRoles(const void* self) {
	return ( (const MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_PaintingRoles();
}

void QAbstractItemDelegate_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__Event = slot;
}

bool QAbstractItemDelegate_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_Event(event);
}

void QAbstractItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__EventFilter = slot;
}

bool QAbstractItemDelegate_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAbstractItemDelegate_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__TimerEvent = slot;
}

void QAbstractItemDelegate_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_TimerEvent(event);
}

void QAbstractItemDelegate_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__ChildEvent = slot;
}

void QAbstractItemDelegate_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_ChildEvent(event);
}

void QAbstractItemDelegate_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__CustomEvent = slot;
}

void QAbstractItemDelegate_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_CustomEvent(event);
}

void QAbstractItemDelegate_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__ConnectNotify = slot;
}

void QAbstractItemDelegate_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAbstractItemDelegate_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractItemDelegate*>( (QAbstractItemDelegate*)(self) )->handle__DisconnectNotify = slot;
}

void QAbstractItemDelegate_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemDelegate*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
	delete self;
}

