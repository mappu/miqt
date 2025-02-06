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

QTreeWidgetItem* miqt_exec_callback_QTreeWidgetItem_clone(const QTreeWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QTreeWidgetItem_data(const QTreeWidgetItem*, intptr_t, int, int);
void miqt_exec_callback_QTreeWidgetItem_setData(QTreeWidgetItem*, intptr_t, int, int, QVariant*);
bool miqt_exec_callback_QTreeWidgetItem_operatorLesser(const QTreeWidgetItem*, intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidgetItem_read(QTreeWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTreeWidgetItem_write(const QTreeWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTreeWidget_itemPressed(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemClicked(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemDoubleClicked(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemActivated(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemEntered(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemChanged(intptr_t, QTreeWidgetItem*, int);
void miqt_exec_callback_QTreeWidget_itemExpanded(intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_itemCollapsed(intptr_t, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_currentItemChanged(intptr_t, QTreeWidgetItem*, QTreeWidgetItem*);
void miqt_exec_callback_QTreeWidget_itemSelectionChanged(intptr_t);
void miqt_exec_callback_QTreeWidget_setSelectionModel(QTreeWidget*, intptr_t, QItemSelectionModel*);
bool miqt_exec_callback_QTreeWidget_event(QTreeWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTreeWidget_mimeTypes(const QTreeWidget*, intptr_t);
QMimeData* miqt_exec_callback_QTreeWidget_mimeData(const QTreeWidget*, intptr_t, struct miqt_array /* of QTreeWidgetItem* */ );
bool miqt_exec_callback_QTreeWidget_dropMimeData(QTreeWidget*, intptr_t, QTreeWidgetItem*, int, QMimeData*, int);
int miqt_exec_callback_QTreeWidget_supportedDropActions(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_dropEvent(QTreeWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTreeWidget_setRootIndex(QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_keyboardSearch(QTreeWidget*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QTreeWidget_visualRect(const QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_scrollTo(QTreeWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTreeWidget_indexAt(const QTreeWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QTreeWidget_doItemsLayout(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_reset(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_dataChanged(QTreeWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTreeWidget_selectAll(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_verticalScrollbarValueChanged(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_scrollContentsBy(QTreeWidget*, intptr_t, int, int);
void miqt_exec_callback_QTreeWidget_rowsInserted(QTreeWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTreeWidget_rowsAboutToBeRemoved(QTreeWidget*, intptr_t, QModelIndex*, int, int);
QModelIndex* miqt_exec_callback_QTreeWidget_moveCursor(QTreeWidget*, intptr_t, int, int);
int miqt_exec_callback_QTreeWidget_horizontalOffset(const QTreeWidget*, intptr_t);
int miqt_exec_callback_QTreeWidget_verticalOffset(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_setSelection(QTreeWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTreeWidget_visualRegionForSelection(const QTreeWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTreeWidget_selectedIndexes(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_timerEvent(QTreeWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTreeWidget_paintEvent(QTreeWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTreeWidget_drawRow(const QTreeWidget*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QTreeWidget_drawBranches(const QTreeWidget*, intptr_t, QPainter*, QRect*, QModelIndex*);
void miqt_exec_callback_QTreeWidget_mousePressEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_mouseReleaseEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_mouseDoubleClickEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_mouseMoveEvent(QTreeWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeWidget_keyPressEvent(QTreeWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeWidget_dragMoveEvent(QTreeWidget*, intptr_t, QDragMoveEvent*);
bool miqt_exec_callback_QTreeWidget_viewportEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_updateGeometries(QTreeWidget*, intptr_t);
QSize* miqt_exec_callback_QTreeWidget_viewportSizeHint(const QTreeWidget*, intptr_t);
int miqt_exec_callback_QTreeWidget_sizeHintForColumn(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_horizontalScrollbarAction(QTreeWidget*, intptr_t, int);
bool miqt_exec_callback_QTreeWidget_isIndexHidden(const QTreeWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeWidget_selectionChanged(QTreeWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTreeWidget_currentChanged(QTreeWidget*, intptr_t, QModelIndex*, QModelIndex*);
int miqt_exec_callback_QTreeWidget_sizeHintForRow(const QTreeWidget*, intptr_t, int);
QVariant* miqt_exec_callback_QTreeWidget_inputMethodQuery(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_updateEditorData(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_updateEditorGeometries(QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_verticalScrollbarAction(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_horizontalScrollbarValueChanged(QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_closeEditor(QTreeWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTreeWidget_commitData(QTreeWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeWidget_editorDestroyed(QTreeWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QTreeWidget_edit2(QTreeWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTreeWidget_selectionCommand(const QTreeWidget*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTreeWidget_startDrag(QTreeWidget*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QTreeWidget_viewOptions(const QTreeWidget*, intptr_t);
bool miqt_exec_callback_QTreeWidget_focusNextPrevChild(QTreeWidget*, intptr_t, bool);
void miqt_exec_callback_QTreeWidget_dragEnterEvent(QTreeWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTreeWidget_dragLeaveEvent(QTreeWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTreeWidget_focusInEvent(QTreeWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeWidget_focusOutEvent(QTreeWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeWidget_resizeEvent(QTreeWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTreeWidget_inputMethodEvent(QTreeWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTreeWidget_eventFilter(QTreeWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTreeWidget_minimumSizeHint(const QTreeWidget*, intptr_t);
QSize* miqt_exec_callback_QTreeWidget_sizeHint(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_setupViewport(QTreeWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeWidget_wheelEvent(QTreeWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTreeWidget_contextMenuEvent(QTreeWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTreeWidget_changeEvent(QTreeWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QTreeWidget_devType(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_setVisible(QTreeWidget*, intptr_t, bool);
int miqt_exec_callback_QTreeWidget_heightForWidth(const QTreeWidget*, intptr_t, int);
bool miqt_exec_callback_QTreeWidget_hasHeightForWidth(const QTreeWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTreeWidget_paintEngine(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_keyReleaseEvent(QTreeWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeWidget_enterEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_leaveEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_moveEvent(QTreeWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTreeWidget_closeEvent(QTreeWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTreeWidget_tabletEvent(QTreeWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTreeWidget_actionEvent(QTreeWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTreeWidget_showEvent(QTreeWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTreeWidget_hideEvent(QTreeWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTreeWidget_nativeEvent(QTreeWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTreeWidget_metric(const QTreeWidget*, intptr_t, int);
void miqt_exec_callback_QTreeWidget_initPainter(const QTreeWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTreeWidget_redirected(const QTreeWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTreeWidget_sharedPainter(const QTreeWidget*, intptr_t);
void miqt_exec_callback_QTreeWidget_childEvent(QTreeWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTreeWidget_customEvent(QTreeWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeWidget_connectNotify(QTreeWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTreeWidget_disconnectNotify(QTreeWidget*, intptr_t, QMetaMethod*);
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
	MiqtVirtualQTreeWidgetItem(int type): QTreeWidgetItem(type) {};
	MiqtVirtualQTreeWidgetItem(const QStringList& strings, int type): QTreeWidgetItem(strings, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, int type): QTreeWidgetItem(treeview, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, const QStringList& strings, int type): QTreeWidgetItem(treeview, strings, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after, int type): QTreeWidgetItem(treeview, after, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, int type): QTreeWidgetItem(parent, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QStringList& strings, int type): QTreeWidgetItem(parent, strings, type) {};
	MiqtVirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after, int type): QTreeWidgetItem(parent, after, type) {};

	virtual ~MiqtVirtualQTreeWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTreeWidgetItem* clone() const override {
		if (handle__clone == 0) {
			return QTreeWidgetItem::clone();
		}
		

		QTreeWidgetItem* callback_return_value = miqt_exec_callback_QTreeWidgetItem_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTreeWidgetItem* virtualbase_clone() const {

		return QTreeWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int column, int role) const override {
		if (handle__data == 0) {
			return QTreeWidgetItem::data(column, role);
		}
		
		int sigval1 = column;
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTreeWidgetItem_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(int column, int role) const {

		return new QVariant(QTreeWidgetItem::data(static_cast<int>(column), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int column, int role, const QVariant& value) override {
		if (handle__setData == 0) {
			QTreeWidgetItem::setData(column, role, value);
			return;
		}
		
		int sigval1 = column;
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTreeWidgetItem_setData(this, handle__setData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setData(int column, int role, QVariant* value) {

		QTreeWidgetItem::setData(static_cast<int>(column), static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__operatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTreeWidgetItem& other) const override {
		if (handle__operatorLesser == 0) {
			return QTreeWidgetItem::operator<(other);
		}
		
		const QTreeWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTreeWidgetItem* sigval1 = const_cast<QTreeWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidgetItem_operatorLesser(this, handle__operatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_operatorLesser(QTreeWidgetItem* other) const {

		return QTreeWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__read == 0) {
			QTreeWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QTreeWidgetItem_read(this, handle__read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_read(QDataStream* in) {

		QTreeWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__write == 0) {
			QTreeWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QTreeWidgetItem_write(this, handle__write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_write(QDataStream* out) const {

		QTreeWidgetItem::write(*out);

	}

	// Wrappers to allow calling protected methods:
	friend void QTreeWidgetItem_protectedbase_emitDataChanged(bool* _dynamic_cast_ok, void* self);
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

QTreeWidgetItem* QTreeWidgetItem_new10(int type) {
	return new MiqtVirtualQTreeWidgetItem(static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new11(struct miqt_array /* of struct miqt_string */  strings, int type) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(strings_QList, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int type) {
	return new MiqtVirtualQTreeWidgetItem(treeview, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, struct miqt_array /* of struct miqt_string */  strings, int type) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(treeview, strings_QList, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int type) {
	return new MiqtVirtualQTreeWidgetItem(treeview, after, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int type) {
	return new MiqtVirtualQTreeWidgetItem(parent, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, struct miqt_array /* of struct miqt_string */  strings, int type) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQTreeWidgetItem(parent, strings_QList, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int type) {
	return new MiqtVirtualQTreeWidgetItem(parent, after, static_cast<int>(type));
}

QTreeWidgetItem* QTreeWidgetItem_clone(const QTreeWidgetItem* self) {
	return self->clone();
}

QTreeWidget* QTreeWidgetItem_treeWidget(const QTreeWidgetItem* self) {
	return self->treeWidget();
}

void QTreeWidgetItem_setSelected(QTreeWidgetItem* self, bool select) {
	self->setSelected(select);
}

bool QTreeWidgetItem_isSelected(const QTreeWidgetItem* self) {
	return self->isSelected();
}

void QTreeWidgetItem_setHidden(QTreeWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QTreeWidgetItem_isHidden(const QTreeWidgetItem* self) {
	return self->isHidden();
}

void QTreeWidgetItem_setExpanded(QTreeWidgetItem* self, bool expand) {
	self->setExpanded(expand);
}

bool QTreeWidgetItem_isExpanded(const QTreeWidgetItem* self) {
	return self->isExpanded();
}

void QTreeWidgetItem_setFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
	self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_isFirstColumnSpanned(const QTreeWidgetItem* self) {
	return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_setDisabled(QTreeWidgetItem* self, bool disabled) {
	self->setDisabled(disabled);
}

bool QTreeWidgetItem_isDisabled(const QTreeWidgetItem* self) {
	return self->isDisabled();
}

void QTreeWidgetItem_setChildIndicatorPolicy(QTreeWidgetItem* self, int policy) {
	self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

int QTreeWidgetItem_childIndicatorPolicy(const QTreeWidgetItem* self) {
	QTreeWidgetItem::ChildIndicatorPolicy _ret = self->childIndicatorPolicy();
	return static_cast<int>(_ret);
}

int QTreeWidgetItem_flags(const QTreeWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTreeWidgetItem_setFlags(QTreeWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QTreeWidgetItem_text(const QTreeWidgetItem* self, int column) {
	QString _ret = self->text(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_setText(QTreeWidgetItem* self, int column, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_icon(const QTreeWidgetItem* self, int column) {
	return new QIcon(self->icon(static_cast<int>(column)));
}

void QTreeWidgetItem_setIcon(QTreeWidgetItem* self, int column, QIcon* icon) {
	self->setIcon(static_cast<int>(column), *icon);
}

struct miqt_string QTreeWidgetItem_statusTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->statusTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_setStatusTip(QTreeWidgetItem* self, int column, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

struct miqt_string QTreeWidgetItem_toolTip(const QTreeWidgetItem* self, int column) {
	QString _ret = self->toolTip(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_setToolTip(QTreeWidgetItem* self, int column, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(static_cast<int>(column), toolTip_QString);
}

struct miqt_string QTreeWidgetItem_whatsThis(const QTreeWidgetItem* self, int column) {
	QString _ret = self->whatsThis(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidgetItem_setWhatsThis(QTreeWidgetItem* self, int column, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_font(const QTreeWidgetItem* self, int column) {
	return new QFont(self->font(static_cast<int>(column)));
}

void QTreeWidgetItem_setFont(QTreeWidgetItem* self, int column, QFont* font) {
	self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_textAlignment(const QTreeWidgetItem* self, int column) {
	return self->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_setTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
	self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

QColor* QTreeWidgetItem_backgroundColor(const QTreeWidgetItem* self, int column) {
	return new QColor(self->backgroundColor(static_cast<int>(column)));
}

void QTreeWidgetItem_setBackgroundColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setBackgroundColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_background(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->background(static_cast<int>(column)));
}

void QTreeWidgetItem_setBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setBackground(static_cast<int>(column), *brush);
}

QColor* QTreeWidgetItem_textColor(const QTreeWidgetItem* self, int column) {
	return new QColor(self->textColor(static_cast<int>(column)));
}

void QTreeWidgetItem_setTextColor(QTreeWidgetItem* self, int column, QColor* color) {
	self->setTextColor(static_cast<int>(column), *color);
}

QBrush* QTreeWidgetItem_foreground(const QTreeWidgetItem* self, int column) {
	return new QBrush(self->foreground(static_cast<int>(column)));
}

void QTreeWidgetItem_setForeground(QTreeWidgetItem* self, int column, QBrush* brush) {
	self->setForeground(static_cast<int>(column), *brush);
}

int QTreeWidgetItem_checkState(const QTreeWidgetItem* self, int column) {
	Qt::CheckState _ret = self->checkState(static_cast<int>(column));
	return static_cast<int>(_ret);
}

void QTreeWidgetItem_setCheckState(QTreeWidgetItem* self, int column, int state) {
	self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_sizeHint(const QTreeWidgetItem* self, int column) {
	return new QSize(self->sizeHint(static_cast<int>(column)));
}

void QTreeWidgetItem_setSizeHint(QTreeWidgetItem* self, int column, QSize* size) {
	self->setSizeHint(static_cast<int>(column), *size);
}

QVariant* QTreeWidgetItem_data(const QTreeWidgetItem* self, int column, int role) {
	return new QVariant(self->data(static_cast<int>(column), static_cast<int>(role)));
}

void QTreeWidgetItem_setData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
	self->setData(static_cast<int>(column), static_cast<int>(role), *value);
}

bool QTreeWidgetItem_operatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other) {
	return (*self < *other);
}

void QTreeWidgetItem_read(QTreeWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTreeWidgetItem_write(const QTreeWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTreeWidgetItem_operatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other) {
	self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_parent(const QTreeWidgetItem* self) {
	return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_child(const QTreeWidgetItem* self, int index) {
	return self->child(static_cast<int>(index));
}

int QTreeWidgetItem_childCount(const QTreeWidgetItem* self) {
	return self->childCount();
}

int QTreeWidgetItem_columnCount(const QTreeWidgetItem* self) {
	return self->columnCount();
}

int QTreeWidgetItem_indexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
	return self->indexOfChild(child);
}

void QTreeWidgetItem_addChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->addChild(child);
}

void QTreeWidgetItem_insertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
	self->insertChild(static_cast<int>(index), child);
}

void QTreeWidgetItem_removeChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
	self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_takeChild(QTreeWidgetItem* self, int index) {
	return self->takeChild(static_cast<int>(index));
}

void QTreeWidgetItem_addChildren(QTreeWidgetItem* self, struct miqt_array /* of QTreeWidgetItem* */  children) {
	QList<QTreeWidgetItem *> children_QList;
	children_QList.reserve(children.len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
	for(size_t i = 0; i < children.len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->addChildren(children_QList);
}

void QTreeWidgetItem_insertChildren(QTreeWidgetItem* self, int index, struct miqt_array /* of QTreeWidgetItem* */  children) {
	QList<QTreeWidgetItem *> children_QList;
	children_QList.reserve(children.len);
	QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
	for(size_t i = 0; i < children.len; ++i) {
		children_QList.push_back(children_arr[i]);
	}
	self->insertChildren(static_cast<int>(index), children_QList);
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidgetItem_takeChildren(QTreeWidgetItem* self) {
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

int QTreeWidgetItem_type(const QTreeWidgetItem* self) {
	return self->type();
}

void QTreeWidgetItem_sortChildren(QTreeWidgetItem* self, int column, int order) {
	self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QTreeWidgetItem_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QTreeWidgetItem* QTreeWidgetItem_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_clone();
}

bool QTreeWidgetItem_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QTreeWidgetItem_virtualbase_data(const void* self, int column, int role) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_data(column, role);
}

bool QTreeWidgetItem_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_setData(void* self, int column, int role, QVariant* value) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_setData(column, role, value);
}

bool QTreeWidgetItem_override_virtual_operatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__operatorLesser = slot;
	return true;
}

bool QTreeWidgetItem_virtualbase_operatorLesser(const void* self, QTreeWidgetItem* other) {
	return ( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_operatorLesser(other);
}

bool QTreeWidgetItem_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__read = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_read(void* self, QDataStream* in) {
	( (MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_read(in);
}

bool QTreeWidgetItem_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__write = slot;
	return true;
}

void QTreeWidgetItem_virtualbase_write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTreeWidgetItem*)(self) )->virtualbase_write(out);
}

void QTreeWidgetItem_protectedbase_emitDataChanged(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTreeWidgetItem*>( (QTreeWidgetItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->emitDataChanged();

}

void QTreeWidgetItem_delete(QTreeWidgetItem* self) {
	delete self;
}

class MiqtVirtualQTreeWidget final : public QTreeWidget {
public:

	MiqtVirtualQTreeWidget(QWidget* parent): QTreeWidget(parent) {};
	MiqtVirtualQTreeWidget(): QTreeWidget() {};

	virtual ~MiqtVirtualQTreeWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QTreeWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTreeWidget_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QTreeWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QTreeWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QTreeWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QTreeWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTreeWidget_mimeTypes(this, handle__mimeTypes);
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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QTreeWidgetItem *> items) const override {
		if (handle__mimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QTreeWidget_mimeData(this, handle__mimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_mimeData(struct miqt_array /* of QTreeWidgetItem* */  items) const {
		QList<QTreeWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QTreeWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(QTreeWidgetItem* parent, int index, const QMimeData* data, Qt::DropAction action) override {
		if (handle__dropMimeData == 0) {
			return QTreeWidget::dropMimeData(parent, index, data, action);
		}
		
		QTreeWidgetItem* sigval1 = parent;
		int sigval2 = index;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidget_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QTreeWidgetItem* parent, int index, QMimeData* data, int action) {

		return QTreeWidget::dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QTreeWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QTreeWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTreeWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QTreeWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QTreeWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTreeWidget_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QTreeWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
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

		miqt_exec_callback_QTreeWidget_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTreeWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QTreeWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTreeWidget_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QTreeWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QTreeWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeWidget_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QTreeWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QTreeWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeWidget_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QTreeWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QTreeWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QTreeWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QTreeWidget::reset();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QTreeWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
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

		miqt_exec_callback_QTreeWidget_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTreeWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QTreeWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QTreeWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QTreeWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeWidget_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QTreeWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTreeWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTreeWidget_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QTreeWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QTreeWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeWidget_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QTreeWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QTreeWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeWidget_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTreeWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QTreeWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeWidget_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTreeWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QTreeWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QTreeWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QTreeWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QTreeWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QTreeWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTreeWidget_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QTreeWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QTreeWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTreeWidget_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTreeWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QTreeWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTreeWidget_selectedIndexes(this, handle__selectedIndexes);
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
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTreeWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTreeWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QTreeWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QTreeWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
		if (handle__drawRow == 0) {
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

		miqt_exec_callback_QTreeWidget_drawRow(this, handle__drawRow, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawRow(QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) const {

		QTreeWidget::drawRow(painter, *options, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBranches = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
		if (handle__drawBranches == 0) {
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

		miqt_exec_callback_QTreeWidget_drawBranches(this, handle__drawBranches, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawBranches(QPainter* painter, QRect* rect, QModelIndex* index) const {

		QTreeWidget::drawBranches(painter, *rect, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTreeWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QTreeWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTreeWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QTreeWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTreeWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QTreeWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTreeWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QTreeWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTreeWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QTreeWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTreeWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QTreeWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QTreeWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QTreeWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QTreeWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QTreeWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTreeWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QTreeWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QTreeWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTreeWidget_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QTreeWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QTreeWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeWidget_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QTreeWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QTreeWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTreeWidget_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QTreeWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QTreeWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTreeWidget_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTreeWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QTreeWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTreeWidget_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QTreeWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QTreeWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTreeWidget_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QTreeWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QTreeWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTreeWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QTreeWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QTreeWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QTreeWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QTreeWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeWidget_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QTreeWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QTreeWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeWidget_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QTreeWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QTreeWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeWidget_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QTreeWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QTreeWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeWidget_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QTreeWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QTreeWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTreeWidget_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QTreeWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QTreeWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTreeWidget_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QTreeWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QTreeWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTreeWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QTreeWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTreeWidget_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTreeWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QTreeWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTreeWidget_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QTreeWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QTreeWidget::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTreeWidget_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QTreeWidget::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTreeWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTreeWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTreeWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QTreeWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTreeWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QTreeWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTreeWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QTreeWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTreeWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QTreeWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QTreeWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QTreeWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QTreeWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QTreeWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTreeWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QTreeWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTreeWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTreeWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTreeWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTreeWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTreeWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTreeWidget_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QTreeWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QTreeWidget::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTreeWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QTreeWidget::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QTreeWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTreeWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QTreeWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QTreeWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTreeWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QTreeWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTreeWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTreeWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTreeWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTreeWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTreeWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTreeWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTreeWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTreeWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTreeWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTreeWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTreeWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTreeWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTreeWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTreeWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTreeWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QTreeWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QTreeWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QTreeWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTreeWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTreeWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTreeWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTreeWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTreeWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTreeWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTreeWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTreeWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTreeWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTreeWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTreeWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QTreeWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTreeWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTreeWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QTreeWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTreeWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTreeWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTreeWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTreeWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTreeWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTreeWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTreeWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTreeWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTreeWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTreeWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTreeWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTreeWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTreeWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTreeWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTreeWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTreeWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTreeWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTreeWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTreeWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTreeWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTreeWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTreeWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
	friend QModelIndex* QTreeWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item);
	friend QModelIndex* QTreeWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item);
	friend QTreeWidgetItem* QTreeWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend QModelIndex* QTreeWidget_protectedbase_indexFromItem2(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item, int column);
	friend QModelIndex* QTreeWidget_protectedbase_indexFromItem22(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item, int column);
	friend void QTreeWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldSize, int newSize);
	friend void QTreeWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTreeWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_reexpand(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_rowsRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTreeWidget_protectedbase_drawTree(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRegion* region);
	friend int QTreeWidget_protectedbase_indexRowSizeHint(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend int QTreeWidget_protectedbase_rowHeight(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QTreeWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTreeWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTreeWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QTreeWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QTreeWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QTreeWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QTreeWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QTreeWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTreeWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTreeWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QTreeWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTreeWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTreeWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTreeWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTreeWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTreeWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTreeWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTreeWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTreeWidget_metaObject(const QTreeWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTreeWidget_metacast(QTreeWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTreeWidget_tr(const char* s) {
	QString _ret = QTreeWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_trUtf8(const char* s) {
	QString _ret = QTreeWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTreeWidget_columnCount(const QTreeWidget* self) {
	return self->columnCount();
}

void QTreeWidget_setColumnCount(QTreeWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_invisibleRootItem(const QTreeWidget* self) {
	return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_topLevelItem(const QTreeWidget* self, int index) {
	return self->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_topLevelItemCount(const QTreeWidget* self) {
	return self->topLevelItemCount();
}

void QTreeWidget_insertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
	self->insertTopLevelItem(static_cast<int>(index), item);
}

void QTreeWidget_addTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_takeTopLevelItem(QTreeWidget* self, int index) {
	return self->takeTopLevelItem(static_cast<int>(index));
}

int QTreeWidget_indexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->indexOfTopLevelItem(item);
}

void QTreeWidget_insertTopLevelItems(QTreeWidget* self, int index, struct miqt_array /* of QTreeWidgetItem* */  items) {
	QList<QTreeWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_addTopLevelItems(QTreeWidget* self, struct miqt_array /* of QTreeWidgetItem* */  items) {
	QList<QTreeWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_headerItem(const QTreeWidget* self) {
	return self->headerItem();
}

void QTreeWidget_setHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setHeaderItem(item);
}

void QTreeWidget_setHeaderLabels(QTreeWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHeaderLabels(labels_QList);
}

void QTreeWidget_setHeaderLabel(QTreeWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_currentItem(const QTreeWidget* self) {
	return self->currentItem();
}

int QTreeWidget_currentColumn(const QTreeWidget* self) {
	return self->currentColumn();
}

void QTreeWidget_setCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTreeWidget_setCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->setCurrentItem(item, static_cast<int>(column));
}

void QTreeWidget_setCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
	self->setCurrentItem(item, static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QTreeWidgetItem* QTreeWidget_itemAt(const QTreeWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_itemAt2(const QTreeWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_visualItemRect(const QTreeWidget* self, QTreeWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

int QTreeWidget_sortColumn(const QTreeWidget* self) {
	return self->sortColumn();
}

void QTreeWidget_sortItems(QTreeWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_editItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->editItem(item);
}

void QTreeWidget_openPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTreeWidget_closePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTreeWidget_isPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_itemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_setItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
	self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_removeItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->removeItemWidget(item, static_cast<int>(column));
}

bool QTreeWidget_isItemSelected(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTreeWidget_setItemSelected(QTreeWidget* self, QTreeWidgetItem* item, bool select) {
	self->setItemSelected(item, select);
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_selectedItems(const QTreeWidget* self) {
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

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_findItems(const QTreeWidget* self, struct miqt_string text, int flags) {
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

bool QTreeWidget_isItemHidden(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemHidden(item);
}

void QTreeWidget_setItemHidden(QTreeWidget* self, QTreeWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

bool QTreeWidget_isItemExpanded(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isItemExpanded(item);
}

void QTreeWidget_setItemExpanded(QTreeWidget* self, QTreeWidgetItem* item, bool expand) {
	self->setItemExpanded(item, expand);
}

bool QTreeWidget_isFirstItemColumnSpanned(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->isFirstItemColumnSpanned(item);
}

void QTreeWidget_setFirstItemColumnSpanned(QTreeWidget* self, QTreeWidgetItem* item, bool span) {
	self->setFirstItemColumnSpanned(item, span);
}

QTreeWidgetItem* QTreeWidget_itemAbove(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_itemBelow(const QTreeWidget* self, QTreeWidgetItem* item) {
	return self->itemBelow(item);
}

void QTreeWidget_setSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTreeWidget_scrollToItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->scrollToItem(item);
}

void QTreeWidget_expandItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->expandItem(item);
}

void QTreeWidget_collapseItem(QTreeWidget* self, QTreeWidgetItem* item) {
	self->collapseItem(item);
}

void QTreeWidget_clear(QTreeWidget* self) {
	self->clear();
}

void QTreeWidget_itemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemPressed(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemPressed(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemPressed), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemPressed(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemClicked(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemDoubleClicked(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemDoubleClicked), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemActivated(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemActivated), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemActivated(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemEntered(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemEntered), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemEntered(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_connect_itemChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemChanged), self, [=](QTreeWidgetItem* item, int column) {
		QTreeWidgetItem* sigval1 = item;
		int sigval2 = column;
		miqt_exec_callback_QTreeWidget_itemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemExpanded(item);
}

void QTreeWidget_connect_itemExpanded(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemExpanded), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_itemExpanded(slot, sigval1);
	});
}

void QTreeWidget_itemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
	self->itemCollapsed(item);
}

void QTreeWidget_connect_itemCollapsed(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemCollapsed), self, [=](QTreeWidgetItem* item) {
		QTreeWidgetItem* sigval1 = item;
		miqt_exec_callback_QTreeWidget_itemCollapsed(slot, sigval1);
	});
}

void QTreeWidget_currentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTreeWidget_connect_currentItemChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, QTreeWidgetItem*)>(&QTreeWidget::currentItemChanged), self, [=](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
		QTreeWidgetItem* sigval1 = current;
		QTreeWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTreeWidget_currentItemChanged(slot, sigval1, sigval2);
	});
}

void QTreeWidget_itemSelectionChanged(QTreeWidget* self) {
	self->itemSelectionChanged();
}

void QTreeWidget_connect_itemSelectionChanged(QTreeWidget* self, intptr_t slot) {
	MiqtVirtualQTreeWidget::connect(self, static_cast<void (QTreeWidget::*)()>(&QTreeWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTreeWidget_itemSelectionChanged(slot);
	});
}

struct miqt_string QTreeWidget_tr2(const char* s, const char* c) {
	QString _ret = QTreeWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QTreeWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTreeWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeWidget_editItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->editItem(item, static_cast<int>(column));
}

void QTreeWidget_openPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->openPersistentEditor(item, static_cast<int>(column));
}

void QTreeWidget_closePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
	self->closePersistentEditor(item, static_cast<int>(column));
}

bool QTreeWidget_isPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
	return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_findItems3(const QTreeWidget* self, struct miqt_string text, int flags, int column) {
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

void QTreeWidget_scrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QTreeWidget_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QTreeWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QTreeWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTreeWidget_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_event(e);
}

bool QTreeWidget_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTreeWidget_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_mimeTypes();
}

bool QTreeWidget_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QTreeWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QTreeWidgetItem* */  items) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_mimeData(items);
}

bool QTreeWidget_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QTreeWidget_virtualbase_dropMimeData(void* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dropMimeData(parent, index, data, action);
}

bool QTreeWidget_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QTreeWidget_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_supportedDropActions();
}

bool QTreeWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QTreeWidget_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QTreeWidget_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_setRootIndex(index);
}

bool QTreeWidget_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QTreeWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_keyboardSearch(search);
}

bool QTreeWidget_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QTreeWidget_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_visualRect(index);
}

bool QTreeWidget_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QTreeWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QTreeWidget_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QTreeWidget_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_indexAt(p);
}

bool QTreeWidget_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QTreeWidget_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_doItemsLayout();
}

bool QTreeWidget_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QTreeWidget_virtualbase_reset(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_reset();
}

bool QTreeWidget_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QTreeWidget_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QTreeWidget_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_selectAll();
}

bool QTreeWidget_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QTreeWidget_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTreeWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QTreeWidget_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QTreeWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QTreeWidget_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QTreeWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QTreeWidget_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QTreeWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QTreeWidget_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QTreeWidget_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_horizontalOffset();
}

bool QTreeWidget_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QTreeWidget_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_verticalOffset();
}

bool QTreeWidget_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QTreeWidget_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_setSelection(rect, command);
}

bool QTreeWidget_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QTreeWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QTreeWidget_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTreeWidget_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_selectedIndexes();
}

bool QTreeWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QTreeWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_paintEvent(event);
}

bool QTreeWidget_override_virtual_drawRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawRow = slot;
	return true;
}

void QTreeWidget_virtualbase_drawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_drawRow(painter, options, index);
}

bool QTreeWidget_override_virtual_drawBranches(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawBranches = slot;
	return true;
}

void QTreeWidget_virtualbase_drawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_drawBranches(painter, rect, index);
}

bool QTreeWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QTreeWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QTreeWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QTreeWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QTreeWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QTreeWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QTreeWidget_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTreeWidget_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_viewportEvent(event);
}

bool QTreeWidget_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QTreeWidget_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_updateGeometries();
}

bool QTreeWidget_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_viewportSizeHint();
}

bool QTreeWidget_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QTreeWidget_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QTreeWidget_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QTreeWidget_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QTreeWidget_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QTreeWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_isIndexHidden(index);
}

bool QTreeWidget_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QTreeWidget_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QTreeWidget_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QTreeWidget_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QTreeWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTreeWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QTreeWidget_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QTreeWidget_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_updateEditorData();
}

bool QTreeWidget_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QTreeWidget_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_updateEditorGeometries();
}

bool QTreeWidget_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QTreeWidget_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QTreeWidget_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QTreeWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QTreeWidget_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QTreeWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QTreeWidget_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QTreeWidget_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_commitData(editor);
}

bool QTreeWidget_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QTreeWidget_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QTreeWidget_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QTreeWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QTreeWidget_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QTreeWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QTreeWidget_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QTreeWidget_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QTreeWidget_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QTreeWidget_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_viewOptions();
}

bool QTreeWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTreeWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTreeWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QTreeWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QTreeWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QTreeWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QTreeWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QTreeWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QTreeWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTreeWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_eventFilter(object, event);
}

bool QTreeWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QTreeWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTreeWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_sizeHint();
}

bool QTreeWidget_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QTreeWidget_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_setupViewport(viewport);
}

bool QTreeWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_wheelEvent(param1);
}

bool QTreeWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QTreeWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QTreeWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTreeWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_devType();
}

bool QTreeWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTreeWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QTreeWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTreeWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTreeWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTreeWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTreeWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTreeWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_paintEngine();
}

bool QTreeWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QTreeWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QTreeWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QTreeWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QTreeWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QTreeWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QTreeWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QTreeWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_showEvent(event);
}

bool QTreeWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QTreeWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTreeWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTreeWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTreeWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_metric(param1);
}

bool QTreeWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTreeWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QTreeWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTreeWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_redirected(offset);
}

bool QTreeWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTreeWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTreeWidget*)(self) )->virtualbase_sharedPainter();
}

bool QTreeWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_childEvent(event);
}

bool QTreeWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTreeWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_customEvent(event);
}

bool QTreeWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTreeWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QTreeWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTreeWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QTreeWidgetItem* */  QTreeWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QTreeWidgetItem *> _ret = self_cast->items(data);
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

QModelIndex* QTreeWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QModelIndex* QTreeWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QTreeWidgetItem* QTreeWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->itemFromIndex(*index);

}

QModelIndex* QTreeWidget_protectedbase_indexFromItem2(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item, int column) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item, static_cast<int>(column)));

}

QModelIndex* QTreeWidget_protectedbase_indexFromItem22(bool* _dynamic_cast_ok, const void* self, QTreeWidgetItem* item, int column) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item, static_cast<int>(column)));

}

void QTreeWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldSize, int newSize) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));

}

void QTreeWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));

}

void QTreeWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnMoved();

}

void QTreeWidget_protectedbase_reexpand(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->reexpand();

}

void QTreeWidget_protectedbase_rowsRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QTreeWidget_protectedbase_drawTree(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRegion* region) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawTree(painter, *region);

}

int QTreeWidget_protectedbase_indexRowSizeHint(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->indexRowSizeHint(*index);

}

int QTreeWidget_protectedbase_rowHeight(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->rowHeight(*index);

}

void QTreeWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QTreeWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QTreeWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QTreeWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QTreeWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTreeWidget::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QTreeWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQTreeWidget::State>(state));

}

void QTreeWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QTreeWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QTreeWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QTreeWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QTreeWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QTreeWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QTreeWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QTreeWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QTreeWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTreeWidget::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QTreeWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QTreeWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QTreeWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QTreeWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QTreeWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTreeWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTreeWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTreeWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTreeWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTreeWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTreeWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTreeWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTreeWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTreeWidget* self_cast = dynamic_cast<MiqtVirtualQTreeWidget*>( (QTreeWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTreeWidget_delete(QTreeWidget* self) {
	delete self;
}

