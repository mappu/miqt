#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QBrush>
#include <QColor>
#include <QDataStream>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QFrame>
#include <QIcon>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWidget>
#include <qtreewidget.h>
#include "gen_qtreewidget.h"
#include "_cgo_export.h"

class MiqtVirtualQTreeWidgetItem : public virtual QTreeWidgetItem {
public:

	MiqtVirtualQTreeWidgetItem(): QTreeWidgetItem() {};
	MiqtVirtualQTreeWidgetItem(const QStringList& strings): QTreeWidgetItem(strings) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview): QTreeWidgetItem(treeview) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, const QStringList& strings): QTreeWidgetItem(treeview, strings) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after): QTreeWidgetItem(treeview, after) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent): QTreeWidgetItem(parent) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QStringList& strings): QTreeWidgetItem(parent, strings) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after): QTreeWidgetItem(parent, after) {};
	MiqtVirtualQTreeWidgetItem(const QTreeWidgetItem& other): QTreeWidgetItem(other) {};
	MiqtVirtualQTreeWidgetItem(int typeVal): QTreeWidgetItem(typeVal) {};
	MiqtVirtualQTreeWidgetItem(const QStringList& strings, int typeVal): QTreeWidgetItem(strings, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, int typeVal): QTreeWidgetItem(treeview, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, const QStringList& strings, int typeVal): QTreeWidgetItem(treeview, strings, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal): QTreeWidgetItem(treeview, after, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, int typeVal): QTreeWidgetItem(parent, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QStringList& strings, int typeVal): QTreeWidgetItem(parent, strings, typeVal) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal): QTreeWidgetItem(parent, after, typeVal) {};

	virtual ~MiqtVirtualQTreeWidgetItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTreeWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QTreeWidgetItem::clone();
		}
		

		QTreeWidgetItem* callback_return_value = miqt_exec_callback_QTreeWidgetItem_Clone(const_cast<MiqtVirtualQTreeWidgetItem*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTreeWidgetItem* virtualbase_Clone() const {

		return QTreeWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int column, int role) const override {
		if (handle__Data == 0) {
			return QTreeWidgetItem::data(column, role);
		}
		
		int sigval1 = column;
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTreeWidgetItem_Data(const_cast<MiqtVirtualQTreeWidgetItem*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int column, int role) const {

		return new QVariant(QTreeWidgetItem::data(static_cast<int>(column), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int column, int role, const QVariant& value) override {
		if (handle__SetData == 0) {
			QTreeWidgetItem::setData(column, role, value);
			return;
		}
		
		int sigval1 = column;
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTreeWidgetItem_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(int column, int role, QVariant* value) {

		QTreeWidgetItem::setData(static_cast<int>(column), static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTreeWidgetItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QTreeWidgetItem::operator<(other);
		}
		
		const QTreeWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTreeWidgetItem* sigval1 = const_cast<QTreeWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidgetItem_OperatorLesser(const_cast<MiqtVirtualQTreeWidgetItem*>(this), handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QTreeWidgetItem* other) const {

		return QTreeWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QTreeWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QTreeWidgetItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QTreeWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QTreeWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QTreeWidgetItem_Write(const_cast<MiqtVirtualQTreeWidgetItem*>(this), handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QTreeWidgetItem::write(*out);

	}

};

QTreeWidgetItem* QTreeWidgetItem_new() {
	return new MiqtVirtualQTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
	return new MiqtVirtualQTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(treeview, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
	return new MiqtVirtualQTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
	return new MiqtVirtualQTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(parent, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after) {
	return new MiqtVirtualQTreeWidgetItem(parent, after);
}

QTreeWidgetItem* QTreeWidgetItem_new9(QTreeWidgetItem* other) {
	return new MiqtVirtualQTreeWidgetItem(*other);
}

QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal) {
	return new MiqtVirtualQTreeWidgetItem(static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new11(struct miqt_array /* of struct miqt_string */  strings, int typeVal) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
	return new MiqtVirtualQTreeWidgetItem(treeview, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, struct miqt_array /* of struct miqt_string */  strings, int typeVal) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(treeview, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
	return new MiqtVirtualQTreeWidgetItem(treeview, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
	return new MiqtVirtualQTreeWidgetItem(parent, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, struct miqt_array /* of struct miqt_string */  strings, int typeVal) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(parent, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
	return new MiqtVirtualQTreeWidgetItem(parent, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self) {
	return self->clone();
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
	return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self) {
	return self->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self) {
	return self->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
	self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self) {
	return self->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
	self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self) {
	return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
	self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self) {
	return self->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy) {
	self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self) {
	QTreeWidgetItem::ChildIndicatorPolicy _ret = self->childIndicatorPolicy();
	return static_cast<int>(_ret);
}

int QTreeWidgetItem_Flags(const QTreeWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column) {
	QString _ret = self->text(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column) {
	return new QIcon(self->icon(static_cast<int>(column)));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon) {
	self->setIcon(static_cast<int>(column), *icon);
}

struct miqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->statusTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

struct miqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->toolTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(static_cast<int>(column), toolTip_QString);
}

struct miqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column) {
	QString _ret = self->whatsThis(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column) {
	return new QFont(self->font(static_cast<int>(column)));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, QFont* font) {
	self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column) {
	return self->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

QColor* QTreeWidgetItem_BackgroundColor(const QTreeWidgetItem* self, int column) {
	return new QColor(self->backgroundColor(static_cast<int>(column)));
}

void QTreeWidgetItem_SetBackgroundColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setBackgroundColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->background(static_cast<int>(column)));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setBackground(static_cast<int>(column), *brush);
}

QColor* QTreeWidgetItem_TextColor(const QTreeWidgetItem* self, int column) {
	return new QColor(self->textColor(static_cast<int>(column)));
}

void QTreeWidgetItem_SetTextColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setTextColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->foreground(static_cast<int>(column)));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setForeground(static_cast<int>(column), *brush);
}

int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column) {
	Qt::CheckState _ret = self->checkState(static_cast<int>(column));
	return static_cast<int>(_ret);
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state) {
	self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column) {
	return new QSize(self->sizeHint(static_cast<int>(column)));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, QSize* size) {
	self->setSizeHint(static_cast<int>(column), *size);
}

QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
	return new QVariant(self->data(static_cast<int>(column), static_cast<int>(role)));
}

void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
	self->setData(static_cast<int>(column), static_cast<int>(role), *value);
}

bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other) {
	return (*self < *other);
}

void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other) {
	self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self) {
	return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index) {
	return self->child(static_cast<int>(index));
}

int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self) {
	return self->childCount();
}

int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self) {
	return self->columnCount();
}

int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
	return self->indexOfChild(child);
}

void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->addChild(child);
}

void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
	self->insertChild(static_cast<int>(index), child);
}

void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index) {
	return self->takeChild(static_cast<int>(index));
}

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, struct miqt_array /* of QTreeWidgetItem* */  children) {
	QList<QTreeWidgetItem *> children_QList;
	children_QList.reserve(children.len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
	for(size_t i = 0; i < children.len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->addChildren(children_QList);
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, struct miqt_array /* of QTreeWidgetItem* */  children) {
	QList<QTreeWidgetItem *> children_QList;
	children_QList.reserve(children.len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
	for(size_t i = 0; i < children.len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->insertChildren(static_cast<int>(index), children_QList);
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self) {
	QList<QTreeWidgetItem *> _ret = self->takeChildren();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QTreeWidgetItem_Type(const QTreeWidgetItem* self) {
	return self->type();
}

void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order) {
	self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__Clone = slot;
}

QTreeWidgetItem* QTreeWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Clone();
}

void QTreeWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__Data = slot;
}

QVariant* QTreeWidgetItem_virtualbase_Data(const void* self, int column, int role) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Data(column, role);
}

void QTreeWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__SetData = slot;
}

void QTreeWidgetItem_virtualbase_SetData(void* self, int column, int role, QVariant* value) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_SetData(column, role, value);
}

void QTreeWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__OperatorLesser = slot;
}

bool QTreeWidgetItem_virtualbase_OperatorLesser(const void* self, QTreeWidgetItem* other) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

void QTreeWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__Read = slot;
}

void QTreeWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Read(in);
}

void QTreeWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) )->handle__Write = slot;
}

void QTreeWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Write(out);
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTreeWidgetItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQTreeWidget : public virtual QTreeWidget {
public:

	MiqtVirtualQTreeWidget(QWidget* parent): QTreeWidget(parent) {};
	MiqtVirtualQTreeWidget(): QTreeWidget() {};

	virtual ~MiqtVirtualQTreeWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QTreeWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTreeWidget_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QTreeWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QTreeWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QTreeWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QTreeWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTreeWidget_MimeTypes(const_cast<MiqtVirtualQTreeWidget*>(this), handle__MimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_MimeTypes() const {

		QStringList _ret = QTreeWidget::mimeTypes();
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			QString _lv_ret = _ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray _lv_b = _lv_ret.toUtf8();
			struct miqt_string _lv_ms;
			_lv_ms.len = _lv_b.length();
			_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
			memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
			_arr[i] = _lv_ms;
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QTreeWidgetItem *> items) const override {
		if (handle__MimeData == 0) {
			return QTreeWidget::mimeData(items);
		}
		
		const QList<QTreeWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTreeWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QTreeWidget_MimeData(const_cast<MiqtVirtualQTreeWidget*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QTreeWidgetItem* */  items) const {
		QList<QTreeWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QTreeWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(QTreeWidgetItem* parent, int index, const QMimeData* data, Qt::DropAction action) override {
		if (handle__DropMimeData == 0) {
			return QTreeWidget::dropMimeData(parent, index, data, action);
		}
		
		QTreeWidgetItem* sigval1 = parent;
		int sigval2 = index;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidget_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QTreeWidgetItem* parent, int index, QMimeData* data, int action) {

		return QTreeWidget::dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QTreeWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_SupportedDropActions(const_cast<MiqtVirtualQTreeWidget*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QTreeWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTreeWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTreeWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QTreeWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTreeWidget_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QTreeWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QTreeWidget::keyboardSearch(search);
			return;
		}
		
		const QString search_ret = search;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray search_b = search_ret.toUtf8();
		struct miqt_string search_ms;
		search_ms.len = search_b.length();
		search_ms.data = static_cast<char*>(malloc(search_ms.len));
		memcpy(search_ms.data, search_b.data(), search_ms.len);
		struct miqt_string sigval1 = search_ms;

		miqt_exec_callback_QTreeWidget_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTreeWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QTreeWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTreeWidget_VisualRect(const_cast<MiqtVirtualQTreeWidget*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QTreeWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QTreeWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeWidget_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QTreeWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QTreeWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeWidget_IndexAt(const_cast<MiqtVirtualQTreeWidget*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QTreeWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QTreeWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QTreeWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QTreeWidget::reset();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QTreeWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QTreeWidget::dataChanged(topLeft, bottomRight, roles);
			return;
		}
		
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QVector<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;

		miqt_exec_callback_QTreeWidget_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTreeWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QTreeWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QTreeWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QTreeWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeWidget_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QTreeWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTreeWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTreeWidget_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTreeWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QTreeWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeWidget_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QTreeWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeWidget_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTreeWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QTreeWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeWidget_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTreeWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QTreeWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_HorizontalOffset(const_cast<MiqtVirtualQTreeWidget*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QTreeWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QTreeWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_VerticalOffset(const_cast<MiqtVirtualQTreeWidget*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QTreeWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QTreeWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTreeWidget_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QTreeWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QTreeWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTreeWidget_VisualRegionForSelection(const_cast<MiqtVirtualQTreeWidget*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTreeWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QTreeWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTreeWidget_SelectedIndexes(const_cast<MiqtVirtualQTreeWidget*>(this), handle__SelectedIndexes);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_SelectedIndexes() const {

		QModelIndexList _ret = QTreeWidget::selectedIndexes();
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = new QModelIndex(_ret[i]);
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTreeWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTreeWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QTreeWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QTreeWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
		if (handle__DrawRow == 0) {
			QTreeWidget::drawRow(painter, options, index);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& options_ret = options;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&options_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTreeWidget_DrawRow(const_cast<MiqtVirtualQTreeWidget*>(this), handle__DrawRow, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawRow(QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) const {

		QTreeWidget::drawRow(painter, *options, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawBranches = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
		if (handle__DrawBranches == 0) {
			QTreeWidget::drawBranches(painter, rect, index);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTreeWidget_DrawBranches(const_cast<MiqtVirtualQTreeWidget*>(this), handle__DrawBranches, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawBranches(QPainter* painter, QRect* rect, QModelIndex* index) const {

		QTreeWidget::drawBranches(painter, *rect, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTreeWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTreeWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTreeWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTreeWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTreeWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTreeWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTreeWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTreeWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QTreeWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QTreeWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTreeWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTreeWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QTreeWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QTreeWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QTreeWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QTreeWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTreeWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_ViewportSizeHint(const_cast<MiqtVirtualQTreeWidget*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTreeWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QTreeWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTreeWidget_SizeHintForColumn(const_cast<MiqtVirtualQTreeWidget*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QTreeWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QTreeWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeWidget_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QTreeWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QTreeWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidget_IsIndexHidden(const_cast<MiqtVirtualQTreeWidget*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QTreeWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QTreeWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTreeWidget_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTreeWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QTreeWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTreeWidget_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QTreeWidget::currentChanged(*current, *previous);

	}

};

QTreeWidget* QTreeWidget_new(QWidget* parent) {
	return new MiqtVirtualQTreeWidget(parent);
}

QTreeWidget* QTreeWidget_new2() {
	return new MiqtVirtualQTreeWidget();
}

void QTreeWidget_virtbase(QTreeWidget* src, QTreeView** outptr_QTreeView) {
	*outptr_QTreeView = static_cast<QTreeView*>(src);
}

QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTreeWidget_Metacast(QTreeWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTreeWidget_Tr(const char* s) {
	QString _ret = QTreeWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_TrUtf8(const char* s) {
	QString _ret = QTreeWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTreeWidget_ColumnCount(const QTreeWidget* self) {
	return self->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self) {
	return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index) {
	return self->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_TopLevelItemCount(const QTreeWidget* self) {
	return self->topLevelItemCount();
}

void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
	self->insertTopLevelItem(static_cast<int>(index), item);
}

void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index) {
	return self->takeTopLevelItem(static_cast<int>(index));
}

int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, struct miqt_array /* of QTreeWidgetItem* */  items) {
	QList<QTreeWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, struct miqt_array /* of QTreeWidgetItem* */  items) {
	QList<QTreeWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self) {
	return self->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHeaderLabels(labels_QList);
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self) {
	return self->currentItem();
}

int QTreeWidget_CurrentColumn(const QTreeWidget* self) {
	return self->currentColumn();
}

void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->setCurrentItem(item, static_cast<int>(column));
}

void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
	self->setCurrentItem(item, static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, QTreeWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

int QTreeWidget_SortColumn(const QTreeWidget* self) {
	return self->sortColumn();
}

void QTreeWidget_SortItems(QTreeWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->editItem(item);
}

void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
	self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->removeItemWidget(item, static_cast<int>(column));
}

bool QTreeWidget_IsItemSelected(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTreeWidget_SetItemSelected(QTreeWidget* self, QTreeWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_SelectedItems(const QTreeWidget* self) {
	QList<QTreeWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_FindItems(const QTreeWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QTreeWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QTreeWidget_IsItemHidden(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemHidden(item);
}

void QTreeWidget_SetItemHidden(QTreeWidget* self, QTreeWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

bool QTreeWidget_IsItemExpanded(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemExpanded(item);
}

void QTreeWidget_SetItemExpanded(QTreeWidget* self, QTreeWidgetItem* item, bool expand) {
	self->setItemExpanded(item, expand);
}

bool QTreeWidget_IsFirstItemColumnSpanned(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isFirstItemColumnSpanned(item);
}

void QTreeWidget_SetFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item, bool span) {
	self->setFirstItemColumnSpanned(item, span);
}

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemBelow(item);
}

void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTreeWidget_ScrollToItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->scrollToItem(item);
}

void QTreeWidget_ExpandItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->expandItem(item);
}

void QTreeWidget_CollapseItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->collapseItem(item);
}

void QTreeWidget_Clear(QTreeWidget* self) {
	self->clear();
}

void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemPressed(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemPressed(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemPressed), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemPressed(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemClicked(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemDoubleClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemActivated(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemActivated), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemActivated(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemEntered(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemEntered), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemEntered(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_connect_ItemChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemChanged), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_ItemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemExpanded(item);
}

void QTreeWidget_connect_ItemExpanded(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemExpanded), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_ItemExpanded(slot, sigval1);
	});
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemCollapsed(item);
}

void QTreeWidget_connect_ItemCollapsed(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemCollapsed), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_ItemCollapsed(slot, sigval1);
	});
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTreeWidget_connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, QTreeWidgetItem*)>(&QTreeWidget::currentItemChanged), self, [=](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
		QTreeWidgetItem* sigval1 = current;
		QTreeWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTreeWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
	self->itemSelectionChanged();
}

void QTreeWidget_connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)()>(&QTreeWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTreeWidget_ItemSelectionChanged(slot);
	});
}

struct miqt_string QTreeWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTreeWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QTreeWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->editItem(item, static_cast<int>(column));
}

void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->openPersistentEditor(item, static_cast<int>(column));
}

void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->closePersistentEditor(item, static_cast<int>(column));
}

bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_FindItems3(const QTreeWidget* self, struct miqt_string text, int flags, int column) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QTreeWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTreeWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SetSelectionModel = slot;
}

void QTreeWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

void QTreeWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__Event = slot;
}

bool QTreeWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_Event(e);
}

void QTreeWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MimeTypes = slot;
}

struct miqt_array /* of struct miqt_string */  QTreeWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_MimeTypes();
}

void QTreeWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MimeData = slot;
}

QMimeData* QTreeWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QTreeWidgetItem* */  items) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_MimeData(items);
}

void QTreeWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DropMimeData = slot;
}

bool QTreeWidget_virtualbase_DropMimeData(void* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DropMimeData(parent, index, data, action);
}

void QTreeWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SupportedDropActions = slot;
}

int QTreeWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SupportedDropActions();
}

void QTreeWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DropEvent = slot;
}

void QTreeWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DropEvent(event);
}

void QTreeWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SetRootIndex = slot;
}

void QTreeWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetRootIndex(index);
}

void QTreeWidget_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__KeyboardSearch = slot;
}

void QTreeWidget_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_KeyboardSearch(search);
}

void QTreeWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__VisualRect = slot;
}

QRect* QTreeWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VisualRect(index);
}

void QTreeWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__ScrollTo = slot;
}

void QTreeWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

void QTreeWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__IndexAt = slot;
}

QModelIndex* QTreeWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_IndexAt(p);
}

void QTreeWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DoItemsLayout = slot;
}

void QTreeWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DoItemsLayout();
}

void QTreeWidget_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__Reset = slot;
}

void QTreeWidget_virtualbase_Reset(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_Reset();
}

void QTreeWidget_override_virtual_DataChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DataChanged = slot;
}

void QTreeWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

void QTreeWidget_override_virtual_SelectAll(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SelectAll = slot;
}

void QTreeWidget_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectAll();
}

void QTreeWidget_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__VerticalScrollbarValueChanged = slot;
}

void QTreeWidget_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

void QTreeWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__ScrollContentsBy = slot;
}

void QTreeWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QTreeWidget_override_virtual_RowsInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__RowsInserted = slot;
}

void QTreeWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

void QTreeWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__RowsAboutToBeRemoved = slot;
}

void QTreeWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

void QTreeWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MoveCursor = slot;
}

QModelIndex* QTreeWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

void QTreeWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__HorizontalOffset = slot;
}

int QTreeWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_HorizontalOffset();
}

void QTreeWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__VerticalOffset = slot;
}

int QTreeWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VerticalOffset();
}

void QTreeWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SetSelection = slot;
}

void QTreeWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

void QTreeWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__VisualRegionForSelection = slot;
}

QRegion* QTreeWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

void QTreeWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SelectedIndexes = slot;
}

struct miqt_array /* of QModelIndex* */  QTreeWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectedIndexes();
}

void QTreeWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__TimerEvent = slot;
}

void QTreeWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_TimerEvent(event);
}

void QTreeWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__PaintEvent = slot;
}

void QTreeWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_PaintEvent(event);
}

void QTreeWidget_override_virtual_DrawRow(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DrawRow = slot;
}

void QTreeWidget_virtualbase_DrawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_DrawRow(painter, options, index);
}

void QTreeWidget_override_virtual_DrawBranches(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DrawBranches = slot;
}

void QTreeWidget_virtualbase_DrawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_DrawBranches(painter, rect, index);
}

void QTreeWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MousePressEvent = slot;
}

void QTreeWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MousePressEvent(event);
}

void QTreeWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QTreeWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QTreeWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QTreeWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QTreeWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QTreeWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QTreeWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__KeyPressEvent = slot;
}

void QTreeWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

void QTreeWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QTreeWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

void QTreeWidget_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__ViewportEvent = slot;
}

bool QTreeWidget_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ViewportEvent(event);
}

void QTreeWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__UpdateGeometries = slot;
}

void QTreeWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_UpdateGeometries();
}

void QTreeWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QTreeWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_ViewportSizeHint();
}

void QTreeWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SizeHintForColumn = slot;
}

int QTreeWidget_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SizeHintForColumn(column);
}

void QTreeWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__HorizontalScrollbarAction = slot;
}

void QTreeWidget_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

void QTreeWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__IsIndexHidden = slot;
}

bool QTreeWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

void QTreeWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__SelectionChanged = slot;
}

void QTreeWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

void QTreeWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) )->handle__CurrentChanged = slot;
}

void QTreeWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

void QTreeWidget_Delete(QTreeWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTreeWidget*>( self );
	} else {
		delete self;
	}
}

