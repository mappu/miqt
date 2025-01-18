#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QEvent>
#include <QHelpEvent>
#include <QItemEditorFactory>
#include <QList>
#include <QLocale>
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
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "gen_qstyleditemdelegate.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStyledItemDelegate_Paint(void*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
QSize* miqt_exec_callback_QStyledItemDelegate_SizeHint(void*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
QWidget* miqt_exec_callback_QStyledItemDelegate_CreateEditor(void*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_SetEditorData(void*, intptr_t, QWidget*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_SetModelData(void*, intptr_t, QWidget*, QAbstractItemModel*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_UpdateEditorGeometry(void*, intptr_t, QWidget*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_string miqt_exec_callback_QStyledItemDelegate_DisplayText(void*, intptr_t, QVariant*, QLocale*);
void miqt_exec_callback_QStyledItemDelegate_InitStyleOption(void*, intptr_t, QStyleOptionViewItem*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QStyledItemDelegate_EditorEvent(void*, intptr_t, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QStyledItemDelegate_DestroyEditor(void*, intptr_t, QWidget*, QModelIndex*);
bool miqt_exec_callback_QStyledItemDelegate_HelpEvent(void*, intptr_t, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
struct miqt_array /* of int */  miqt_exec_callback_QStyledItemDelegate_PaintingRoles(void*, intptr_t);
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

		miqt_exec_callback_QStyledItemDelegate_Paint(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__Paint, sigval1, sigval2, sigval3);

		
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

		QSize* callback_return_value = miqt_exec_callback_QStyledItemDelegate_SizeHint(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__SizeHint, sigval1, sigval2);

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

		QWidget* callback_return_value = miqt_exec_callback_QStyledItemDelegate_CreateEditor(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__CreateEditor, sigval1, sigval2, sigval3);

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

		miqt_exec_callback_QStyledItemDelegate_SetEditorData(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__SetEditorData, sigval1, sigval2);

		
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

		miqt_exec_callback_QStyledItemDelegate_SetModelData(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__SetModelData, sigval1, sigval2, sigval3);

		
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

		miqt_exec_callback_QStyledItemDelegate_UpdateEditorGeometry(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__UpdateEditorGeometry, sigval1, sigval2, sigval3);

		
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

		struct miqt_string callback_return_value = miqt_exec_callback_QStyledItemDelegate_DisplayText(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__DisplayText, sigval1, sigval2);
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

		miqt_exec_callback_QStyledItemDelegate_InitStyleOption(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__InitStyleOption, sigval1, sigval2);

		
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

		miqt_exec_callback_QStyledItemDelegate_DestroyEditor(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__DestroyEditor, sigval1, sigval2);

		
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
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QStyledItemDelegate_PaintingRoles(const_cast<MiqtVirtualQStyledItemDelegate*>(this), handle__PaintingRoles);
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

void QStyledItemDelegate_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__Paint = slot;
}

void QStyledItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_Paint(painter, option, index);
}

void QStyledItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__SizeHint = slot;
}

QSize* QStyledItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SizeHint(option, index);
}

void QStyledItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__CreateEditor = slot;
}

QWidget* QStyledItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_CreateEditor(parent, option, index);
}

void QStyledItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__SetEditorData = slot;
}

void QStyledItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SetEditorData(editor, index);
}

void QStyledItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__SetModelData = slot;
}

void QStyledItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_SetModelData(editor, model, index);
}

void QStyledItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__UpdateEditorGeometry = slot;
}

void QStyledItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_UpdateEditorGeometry(editor, option, index);
}

void QStyledItemDelegate_override_virtual_DisplayText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__DisplayText = slot;
}

struct miqt_string QStyledItemDelegate_virtualbase_DisplayText(const void* self, QVariant* value, QLocale* locale) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_DisplayText(value, locale);
}

void QStyledItemDelegate_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__InitStyleOption = slot;
}

void QStyledItemDelegate_virtualbase_InitStyleOption(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_InitStyleOption(option, index);
}

void QStyledItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__EventFilter = slot;
}

bool QStyledItemDelegate_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_EventFilter(object, event);
}

void QStyledItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__EditorEvent = slot;
}

bool QStyledItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_EditorEvent(event, model, option, index);
}

void QStyledItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__DestroyEditor = slot;
}

void QStyledItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_DestroyEditor(editor, index);
}

void QStyledItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__HelpEvent = slot;
}

bool QStyledItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_HelpEvent(event, view, option, index);
}

void QStyledItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStyledItemDelegate*>( (QStyledItemDelegate*)(self) )->handle__PaintingRoles = slot;
}

struct miqt_array /* of int */  QStyledItemDelegate_virtualbase_PaintingRoles(const void* self) {
	return ( (const MiqtVirtualQStyledItemDelegate*)(self) )->virtualbase_PaintingRoles();
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
	delete self;
}

