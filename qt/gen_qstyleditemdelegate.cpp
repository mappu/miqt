#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QItemEditorFactory>
#include <QList>
#include <QLocale>
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
#include <QStyledItemDelegate>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "gen_qstyleditemdelegate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStyledItemDelegate_paint(const QStyledItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QStyledItemDelegate_sizeHint(const QStyledItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QStyledItemDelegate_createEditor(const QStyledItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_setEditorData(const QStyledItemDelegate*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_setModelData(const QStyledItemDelegate*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_updateEditorGeometry(const QStyledItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_string miqt_exec_callback_QStyledItemDelegate_displayText(const QStyledItemDelegate*, intptr_t, QVariant*, QLocale*);
void miqt_exec_callback_QStyledItemDelegate_initStyleOption(const QStyledItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_eventFilter(QStyledItemDelegate*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QStyledItemDelegate_editorEvent(QStyledItemDelegate*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_destroyEditor(const QStyledItemDelegate*, intptr_t, QWidget*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_helpEvent(QStyledItemDelegate*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QStyledItemDelegate_paintingRoles(const QStyledItemDelegate*, intptr_t);
bool miqt_exec_callback_QStyledItemDelegate_event(QStyledItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QStyledItemDelegate_timerEvent(QStyledItemDelegate*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStyledItemDelegate_childEvent(QStyledItemDelegate*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStyledItemDelegate_customEvent(QStyledItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QStyledItemDelegate_connectNotify(QStyledItemDelegate*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStyledItemDelegate_disconnectNotify(QStyledItemDelegate*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStyledItemDelegate final : public QStyledItemDelegate {
public:

	MiqtVirtualQStyledItemDelegate(): QStyledItemDelegate() {};
	MiqtVirtualQStyledItemDelegate(QObject* parent): QStyledItemDelegate(parent) {};

	virtual ~MiqtVirtualQStyledItemDelegate() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__paint == 0) {
			QStyledItemDelegate::paint(painter, option, index);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::paint(painter, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__sizeHint == 0) {
			return QStyledItemDelegate::sizeHint(option, index);
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QStyledItemDelegate_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint(QStyleOptionViewItem* option, QModelIndex* index) const {

		return new QSize(QStyledItemDelegate::sizeHint(*option, *index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__createEditor == 0) {
			return QStyledItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QStyledItemDelegate_createEditor(this, handle__createEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_createEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QStyledItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__setEditorData == 0) {
			QStyledItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_setEditorData(this, handle__setEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditorData(QWidget* editor, QModelIndex* index) const {

		QStyledItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__setModelData == 0) {
			QStyledItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_setModelData(this, handle__setModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QStyledItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__updateEditorGeometry == 0) {
			QStyledItemDelegate::updateEditorGeometry(editor, option, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_updateEditorGeometry(this, handle__updateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__displayText = 0;

	// Subclass to allow providing a Go implementation
	virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
		if (handle__displayText == 0) {
			return QStyledItemDelegate::displayText(value, locale);
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		const QLocale& locale_ret = locale;
		// Cast returned reference into pointer
		QLocale* sigval2 = const_cast<QLocale*>(&locale_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QStyledItemDelegate_displayText(this, handle__displayText, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_displayText(QVariant* value, QLocale* locale) const {

		QString _ret = QStyledItemDelegate::displayText(*value, *locale);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
		if (handle__initStyleOption == 0) {
			QStyledItemDelegate::initStyleOption(option, index);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_initStyleOption(this, handle__initStyleOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::initStyleOption(option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStyledItemDelegate::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QStyledItemDelegate::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__editorEvent == 0) {
			return QStyledItemDelegate::editorEvent(event, model, option, index);
		}
		
		QEvent* sigval1 = event;
		QAbstractItemModel* sigval2 = model;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_editorEvent(this, handle__editorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_editorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QStyledItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__destroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__destroyEditor == 0) {
			QStyledItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_destroyEditor(this, handle__destroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_destroyEditor(QWidget* editor, QModelIndex* index) const {

		QStyledItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__helpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__helpEvent == 0) {
			return QStyledItemDelegate::helpEvent(event, view, option, index);
		}
		
		QHelpEvent* sigval1 = event;
		QAbstractItemView* sigval2 = view;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_helpEvent(this, handle__helpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_helpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QStyledItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<int> paintingRoles() const override {
		if (handle__paintingRoles == 0) {
			return QStyledItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QStyledItemDelegate_paintingRoles(this, handle__paintingRoles);
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

		QVector<int> _ret = QStyledItemDelegate::paintingRoles();
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
			return QStyledItemDelegate::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QStyledItemDelegate::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStyledItemDelegate::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStyledItemDelegate::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStyledItemDelegate::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStyledItemDelegate::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStyledItemDelegate::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStyledItemDelegate::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStyledItemDelegate::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyledItemDelegate_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStyledItemDelegate::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStyledItemDelegate::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyledItemDelegate_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStyledItemDelegate::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QStyledItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStyledItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStyledItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStyledItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStyledItemDelegate* QStyledItemDelegate_new() {
	return new MiqtVirtualQStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
	return new MiqtVirtualQStyledItemDelegate(parent);
}

void QStyledItemDelegate_virtbase(QStyledItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate) {
	*outptr_QAbstractItemDelegate = static_cast<QAbstractItemDelegate*>(src);
}

QMetaObject* QStyledItemDelegate_metaObject(const QStyledItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyledItemDelegate_metacast(QStyledItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyledItemDelegate_tr(const char* s) {
	QString _ret = QStyledItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_trUtf8(const char* s) {
	QString _ret = QStyledItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyledItemDelegate_paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_sizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QStyledItemDelegate_createEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_setEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QStyledItemDelegate_setModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_updateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_itemEditorFactory(const QStyledItemDelegate* self) {
	return self->itemEditorFactory();
}

void QStyledItemDelegate_setItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string QStyledItemDelegate_displayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale) {
	QString _ret = self->displayText(*value, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_tr2(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_tr3(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_trUtf82(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStyledItemDelegate_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_paint(painter, option, index);
}

bool QStyledItemDelegate_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QStyledItemDelegate_virtualbase_sizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_sizeHint(option, index);
}

bool QStyledItemDelegate_override_virtual_createEditor(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createEditor = slot;
	return true;
}

QWidget* QStyledItemDelegate_virtualbase_createEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_createEditor(parent, option, index);
}

bool QStyledItemDelegate_override_virtual_setEditorData(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditorData = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_setEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_setEditorData(editor, index);
}

bool QStyledItemDelegate_override_virtual_setModelData(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModelData = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_setModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_setModelData(editor, model, index);
}

bool QStyledItemDelegate_override_virtual_updateEditorGeometry(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometry = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_updateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_updateEditorGeometry(editor, option, index);
}

bool QStyledItemDelegate_override_virtual_displayText(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__displayText = slot;
	return true;
}

struct miqt_string QStyledItemDelegate_virtualbase_displayText(const void* self, QVariant* value, QLocale* locale) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_displayText(value, locale);
}

bool QStyledItemDelegate_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_initStyleOption(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_initStyleOption(option, index);
}

bool QStyledItemDelegate_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_eventFilter(object, event);
}

bool QStyledItemDelegate_override_virtual_editorEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorEvent = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_editorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_editorEvent(event, model, option, index);
}

bool QStyledItemDelegate_override_virtual_destroyEditor(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__destroyEditor = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_destroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_destroyEditor(editor, index);
}

bool QStyledItemDelegate_override_virtual_helpEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__helpEvent = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_helpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_helpEvent(event, view, option, index);
}

bool QStyledItemDelegate_override_virtual_paintingRoles(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintingRoles = slot;
	return true;
}

struct miqt_array /* of int */  QStyledItemDelegate_virtualbase_paintingRoles(const void* self) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_paintingRoles();
}

bool QStyledItemDelegate_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_event(event);
}

bool QStyledItemDelegate_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_timerEvent(event);
}

bool QStyledItemDelegate_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_childEvent(event);
}

bool QStyledItemDelegate_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_customEvent(event);
}

bool QStyledItemDelegate_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_connectNotify(signal);
}

bool QStyledItemDelegate_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QStyledItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStyledItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStyledItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStyledItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStyledItemDelegate_delete(QStyledItemDelegate* self) {
	delete self;
}

