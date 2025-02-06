#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
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
#include <QMargins>
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

QTableWidgetItem* miqt_exec_callback_QTableWidgetItem_clone(const QTableWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QTableWidgetItem_data(const QTableWidgetItem*, intptr_t, int);
void miqt_exec_callback_QTableWidgetItem_setData(QTableWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QTableWidgetItem_operatorLesser(const QTableWidgetItem*, intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidgetItem_read(QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidgetItem_write(const QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidget_itemPressed(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemDoubleClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemActivated(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemEntered(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemChanged(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_currentItemChanged(intptr_t, QTableWidgetItem*, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemSelectionChanged(intptr_t);
void miqt_exec_callback_QTableWidget_cellPressed(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellDoubleClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellActivated(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellEntered(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellChanged(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_currentCellChanged(intptr_t, int, int, int, int);
bool miqt_exec_callback_QTableWidget_event(QTableWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTableWidget_mimeTypes(const QTableWidget*, intptr_t);
QMimeData* miqt_exec_callback_QTableWidget_mimeData(const QTableWidget*, intptr_t, struct miqt_array /* of QTableWidgetItem* */ );
bool miqt_exec_callback_QTableWidget_dropMimeData(QTableWidget*, intptr_t, int, int, QMimeData*, int);
int miqt_exec_callback_QTableWidget_supportedDropActions(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_dropEvent(QTableWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableWidget_setRootIndex(QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_setSelectionModel(QTableWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableWidget_doItemsLayout(QTableWidget*, intptr_t);
QRect* miqt_exec_callback_QTableWidget_visualRect(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_scrollTo(QTableWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableWidget_indexAt(const QTableWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QTableWidget_scrollContentsBy(QTableWidget*, intptr_t, int, int);
QStyleOptionViewItem* miqt_exec_callback_QTableWidget_viewOptions(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_paintEvent(QTableWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableWidget_timerEvent(QTableWidget*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableWidget_horizontalOffset(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_verticalOffset(const QTableWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QTableWidget_moveCursor(QTableWidget*, intptr_t, int, int);
void miqt_exec_callback_QTableWidget_setSelection(QTableWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableWidget_visualRegionForSelection(const QTableWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableWidget_selectedIndexes(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_updateGeometries(QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_viewportSizeHint(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_sizeHintForRow(const QTableWidget*, intptr_t, int);
int miqt_exec_callback_QTableWidget_sizeHintForColumn(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_verticalScrollbarAction(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_horizontalScrollbarAction(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_isIndexHidden(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_selectionChanged(QTableWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableWidget_currentChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QTableWidget_keyboardSearch(QTableWidget*, intptr_t, struct miqt_string);
QVariant* miqt_exec_callback_QTableWidget_inputMethodQuery(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_reset(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_selectAll(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_dataChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTableWidget_rowsInserted(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_updateEditorData(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_updateEditorGeometries(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_closeEditor(QTableWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTableWidget_commitData(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_editorDestroyed(QTableWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QTableWidget_edit2(QTableWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTableWidget_selectionCommand(const QTableWidget*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTableWidget_startDrag(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_focusNextPrevChild(QTableWidget*, intptr_t, bool);
bool miqt_exec_callback_QTableWidget_viewportEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_mousePressEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseMoveEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseReleaseEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseDoubleClickEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_dragEnterEvent(QTableWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTableWidget_dragMoveEvent(QTableWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTableWidget_dragLeaveEvent(QTableWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTableWidget_focusInEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_focusOutEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_keyPressEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_resizeEvent(QTableWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTableWidget_inputMethodEvent(QTableWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTableWidget_eventFilter(QTableWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTableWidget_minimumSizeHint(const QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_sizeHint(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_setupViewport(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_wheelEvent(QTableWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTableWidget_contextMenuEvent(QTableWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTableWidget_changeEvent(QTableWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QTableWidget_devType(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_setVisible(QTableWidget*, intptr_t, bool);
int miqt_exec_callback_QTableWidget_heightForWidth(const QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_hasHeightForWidth(const QTableWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTableWidget_paintEngine(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_keyReleaseEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_enterEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_leaveEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_moveEvent(QTableWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTableWidget_closeEvent(QTableWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTableWidget_tabletEvent(QTableWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTableWidget_actionEvent(QTableWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTableWidget_showEvent(QTableWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTableWidget_hideEvent(QTableWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTableWidget_nativeEvent(QTableWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTableWidget_metric(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_initPainter(const QTableWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTableWidget_redirected(const QTableWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTableWidget_sharedPainter(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_childEvent(QTableWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTableWidget_customEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_connectNotify(QTableWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTableWidget_disconnectNotify(QTableWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new() {
	return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right) {
	return new QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other) {
	return new QTableWidgetSelectionRange(*other);
}

void QTableWidgetSelectionRange_operatorAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
	self->operator=(*other);
}

int QTableWidgetSelectionRange_topRow(const QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_bottomRow(const QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_leftColumn(const QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_rightColumn(const QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_rowCount(const QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_columnCount(const QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_delete(QTableWidgetSelectionRange* self) {
	delete self;
}

class MiqtVirtualQTableWidgetItem final : public QTableWidgetItem {
public:

	MiqtVirtualQTableWidgetItem(): QTableWidgetItem() {};
	MiqtVirtualQTableWidgetItem(const QString& text): QTableWidgetItem(text) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text): QTableWidgetItem(icon, text) {};
	MiqtVirtualQTableWidgetItem(const QTableWidgetItem& other): QTableWidgetItem(other) {};
	MiqtVirtualQTableWidgetItem(int type): QTableWidgetItem(type) {};
	MiqtVirtualQTableWidgetItem(const QString& text, int type): QTableWidgetItem(text, type) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text, int type): QTableWidgetItem(icon, text, type) {};

	virtual ~MiqtVirtualQTableWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTableWidgetItem* clone() const override {
		if (handle__clone == 0) {
			return QTableWidgetItem::clone();
		}
		

		QTableWidgetItem* callback_return_value = miqt_exec_callback_QTableWidgetItem_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTableWidgetItem* virtualbase_clone() const {

		return QTableWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__data == 0) {
			return QTableWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTableWidgetItem_data(this, handle__data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(int role) const {

		return new QVariant(QTableWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__setData == 0) {
			QTableWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTableWidgetItem_setData(this, handle__setData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setData(int role, QVariant* value) {

		QTableWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__operatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTableWidgetItem& other) const override {
		if (handle__operatorLesser == 0) {
			return QTableWidgetItem::operator<(other);
		}
		
		const QTableWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTableWidgetItem* sigval1 = const_cast<QTableWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidgetItem_operatorLesser(this, handle__operatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_operatorLesser(QTableWidgetItem* other) const {

		return QTableWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__read == 0) {
			QTableWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QTableWidgetItem_read(this, handle__read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_read(QDataStream* in) {

		QTableWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__write == 0) {
			QTableWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QTableWidgetItem_write(this, handle__write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_write(QDataStream* out) const {

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

QTableWidgetItem* QTableWidgetItem_new5(int type) {
	return new MiqtVirtualQTableWidgetItem(static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_new6(struct miqt_string text, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(text_QString, static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, struct miqt_string text, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_clone(const QTableWidgetItem* self) {
	return self->clone();
}

QTableWidget* QTableWidgetItem_tableWidget(const QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_row(const QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_column(const QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_setSelected(QTableWidgetItem* self, bool select) {
	self->setSelected(select);
}

bool QTableWidgetItem_isSelected(const QTableWidgetItem* self) {
	return self->isSelected();
}

int QTableWidgetItem_flags(const QTableWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_setFlags(QTableWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QTableWidgetItem_text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setText(QTableWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_setIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QTableWidgetItem_statusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setStatusTip(QTableWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QTableWidgetItem_toolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setToolTip(QTableWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QTableWidgetItem_whatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setWhatsThis(QTableWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_font(const QTableWidgetItem* self) {
	return new QFont(self->font());
}

void QTableWidgetItem_setFont(QTableWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_textAlignment(const QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_setTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QTableWidgetItem_backgroundColor(const QTableWidgetItem* self) {
	return new QColor(self->backgroundColor());
}

void QTableWidgetItem_setBackgroundColor(QTableWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QTableWidgetItem_background(const QTableWidgetItem* self) {
	return new QBrush(self->background());
}

void QTableWidgetItem_setBackground(QTableWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QTableWidgetItem_textColor(const QTableWidgetItem* self) {
	return new QColor(self->textColor());
}

void QTableWidgetItem_setTextColor(QTableWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QTableWidgetItem_foreground(const QTableWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QTableWidgetItem_setForeground(QTableWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QTableWidgetItem_checkState(const QTableWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_setCheckState(QTableWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_sizeHint(const QTableWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QTableWidgetItem_setSizeHint(QTableWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_data(const QTableWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QTableWidgetItem_setData(QTableWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_operatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
	return (*self < *other);
}

void QTableWidgetItem_read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_write(const QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_operatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_type(const QTableWidgetItem* self) {
	return self->type();
}

bool QTableWidgetItem_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QTableWidgetItem* QTableWidgetItem_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_clone();
}

bool QTableWidgetItem_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QTableWidgetItem_virtualbase_data(const void* self, int role) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_data(role);
}

bool QTableWidgetItem_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

void QTableWidgetItem_virtualbase_setData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_setData(role, value);
}

bool QTableWidgetItem_override_virtual_operatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__operatorLesser = slot;
	return true;
}

bool QTableWidgetItem_virtualbase_operatorLesser(const void* self, QTableWidgetItem* other) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_operatorLesser(other);
}

bool QTableWidgetItem_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__read = slot;
	return true;
}

void QTableWidgetItem_virtualbase_read(void* self, QDataStream* in) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_read(in);
}

bool QTableWidgetItem_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__write = slot;
	return true;
}

void QTableWidgetItem_virtualbase_write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_write(out);
}

void QTableWidgetItem_delete(QTableWidgetItem* self) {
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QTableWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTableWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QTableWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QTableWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTableWidget_mimeTypes(this, handle__mimeTypes);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_mimeTypes() const {

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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QTableWidgetItem *> items) const override {
		if (handle__mimeData == 0) {
			return QTableWidget::mimeData(items);
		}
		
		const QList<QTableWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTableWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QTableWidget_mimeData(this, handle__mimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_mimeData(struct miqt_array /* of QTableWidgetItem* */  items) const {
		QList<QTableWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QTableWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
		if (handle__dropMimeData == 0) {
			return QTableWidget::dropMimeData(row, column, data, action);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(int row, int column, QMimeData* data, int action) {

		return QTableWidget::dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QTableWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QTableWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTableWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QTableWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QTableWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTableWidget_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QTableWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QTableWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTableWidget_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QTableWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QTableWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTableWidget_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QTableWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QTableWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTableWidget_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QTableWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QTableWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableWidget_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QTableWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QTableWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QTableWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTableWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTableWidget_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QTableWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QTableWidget::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTableWidget_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QTableWidget::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QTableWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTableWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QTableWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTableWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTableWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QTableWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QTableWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QTableWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QTableWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QTableWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTableWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QTableWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTableWidget_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QTableWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QTableWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTableWidget_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTableWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QTableWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableWidget_selectedIndexes(this, handle__selectedIndexes);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_selectedIndexes() const {

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
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QTableWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTableWidget_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QTableWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTableWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QTableWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QTableWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTableWidget_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QTableWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QTableWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTableWidget_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QTableWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QTableWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QTableWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QTableWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QTableWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QTableWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QTableWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QTableWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTableWidget_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTableWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QTableWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTableWidget_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QTableWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
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

		miqt_exec_callback_QTableWidget_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTableWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QTableWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTableWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QTableWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QTableWidget::reset();
			return;
		}
		

		miqt_exec_callback_QTableWidget_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QTableWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QTableWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QTableWidget_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QTableWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
			QTableWidget::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QTableWidget_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTableWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QTableWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableWidget_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QTableWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QTableWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTableWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QTableWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTableWidget_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QTableWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QTableWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTableWidget_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QTableWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QTableWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QTableWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QTableWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QTableWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QTableWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableWidget_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QTableWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QTableWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTableWidget_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QTableWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QTableWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTableWidget_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QTableWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QTableWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTableWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QTableWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTableWidget_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTableWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QTableWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTableWidget_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QTableWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTableWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTableWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTableWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QTableWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QTableWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTableWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QTableWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTableWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QTableWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTableWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QTableWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTableWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QTableWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTableWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QTableWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTableWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QTableWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTableWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QTableWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTableWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QTableWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTableWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QTableWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTableWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QTableWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QTableWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QTableWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QTableWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QTableWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTableWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTableWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QTableWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTableWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTableWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTableWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTableWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTableWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTableWidget_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QTableWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QTableWidget::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QTableWidget::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QTableWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QTableWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QTableWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTableWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QTableWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTableWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTableWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTableWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTableWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTableWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTableWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTableWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTableWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTableWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTableWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTableWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTableWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTableWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTableWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTableWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QTableWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QTableWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QTableWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTableWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTableWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTableWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTableWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTableWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTableWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTableWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTableWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTableWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTableWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTableWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QTableWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTableWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTableWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QTableWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTableWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTableWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTableWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTableWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTableWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTableWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTableWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTableWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTableWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTableWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTableWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTableWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTableWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTableWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTableWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTableWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTableWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTableWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTableWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTableWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTableWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTableWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QTableWidgetItem* */  QTableWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
	friend QModelIndex* QTableWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
	friend QModelIndex* QTableWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
	friend QTableWidgetItem* QTableWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QTableWidget_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex);
	friend void QTableWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex);
	friend void QTableWidget_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight);
	friend void QTableWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth);
	friend void QTableWidget_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QTableWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QTableWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QTableWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QTableWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTableWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTableWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QTableWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTableWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTableWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTableWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTableWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTableWidget_metaObject(const QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableWidget_metacast(QTableWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableWidget_tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf8(const char* s) {
	QString _ret = QTableWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_setRowCount(QTableWidget* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_rowCount(const QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_setColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_columnCount(const QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_row(const QTableWidget* self, QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_column(const QTableWidget* self, QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_item(const QTableWidget* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_takeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

QTableWidgetItem* QTableWidget_verticalHeaderItem(const QTableWidget* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_setVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_takeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_horizontalHeaderItem(const QTableWidget* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_setHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_takeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_setVerticalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_setHorizontalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_currentRow(const QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_currentColumn(const QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_currentItem(const QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_setCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_setCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_setCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setCurrentCell2(QTableWidget* self, int row, int column, int command) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_sortItems(QTableWidget* self, int column) {
	self->sortItems(static_cast<int>(column));
}

void QTableWidget_setSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_isSortingEnabled(const QTableWidget* self) {
	return self->isSortingEnabled();
}

void QTableWidget_editItem(QTableWidget* self, QTableWidgetItem* item) {
	self->editItem(item);
}

void QTableWidget_openPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTableWidget_closePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTableWidget_isPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_cellWidget(const QTableWidget* self, int row, int column) {
	return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_removeCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

bool QTableWidget_isItemSelected(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTableWidget_setItemSelected(QTableWidget* self, QTableWidgetItem* item, bool select) {
	self->setItemSelected(item, select);
}

void QTableWidget_setRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* range, bool select) {
	self->setRangeSelected(*range, select);
}

struct miqt_array /* of QTableWidgetSelectionRange* */  QTableWidget_selectedRanges(const QTableWidget* self) {
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

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_selectedItems(const QTableWidget* self) {
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

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_findItems(const QTableWidget* self, struct miqt_string text, int flags) {
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

int QTableWidget_visualRow(const QTableWidget* self, int logicalRow) {
	return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_visualColumn(const QTableWidget* self, int logicalColumn) {
	return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_itemAt(const QTableWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_itemAt2(const QTableWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_visualItemRect(const QTableWidget* self, QTableWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_itemPrototype(const QTableWidget* self) {
	return (QTableWidgetItem*) self->itemPrototype();
}

void QTableWidget_setItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_scrollToItem(QTableWidget* self, QTableWidgetItem* item) {
	self->scrollToItem(item);
}

void QTableWidget_insertRow(QTableWidget* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QTableWidget_insertColumn(QTableWidget* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QTableWidget_removeRow(QTableWidget* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QTableWidget_removeColumn(QTableWidget* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QTableWidget_clear(QTableWidget* self) {
	self->clear();
}

void QTableWidget_clearContents(QTableWidget* self) {
	self->clearContents();
}

void QTableWidget_itemPressed(QTableWidget* self, QTableWidgetItem* item) {
	self->itemPressed(item);
}

void QTableWidget_connect_itemPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemPressed(slot, sigval1);
	});
}

void QTableWidget_itemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_connect_itemClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemClicked(slot, sigval1);
	});
}

void QTableWidget_itemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_connect_itemDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemDoubleClicked(slot, sigval1);
	});
}

void QTableWidget_itemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_connect_itemActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemActivated(slot, sigval1);
	});
}

void QTableWidget_itemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_connect_itemEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemEntered(slot, sigval1);
	});
}

void QTableWidget_itemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_connect_itemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemChanged(slot, sigval1);
	});
}

void QTableWidget_currentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_connect_currentItemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [=](QTableWidgetItem* current, QTableWidgetItem* previous) {
		QTableWidgetItem* sigval1 = current;
		QTableWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTableWidget_currentItemChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_itemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_connect_itemSelectionChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTableWidget_itemSelectionChanged(slot);
	});
}

void QTableWidget_cellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellPressed(slot, sigval1, sigval2);
	});
}

void QTableWidget_cellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_cellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_cellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellActivated(slot, sigval1, sigval2);
	});
}

void QTableWidget_cellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellEntered(slot, sigval1, sigval2);
	});
}

void QTableWidget_cellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_cellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_currentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_connect_currentCellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [=](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		int sigval1 = currentRow;
		int sigval2 = currentColumn;
		int sigval3 = previousRow;
		int sigval4 = previousColumn;
		miqt_exec_callback_QTableWidget_currentCellChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string QTableWidget_tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QTableWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_sortItems2(QTableWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_scrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QTableWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTableWidget_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_event(e);
}

bool QTableWidget_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_mimeTypes();
}

bool QTableWidget_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QTableWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_mimeData(items);
}

bool QTableWidget_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QTableWidget_virtualbase_dropMimeData(void* self, int row, int column, QMimeData* data, int action) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dropMimeData(row, column, data, action);
}

bool QTableWidget_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QTableWidget_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_supportedDropActions();
}

bool QTableWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTableWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QTableWidget_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QTableWidget_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_setRootIndex(index);
}

bool QTableWidget_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QTableWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QTableWidget_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QTableWidget_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_doItemsLayout();
}

bool QTableWidget_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QTableWidget_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_visualRect(index);
}

bool QTableWidget_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QTableWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QTableWidget_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QTableWidget_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_indexAt(p);
}

bool QTableWidget_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTableWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QTableWidget_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QTableWidget_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_viewOptions();
}

bool QTableWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTableWidget_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_paintEvent(e);
}

bool QTableWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTableWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QTableWidget_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QTableWidget_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_horizontalOffset();
}

bool QTableWidget_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QTableWidget_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_verticalOffset();
}

bool QTableWidget_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QTableWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QTableWidget_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QTableWidget_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_setSelection(rect, command);
}

bool QTableWidget_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QTableWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QTableWidget_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_selectedIndexes();
}

bool QTableWidget_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QTableWidget_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_updateGeometries();
}

bool QTableWidget_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_viewportSizeHint();
}

bool QTableWidget_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QTableWidget_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QTableWidget_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QTableWidget_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QTableWidget_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QTableWidget_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QTableWidget_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QTableWidget_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QTableWidget_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QTableWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_isIndexHidden(index);
}

bool QTableWidget_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QTableWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QTableWidget_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QTableWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QTableWidget_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QTableWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_keyboardSearch(search);
}

bool QTableWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTableWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QTableWidget_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QTableWidget_virtualbase_reset(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_reset();
}

bool QTableWidget_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QTableWidget_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_selectAll();
}

bool QTableWidget_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QTableWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QTableWidget_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QTableWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QTableWidget_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QTableWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QTableWidget_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QTableWidget_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_updateEditorData();
}

bool QTableWidget_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QTableWidget_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_updateEditorGeometries();
}

bool QTableWidget_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QTableWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QTableWidget_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QTableWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QTableWidget_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QTableWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QTableWidget_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QTableWidget_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_commitData(editor);
}

bool QTableWidget_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QTableWidget_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QTableWidget_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QTableWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QTableWidget_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QTableWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QTableWidget_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QTableWidget_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QTableWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTableWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTableWidget_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTableWidget_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_viewportEvent(event);
}

bool QTableWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTableWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QTableWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QTableWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTableWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QTableWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTableWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QTableWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTableWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QTableWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QTableWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QTableWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTableWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QTableWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTableWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QTableWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTableWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QTableWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTableWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QTableWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTableWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QTableWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTableWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_eventFilter(object, event);
}

bool QTableWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QTableWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTableWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_sizeHint();
}

bool QTableWidget_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QTableWidget_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_setupViewport(viewport);
}

bool QTableWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTableWidget_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_wheelEvent(param1);
}

bool QTableWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTableWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QTableWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTableWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QTableWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTableWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_devType();
}

bool QTableWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTableWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QTableWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTableWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTableWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTableWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTableWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTableWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_paintEngine();
}

bool QTableWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTableWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QTableWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTableWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QTableWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QTableWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTableWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QTableWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTableWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QTableWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTableWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QTableWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTableWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QTableWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTableWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_showEvent(event);
}

bool QTableWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTableWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QTableWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTableWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTableWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTableWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_metric(param1);
}

bool QTableWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTableWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QTableWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTableWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_redirected(offset);
}

bool QTableWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTableWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_sharedPainter();
}

bool QTableWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTableWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_childEvent(event);
}

bool QTableWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTableWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_customEvent(event);
}

bool QTableWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTableWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QTableWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTableWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QTableWidgetItem *> _ret = self_cast->items(data);
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

QModelIndex* QTableWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QModelIndex* QTableWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QTableWidgetItem* QTableWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->itemFromIndex(*index);

}

void QTableWidget_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));

}

void QTableWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));

}

void QTableWidget_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));

}

void QTableWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));

}

void QTableWidget_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));

}

void QTableWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));

}

void QTableWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QTableWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QTableWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QTableWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QTableWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTableWidget::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QTableWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQTableWidget::State>(state));

}

void QTableWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QTableWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QTableWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QTableWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QTableWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QTableWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QTableWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QTableWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QTableWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTableWidget::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QTableWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QTableWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QTableWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QTableWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QTableWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTableWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTableWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTableWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTableWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTableWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTableWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTableWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTableWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTableWidget_delete(QTableWidget* self) {
	delete self;
}

