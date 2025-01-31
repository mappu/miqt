#include <QAbstractItemDelegate>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtreewidget.h>
#include "gen_qtreewidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QTreeWidgetItem* miqt_exec_callback_QTreeWidgetItem_Clone(const QTreeWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QTreeWidgetItem_Data(const QTreeWidgetItem*, intptr_t, int, int);
void miqt_exec_callback_QTreeWidgetItem_SetData(QTreeWidgetItem*, intptr_t, int, int, QVariant*);
bool miqt_exec_callback_QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem*, intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidgetItem_Read(QTreeWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTreeWidgetItem_Write(const QTreeWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTreeWidget_ItemPressed(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemClicked(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemDoubleClicked(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemActivated(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemEntered(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemChanged(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_ItemExpanded(intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_ItemCollapsed(intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_CurrentItemChanged(intptr_t, QTreeWidgetItem*, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_ItemSelectionChanged(intptr_t);
void miqt_exec_callback_QTreeWidget_SetSelectionModel(QTreeWidget*, intptr_t, QItemSelectionModel*);
bool miqt_exec_callback_QTreeWidget_Event(QTreeWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTreeWidget_MimeTypes(const QTreeWidget*, intptr_t);
QMimeData* miqt_exec_callback_QTreeWidget_MimeData(const QTreeWidget*, intptr_t, struct miqt_array /* of QTreeWidgetItem* */ );
bool miqt_exec_callback_QTreeWidget_DropMimeData(QTreeWidget*, intptr_t, QTreeWidgetItem*, int, QMimeData*, int);
int miqt_exec_callback_QTreeWidget_SupportedDropActions(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_DropEvent(QTreeWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTreeWidget_SetRootIndex(QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_KeyboardSearch(QTreeWidget*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QTreeWidget_VisualRect(const QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_ScrollTo(QTreeWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTreeWidget_IndexAt(const QTreeWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QTreeWidget_DoItemsLayout(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_Reset(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_DataChanged(QTreeWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTreeWidget_SelectAll(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_VerticalScrollbarValueChanged(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_ScrollContentsBy(QTreeWidget*, intptr_t, int, int);
void miqt_exec_callback_QTreeWidget_RowsInserted(QTreeWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTreeWidget_RowsAboutToBeRemoved(QTreeWidget*, intptr_t, QModelIndex*, int, int);
QModelIndex* miqt_exec_callback_QTreeWidget_MoveCursor(QTreeWidget*, intptr_t, int, int);
int miqt_exec_callback_QTreeWidget_HorizontalOffset(const QTreeWidget*, intptr_t);
int miqt_exec_callback_QTreeWidget_VerticalOffset(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_SetSelection(QTreeWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTreeWidget_VisualRegionForSelection(const QTreeWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTreeWidget_SelectedIndexes(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_ChangeEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_TimerEvent(QTreeWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTreeWidget_PaintEvent(QTreeWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTreeWidget_DrawRow(const QTreeWidget*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QTreeWidget_DrawBranches(const QTreeWidget*, intptr_t, QPainter*, QRect*, QModelIndex*);
void miqt_exec_callback_QTreeWidget_MousePressEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_MouseReleaseEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_MouseDoubleClickEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_MouseMoveEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_KeyPressEvent(QTreeWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeWidget_DragMoveEvent(QTreeWidget*, intptr_t, QDragMoveEvent*);
bool miqt_exec_callback_QTreeWidget_ViewportEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_UpdateGeometries(QTreeWidget*, intptr_t);
QSize* miqt_exec_callback_QTreeWidget_ViewportSizeHint(const QTreeWidget*, intptr_t);
int miqt_exec_callback_QTreeWidget_SizeHintForColumn(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_HorizontalScrollbarAction(QTreeWidget*, intptr_t, int);
bool miqt_exec_callback_QTreeWidget_IsIndexHidden(const QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_SelectionChanged(QTreeWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTreeWidget_CurrentChanged(QTreeWidget*, intptr_t, QModelIndex*, QModelIndex*);
int miqt_exec_callback_QTreeWidget_SizeHintForRow(const QTreeWidget*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QTreeWidget_ItemDelegateForIndex(const QTreeWidget*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QTreeWidget_InputMethodQuery(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_UpdateEditorData(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_UpdateEditorGeometries(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_VerticalScrollbarAction(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_HorizontalScrollbarValueChanged(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_CloseEditor(QTreeWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTreeWidget_CommitData(QTreeWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeWidget_EditorDestroyed(QTreeWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QTreeWidget_Edit2(QTreeWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTreeWidget_SelectionCommand(const QTreeWidget*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTreeWidget_StartDrag(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_InitViewItemOption(const QTreeWidget*, intptr_t, QStyleOptionViewItem*);
bool miqt_exec_callback_QTreeWidget_FocusNextPrevChild(QTreeWidget*, intptr_t, bool);
void miqt_exec_callback_QTreeWidget_DragEnterEvent(QTreeWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTreeWidget_DragLeaveEvent(QTreeWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTreeWidget_FocusInEvent(QTreeWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeWidget_FocusOutEvent(QTreeWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeWidget_ResizeEvent(QTreeWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTreeWidget_InputMethodEvent(QTreeWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTreeWidget_EventFilter(QTreeWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTreeWidget_MinimumSizeHint(const QTreeWidget*, intptr_t);
QSize* miqt_exec_callback_QTreeWidget_SizeHint(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_SetupViewport(QTreeWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeWidget_WheelEvent(QTreeWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTreeWidget_ContextMenuEvent(QTreeWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTreeWidget_InitStyleOption(const QTreeWidget*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QTreeWidget_DevType(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_SetVisible(QTreeWidget*, intptr_t, bool);
int miqt_exec_callback_QTreeWidget_HeightForWidth(const QTreeWidget*, intptr_t, int);
bool miqt_exec_callback_QTreeWidget_HasHeightForWidth(const QTreeWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTreeWidget_PaintEngine(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_KeyReleaseEvent(QTreeWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeWidget_EnterEvent(QTreeWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTreeWidget_LeaveEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_MoveEvent(QTreeWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTreeWidget_CloseEvent(QTreeWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTreeWidget_TabletEvent(QTreeWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTreeWidget_ActionEvent(QTreeWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTreeWidget_ShowEvent(QTreeWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTreeWidget_HideEvent(QTreeWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTreeWidget_NativeEvent(QTreeWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTreeWidget_Metric(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_InitPainter(const QTreeWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTreeWidget_Redirected(const QTreeWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTreeWidget_SharedPainter(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_ChildEvent(QTreeWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTreeWidget_CustomEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_ConnectNotify(QTreeWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTreeWidget_DisconnectNotify(QTreeWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTreeWidgetItem final : public QTreeWidgetItem {
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

	virtual ~MiqtVirtualQTreeWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTreeWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QTreeWidgetItem::clone();
		}
		

		QTreeWidgetItem* callback_return_value = miqt_exec_callback_QTreeWidgetItem_Clone(this, handle__Clone);

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

		QVariant* callback_return_value = miqt_exec_callback_QTreeWidgetItem_Data(this, handle__Data, sigval1, sigval2);

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

		bool callback_return_value = miqt_exec_callback_QTreeWidgetItem_OperatorLesser(this, handle__OperatorLesser, sigval1);

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

		miqt_exec_callback_QTreeWidgetItem_Write(this, handle__Write, sigval1);

		
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

void QTreeWidgetItem_SetTextAlignment2(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<Qt::AlignmentFlag>(alignment));
}

void QTreeWidgetItem_SetTextAlignment3(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->background(static_cast<int>(column)));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setBackground(static_cast<int>(column), *brush);
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

bool QTreeWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QTreeWidgetItem* QTreeWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Clone();
}

bool QTreeWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QTreeWidgetItem_virtualbase_Data(const void* self, int column, int role) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Data(column, role);
}

bool QTreeWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_SetData(void* self, int column, int role, QVariant* value) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_SetData(column, role, value);
}

bool QTreeWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OperatorLesser = slot;
	return true;
}

bool QTreeWidgetItem_virtualbase_OperatorLesser(const void* self, QTreeWidgetItem* other) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

bool QTreeWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Read = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Read(in);
}

bool QTreeWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Write = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_Write(out);
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self) {
	delete self;
}

class MiqtVirtualQTreeWidget final : public QTreeWidget {
public:

	MiqtVirtualQTreeWidget(QWidget* parent): QTreeWidget(parent) {};
	MiqtVirtualQTreeWidget(): QTreeWidget() {};

	virtual ~MiqtVirtualQTreeWidget() override = default;

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
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTreeWidget_MimeTypes(this, handle__MimeTypes);
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
	virtual QMimeData* mimeData(const QList<QTreeWidgetItem *>& items) const override {
		if (handle__MimeData == 0) {
			return QTreeWidget::mimeData(items);
		}
		
		const QList<QTreeWidgetItem *>& items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTreeWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QTreeWidget_MimeData(this, handle__MimeData, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_SupportedDropActions(this, handle__SupportedDropActions);

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

		QRect* callback_return_value = miqt_exec_callback_QTreeWidget_VisualRect(this, handle__VisualRect, sigval1);

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

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeWidget_IndexAt(this, handle__IndexAt, sigval1);

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
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
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
		const QList<int>& roles_ret = roles;
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
		QList<int> roles_QList;
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
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_HorizontalOffset(this, handle__HorizontalOffset);

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
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_VerticalOffset(this, handle__VerticalOffset);

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

		QRegion* callback_return_value = miqt_exec_callback_QTreeWidget_VisualRegionForSelection(this, handle__VisualRegionForSelection, sigval1);

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
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTreeWidget_SelectedIndexes(this, handle__SelectedIndexes);
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
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QTreeWidget::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QTreeWidget::changeEvent(event);

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

		miqt_exec_callback_QTreeWidget_DrawRow(this, handle__DrawRow, sigval1, sigval2, sigval3);

		
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

		miqt_exec_callback_QTreeWidget_DrawBranches(this, handle__DrawBranches, sigval1, sigval2, sigval3);

		
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
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_ViewportSizeHint(this, handle__ViewportSizeHint);

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

		int callback_return_value = miqt_exec_callback_QTreeWidget_SizeHintForColumn(this, handle__SizeHintForColumn, sigval1);

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

		bool callback_return_value = miqt_exec_callback_QTreeWidget_IsIndexHidden(this, handle__IsIndexHidden, sigval1);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QTreeWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTreeWidget_SizeHintForRow(this, handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QTreeWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__ItemDelegateForIndex == 0) {
			return QTreeWidget::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QTreeWidget_ItemDelegateForIndex(this, handle__ItemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_ItemDelegateForIndex(QModelIndex* index) const {

		return QTreeWidget::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QTreeWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTreeWidget_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QTreeWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QTreeWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QTreeWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QTreeWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QTreeWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QTreeWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeWidget_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QTreeWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QTreeWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeWidget_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QTreeWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QTreeWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeWidget_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QTreeWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QTreeWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTreeWidget_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QTreeWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QTreeWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTreeWidget_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QTreeWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QTreeWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTreeWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QTreeWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTreeWidget_SelectionCommand(this, handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTreeWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QTreeWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTreeWidget_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QTreeWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QTreeWidget::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QTreeWidget_InitViewItemOption(this, handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QTreeWidget::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTreeWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTreeWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTreeWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTreeWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTreeWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTreeWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTreeWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTreeWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTreeWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTreeWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QTreeWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QTreeWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QTreeWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QTreeWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTreeWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QTreeWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTreeWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTreeWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTreeWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTreeWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QTreeWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTreeWidget_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QTreeWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QTreeWidget::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTreeWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QTreeWidget::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QTreeWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTreeWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QTreeWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QTreeWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QTreeWidget_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QTreeWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTreeWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTreeWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTreeWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTreeWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTreeWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTreeWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTreeWidget_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTreeWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTreeWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTreeWidget_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTreeWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTreeWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTreeWidget_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTreeWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTreeWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTreeWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTreeWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QTreeWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTreeWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTreeWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTreeWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTreeWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTreeWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTreeWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTreeWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTreeWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTreeWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTreeWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QTreeWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QTreeWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTreeWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTreeWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QTreeWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTreeWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTreeWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTreeWidget_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTreeWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTreeWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTreeWidget_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTreeWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTreeWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTreeWidget_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTreeWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTreeWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTreeWidget_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTreeWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTreeWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTreeWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTreeWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTreeWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTreeWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTreeWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTreeWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTreeWidget::disconnectNotify(*signal);

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

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemBelow(item);
}

QModelIndex* QTreeWidget_IndexFromItem(const QTreeWidget* self, QTreeWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QTreeWidgetItem* QTreeWidget_ItemFromIndex(const QTreeWidget* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
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

QModelIndex* QTreeWidget_IndexFromItem2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return new QModelIndex(self->indexFromItem(item, static_cast<int>(column)));
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QTreeWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QTreeWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QTreeWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTreeWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_Event(e);
}

bool QTreeWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTreeWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_MimeTypes();
}

bool QTreeWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QTreeWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QTreeWidgetItem* */  items) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_MimeData(items);
}

bool QTreeWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QTreeWidget_virtualbase_DropMimeData(void* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DropMimeData(parent, index, data, action);
}

bool QTreeWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QTreeWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SupportedDropActions();
}

bool QTreeWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QTreeWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QTreeWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetRootIndex(index);
}

bool QTreeWidget_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QTreeWidget_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QTreeWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QTreeWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VisualRect(index);
}

bool QTreeWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QTreeWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QTreeWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QTreeWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_IndexAt(p);
}

bool QTreeWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QTreeWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DoItemsLayout();
}

bool QTreeWidget_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QTreeWidget_virtualbase_Reset(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_Reset();
}

bool QTreeWidget_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QTreeWidget_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QTreeWidget_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectAll();
}

bool QTreeWidget_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QTreeWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QTreeWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QTreeWidget_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QTreeWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QTreeWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QTreeWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QTreeWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QTreeWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QTreeWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QTreeWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_HorizontalOffset();
}

bool QTreeWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QTreeWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VerticalOffset();
}

bool QTreeWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QTreeWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QTreeWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QTreeWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QTreeWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTreeWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectedIndexes();
}

bool QTreeWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ChangeEvent(event);
}

bool QTreeWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QTreeWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_PaintEvent(event);
}

bool QTreeWidget_override_virtual_DrawRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawRow = slot;
	return true;
}

void QTreeWidget_virtualbase_DrawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_DrawRow(painter, options, index);
}

bool QTreeWidget_override_virtual_DrawBranches(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawBranches = slot;
	return true;
}

void QTreeWidget_virtualbase_DrawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_DrawBranches(painter, rect, index);
}

bool QTreeWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTreeWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTreeWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTreeWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTreeWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QTreeWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTreeWidget_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QTreeWidget_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ViewportEvent(event);
}

bool QTreeWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QTreeWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_UpdateGeometries();
}

bool QTreeWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_ViewportSizeHint();
}

bool QTreeWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QTreeWidget_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QTreeWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QTreeWidget_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QTreeWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QTreeWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QTreeWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QTreeWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QTreeWidget_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QTreeWidget_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QTreeWidget_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QTreeWidget_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_ItemDelegateForIndex(index);
}

bool QTreeWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTreeWidget_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QTreeWidget_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QTreeWidget_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_UpdateEditorData();
}

bool QTreeWidget_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QTreeWidget_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QTreeWidget_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QTreeWidget_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QTreeWidget_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QTreeWidget_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QTreeWidget_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QTreeWidget_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QTreeWidget_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CommitData(editor);
}

bool QTreeWidget_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QTreeWidget_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QTreeWidget_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QTreeWidget_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QTreeWidget_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QTreeWidget_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QTreeWidget_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QTreeWidget_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QTreeWidget_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitViewItemOption = slot;
	return true;
}

void QTreeWidget_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_InitViewItemOption(option);
}

bool QTreeWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTreeWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTreeWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTreeWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTreeWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTreeWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTreeWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QTreeWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QTreeWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTreeWidget_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_EventFilter(object, event);
}

bool QTreeWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTreeWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SizeHint();
}

bool QTreeWidget_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QTreeWidget_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QTreeWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_WheelEvent(param1);
}

bool QTreeWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QTreeWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QTreeWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QTreeWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTreeWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_DevType();
}

bool QTreeWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTreeWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QTreeWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTreeWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QTreeWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTreeWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTreeWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTreeWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_PaintEngine();
}

bool QTreeWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QTreeWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QTreeWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTreeWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QTreeWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QTreeWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QTreeWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QTreeWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QTreeWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QTreeWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTreeWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTreeWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTreeWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_Metric(param1);
}

bool QTreeWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTreeWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QTreeWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTreeWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QTreeWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTreeWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_SharedPainter();
}

bool QTreeWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QTreeWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QTreeWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTreeWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTreeWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTreeWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTreeWidget_Delete(QTreeWidget* self) {
	delete self;
}

