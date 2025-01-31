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

void miqt_exec_callback_QStyledItemDelegate_Paint(const QStyledItemDelegate*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QStyledItemDelegate_SizeHint(const QStyledItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QStyledItemDelegate_CreateEditor(const QStyledItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_SetEditorData(const QStyledItemDelegate*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_SetModelData(const QStyledItemDelegate*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_string miqt_exec_callback_QStyledItemDelegate_DisplayText(const QStyledItemDelegate*, intptr_t, QVariant*, QLocale*);
void miqt_exec_callback_QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_EventFilter(QStyledItemDelegate*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QStyledItemDelegate_EditorEvent(QStyledItemDelegate*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_DestroyEditor(const QStyledItemDelegate*, intptr_t, QWidget*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_HelpEvent(QStyledItemDelegate*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QStyledItemDelegate_PaintingRoles(const QStyledItemDelegate*, intptr_t);
bool miqt_exec_callback_QStyledItemDelegate_Event(QStyledItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QStyledItemDelegate_TimerEvent(QStyledItemDelegate*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStyledItemDelegate_ChildEvent(QStyledItemDelegate*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStyledItemDelegate_CustomEvent(QStyledItemDelegate*, intptr_t, QEvent*);
void miqt_exec_callback_QStyledItemDelegate_ConnectNotify(QStyledItemDelegate*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStyledItemDelegate_DisconnectNotify(QStyledItemDelegate*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStyledItemDelegate final : public QStyledItemDelegate {
public:

	MiqtVirtualQStyledItemDelegate(): QStyledItemDelegate() {};
	MiqtVirtualQStyledItemDelegate(QObject* parent): QStyledItemDelegate(parent) {};

	virtual ~MiqtVirtualQStyledItemDelegate() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__Paint == 0) {
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

		miqt_exec_callback_QStyledItemDelegate_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::paint(painter, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__SizeHint == 0) {
			return QStyledItemDelegate::sizeHint(option, index);
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QStyledItemDelegate_SizeHint(this, handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint(QStyleOptionViewItem* option, QModelIndex* index) const {

		return new QSize(QStyledItemDelegate::sizeHint(*option, *index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__CreateEditor == 0) {
			return QStyledItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QStyledItemDelegate_CreateEditor(this, handle__CreateEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_CreateEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QStyledItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__SetEditorData == 0) {
			QStyledItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_SetEditorData(this, handle__SetEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditorData(QWidget* editor, QModelIndex* index) const {

		QStyledItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__SetModelData == 0) {
			QStyledItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_SetModelData(this, handle__SetModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QStyledItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__UpdateEditorGeometry == 0) {
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

		miqt_exec_callback_QStyledItemDelegate_UpdateEditorGeometry(this, handle__UpdateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisplayText = 0;

	// Subclass to allow providing a Go implementation
	virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
		if (handle__DisplayText == 0) {
			return QStyledItemDelegate::displayText(value, locale);
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		const QLocale& locale_ret = locale;
		// Cast returned reference into pointer
		QLocale* sigval2 = const_cast<QLocale*>(&locale_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QStyledItemDelegate_DisplayText(this, handle__DisplayText, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_DisplayText(QVariant* value, QLocale* locale) const {

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
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
		if (handle__InitStyleOption == 0) {
			QStyledItemDelegate::initStyleOption(option, index);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_InitStyleOption(this, handle__InitStyleOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionViewItem* option, QModelIndex* index) const {

		QStyledItemDelegate::initStyleOption(option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStyledItemDelegate::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QStyledItemDelegate::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__EditorEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_EditorEvent(this, handle__EditorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EditorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QStyledItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DestroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__DestroyEditor == 0) {
			QStyledItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QStyledItemDelegate_DestroyEditor(this, handle__DestroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DestroyEditor(QWidget* editor, QModelIndex* index) const {

		QStyledItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HelpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__HelpEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_HelpEvent(this, handle__HelpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HelpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QStyledItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<int> paintingRoles() const override {
		if (handle__PaintingRoles == 0) {
			return QStyledItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QStyledItemDelegate_PaintingRoles(this, handle__PaintingRoles);
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
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QStyledItemDelegate::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStyledItemDelegate_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QStyledItemDelegate::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QStyledItemDelegate::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QStyledItemDelegate::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QStyledItemDelegate::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QStyledItemDelegate::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QStyledItemDelegate::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStyledItemDelegate_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QStyledItemDelegate::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QStyledItemDelegate::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyledItemDelegate_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QStyledItemDelegate::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QStyledItemDelegate::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStyledItemDelegate_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QStyledItemDelegate::disconnectNotify(*signal);

	}

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

QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStyledItemDelegate_Tr(const char* s) {
	QString _ret = QStyledItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_TrUtf8(const char* s) {
	QString _ret = QStyledItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
	return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale) {
	QString _ret = self->displayText(*value, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_TrUtf82(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyledItemDelegate_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStyledItemDelegate_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_Paint(painter, option, index);
}

bool QStyledItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QStyledItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SizeHint(option, index);
}

bool QStyledItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateEditor = slot;
	return true;
}

QWidget* QStyledItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_CreateEditor(parent, option, index);
}

bool QStyledItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditorData = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SetEditorData(editor, index);
}

bool QStyledItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModelData = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SetModelData(editor, model, index);
}

bool QStyledItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometry = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_UpdateEditorGeometry(editor, option, index);
}

bool QStyledItemDelegate_override_virtual_DisplayText(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisplayText = slot;
	return true;
}

struct miqt_string QStyledItemDelegate_virtualbase_DisplayText(const void* self, QVariant* value, QLocale* locale) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_DisplayText(value, locale);
}

bool QStyledItemDelegate_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_InitStyleOption(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_InitStyleOption(option, index);
}

bool QStyledItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_EventFilter(object, event);
}

bool QStyledItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorEvent = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_EditorEvent(event, model, option, index);
}

bool QStyledItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DestroyEditor = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_DestroyEditor(editor, index);
}

bool QStyledItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HelpEvent = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_HelpEvent(event, view, option, index);
}

bool QStyledItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintingRoles = slot;
	return true;
}

struct miqt_array /* of int */  QStyledItemDelegate_virtualbase_PaintingRoles(const void* self) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_PaintingRoles();
}

bool QStyledItemDelegate_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QStyledItemDelegate_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_Event(event);
}

bool QStyledItemDelegate_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_TimerEvent(event);
}

bool QStyledItemDelegate_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_ChildEvent(event);
}

bool QStyledItemDelegate_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_CustomEvent(event);
}

bool QStyledItemDelegate_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QStyledItemDelegate_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStyledItemDelegate* self_cast = dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QStyledItemDelegate_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
	delete self;
}

