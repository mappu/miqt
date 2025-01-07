#include <QAbstractItemModel>
#include <QBrush>
#include <QByteArray>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qstandarditemmodel.h>
#include "gen_qstandarditemmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

QVariant* miqt_exec_callback_QStandardItem_Data(void*, intptr_t, int);
void miqt_exec_callback_QStandardItem_MultiData(void*, intptr_t, QModelRoleDataSpan*);
void miqt_exec_callback_QStandardItem_SetData(void*, intptr_t, QVariant*, int);
QStandardItem* miqt_exec_callback_QStandardItem_Clone(void*, intptr_t);
int miqt_exec_callback_QStandardItem_Type(void*, intptr_t);
void miqt_exec_callback_QStandardItem_Read(void*, intptr_t, QDataStream*);
void miqt_exec_callback_QStandardItem_Write(void*, intptr_t, QDataStream*);
bool miqt_exec_callback_QStandardItem_OperatorLesser(void*, intptr_t, QStandardItem*);
void miqt_exec_callback_QStandardItemModel_ItemChanged(intptr_t, QStandardItem*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QStandardItemModel_RoleNames(void*, intptr_t);
QModelIndex* miqt_exec_callback_QStandardItemModel_Index(void*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QStandardItemModel_Parent(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QStandardItemModel_RowCount(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QStandardItemModel_ColumnCount(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_HasChildren(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QStandardItemModel_Data(void*, intptr_t, QModelIndex*, int);
void miqt_exec_callback_QStandardItemModel_MultiData(void*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QStandardItemModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QStandardItemModel_ClearItemData(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QStandardItemModel_HeaderData(void*, intptr_t, int, int, int);
bool miqt_exec_callback_QStandardItemModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QStandardItemModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QStandardItemModel_Flags(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QStandardItemModel_SupportedDropActions(void*, intptr_t);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QStandardItemModel_ItemData(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
void miqt_exec_callback_QStandardItemModel_Sort(void*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QStandardItemModel_MimeTypes(void*, intptr_t);
QMimeData* miqt_exec_callback_QStandardItemModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QStandardItemModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QStandardItemModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QStandardItemModel_SupportedDragActions(void*, intptr_t);
bool miqt_exec_callback_QStandardItemModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QStandardItemModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QStandardItemModel_FetchMore(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_CanFetchMore(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QStandardItemModel_Buddy(void*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QStandardItemModel_Match(void*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QStandardItemModel_Span(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStandardItemModel_Submit(void*, intptr_t);
void miqt_exec_callback_QStandardItemModel_Revert(void*, intptr_t);
void miqt_exec_callback_QStandardItemModel_ResetInternalData(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStandardItem : public virtual QStandardItem {
public:

	MiqtVirtualQStandardItem(): QStandardItem() {};
	MiqtVirtualQStandardItem(const QString& text): QStandardItem(text) {};
	MiqtVirtualQStandardItem(const QIcon& icon, const QString& text): QStandardItem(icon, text) {};
	MiqtVirtualQStandardItem(int rows): QStandardItem(rows) {};
	MiqtVirtualQStandardItem(int rows, int columns): QStandardItem(rows, columns) {};

	virtual ~MiqtVirtualQStandardItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__Data == 0) {
			return QStandardItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStandardItem_Data(const_cast<MiqtVirtualQStandardItem*>(this), handle__Data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int role) const {

		return new QVariant(QStandardItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MultiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(QModelRoleDataSpan roleDataSpan) const override {
		if (handle__MultiData == 0) {
			QStandardItem::multiData(roleDataSpan);
			return;
		}
		
		QModelRoleDataSpan* sigval1 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QStandardItem_MultiData(const_cast<MiqtVirtualQStandardItem*>(this), handle__MultiData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MultiData(QModelRoleDataSpan* roleDataSpan) const {

		QStandardItem::multiData(*roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			QStandardItem::setData(value, role);
			return;
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		int sigval2 = role;

		miqt_exec_callback_QStandardItem_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(QVariant* value, int role) {

		QStandardItem::setData(*value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QStandardItem* clone() const override {
		if (handle__Clone == 0) {
			return QStandardItem::clone();
		}
		

		QStandardItem* callback_return_value = miqt_exec_callback_QStandardItem_Clone(const_cast<MiqtVirtualQStandardItem*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStandardItem* virtualbase_Clone() const {

		return QStandardItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QStandardItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QStandardItem_Type(const_cast<MiqtVirtualQStandardItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QStandardItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QStandardItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QStandardItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QStandardItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QStandardItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QStandardItem_Write(const_cast<MiqtVirtualQStandardItem*>(this), handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QStandardItem::write(*out);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QStandardItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QStandardItem::operator<(other);
		}
		
		const QStandardItem& other_ret = other;
		// Cast returned reference into pointer
		QStandardItem* sigval1 = const_cast<QStandardItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItem_OperatorLesser(const_cast<MiqtVirtualQStandardItem*>(this), handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QStandardItem* other) const {

		return QStandardItem::operator<(*other);

	}

};

QStandardItem* QStandardItem_new() {
	return new MiqtVirtualQStandardItem();
}

QStandardItem* QStandardItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQStandardItem(text_QString);
}

QStandardItem* QStandardItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQStandardItem(*icon, text_QString);
}

QStandardItem* QStandardItem_new4(int rows) {
	return new MiqtVirtualQStandardItem(static_cast<int>(rows));
}

QStandardItem* QStandardItem_new5(int rows, int columns) {
	return new MiqtVirtualQStandardItem(static_cast<int>(rows), static_cast<int>(columns));
}

QVariant* QStandardItem_Data(const QStandardItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QStandardItem_MultiData(const QStandardItem* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

void QStandardItem_SetData(QStandardItem* self, QVariant* value, int role) {
	self->setData(*value, static_cast<int>(role));
}

void QStandardItem_ClearData(QStandardItem* self) {
	self->clearData();
}

struct miqt_string QStandardItem_Text(const QStandardItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetText(QStandardItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QStandardItem_Icon(const QStandardItem* self) {
	return new QIcon(self->icon());
}

void QStandardItem_SetIcon(QStandardItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QStandardItem_ToolTip(const QStandardItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetToolTip(QStandardItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QStandardItem_StatusTip(const QStandardItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetStatusTip(QStandardItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QStandardItem_WhatsThis(const QStandardItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetWhatsThis(QStandardItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QSize* QStandardItem_SizeHint(const QStandardItem* self) {
	return new QSize(self->sizeHint());
}

void QStandardItem_SetSizeHint(QStandardItem* self, QSize* sizeHint) {
	self->setSizeHint(*sizeHint);
}

QFont* QStandardItem_Font(const QStandardItem* self) {
	return new QFont(self->font());
}

void QStandardItem_SetFont(QStandardItem* self, QFont* font) {
	self->setFont(*font);
}

int QStandardItem_TextAlignment(const QStandardItem* self) {
	Qt::Alignment _ret = self->textAlignment();
	return static_cast<int>(_ret);
}

void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(textAlignment));
}

QBrush* QStandardItem_Background(const QStandardItem* self) {
	return new QBrush(self->background());
}

void QStandardItem_SetBackground(QStandardItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QStandardItem_Foreground(const QStandardItem* self) {
	return new QBrush(self->foreground());
}

void QStandardItem_SetForeground(QStandardItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QStandardItem_CheckState(const QStandardItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QStandardItem_SetCheckState(QStandardItem* self, int checkState) {
	self->setCheckState(static_cast<Qt::CheckState>(checkState));
}

struct miqt_string QStandardItem_AccessibleText(const QStandardItem* self) {
	QString _ret = self->accessibleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetAccessibleText(QStandardItem* self, struct miqt_string accessibleText) {
	QString accessibleText_QString = QString::fromUtf8(accessibleText.data, accessibleText.len);
	self->setAccessibleText(accessibleText_QString);
}

struct miqt_string QStandardItem_AccessibleDescription(const QStandardItem* self) {
	QString _ret = self->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItem_SetAccessibleDescription(QStandardItem* self, struct miqt_string accessibleDescription) {
	QString accessibleDescription_QString = QString::fromUtf8(accessibleDescription.data, accessibleDescription.len);
	self->setAccessibleDescription(accessibleDescription_QString);
}

int QStandardItem_Flags(const QStandardItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QStandardItem_SetFlags(QStandardItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

bool QStandardItem_IsEnabled(const QStandardItem* self) {
	return self->isEnabled();
}

void QStandardItem_SetEnabled(QStandardItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QStandardItem_IsEditable(const QStandardItem* self) {
	return self->isEditable();
}

void QStandardItem_SetEditable(QStandardItem* self, bool editable) {
	self->setEditable(editable);
}

bool QStandardItem_IsSelectable(const QStandardItem* self) {
	return self->isSelectable();
}

void QStandardItem_SetSelectable(QStandardItem* self, bool selectable) {
	self->setSelectable(selectable);
}

bool QStandardItem_IsCheckable(const QStandardItem* self) {
	return self->isCheckable();
}

void QStandardItem_SetCheckable(QStandardItem* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QStandardItem_IsAutoTristate(const QStandardItem* self) {
	return self->isAutoTristate();
}

void QStandardItem_SetAutoTristate(QStandardItem* self, bool tristate) {
	self->setAutoTristate(tristate);
}

bool QStandardItem_IsUserTristate(const QStandardItem* self) {
	return self->isUserTristate();
}

void QStandardItem_SetUserTristate(QStandardItem* self, bool tristate) {
	self->setUserTristate(tristate);
}

bool QStandardItem_IsDragEnabled(const QStandardItem* self) {
	return self->isDragEnabled();
}

void QStandardItem_SetDragEnabled(QStandardItem* self, bool dragEnabled) {
	self->setDragEnabled(dragEnabled);
}

bool QStandardItem_IsDropEnabled(const QStandardItem* self) {
	return self->isDropEnabled();
}

void QStandardItem_SetDropEnabled(QStandardItem* self, bool dropEnabled) {
	self->setDropEnabled(dropEnabled);
}

QStandardItem* QStandardItem_Parent(const QStandardItem* self) {
	return self->parent();
}

int QStandardItem_Row(const QStandardItem* self) {
	return self->row();
}

int QStandardItem_Column(const QStandardItem* self) {
	return self->column();
}

QModelIndex* QStandardItem_Index(const QStandardItem* self) {
	return new QModelIndex(self->index());
}

QStandardItemModel* QStandardItem_Model(const QStandardItem* self) {
	return self->model();
}

int QStandardItem_RowCount(const QStandardItem* self) {
	return self->rowCount();
}

void QStandardItem_SetRowCount(QStandardItem* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QStandardItem_ColumnCount(const QStandardItem* self) {
	return self->columnCount();
}

void QStandardItem_SetColumnCount(QStandardItem* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

bool QStandardItem_HasChildren(const QStandardItem* self) {
	return self->hasChildren();
}

QStandardItem* QStandardItem_Child(const QStandardItem* self, int row) {
	return self->child(static_cast<int>(row));
}

void QStandardItem_SetChild(QStandardItem* self, int row, int column, QStandardItem* item) {
	self->setChild(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItem_SetChild2(QStandardItem* self, int row, QStandardItem* item) {
	self->setChild(static_cast<int>(row), item);
}

void QStandardItem_InsertRow(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertColumn(QStandardItem* self, int column, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItem_InsertRows(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertRows(static_cast<int>(row), items_QList);
}

void QStandardItem_InsertRows2(QStandardItem* self, int row, int count) {
	self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_InsertColumns(QStandardItem* self, int column, int count) {
	self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_RemoveRow(QStandardItem* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QStandardItem_RemoveColumn(QStandardItem* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QStandardItem_RemoveRows(QStandardItem* self, int row, int count) {
	self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

void QStandardItem_RemoveColumns(QStandardItem* self, int column, int count) {
	self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

void QStandardItem_AppendRow(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItem_AppendRows(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRows(items_QList);
}

void QStandardItem_AppendColumn(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendColumn(items_QList);
}

void QStandardItem_InsertRow2(QStandardItem* self, int row, QStandardItem* item) {
	self->insertRow(static_cast<int>(row), item);
}

void QStandardItem_AppendRowWithItem(QStandardItem* self, QStandardItem* item) {
	self->appendRow(item);
}

QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row) {
	return self->takeChild(static_cast<int>(row));
}

struct miqt_array /* of QStandardItem* */  QStandardItem_TakeRow(QStandardItem* self, int row) {
	QList<QStandardItem *> _ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QStandardItem* */  QStandardItem_TakeColumn(QStandardItem* self, int column) {
	QList<QStandardItem *> _ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QStandardItem_SortChildren(QStandardItem* self, int column) {
	self->sortChildren(static_cast<int>(column));
}

QStandardItem* QStandardItem_Clone(const QStandardItem* self) {
	return self->clone();
}

int QStandardItem_Type(const QStandardItem* self) {
	return self->type();
}

void QStandardItem_Read(QStandardItem* self, QDataStream* in) {
	self->read(*in);
}

void QStandardItem_Write(const QStandardItem* self, QDataStream* out) {
	self->write(*out);
}

bool QStandardItem_OperatorLesser(const QStandardItem* self, QStandardItem* other) {
	return (*self < *other);
}

QStandardItem* QStandardItem_Child2(const QStandardItem* self, int row, int column) {
	return self->child(static_cast<int>(row), static_cast<int>(column));
}

QStandardItem* QStandardItem_TakeChild2(QStandardItem* self, int row, int column) {
	return self->takeChild(static_cast<int>(row), static_cast<int>(column));
}

void QStandardItem_SortChildren2(QStandardItem* self, int column, int order) {
	self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QStandardItem_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__Data = slot;
}

QVariant* QStandardItem_virtualbase_Data(const void* self, int role) {
	return ( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_Data(role);
}

void QStandardItem_override_virtual_MultiData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__MultiData = slot;
}

void QStandardItem_virtualbase_MultiData(const void* self, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_MultiData(roleDataSpan);
}

void QStandardItem_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__SetData = slot;
}

void QStandardItem_virtualbase_SetData(void* self, QVariant* value, int role) {
	( (MiqtVirtualQStandardItem*)(self) )->virtualbase_SetData(value, role);
}

void QStandardItem_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__Clone = slot;
}

QStandardItem* QStandardItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_Clone();
}

void QStandardItem_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__Type = slot;
}

int QStandardItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_Type();
}

void QStandardItem_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__Read = slot;
}

void QStandardItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQStandardItem*)(self) )->virtualbase_Read(in);
}

void QStandardItem_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__Write = slot;
}

void QStandardItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_Write(out);
}

void QStandardItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItem*>( (QStandardItem*)(self) )->handle__OperatorLesser = slot;
}

bool QStandardItem_virtualbase_OperatorLesser(const void* self, QStandardItem* other) {
	return ( (const MiqtVirtualQStandardItem*)(self) )->virtualbase_OperatorLesser(other);
}

void QStandardItem_Delete(QStandardItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStandardItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQStandardItemModel : public virtual QStandardItemModel {
public:

	MiqtVirtualQStandardItemModel(): QStandardItemModel() {};
	MiqtVirtualQStandardItemModel(int rows, int columns): QStandardItemModel(rows, columns) {};
	MiqtVirtualQStandardItemModel(QObject* parent): QStandardItemModel(parent) {};
	MiqtVirtualQStandardItemModel(int rows, int columns, QObject* parent): QStandardItemModel(rows, columns, parent) {};

	virtual ~MiqtVirtualQStandardItemModel() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QStandardItemModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QStandardItemModel_RoleNames(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__RoleNames);
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to struct miqt_string */  virtualbase_RoleNames() const {

		QHash<int, QByteArray> _ret = QStandardItemModel::roleNames();
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
		struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
		int _ctr = 0;
		for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
			_karr[_ctr] = _itr->first;
			QByteArray _hashval_qb = _itr->second;
			struct miqt_string _hashval_ms;
			_hashval_ms.len = _hashval_qb.length();
			_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
			memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
			_varr[_ctr] = _hashval_ms;
			_ctr++;
		}
		struct miqt_map _out;
		_out.len = _ret.size();
		_out.keys = static_cast<void*>(_karr);
		_out.values = static_cast<void*>(_varr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QStandardItemModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStandardItemModel_Index(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QStandardItemModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QStandardItemModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStandardItemModel_Parent(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Parent(QModelIndex* child) const {

		return new QModelIndex(QStandardItemModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QStandardItemModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QStandardItemModel_RowCount(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QStandardItemModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return QStandardItemModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QStandardItemModel_ColumnCount(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ColumnCount(QModelIndex* parent) const {

		return QStandardItemModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QStandardItemModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_HasChildren(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QStandardItemModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QStandardItemModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStandardItemModel_Data(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* index, int role) const {

		return new QVariant(QStandardItemModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MultiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__MultiData == 0) {
			QStandardItemModel::multiData(index, roleDataSpan);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QStandardItemModel_MultiData(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__MultiData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MultiData(QModelIndex* index, QModelRoleDataSpan* roleDataSpan) const {

		QStandardItemModel::multiData(*index, *roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QStandardItemModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QStandardItemModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__ClearItemData == 0) {
			return QStandardItemModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_ClearItemData(this, handle__ClearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ClearItemData(QModelIndex* index) {

		return QStandardItemModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QStandardItemModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStandardItemModel_HeaderData(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QStandardItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QStandardItemModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QStandardItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QStandardItemModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QStandardItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QStandardItemModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QStandardItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QStandardItemModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QStandardItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QStandardItemModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QStandardItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QStandardItemModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QStandardItemModel_Flags(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QStandardItemModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QStandardItemModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QStandardItemModel_SupportedDropActions(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QStandardItemModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QStandardItemModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QStandardItemModel_ItemData(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__ItemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to QVariant* */  virtualbase_ItemData(QModelIndex* index) const {

		QMap<int, QVariant> _ret = QStandardItemModel::itemData(*index);
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
		QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
		int _ctr = 0;
		for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
			_karr[_ctr] = _itr->first;
			_varr[_ctr] = new QVariant(_itr->second);
			_ctr++;
		}
		struct miqt_map _out;
		_out.len = _ret.size();
		_out.keys = static_cast<void*>(_karr);
		_out.values = static_cast<void*>(_varr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
			return QStandardItemModel::setItemData(index, roles);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetItemData(QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
		QMap<int, QVariant> roles_QMap;
		int* roles_karr = static_cast<int*>(roles.keys);
		QVariant** roles_varr = static_cast<QVariant**>(roles.values);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
		}

		return QStandardItemModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QStandardItemModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QStandardItemModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QStandardItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QStandardItemModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QStandardItemModel_MimeTypes(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__MimeTypes);
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

		QStringList _ret = QStandardItemModel::mimeTypes();
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
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
			return QStandardItemModel::mimeData(indexes);
		}
		
		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.length();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;

		QMimeData* callback_return_value = miqt_exec_callback_QStandardItemModel_MimeData(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QModelIndex* */  indexes) const {
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}

		return QStandardItemModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QStandardItemModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QStandardItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QStandardItemModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStandardItemModel_Sibling(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QStandardItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QStandardItemModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_CanDropMimeData(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QStandardItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QStandardItemModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QStandardItemModel_SupportedDragActions(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QStandardItemModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QStandardItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
		
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QStandardItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QStandardItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}
		
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QStandardItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QStandardItemModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QStandardItemModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QStandardItemModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QStandardItemModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_CanFetchMore(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QStandardItemModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QStandardItemModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStandardItemModel_Buddy(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QStandardItemModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QStandardItemModel::match(start, role, value, hits, flags);
		}
		
		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QStandardItemModel_Match(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_Match(QModelIndex* start, int role, QVariant* value, int hits, int flags) const {

		QModelIndexList _ret = QStandardItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QStandardItemModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QStandardItemModel_Span(const_cast<MiqtVirtualQStandardItemModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QStandardItemModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QStandardItemModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QStandardItemModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QStandardItemModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QStandardItemModel::revert();
			return;
		}
		

		miqt_exec_callback_QStandardItemModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QStandardItemModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__ResetInternalData == 0) {
			QStandardItemModel::resetInternalData();
			return;
		}
		

		miqt_exec_callback_QStandardItemModel_ResetInternalData(this, handle__ResetInternalData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResetInternalData() {

		QStandardItemModel::resetInternalData();

	}

};

QStandardItemModel* QStandardItemModel_new() {
	return new MiqtVirtualQStandardItemModel();
}

QStandardItemModel* QStandardItemModel_new2(int rows, int columns) {
	return new MiqtVirtualQStandardItemModel(static_cast<int>(rows), static_cast<int>(columns));
}

QStandardItemModel* QStandardItemModel_new3(QObject* parent) {
	return new MiqtVirtualQStandardItemModel(parent);
}

QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent) {
	return new MiqtVirtualQStandardItemModel(static_cast<int>(rows), static_cast<int>(columns), parent);
}

void QStandardItemModel_virtbase(QStandardItemModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QStandardItemModel_MetaObject(const QStandardItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStandardItemModel_Metacast(QStandardItemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStandardItemModel_Tr(const char* s) {
	QString _ret = QStandardItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStandardItemModel_SetItemRoleNames(QStandardItemModel* self, struct miqt_map /* of int to struct miqt_string */  roleNames) {
	QHash<int, QByteArray> roleNames_QMap;
	roleNames_QMap.reserve(roleNames.len);
	int* roleNames_karr = static_cast<int*>(roleNames.keys);
	struct miqt_string* roleNames_varr = static_cast<struct miqt_string*>(roleNames.values);
	for(size_t i = 0; i < roleNames.len; ++i) {
		QByteArray roleNames_varr_i_QByteArray(roleNames_varr[i].data, roleNames_varr[i].len);
		roleNames_QMap[static_cast<int>(roleNames_karr[i])] = roleNames_varr_i_QByteArray;
	}
	self->setItemRoleNames(roleNames_QMap);
}

struct miqt_map /* of int to struct miqt_string */  QStandardItemModel_RoleNames(const QStandardItemModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QStandardItemModel_RowCount(const QStandardItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QStandardItemModel_ColumnCount(const QStandardItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QStandardItemModel_HasChildren(const QStandardItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QStandardItemModel_Data(const QStandardItemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

void QStandardItemModel_MultiData(const QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*index, *roleDataSpan);
}

bool QStandardItemModel_SetData(QStandardItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QStandardItemModel_ClearItemData(QStandardItemModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

int QStandardItemModel_Flags(const QStandardItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_map /* of int to QVariant* */  QStandardItemModel_ItemData(const QStandardItemModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QStandardItemModel_SetItemData(QStandardItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

void QStandardItemModel_Clear(QStandardItemModel* self) {
	self->clear();
}

void QStandardItemModel_Sort(QStandardItemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QStandardItem* QStandardItemModel_ItemFromIndex(const QStandardItemModel* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
}

QModelIndex* QStandardItemModel_IndexFromItem(const QStandardItemModel* self, QStandardItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QStandardItem* QStandardItemModel_Item(const QStandardItemModel* self, int row) {
	return self->item(static_cast<int>(row));
}

void QStandardItemModel_SetItem(QStandardItemModel* self, int row, int column, QStandardItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

void QStandardItemModel_SetItem2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setItem(static_cast<int>(row), item);
}

QStandardItem* QStandardItemModel_InvisibleRootItem(const QStandardItemModel* self) {
	return self->invisibleRootItem();
}

QStandardItem* QStandardItemModel_HorizontalHeaderItem(const QStandardItemModel* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QStandardItemModel_SetHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QStandardItem* QStandardItemModel_VerticalHeaderItem(const QStandardItemModel* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QStandardItemModel_SetVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

void QStandardItemModel_AppendRow(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendRow(items_QList);
}

void QStandardItemModel_AppendColumn(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->appendColumn(items_QList);
}

void QStandardItemModel_AppendRowWithItem(QStandardItemModel* self, QStandardItem* item) {
	self->appendRow(item);
}

void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertRow(static_cast<int>(row), items_QList);
}

void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, struct miqt_array /* of QStandardItem* */  items) {
	QList<QStandardItem *> items_QList;
	items_QList.reserve(items.len);
	QStandardItem** items_arr = static_cast<QStandardItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertColumn(static_cast<int>(column), items_QList);
}

void QStandardItemModel_InsertRow2(QStandardItemModel* self, int row, QStandardItem* item) {
	self->insertRow(static_cast<int>(row), item);
}

bool QStandardItemModel_InsertRowWithRow(QStandardItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QStandardItemModel_InsertColumnWithColumn(QStandardItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

struct miqt_array /* of QStandardItem* */  QStandardItemModel_TakeRow(QStandardItemModel* self, int row) {
	QList<QStandardItem *> _ret = self->takeRow(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QStandardItem* */  QStandardItemModel_TakeColumn(QStandardItemModel* self, int column) {
	QList<QStandardItem *> _ret = self->takeColumn(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QStandardItem* QStandardItemModel_TakeHorizontalHeaderItem(QStandardItemModel* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

QStandardItem* QStandardItemModel_TakeVerticalHeaderItem(QStandardItemModel* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QStandardItem* QStandardItemModel_ItemPrototype(const QStandardItemModel* self) {
	return (QStandardItem*) self->itemPrototype();
}

void QStandardItemModel_SetItemPrototype(QStandardItemModel* self, QStandardItem* item) {
	self->setItemPrototype(item);
}

struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems(const QStandardItemModel* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QStandardItemModel_SortRole(const QStandardItemModel* self) {
	return self->sortRole();
}

void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

struct miqt_array /* of struct miqt_string */  QStandardItemModel_MimeTypes(const QStandardItemModel* self) {
	QStringList _ret = self->mimeTypes();
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

QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QStandardItemModel_DropMimeData(QStandardItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item) {
	self->itemChanged(item);
}

void QStandardItemModel_connect_ItemChanged(QStandardItemModel* self, intptr_t slot) {
	MiqtVirtualQStandardItemModel::connect(self, static_cast<void (QStandardItemModel::*)(QStandardItem*)>(&QStandardItemModel::itemChanged), self, [=](QStandardItem* item) {
		QStandardItem* sigval1 = item;
		miqt_exec_callback_QStandardItemModel_ItemChanged(slot, sigval1);
	});
}

struct miqt_string QStandardItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QStandardItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStandardItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems2(const QStandardItemModel* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems3(const QStandardItemModel* self, struct miqt_string text, int flags, int column) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QStandardItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory
	QStandardItem** _arr = static_cast<QStandardItem**>(malloc(sizeof(QStandardItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QStandardItemModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__RoleNames = slot;
}

struct miqt_map /* of int to struct miqt_string */  QStandardItemModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_RoleNames();
}

void QStandardItemModel_override_virtual_Index(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Index = slot;
}

QModelIndex* QStandardItemModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Index(row, column, parent);
}

void QStandardItemModel_override_virtual_Parent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Parent = slot;
}

QModelIndex* QStandardItemModel_virtualbase_Parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Parent(child);
}

void QStandardItemModel_override_virtual_RowCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__RowCount = slot;
}

int QStandardItemModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_RowCount(parent);
}

void QStandardItemModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__ColumnCount = slot;
}

int QStandardItemModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_ColumnCount(parent);
}

void QStandardItemModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__HasChildren = slot;
}

bool QStandardItemModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_HasChildren(parent);
}

void QStandardItemModel_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Data = slot;
}

QVariant* QStandardItemModel_virtualbase_Data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Data(index, role);
}

void QStandardItemModel_override_virtual_MultiData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__MultiData = slot;
}

void QStandardItemModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_MultiData(index, roleDataSpan);
}

void QStandardItemModel_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__SetData = slot;
}

bool QStandardItemModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_SetData(index, value, role);
}

void QStandardItemModel_override_virtual_ClearItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__ClearItemData = slot;
}

bool QStandardItemModel_virtualbase_ClearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_ClearItemData(index);
}

void QStandardItemModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__HeaderData = slot;
}

QVariant* QStandardItemModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

void QStandardItemModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__SetHeaderData = slot;
}

bool QStandardItemModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

void QStandardItemModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__InsertRows = slot;
}

bool QStandardItemModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

void QStandardItemModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__InsertColumns = slot;
}

bool QStandardItemModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

void QStandardItemModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__RemoveRows = slot;
}

bool QStandardItemModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

void QStandardItemModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__RemoveColumns = slot;
}

bool QStandardItemModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

void QStandardItemModel_override_virtual_Flags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Flags = slot;
}

int QStandardItemModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Flags(index);
}

void QStandardItemModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__SupportedDropActions = slot;
}

int QStandardItemModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_SupportedDropActions();
}

void QStandardItemModel_override_virtual_ItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__ItemData = slot;
}

struct miqt_map /* of int to QVariant* */  QStandardItemModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_ItemData(index);
}

void QStandardItemModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__SetItemData = slot;
}

bool QStandardItemModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_SetItemData(index, roles);
}

void QStandardItemModel_override_virtual_Sort(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Sort = slot;
}

void QStandardItemModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Sort(column, order);
}

void QStandardItemModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__MimeTypes = slot;
}

struct miqt_array /* of struct miqt_string */  QStandardItemModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_MimeTypes();
}

void QStandardItemModel_override_virtual_MimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__MimeData = slot;
}

QMimeData* QStandardItemModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_MimeData(indexes);
}

void QStandardItemModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__DropMimeData = slot;
}

bool QStandardItemModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

void QStandardItemModel_override_virtual_Sibling(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Sibling = slot;
}

QModelIndex* QStandardItemModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

void QStandardItemModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__CanDropMimeData = slot;
}

bool QStandardItemModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

void QStandardItemModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__SupportedDragActions = slot;
}

int QStandardItemModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_SupportedDragActions();
}

void QStandardItemModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__MoveRows = slot;
}

bool QStandardItemModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

void QStandardItemModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__MoveColumns = slot;
}

bool QStandardItemModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

void QStandardItemModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__FetchMore = slot;
}

void QStandardItemModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_FetchMore(parent);
}

void QStandardItemModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__CanFetchMore = slot;
}

bool QStandardItemModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_CanFetchMore(parent);
}

void QStandardItemModel_override_virtual_Buddy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Buddy = slot;
}

QModelIndex* QStandardItemModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Buddy(index);
}

void QStandardItemModel_override_virtual_Match(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Match = slot;
}

struct miqt_array /* of QModelIndex* */  QStandardItemModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

void QStandardItemModel_override_virtual_Span(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Span = slot;
}

QSize* QStandardItemModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Span(index);
}

void QStandardItemModel_override_virtual_Submit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Submit = slot;
}

bool QStandardItemModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Submit();
}

void QStandardItemModel_override_virtual_Revert(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__Revert = slot;
}

void QStandardItemModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_Revert();
}

void QStandardItemModel_override_virtual_ResetInternalData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStandardItemModel*>( (QStandardItemModel*)(self) )->handle__ResetInternalData = slot;
}

void QStandardItemModel_virtualbase_ResetInternalData(void* self) {
	( (MiqtVirtualQStandardItemModel*)(self) )->virtualbase_ResetInternalData();
}

void QStandardItemModel_Delete(QStandardItemModel* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStandardItemModel*>( self );
	} else {
		delete self;
	}
}

