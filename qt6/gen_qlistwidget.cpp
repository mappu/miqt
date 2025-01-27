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
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistwidget.h>
#include "gen_qlistwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QListWidgetItem* miqt_exec_callback_QListWidgetItem_Clone(const QListWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QListWidgetItem_Data(const QListWidgetItem*, intptr_t, int);
void miqt_exec_callback_QListWidgetItem_SetData(QListWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QListWidgetItem_OperatorLesser(const QListWidgetItem*, intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidgetItem_Read(QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QListWidgetItem_Write(const QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QListWidget_ItemPressed(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_ItemClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_ItemDoubleClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_ItemActivated(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_ItemEntered(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_ItemChanged(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_CurrentItemChanged(intptr_t, QListWidgetItem*, QListWidgetItem*);
void miqt_exec_callback_QListWidget_CurrentTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QListWidget_CurrentRowChanged(intptr_t, int);
void miqt_exec_callback_QListWidget_ItemSelectionChanged(intptr_t);
void miqt_exec_callback_QListWidget_SetSelectionModel(QListWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListWidget_DropEvent(QListWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QListWidget_Event(QListWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QListWidget_MimeTypes(const QListWidget*, intptr_t);
QMimeData* miqt_exec_callback_QListWidget_MimeData(const QListWidget*, intptr_t, struct miqt_array /* of QListWidgetItem* */ );
bool miqt_exec_callback_QListWidget_DropMimeData(QListWidget*, intptr_t, int, QMimeData*, int);
int miqt_exec_callback_QListWidget_SupportedDropActions(const QListWidget*, intptr_t);
QRect* miqt_exec_callback_QListWidget_VisualRect(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_ScrollTo(QListWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListWidget_IndexAt(const QListWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QListWidget_DoItemsLayout(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_Reset(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_SetRootIndex(QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_ScrollContentsBy(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_DataChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListWidget_RowsInserted(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_RowsAboutToBeRemoved(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_MouseMoveEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_MouseReleaseEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_WheelEvent(QListWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListWidget_TimerEvent(QListWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListWidget_ResizeEvent(QListWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListWidget_DragMoveEvent(QListWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListWidget_DragLeaveEvent(QListWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListWidget_StartDrag(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_InitViewItemOption(const QListWidget*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QListWidget_PaintEvent(QListWidget*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListWidget_HorizontalOffset(const QListWidget*, intptr_t);
int miqt_exec_callback_QListWidget_VerticalOffset(const QListWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QListWidget_MoveCursor(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_SetSelection(QListWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListWidget_VisualRegionForSelection(const QListWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListWidget_SelectedIndexes(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_UpdateGeometries(QListWidget*, intptr_t);
bool miqt_exec_callback_QListWidget_IsIndexHidden(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_SelectionChanged(QListWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListWidget_CurrentChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListWidget_ViewportSizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_KeyboardSearch(QListWidget*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListWidget_SizeHintForRow(const QListWidget*, intptr_t, int);
int miqt_exec_callback_QListWidget_SizeHintForColumn(const QListWidget*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QListWidget_ItemDelegateForIndex(const QListWidget*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QListWidget_InputMethodQuery(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_SelectAll(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_UpdateEditorData(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_UpdateEditorGeometries(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_VerticalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_HorizontalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_VerticalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_HorizontalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_CloseEditor(QListWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListWidget_CommitData(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_EditorDestroyed(QListWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QListWidget_Edit2(QListWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListWidget_SelectionCommand(const QListWidget*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListWidget_FocusNextPrevChild(QListWidget*, intptr_t, bool);
bool miqt_exec_callback_QListWidget_ViewportEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_MousePressEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_MouseDoubleClickEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_DragEnterEvent(QListWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListWidget_FocusInEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_FocusOutEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_KeyPressEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_InputMethodEvent(QListWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListWidget_EventFilter(QListWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListWidget_MinimumSizeHint(const QListWidget*, intptr_t);
QSize* miqt_exec_callback_QListWidget_SizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_SetupViewport(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_ContextMenuEvent(QListWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListWidget_ChangeEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_InitStyleOption(const QListWidget*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QListWidget_DevType(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_SetVisible(QListWidget*, intptr_t, bool);
int miqt_exec_callback_QListWidget_HeightForWidth(const QListWidget*, intptr_t, int);
bool miqt_exec_callback_QListWidget_HasHeightForWidth(const QListWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QListWidget_PaintEngine(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_KeyReleaseEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_EnterEvent(QListWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QListWidget_LeaveEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_MoveEvent(QListWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListWidget_CloseEvent(QListWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListWidget_TabletEvent(QListWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListWidget_ActionEvent(QListWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListWidget_ShowEvent(QListWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListWidget_HideEvent(QListWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListWidget_NativeEvent(QListWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QListWidget_Metric(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_InitPainter(const QListWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListWidget_Redirected(const QListWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListWidget_SharedPainter(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_ChildEvent(QListWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListWidget_CustomEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_ConnectNotify(QListWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListWidget_DisconnectNotify(QListWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListWidgetItem final : public QListWidgetItem {
public:

	MiqtVirtualQListWidgetItem(): QListWidgetItem() {};
	MiqtVirtualQListWidgetItem(const QString& text): QListWidgetItem(text) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text): QListWidgetItem(icon, text) {};
	MiqtVirtualQListWidgetItem(const QListWidgetItem& other): QListWidgetItem(other) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview): QListWidgetItem(listview) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview, int typeVal): QListWidgetItem(listview, typeVal) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview): QListWidgetItem(text, listview) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(text, listview, typeVal) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview): QListWidgetItem(icon, text, listview) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(icon, text, listview, typeVal) {};

	virtual ~MiqtVirtualQListWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QListWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QListWidgetItem::clone();
		}
		

		QListWidgetItem* callback_return_value = miqt_exec_callback_QListWidgetItem_Clone(this, handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QListWidgetItem* virtualbase_Clone() const {

		return QListWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__Data == 0) {
			return QListWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QListWidgetItem_Data(this, handle__Data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int role) const {

		return new QVariant(QListWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__SetData == 0) {
			QListWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QListWidgetItem_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(int role, QVariant* value) {

		QListWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QListWidgetItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QListWidgetItem::operator<(other);
		}
		
		const QListWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QListWidgetItem* sigval1 = const_cast<QListWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QListWidgetItem_OperatorLesser(this, handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QListWidgetItem* other) const {

		return QListWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QListWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QListWidgetItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QListWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QListWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QListWidgetItem_Write(this, handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QListWidgetItem::write(*out);

	}

};

QListWidgetItem* QListWidgetItem_new() {
	return new MiqtVirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other) {
	return new MiqtVirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
	return new MiqtVirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
	return new MiqtVirtualQListWidgetItem(listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
	return self->clone();
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetText(QListWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
	return new QFont(self->font());
}

void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QListWidgetItem_SetData(QListWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
	return (*self < *other);
}

void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
	return self->type();
}

bool QListWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clone = slot;
	return true;
}

QListWidgetItem* QListWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Clone();
}

bool QListWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QListWidgetItem_virtualbase_Data(const void* self, int role) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Data(role);
}

bool QListWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

void QListWidgetItem_virtualbase_SetData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_SetData(role, value);
}

bool QListWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OperatorLesser = slot;
	return true;
}

bool QListWidgetItem_virtualbase_OperatorLesser(const void* self, QListWidgetItem* other) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

bool QListWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Read = slot;
	return true;
}

void QListWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Read(in);
}

bool QListWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Write = slot;
	return true;
}

void QListWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Write(out);
}

void QListWidgetItem_Delete(QListWidgetItem* self) {
	delete self;
}

class MiqtVirtualQListWidget final : public QListWidget {
public:

	MiqtVirtualQListWidget(QWidget* parent): QListWidget(parent) {};
	MiqtVirtualQListWidget(): QListWidget() {};

	virtual ~MiqtVirtualQListWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QListWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QListWidget_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QListWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QListWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QListWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QListWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QListWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QListWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QListWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QListWidget_MimeTypes(this, handle__MimeTypes);
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

		QStringList _ret = QListWidget::mimeTypes();
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
	virtual QMimeData* mimeData(const QList<QListWidgetItem *>& items) const override {
		if (handle__MimeData == 0) {
			return QListWidget::mimeData(items);
		}
		
		const QList<QListWidgetItem *>& items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QListWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QListWidget_MimeData(this, handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QListWidgetItem* */  items) const {
		QList<QListWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QListWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
		if (handle__DropMimeData == 0) {
			return QListWidget::dropMimeData(index, data, action);
		}
		
		int sigval1 = index;
		QMimeData* sigval2 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval3 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(int index, QMimeData* data, int action) {

		return QListWidget::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QListWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_SupportedDropActions(this, handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QListWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QListWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QListWidget_VisualRect(this, handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QListWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QListWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListWidget_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QListWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_IndexAt(this, handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QListWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QListWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QListWidget_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QListWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QListWidget::reset();
			return;
		}
		

		miqt_exec_callback_QListWidget_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QListWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QListWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QListWidget_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QListWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QListWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QListWidget_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QListWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__DataChanged == 0) {
			QListWidget::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QListWidget_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QListWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QListWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QListWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QListWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QListWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QListWidget::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QListWidget::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QListWidget::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QListWidget::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QListWidget::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QListWidget::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QListWidget::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QListWidget::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QListWidget::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QListWidget::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QListWidget::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QListWidget::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QListWidget::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QListWidget::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QListWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QListWidget_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QListWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QListWidget::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QListWidget_InitViewItemOption(this, handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QListWidget::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QListWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QListWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QListWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_HorizontalOffset(this, handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QListWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QListWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_VerticalOffset(this, handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QListWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QListWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QListWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QListWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QListWidget_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QListWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QListWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QListWidget_VisualRegionForSelection(this, handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QListWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QListWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListWidget_SelectedIndexes(this, handle__SelectedIndexes);
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

		QModelIndexList _ret = QListWidget::selectedIndexes();
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
			QListWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QListWidget_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QListWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QListWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_IsIndexHidden(this, handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QListWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QListWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QListWidget_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QListWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QListWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QListWidget_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QListWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QListWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QListWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QListWidget::keyboardSearch(search);
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

		miqt_exec_callback_QListWidget_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QListWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QListWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QListWidget_SizeHintForRow(this, handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QListWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QListWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QListWidget_SizeHintForColumn(this, handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QListWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__ItemDelegateForIndex == 0) {
			return QListWidget::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QListWidget_ItemDelegateForIndex(this, handle__ItemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_ItemDelegateForIndex(QModelIndex* index) const {

		return QListWidget::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QListWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QListWidget_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QListWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QListWidget_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QListWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QListWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QListWidget_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QListWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QListWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QListWidget_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QListWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QListWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListWidget_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QListWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QListWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListWidget_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QListWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QListWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListWidget_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QListWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QListWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListWidget_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QListWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QListWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListWidget_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QListWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QListWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QListWidget_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QListWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QListWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QListWidget_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QListWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QListWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QListWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QListWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QListWidget_SelectionCommand(this, handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QListWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QListWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QListWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QListWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QListWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QListWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QListWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QListWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QListWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QListWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QListWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QListWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QListWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QListWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QListWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QListWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QListWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QListWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QListWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QListWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QListWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QListWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QListWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QListWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QListWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QListWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QListWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QListWidget_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QListWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QListWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QListWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QListWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QListWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QListWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QListWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QListWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QListWidget_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QListWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QListWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QListWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QListWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QListWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QListWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QListWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QListWidget_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QListWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QListWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QListWidget_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QListWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QListWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QListWidget_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QListWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QListWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QListWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QListWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QListWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QListWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QListWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QListWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QListWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QListWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QListWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QListWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QListWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QListWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QListWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QListWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QListWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QListWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QListWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QListWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QListWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QListWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QListWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QListWidget_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QListWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QListWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QListWidget_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QListWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QListWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QListWidget_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QListWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QListWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QListWidget_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QListWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QListWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QListWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QListWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QListWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QListWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QListWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QListWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QListWidget::disconnectNotify(*signal);

	}

};

QListWidget* QListWidget_new(QWidget* parent) {
	return new MiqtVirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
	return new MiqtVirtualQListWidget();
}

void QListWidget_virtbase(QListWidget* src, QListView** outptr_QListView) {
	*outptr_QListView = static_cast<QListView*>(src);
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListWidget_Metacast(QListWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListWidget_Tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
	return self->item(static_cast<int>(row));
}

int QListWidget_Row(const QListWidget* self, QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(static_cast<int>(row), item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

int QListWidget_Count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, QListWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

void QListWidget_SortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_SelectedItems(const QListWidget* self) {
	QList<QListWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_FindItems(const QListWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QListWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_Items(const QListWidget* self, QMimeData* data) {
	QList<QListWidgetItem *> _ret = self->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, QListWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
}

void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
	self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void QListWidget_connect_ItemPressed(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemPressed(slot, sigval1);
	});
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_connect_ItemClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemClicked(slot, sigval1);
	});
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_connect_ItemActivated(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemActivated(slot, sigval1);
	});
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_connect_ItemEntered(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemEntered(slot, sigval1);
	});
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_connect_ItemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemChanged(slot, sigval1);
	});
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [=](QListWidgetItem* current, QListWidgetItem* previous) {
		QListWidgetItem* sigval1 = current;
		QListWidgetItem* sigval2 = previous;
		miqt_exec_callback_QListWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QListWidget_CurrentTextChanged(QListWidget* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentTextChanged(currentText_QString);
}

void QListWidget_connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [=](const QString& currentText) {
		const QString currentText_ret = currentText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray currentText_b = currentText_ret.toUtf8();
		struct miqt_string currentText_ms;
		currentText_ms.len = currentText_b.length();
		currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
		memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
		struct miqt_string sigval1 = currentText_ms;
		miqt_exec_callback_QListWidget_CurrentTextChanged(slot, sigval1);
	});
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [=](int currentRow) {
		int sigval1 = currentRow;
		miqt_exec_callback_QListWidget_CurrentRowChanged(slot, sigval1);
	});
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QListWidget_ItemSelectionChanged(slot);
	});
}

struct miqt_string QListWidget_Tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QListWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QListWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QListWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QListWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QListWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QListWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_Event(e);
}

bool QListWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QListWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_MimeTypes();
}

bool QListWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QListWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QListWidgetItem* */  items) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_MimeData(items);
}

bool QListWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QListWidget_virtualbase_DropMimeData(void* self, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_DropMimeData(index, data, action);
}

bool QListWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QListWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SupportedDropActions();
}

bool QListWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QListWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VisualRect(index);
}

bool QListWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QListWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QListWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QListWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_IndexAt(p);
}

bool QListWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QListWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DoItemsLayout();
}

bool QListWidget_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QListWidget_virtualbase_Reset(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_Reset();
}

bool QListWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QListWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetRootIndex(index);
}

bool QListWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QListWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QListWidget_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QListWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QListWidget_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QListWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QListWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QListWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QListWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QListWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QListWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QListWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QListWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QListWidget_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_WheelEvent(e);
}

bool QListWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QListWidget_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_TimerEvent(e);
}

bool QListWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QListWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ResizeEvent(e);
}

bool QListWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QListWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QListWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QListWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QListWidget_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QListWidget_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QListWidget_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitViewItemOption = slot;
	return true;
}

void QListWidget_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQListWidget*)(self) )->virtualbase_InitViewItemOption(option);
}

bool QListWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QListWidget_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_PaintEvent(e);
}

bool QListWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QListWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_HorizontalOffset();
}

bool QListWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QListWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VerticalOffset();
}

bool QListWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QListWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QListWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QListWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QListWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QListWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QListWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QListWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SelectedIndexes();
}

bool QListWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QListWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_UpdateGeometries();
}

bool QListWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QListWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QListWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QListWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QListWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QListWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QListWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_ViewportSizeHint();
}

bool QListWidget_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QListWidget_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QListWidget_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QListWidget_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QListWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QListWidget_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QListWidget_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QListWidget_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_ItemDelegateForIndex(index);
}

bool QListWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QListWidget_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QListWidget_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QListWidget_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SelectAll();
}

bool QListWidget_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QListWidget_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_UpdateEditorData();
}

bool QListWidget_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QListWidget_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QListWidget_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QListWidget_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QListWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QListWidget_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QListWidget_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QListWidget_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QListWidget_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QListWidget_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QListWidget_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QListWidget_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QListWidget_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QListWidget_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CommitData(editor);
}

bool QListWidget_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QListWidget_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QListWidget_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QListWidget_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QListWidget_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QListWidget_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QListWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QListWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QListWidget_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QListWidget_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_ViewportEvent(event);
}

bool QListWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QListWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QListWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QListWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QListWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QListWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QListWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QListWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QListWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QListWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QListWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QListWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QListWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QListWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QListWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QListWidget_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_EventFilter(object, event);
}

bool QListWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QListWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SizeHint();
}

bool QListWidget_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QListWidget_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QListWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QListWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QListWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QListWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QListWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QListWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQListWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QListWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QListWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_DevType();
}

bool QListWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QListWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QListWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QListWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QListWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QListWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QListWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QListWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_PaintEngine();
}

bool QListWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QListWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QListWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QListWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QListWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QListWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QListWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QListWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QListWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QListWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QListWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QListWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QListWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QListWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QListWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QListWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QListWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QListWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QListWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QListWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QListWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QListWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_Metric(param1);
}

bool QListWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QListWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQListWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QListWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QListWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QListWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QListWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SharedPainter();
}

bool QListWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QListWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QListWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QListWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QListWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QListWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QListWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QListWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QListWidget_Delete(QListWidget* self) {
	delete self;
}

