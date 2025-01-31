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
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtablewidget.h>
#include "gen_qtablewidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QTableWidgetItem* miqt_exec_callback_QTableWidgetItem_Clone(const QTableWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QTableWidgetItem_Data(const QTableWidgetItem*, intptr_t, int);
void miqt_exec_callback_QTableWidgetItem_SetData(QTableWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QTableWidgetItem_OperatorLesser(const QTableWidgetItem*, intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidgetItem_Read(QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidgetItem_Write(const QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidget_ItemPressed(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemDoubleClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemActivated(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemEntered(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemChanged(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_CurrentItemChanged(intptr_t, QTableWidgetItem*, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemSelectionChanged(intptr_t);
void miqt_exec_callback_QTableWidget_CellPressed(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellDoubleClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellActivated(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellEntered(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellChanged(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CurrentCellChanged(intptr_t, int, int, int, int);
bool miqt_exec_callback_QTableWidget_Event(QTableWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTableWidget_MimeTypes(const QTableWidget*, intptr_t);
QMimeData* miqt_exec_callback_QTableWidget_MimeData(const QTableWidget*, intptr_t, struct miqt_array /* of QTableWidgetItem* */ );
bool miqt_exec_callback_QTableWidget_DropMimeData(QTableWidget*, intptr_t, int, int, QMimeData*, int);
int miqt_exec_callback_QTableWidget_SupportedDropActions(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_DropEvent(QTableWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableWidget_SetRootIndex(QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_SetSelectionModel(QTableWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableWidget_DoItemsLayout(QTableWidget*, intptr_t);
QRect* miqt_exec_callback_QTableWidget_VisualRect(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_ScrollTo(QTableWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableWidget_IndexAt(const QTableWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QTableWidget_ScrollContentsBy(QTableWidget*, intptr_t, int, int);
void miqt_exec_callback_QTableWidget_InitViewItemOption(const QTableWidget*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QTableWidget_PaintEvent(QTableWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableWidget_TimerEvent(QTableWidget*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableWidget_HorizontalOffset(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_VerticalOffset(const QTableWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QTableWidget_MoveCursor(QTableWidget*, intptr_t, int, int);
void miqt_exec_callback_QTableWidget_SetSelection(QTableWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableWidget_VisualRegionForSelection(const QTableWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableWidget_SelectedIndexes(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_UpdateGeometries(QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_ViewportSizeHint(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_SizeHintForRow(const QTableWidget*, intptr_t, int);
int miqt_exec_callback_QTableWidget_SizeHintForColumn(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_VerticalScrollbarAction(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_HorizontalScrollbarAction(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_IsIndexHidden(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_SelectionChanged(QTableWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableWidget_CurrentChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QTableWidget_KeyboardSearch(QTableWidget*, intptr_t, struct miqt_string);
QAbstractItemDelegate* miqt_exec_callback_QTableWidget_ItemDelegateForIndex(const QTableWidget*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QTableWidget_InputMethodQuery(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_Reset(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_SelectAll(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_DataChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTableWidget_RowsInserted(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_RowsAboutToBeRemoved(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_UpdateEditorData(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_UpdateEditorGeometries(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_VerticalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_HorizontalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_CloseEditor(QTableWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTableWidget_CommitData(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_EditorDestroyed(QTableWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QTableWidget_Edit2(QTableWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTableWidget_SelectionCommand(const QTableWidget*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTableWidget_StartDrag(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_FocusNextPrevChild(QTableWidget*, intptr_t, bool);
bool miqt_exec_callback_QTableWidget_ViewportEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_MousePressEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_MouseMoveEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_MouseReleaseEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_MouseDoubleClickEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_DragEnterEvent(QTableWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTableWidget_DragMoveEvent(QTableWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTableWidget_DragLeaveEvent(QTableWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTableWidget_FocusInEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_FocusOutEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_KeyPressEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_ResizeEvent(QTableWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTableWidget_InputMethodEvent(QTableWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTableWidget_EventFilter(QTableWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTableWidget_MinimumSizeHint(const QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_SizeHint(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_SetupViewport(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_WheelEvent(QTableWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTableWidget_ContextMenuEvent(QTableWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTableWidget_ChangeEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_InitStyleOption(const QTableWidget*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QTableWidget_DevType(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_SetVisible(QTableWidget*, intptr_t, bool);
int miqt_exec_callback_QTableWidget_HeightForWidth(const QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_HasHeightForWidth(const QTableWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTableWidget_PaintEngine(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_KeyReleaseEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_EnterEvent(QTableWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTableWidget_LeaveEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_MoveEvent(QTableWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTableWidget_CloseEvent(QTableWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTableWidget_TabletEvent(QTableWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTableWidget_ActionEvent(QTableWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTableWidget_ShowEvent(QTableWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTableWidget_HideEvent(QTableWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTableWidget_NativeEvent(QTableWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTableWidget_Metric(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_InitPainter(const QTableWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTableWidget_Redirected(const QTableWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTableWidget_SharedPainter(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_ChildEvent(QTableWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTableWidget_CustomEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_ConnectNotify(QTableWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTableWidget_DisconnectNotify(QTableWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new() {
	return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right) {
	return new QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
	delete self;
}

class MiqtVirtualQTableWidgetItem final : public QTableWidgetItem {
public:

	MiqtVirtualQTableWidgetItem(): QTableWidgetItem() {};
	MiqtVirtualQTableWidgetItem(const QString& text): QTableWidgetItem(text) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text): QTableWidgetItem(icon, text) {};
	MiqtVirtualQTableWidgetItem(const QTableWidgetItem& other): QTableWidgetItem(other) {};
	MiqtVirtualQTableWidgetItem(int typeVal): QTableWidgetItem(typeVal) {};
	MiqtVirtualQTableWidgetItem(const QString& text, int typeVal): QTableWidgetItem(text, typeVal) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal): QTableWidgetItem(icon, text, typeVal) {};

	virtual ~MiqtVirtualQTableWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTableWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QTableWidgetItem::clone();
		}
		

		QTableWidgetItem* callback_return_value = miqt_exec_callback_QTableWidgetItem_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTableWidgetItem* virtualbase_Clone() const {

		return QTableWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__Data == 0) {
			return QTableWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTableWidgetItem_Data(this, handle__Data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int role) const {

		return new QVariant(QTableWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__SetData == 0) {
			QTableWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTableWidgetItem_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(int role, QVariant* value) {

		QTableWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTableWidgetItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QTableWidgetItem::operator<(other);
		}
		
		const QTableWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTableWidgetItem* sigval1 = const_cast<QTableWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidgetItem_OperatorLesser(this, handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QTableWidgetItem* other) const {

		return QTableWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QTableWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QTableWidgetItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QTableWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QTableWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QTableWidgetItem_Write(this, handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QTableWidgetItem::write(*out);

	}

};

QTableWidgetItem* QTableWidgetItem_new() {
	return new MiqtVirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
	return new MiqtVirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
	return new MiqtVirtualQTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(struct miqt_string text, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, struct miqt_string text, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_Clone(const QTableWidgetItem* self) {
	return self->clone();
}

QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_Row(const QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_Column(const QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self) {
	return self->isSelected();
}

int QTableWidgetItem_Flags(const QTableWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QTableWidgetItem_Text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_Font(const QTableWidgetItem* self) {
	return new QFont(self->font());
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

void QTableWidgetItem_SetTextAlignmentWithAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTableWidgetItem_SetTextAlignment2(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self) {
	return new QBrush(self->background());
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
	return (*self < *other);
}

void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_Type(const QTableWidgetItem* self) {
	return self->type();
}

bool QTableWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QTableWidgetItem* QTableWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Clone();
}

bool QTableWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QTableWidgetItem_virtualbase_Data(const void* self, int role) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Data(role);
}

bool QTableWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

void QTableWidgetItem_virtualbase_SetData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_SetData(role, value);
}

bool QTableWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OperatorLesser = slot;
	return true;
}

bool QTableWidgetItem_virtualbase_OperatorLesser(const void* self, QTableWidgetItem* other) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

bool QTableWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Read = slot;
	return true;
}

void QTableWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Read(in);
}

bool QTableWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Write = slot;
	return true;
}

void QTableWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Write(out);
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
	delete self;
}

class MiqtVirtualQTableWidget final : public QTableWidget {
public:

	MiqtVirtualQTableWidget(QWidget* parent): QTableWidget(parent) {};
	MiqtVirtualQTableWidget(): QTableWidget() {};
	MiqtVirtualQTableWidget(int rows, int columns): QTableWidget(rows, columns) {};
	MiqtVirtualQTableWidget(int rows, int columns, QWidget* parent): QTableWidget(rows, columns, parent) {};

	virtual ~MiqtVirtualQTableWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QTableWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTableWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QTableWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QTableWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTableWidget_MimeTypes(this, handle__MimeTypes);
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

		QStringList _ret = QTableWidget::mimeTypes();
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
	virtual QMimeData* mimeData(const QList<QTableWidgetItem *>& items) const override {
		if (handle__MimeData == 0) {
			return QTableWidget::mimeData(items);
		}
		
		const QList<QTableWidgetItem *>& items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTableWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QTableWidget_MimeData(this, handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QTableWidgetItem* */  items) const {
		QList<QTableWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QTableWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
		if (handle__DropMimeData == 0) {
			return QTableWidget::dropMimeData(row, column, data, action);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(int row, int column, QMimeData* data, int action) {

		return QTableWidget::dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QTableWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_SupportedDropActions(this, handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QTableWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTableWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTableWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QTableWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTableWidget_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QTableWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QTableWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTableWidget_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QTableWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QTableWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTableWidget_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QTableWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QTableWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTableWidget_VisualRect(this, handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QTableWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QTableWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableWidget_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QTableWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QTableWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_IndexAt(this, handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QTableWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTableWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTableWidget_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTableWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QTableWidget::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QTableWidget_InitViewItemOption(this, handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QTableWidget::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QTableWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTableWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QTableWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTableWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTableWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QTableWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_HorizontalOffset(this, handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QTableWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QTableWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_VerticalOffset(this, handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QTableWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QTableWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTableWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QTableWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTableWidget_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QTableWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QTableWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTableWidget_VisualRegionForSelection(this, handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTableWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QTableWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableWidget_SelectedIndexes(this, handle__SelectedIndexes);
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

		QModelIndexList _ret = QTableWidget::selectedIndexes();
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
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QTableWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTableWidget_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QTableWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTableWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTableWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QTableWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTableWidget_SizeHintForRow(this, handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QTableWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QTableWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTableWidget_SizeHintForColumn(this, handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QTableWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QTableWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QTableWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QTableWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QTableWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QTableWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_IsIndexHidden(this, handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QTableWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QTableWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTableWidget_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTableWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QTableWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTableWidget_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QTableWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QTableWidget::keyboardSearch(search);
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

		miqt_exec_callback_QTableWidget_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTableWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__ItemDelegateForIndex == 0) {
			return QTableWidget::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QTableWidget_ItemDelegateForIndex(this, handle__ItemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_ItemDelegateForIndex(QModelIndex* index) const {

		return QTableWidget::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QTableWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTableWidget_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QTableWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QTableWidget::reset();
			return;
		}
		

		miqt_exec_callback_QTableWidget_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QTableWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QTableWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QTableWidget_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QTableWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__DataChanged == 0) {
			QTableWidget::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QTableWidget_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTableWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QTableWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableWidget_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QTableWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QTableWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableWidget_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTableWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QTableWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTableWidget_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QTableWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QTableWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTableWidget_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QTableWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QTableWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableWidget_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QTableWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QTableWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableWidget_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QTableWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QTableWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableWidget_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QTableWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QTableWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTableWidget_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QTableWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QTableWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTableWidget_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QTableWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QTableWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTableWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QTableWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTableWidget_SelectionCommand(this, handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTableWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QTableWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTableWidget_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QTableWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTableWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTableWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTableWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QTableWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QTableWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTableWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTableWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTableWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTableWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTableWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTableWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTableWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTableWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTableWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTableWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTableWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTableWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTableWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTableWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTableWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTableWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTableWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTableWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QTableWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QTableWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QTableWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QTableWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QTableWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QTableWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTableWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QTableWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTableWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTableWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTableWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTableWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QTableWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTableWidget_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QTableWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QTableWidget::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QTableWidget::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QTableWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QTableWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QTableWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QTableWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QTableWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QTableWidget_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QTableWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTableWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTableWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTableWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTableWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTableWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTableWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTableWidget_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTableWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTableWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTableWidget_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTableWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTableWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTableWidget_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTableWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTableWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTableWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTableWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QTableWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTableWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTableWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTableWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTableWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTableWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTableWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTableWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTableWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTableWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTableWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QTableWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QTableWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTableWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTableWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QTableWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QTableWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTableWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTableWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTableWidget_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTableWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTableWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTableWidget_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTableWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTableWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTableWidget_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTableWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTableWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTableWidget_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTableWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTableWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTableWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTableWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTableWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTableWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTableWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTableWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTableWidget::disconnectNotify(*signal);

	}

};

QTableWidget* QTableWidget_new(QWidget* parent) {
	return new MiqtVirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
	return new MiqtVirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
	return new MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
	return new MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

void QTableWidget_virtbase(QTableWidget* src, QTableView** outptr_QTableView) {
	*outptr_QTableView = static_cast<QTableView*>(src);
}

QMetaObject* QTableWidget_MetaObject(const QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableWidget_Metacast(QTableWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableWidget_Tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_RowCount(const QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_ColumnCount(const QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_Row(const QTableWidget* self, QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_Column(const QTableWidget* self, QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_Items(const QTableWidget* self, QMimeData* data) {
	QList<QTableWidgetItem *> _ret = self->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QTableWidget_IndexFromItem(const QTableWidget* self, QTableWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QTableWidgetItem* QTableWidget_ItemFromIndex(const QTableWidget* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_CurrentRow(const QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_CurrentColumn(const QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SortItems(QTableWidget* self, int column) {
	self->sortItems(static_cast<int>(column));
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(const QTableWidget* self) {
	return self->isSortingEnabled();
}

void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item) {
	self->editItem(item);
}

void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column) {
	return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* rangeVal, bool selectVal) {
	self->setRangeSelected(*rangeVal, selectVal);
}

struct miqt_array /* of QTableWidgetSelectionRange* */  QTableWidget_SelectedRanges(const QTableWidget* self) {
	QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTableWidgetSelectionRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_SelectedItems(const QTableWidget* self) {
	QList<QTableWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_FindItems(const QTableWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QTableWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow) {
	return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn) {
	return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_VisualItemRect(const QTableWidget* self, QTableWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self) {
	return (QTableWidgetItem*) self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_ScrollToItem(QTableWidget* self, QTableWidgetItem* item) {
	self->scrollToItem(item);
}

void QTableWidget_InsertRow(QTableWidget* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QTableWidget_InsertColumn(QTableWidget* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QTableWidget_RemoveRow(QTableWidget* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QTableWidget_RemoveColumn(QTableWidget* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QTableWidget_Clear(QTableWidget* self) {
	self->clear();
}

void QTableWidget_ClearContents(QTableWidget* self) {
	self->clearContents();
}

void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item) {
	self->itemPressed(item);
}

void QTableWidget_connect_ItemPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemPressed(slot, sigval1);
	});
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_connect_ItemClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemClicked(slot, sigval1);
	});
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_connect_ItemActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemActivated(slot, sigval1);
	});
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_connect_ItemEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemEntered(slot, sigval1);
	});
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_connect_ItemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemChanged(slot, sigval1);
	});
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_connect_CurrentItemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [=](QTableWidgetItem* current, QTableWidgetItem* previous) {
		QTableWidgetItem* sigval1 = current;
		QTableWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTableWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTableWidget_ItemSelectionChanged(slot);
	});
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellPressed(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellActivated(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellEntered(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_connect_CurrentCellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [=](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		int sigval1 = currentRow;
		int sigval2 = currentColumn;
		int sigval3 = previousRow;
		int sigval4 = previousColumn;
		miqt_exec_callback_QTableWidget_CurrentCellChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string QTableWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_SortItems2(QTableWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QTableWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTableWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_Event(e);
}

bool QTableWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_MimeTypes();
}

bool QTableWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QTableWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_MimeData(items);
}

bool QTableWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QTableWidget_virtualbase_DropMimeData(void* self, int row, int column, QMimeData* data, int action) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DropMimeData(row, column, data, action);
}

bool QTableWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QTableWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SupportedDropActions();
}

bool QTableWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTableWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QTableWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QTableWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetRootIndex(index);
}

bool QTableWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QTableWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QTableWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QTableWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DoItemsLayout();
}

bool QTableWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QTableWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VisualRect(index);
}

bool QTableWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QTableWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QTableWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QTableWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_IndexAt(p);
}

bool QTableWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QTableWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QTableWidget_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitViewItemOption = slot;
	return true;
}

void QTableWidget_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_InitViewItemOption(option);
}

bool QTableWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTableWidget_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_PaintEvent(e);
}

bool QTableWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTableWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QTableWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QTableWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_HorizontalOffset();
}

bool QTableWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QTableWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VerticalOffset();
}

bool QTableWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QTableWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QTableWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QTableWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QTableWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QTableWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QTableWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectedIndexes();
}

bool QTableWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QTableWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_UpdateGeometries();
}

bool QTableWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_ViewportSizeHint();
}

bool QTableWidget_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QTableWidget_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QTableWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QTableWidget_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QTableWidget_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QTableWidget_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QTableWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QTableWidget_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QTableWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QTableWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QTableWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QTableWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QTableWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QTableWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QTableWidget_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QTableWidget_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QTableWidget_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QTableWidget_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_ItemDelegateForIndex(index);
}

bool QTableWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTableWidget_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QTableWidget_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QTableWidget_virtualbase_Reset(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_Reset();
}

bool QTableWidget_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QTableWidget_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectAll();
}

bool QTableWidget_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QTableWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QTableWidget_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QTableWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QTableWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QTableWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QTableWidget_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QTableWidget_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_UpdateEditorData();
}

bool QTableWidget_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QTableWidget_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QTableWidget_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QTableWidget_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QTableWidget_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QTableWidget_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QTableWidget_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QTableWidget_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QTableWidget_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QTableWidget_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CommitData(editor);
}

bool QTableWidget_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QTableWidget_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QTableWidget_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QTableWidget_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QTableWidget_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QTableWidget_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QTableWidget_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QTableWidget_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QTableWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTableWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTableWidget_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QTableWidget_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ViewportEvent(event);
}

bool QTableWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTableWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTableWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTableWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTableWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTableWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTableWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTableWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTableWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTableWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTableWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTableWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTableWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTableWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTableWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTableWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTableWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QTableWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QTableWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTableWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QTableWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTableWidget_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_EventFilter(object, event);
}

bool QTableWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTableWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SizeHint();
}

bool QTableWidget_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QTableWidget_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QTableWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTableWidget_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_WheelEvent(param1);
}

bool QTableWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QTableWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QTableWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QTableWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QTableWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTableWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_DevType();
}

bool QTableWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTableWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QTableWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTableWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QTableWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTableWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTableWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTableWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_PaintEngine();
}

bool QTableWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTableWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QTableWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTableWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QTableWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTableWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QTableWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTableWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QTableWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTableWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QTableWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QTableWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QTableWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTableWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QTableWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTableWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTableWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTableWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_Metric(param1);
}

bool QTableWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTableWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QTableWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTableWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QTableWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTableWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SharedPainter();
}

bool QTableWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTableWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QTableWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTableWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QTableWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTableWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTableWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTableWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTableWidget_Delete(QTableWidget* self) {
	delete self;
}

