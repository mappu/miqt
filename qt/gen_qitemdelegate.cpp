#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QHelpEvent>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qitemdelegate.h>
#include "gen_qitemdelegate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QItemDelegate_paint(const QItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QItemDelegate_sizeHint(const QItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QItemDelegate_createEditor(const QItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QItemDelegate_setEditorData(const QItemDelegate*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QItemDelegate_setModelData(const QItemDelegate*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QItemDelegate_updateEditorGeometry(const QItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QItemDelegate_drawDisplay(const QItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QRect*, struct miqt_string);
void miqt_exec_callback_QItemDelegate_drawDecoration(const QItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QRect*, QPixmap*);
void miqt_exec_callback_QItemDelegate_drawFocus(const QItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QRect*);
void miqt_exec_callback_QItemDelegate_drawCheck(const QItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QRect*, int);
bool miqt_exec_callback_QItemDelegate_eventFilter(QItemDelegate*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QItemDelegate_editorEvent(QItemDelegate*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QItemDelegate_destroyEditor(const QItemDelegate*, intptr_t, QWidget*, QModelIndex*);
bool miqt_exec_callback_QItemDelegate_helpEvent(QItemDelegate*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QItemDelegate_paintingRoles(const QItemDelegate*, intptr_t);
bool miqt_exec_callback_QItemDelegate_event(QItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QItemDelegate_timerEvent(QItemDelegate*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QItemDelegate_childEvent(QItemDelegate*, intptr_t, QChildEvent*);
void miqt_exec_callback_QItemDelegate_customEvent(QItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QItemDelegate_connectNotify(QItemDelegate*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QItemDelegate_disconnectNotify(QItemDelegate*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQItemDelegate final : public QItemDelegate {
public:

	MiqtVirtualQItemDelegate(): QItemDelegate() {};
	MiqtVirtualQItemDelegate(QObject* parent): QItemDelegate(parent) {};

	virtual ~MiqtVirtualQItemDelegate() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__paint == 0) {
			QItemDelegate::paint(painter, option, index);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) const {

		QItemDelegate::paint(painter, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__sizeHint == 0) {
			return QItemDelegate::sizeHint(option, index);
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QItemDelegate_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint(QStyleOptionViewItem* option, QModelIndex* index) const {

		return new QSize(QItemDelegate::sizeHint(*option, *index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__createEditor == 0) {
			return QItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QItemDelegate_createEditor(this, handle__createEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_createEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__setEditorData == 0) {
			QItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_setEditorData(this, handle__setEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditorData(QWidget* editor, QModelIndex* index) const {

		QItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__setModelData == 0) {
			QItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_setModelData(this, handle__setModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__updateEditorGeometry == 0) {
			QItemDelegate::updateEditorGeometry(editor, option, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_updateEditorGeometry(this, handle__updateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawDisplay = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawDisplay(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QString& text) const override {
		if (handle__drawDisplay == 0) {
			QItemDelegate::drawDisplay(painter, option, rect, text);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval4 = text_ms;

		miqt_exec_callback_QItemDelegate_drawDisplay(this, handle__drawDisplay, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawDisplay(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QItemDelegate::drawDisplay(painter, *option, *rect, text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawDecoration = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawDecoration(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QPixmap& pixmap) const override {
		if (handle__drawDecoration == 0) {
			QItemDelegate::drawDecoration(painter, option, rect, pixmap);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval4 = const_cast<QPixmap*>(&pixmap_ret);

		miqt_exec_callback_QItemDelegate_drawDecoration(this, handle__drawDecoration, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawDecoration(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) const {

		QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawFocus = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFocus(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect) const override {
		if (handle__drawFocus == 0) {
			QItemDelegate::drawFocus(painter, option, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QItemDelegate_drawFocus(this, handle__drawFocus, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawFocus(QPainter* painter, QStyleOptionViewItem* option, QRect* rect) const {

		QItemDelegate::drawFocus(painter, *option, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawCheck = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawCheck(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, Qt::CheckState state) const override {
		if (handle__drawCheck == 0) {
			QItemDelegate::drawCheck(painter, option, rect, state);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		Qt::CheckState state_ret = state;
		int sigval4 = static_cast<int>(state_ret);

		miqt_exec_callback_QItemDelegate_drawCheck(this, handle__drawCheck, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawCheck(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state) const {

		QItemDelegate::drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QItemDelegate::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QItemDelegate_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QItemDelegate::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__editorEvent == 0) {
			return QItemDelegate::editorEvent(event, model, option, index);
		}
		
		QEvent* sigval1 = event;
		QAbstractItemModel* sigval2 = model;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QItemDelegate_editorEvent(this, handle__editorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_editorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__destroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__destroyEditor == 0) {
			QItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_destroyEditor(this, handle__destroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_destroyEditor(QWidget* editor, QModelIndex* index) const {

		QItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__helpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__helpEvent == 0) {
			return QItemDelegate::helpEvent(event, view, option, index);
		}
		
		QHelpEvent* sigval1 = event;
		QAbstractItemView* sigval2 = view;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QItemDelegate_helpEvent(this, handle__helpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_helpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<int> paintingRoles() const override {
		if (handle__paintingRoles == 0) {
			return QItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QItemDelegate_paintingRoles(this, handle__paintingRoles);
		QVector<int> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<int>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of int */  virtualbase_paintingRoles() const {

		QVector<int> _ret = QItemDelegate::paintingRoles();
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
			return QItemDelegate::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QItemDelegate_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QItemDelegate::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QItemDelegate::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QItemDelegate_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QItemDelegate::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QItemDelegate::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QItemDelegate_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QItemDelegate::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QItemDelegate::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QItemDelegate_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QItemDelegate::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QItemDelegate::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemDelegate_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QItemDelegate::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QItemDelegate::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemDelegate_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QItemDelegate::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QItemDelegate_protectedbase_drawBackground(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
	friend void QItemDelegate_protectedbase_doLayout(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
	friend QRect* QItemDelegate_protectedbase_rect(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QModelIndex* index, int role);
	friend QStyleOptionViewItem* QItemDelegate_protectedbase_setOptions(bool* _dynamic_cast_ok, const void* self, QModelIndex* index, QStyleOptionViewItem* option);
	friend QPixmap* QItemDelegate_protectedbase_decoration(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QVariant* variant);
	friend QPixmap* QItemDelegate_protectedbase_selected(bool* _dynamic_cast_ok, const void* self, QPixmap* pixmap, QPalette* palette, bool enabled);
	friend QRect* QItemDelegate_protectedbase_doCheck(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant);
	friend QRect* QItemDelegate_protectedbase_textRectangle(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRect* rect, QFont* font, struct miqt_string text);
	friend QObject* QItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QItemDelegate* QItemDelegate_new() {
	return new MiqtVirtualQItemDelegate();
}

QItemDelegate* QItemDelegate_new2(QObject* parent) {
	return new MiqtVirtualQItemDelegate(parent);
}

void QItemDelegate_virtbase(QItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate) {
	*outptr_QAbstractItemDelegate = static_cast<QAbstractItemDelegate*>(src);
}

QMetaObject* QItemDelegate_metaObject(const QItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QItemDelegate_metacast(QItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QItemDelegate_tr(const char* s) {
	QString _ret = QItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_trUtf8(const char* s) {
	QString _ret = QItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemDelegate_hasClipping(const QItemDelegate* self) {
	return self->hasClipping();
}

void QItemDelegate_setClipping(QItemDelegate* self, bool clip) {
	self->setClipping(clip);
}

void QItemDelegate_paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QItemDelegate_sizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QItemDelegate_createEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QItemDelegate_setEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QItemDelegate_setModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QItemDelegate_updateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QItemDelegate_itemEditorFactory(const QItemDelegate* self) {
	return self->itemEditorFactory();
}

void QItemDelegate_setItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string QItemDelegate_tr2(const char* s, const char* c) {
	QString _ret = QItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_tr3(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_trUtf82(const char* s, const char* c) {
	QString _ret = QItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemDelegate_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QItemDelegate_virtualbase_paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_paint(painter, option, index);
}

bool QItemDelegate_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QItemDelegate_virtualbase_sizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_sizeHint(option, index);
}

bool QItemDelegate_override_virtual_createEditor(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createEditor = slot;
	return true;
}

QWidget* QItemDelegate_virtualbase_createEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_createEditor(parent, option, index);
}

bool QItemDelegate_override_virtual_setEditorData(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditorData = slot;
	return true;
}

void QItemDelegate_virtualbase_setEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_setEditorData(editor, index);
}

bool QItemDelegate_override_virtual_setModelData(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModelData = slot;
	return true;
}

void QItemDelegate_virtualbase_setModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_setModelData(editor, model, index);
}

bool QItemDelegate_override_virtual_updateEditorGeometry(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometry = slot;
	return true;
}

void QItemDelegate_virtualbase_updateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_updateEditorGeometry(editor, option, index);
}

bool QItemDelegate_override_virtual_drawDisplay(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawDisplay = slot;
	return true;
}

void QItemDelegate_virtualbase_drawDisplay(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_drawDisplay(painter, option, rect, text);
}

bool QItemDelegate_override_virtual_drawDecoration(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawDecoration = slot;
	return true;
}

void QItemDelegate_virtualbase_drawDecoration(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_drawDecoration(painter, option, rect, pixmap);
}

bool QItemDelegate_override_virtual_drawFocus(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawFocus = slot;
	return true;
}

void QItemDelegate_virtualbase_drawFocus(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_drawFocus(painter, option, rect);
}

bool QItemDelegate_override_virtual_drawCheck(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawCheck = slot;
	return true;
}

void QItemDelegate_virtualbase_drawCheck(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_drawCheck(painter, option, rect, state);
}

bool QItemDelegate_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QItemDelegate_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_eventFilter(object, event);
}

bool QItemDelegate_override_virtual_editorEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorEvent = slot;
	return true;
}

bool QItemDelegate_virtualbase_editorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_editorEvent(event, model, option, index);
}

bool QItemDelegate_override_virtual_destroyEditor(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__destroyEditor = slot;
	return true;
}

void QItemDelegate_virtualbase_destroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_destroyEditor(editor, index);
}

bool QItemDelegate_override_virtual_helpEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__helpEvent = slot;
	return true;
}

bool QItemDelegate_virtualbase_helpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_helpEvent(event, view, option, index);
}

bool QItemDelegate_override_virtual_paintingRoles(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintingRoles = slot;
	return true;
}

struct miqt_array /* of int */  QItemDelegate_virtualbase_paintingRoles(const void* self) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_paintingRoles();
}

bool QItemDelegate_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QItemDelegate_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_event(event);
}

bool QItemDelegate_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QItemDelegate_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_timerEvent(event);
}

bool QItemDelegate_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QItemDelegate_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_childEvent(event);
}

bool QItemDelegate_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QItemDelegate_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_customEvent(event);
}

bool QItemDelegate_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QItemDelegate_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_connectNotify(signal);
}

bool QItemDelegate_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QItemDelegate_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_disconnectNotify(signal);
}

void QItemDelegate_protectedbase_drawBackground(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawBackground(painter, *option, *index);

}

void QItemDelegate_protectedbase_doLayout(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doLayout(*option, checkRect, iconRect, textRect, hint);

}

QRect* QItemDelegate_protectedbase_rect(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QModelIndex* index, int role) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->rect(*option, *index, static_cast<int>(role)));

}

QStyleOptionViewItem* QItemDelegate_protectedbase_setOptions(bool* _dynamic_cast_ok, const void* self, QModelIndex* index, QStyleOptionViewItem* option) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QStyleOptionViewItem(self_cast->setOptions(*index, *option));

}

QPixmap* QItemDelegate_protectedbase_decoration(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QVariant* variant) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPixmap(self_cast->decoration(*option, *variant));

}

QPixmap* QItemDelegate_protectedbase_selected(bool* _dynamic_cast_ok, const void* self, QPixmap* pixmap, QPalette* palette, bool enabled) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->selected(*pixmap, *palette, enabled);

}

QRect* QItemDelegate_protectedbase_doCheck(bool* _dynamic_cast_ok, const void* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->doCheck(*option, *bounding, *variant));

}

QRect* QItemDelegate_protectedbase_textRectangle(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRect* rect, QFont* font, struct miqt_string text) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
			QString text_QString = QString::fromUtf8(text.data, text.len);

	return new QRect(self_cast->textRectangle(painter, *rect, *font, text_QString));

}

QObject* QItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQItemDelegate* self_cast = dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QItemDelegate_delete(QItemDelegate* self) {
	delete self;
}

