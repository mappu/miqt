#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHeaderView>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtreeview.h>
#include "gen_qtreeview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTreeView_expanded(intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_collapsed(intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_setModel(QTreeView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QTreeView_setRootIndex(QTreeView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_setSelectionModel(QTreeView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTreeView_keyboardSearch(QTreeView*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QTreeView_visualRect(const QTreeView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_scrollTo(QTreeView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTreeView_indexAt(const QTreeView*, intptr_t, QPoint*);
void miqt_exec_callback_QTreeView_doItemsLayout(QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_reset(QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_dataChanged(QTreeView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTreeView_selectAll(QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_verticalScrollbarValueChanged(QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_scrollContentsBy(QTreeView*, intptr_t, int, int);
void miqt_exec_callback_QTreeView_rowsInserted(QTreeView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTreeView_rowsAboutToBeRemoved(QTreeView*, intptr_t, QModelIndex*, int, int);
QModelIndex* miqt_exec_callback_QTreeView_moveCursor(QTreeView*, intptr_t, int, int);
int miqt_exec_callback_QTreeView_horizontalOffset(const QTreeView*, intptr_t);
int miqt_exec_callback_QTreeView_verticalOffset(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_setSelection(QTreeView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTreeView_visualRegionForSelection(const QTreeView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTreeView_selectedIndexes(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_changeEvent(QTreeView*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_timerEvent(QTreeView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTreeView_paintEvent(QTreeView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTreeView_drawRow(const QTreeView*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QTreeView_drawBranches(const QTreeView*, intptr_t, QPainter*, QRect*, QModelIndex*);
void miqt_exec_callback_QTreeView_mousePressEvent(QTreeView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_mouseReleaseEvent(QTreeView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_mouseDoubleClickEvent(QTreeView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_mouseMoveEvent(QTreeView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_keyPressEvent(QTreeView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeView_dragMoveEvent(QTreeView*, intptr_t, QDragMoveEvent*);
bool miqt_exec_callback_QTreeView_viewportEvent(QTreeView*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_updateGeometries(QTreeView*, intptr_t);
QSize* miqt_exec_callback_QTreeView_viewportSizeHint(const QTreeView*, intptr_t);
int miqt_exec_callback_QTreeView_sizeHintForColumn(const QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_horizontalScrollbarAction(QTreeView*, intptr_t, int);
bool miqt_exec_callback_QTreeView_isIndexHidden(const QTreeView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_selectionChanged(QTreeView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTreeView_currentChanged(QTreeView*, intptr_t, QModelIndex*, QModelIndex*);
int miqt_exec_callback_QTreeView_sizeHintForRow(const QTreeView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QTreeView_itemDelegateForIndex(const QTreeView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QTreeView_inputMethodQuery(const QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_updateEditorData(QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_updateEditorGeometries(QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_verticalScrollbarAction(QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_horizontalScrollbarValueChanged(QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_closeEditor(QTreeView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTreeView_commitData(QTreeView*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeView_editorDestroyed(QTreeView*, intptr_t, QObject*);
bool miqt_exec_callback_QTreeView_edit2(QTreeView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTreeView_selectionCommand(const QTreeView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTreeView_startDrag(QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_initViewItemOption(const QTreeView*, intptr_t, QStyleOptionViewItem*);
bool miqt_exec_callback_QTreeView_focusNextPrevChild(QTreeView*, intptr_t, bool);
bool miqt_exec_callback_QTreeView_event(QTreeView*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_dragEnterEvent(QTreeView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTreeView_dragLeaveEvent(QTreeView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTreeView_dropEvent(QTreeView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTreeView_focusInEvent(QTreeView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeView_focusOutEvent(QTreeView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeView_resizeEvent(QTreeView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTreeView_inputMethodEvent(QTreeView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTreeView_eventFilter(QTreeView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTreeView_minimumSizeHint(const QTreeView*, intptr_t);
QSize* miqt_exec_callback_QTreeView_sizeHint(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_setupViewport(QTreeView*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeView_wheelEvent(QTreeView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTreeView_contextMenuEvent(QTreeView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTreeView_initStyleOption(const QTreeView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QTreeView_devType(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_setVisible(QTreeView*, intptr_t, bool);
int miqt_exec_callback_QTreeView_heightForWidth(const QTreeView*, intptr_t, int);
bool miqt_exec_callback_QTreeView_hasHeightForWidth(const QTreeView*, intptr_t);
QPaintEngine* miqt_exec_callback_QTreeView_paintEngine(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_keyReleaseEvent(QTreeView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeView_enterEvent(QTreeView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTreeView_leaveEvent(QTreeView*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_moveEvent(QTreeView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTreeView_closeEvent(QTreeView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTreeView_tabletEvent(QTreeView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTreeView_actionEvent(QTreeView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTreeView_showEvent(QTreeView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTreeView_hideEvent(QTreeView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTreeView_nativeEvent(QTreeView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTreeView_metric(const QTreeView*, intptr_t, int);
void miqt_exec_callback_QTreeView_initPainter(const QTreeView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTreeView_redirected(const QTreeView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTreeView_sharedPainter(const QTreeView*, intptr_t);
void miqt_exec_callback_QTreeView_childEvent(QTreeView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTreeView_customEvent(QTreeView*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_connectNotify(QTreeView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTreeView_disconnectNotify(QTreeView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTreeView final : public QTreeView {
public:

	MiqtVirtualQTreeView(QWidget* parent): QTreeView(parent) {}
	MiqtVirtualQTreeView(): QTreeView() {}

	virtual ~MiqtVirtualQTreeView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QTreeView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QTreeView_setModel(this, handle__setModel, sigval1);

	}

	friend void QTreeView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QTreeView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_setRootIndex(this, handle__setRootIndex, sigval1);

	}

	friend void QTreeView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QTreeView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QTreeView_setSelectionModel(this, handle__setSelectionModel, sigval1);

	}

	friend void QTreeView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
			QTreeView::keyboardSearch(search);
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
		miqt_exec_callback_QTreeView_keyboardSearch(this, handle__keyboardSearch, sigval1);

	}

	friend void QTreeView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QTreeView::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QTreeView_visualRect(this, handle__visualRect, sigval1);
		return *callback_return_value;
	}

	friend QRect* QTreeView_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QTreeView::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QTreeView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QTreeView::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTreeView_indexAt(this, handle__indexAt, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QTreeView_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QTreeView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QTreeView_doItemsLayout(this, handle__doItemsLayout);

	}

	friend void QTreeView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QTreeView::reset();
			return;
		}

		miqt_exec_callback_QTreeView_reset(this, handle__reset);

	}

	friend void QTreeView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__dataChanged == 0) {
			QTreeView::dataChanged(topLeft, bottomRight, roles);
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
		miqt_exec_callback_QTreeView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

	}

	friend void QTreeView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QTreeView::selectAll();
			return;
		}

		miqt_exec_callback_QTreeView_selectAll(this, handle__selectAll);

	}

	friend void QTreeView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QTreeView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QTreeView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

	}

	friend void QTreeView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTreeView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QTreeView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QTreeView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QTreeView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

	}

	friend void QTreeView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QTreeView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QTreeView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

	}

	friend void QTreeView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QTreeView::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTreeView_moveCursor(this, handle__moveCursor, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QModelIndex* QTreeView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QTreeView::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QTreeView_horizontalOffset(this, handle__horizontalOffset);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QTreeView::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QTreeView_verticalOffset(this, handle__verticalOffset);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QTreeView::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QTreeView_setSelection(this, handle__setSelection, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QTreeView::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QTreeView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);
		return *callback_return_value;
	}

	friend QRegion* QTreeView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QTreeView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTreeView_selectedIndexes(this, handle__selectedIndexes);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QTreeView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QTreeView::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QTreeView_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTreeView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QTreeView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QTreeView::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QTreeView_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
		if (handle__drawRow == 0) {
			QTreeView::drawRow(painter, options, index);
			return;
		}

		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& options_ret = options;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&options_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_drawRow(this, handle__drawRow, sigval1, sigval2, sigval3);

	}

	friend void QTreeView_virtualbase_drawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBranches = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
		if (handle__drawBranches == 0) {
			QTreeView::drawBranches(painter, rect, index);
			return;
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_drawBranches(this, handle__drawBranches, sigval1, sigval2, sigval3);

	}

	friend void QTreeView_virtualbase_drawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTreeView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QTreeView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTreeView::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QTreeView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTreeView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QTreeView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTreeView::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QTreeView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTreeView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QTreeView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTreeView::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QTreeView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QTreeView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTreeView_viewportEvent(this, handle__viewportEvent, sigval1);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QTreeView::updateGeometries();
			return;
		}

		miqt_exec_callback_QTreeView_updateGeometries(this, handle__updateGeometries);

	}

	friend void QTreeView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTreeView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTreeView_viewportSizeHint(this, handle__viewportSizeHint);
		return *callback_return_value;
	}

	friend QSize* QTreeView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QTreeView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QTreeView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QTreeView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QTreeView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

	}

	friend void QTreeView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QTreeView::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QTreeView_isIndexHidden(this, handle__isIndexHidden, sigval1);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QTreeView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QTreeView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QTreeView::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QTreeView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QTreeView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QTreeView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__itemDelegateForIndex == 0) {
			return QTreeView::itemDelegateForIndex(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QTreeView_itemDelegateForIndex(this, handle__itemDelegateForIndex, sigval1);
		return callback_return_value;
	}

	friend QAbstractItemDelegate* QTreeView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QTreeView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QTreeView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QTreeView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QTreeView::updateEditorData();
			return;
		}

		miqt_exec_callback_QTreeView_updateEditorData(this, handle__updateEditorData);

	}

	friend void QTreeView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QTreeView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QTreeView_updateEditorGeometries(this, handle__updateEditorGeometries);

	}

	friend void QTreeView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QTreeView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QTreeView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

	}

	friend void QTreeView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QTreeView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QTreeView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

	}

	friend void QTreeView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QTreeView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QTreeView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

	}

	friend void QTreeView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QTreeView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QTreeView_commitData(this, handle__commitData, sigval1);

	}

	friend void QTreeView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QTreeView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QTreeView_editorDestroyed(this, handle__editorDestroyed, sigval1);

	}

	friend void QTreeView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QTreeView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QTreeView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QTreeView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QTreeView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QTreeView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QTreeView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QTreeView_startDrag(this, handle__startDrag, sigval1);

	}

	friend void QTreeView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__initViewItemOption == 0) {
			QTreeView::initViewItemOption(option);
			return;
		}

		QStyleOptionViewItem* sigval1 = option;
		miqt_exec_callback_QTreeView_initViewItemOption(this, handle__initViewItemOption, sigval1);

	}

	friend void QTreeView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTreeView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QTreeView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTreeView::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTreeView_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTreeView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QTreeView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTreeView::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QTreeView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTreeView::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QTreeView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTreeView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QTreeView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTreeView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QTreeView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QTreeView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QTreeView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QTreeView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QTreeView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTreeView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTreeView_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTreeView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTreeView_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QTreeView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTreeView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTreeView_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QTreeView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTreeView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QTreeView_setupViewport(this, handle__setupViewport, sigval1);

	}

	friend void QTreeView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QTreeView::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QTreeView_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QTreeView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QTreeView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QTreeView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QTreeView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QTreeView::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QTreeView_initStyleOption(this, handle__initStyleOption, sigval1);

	}

	friend void QTreeView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTreeView::devType();
		}

		int callback_return_value = miqt_exec_callback_QTreeView_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTreeView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QTreeView_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QTreeView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTreeView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QTreeView_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTreeView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QTreeView_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTreeView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QTreeView_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QTreeView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTreeView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QTreeView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QTreeView::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QTreeView_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTreeView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QTreeView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTreeView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QTreeView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTreeView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QTreeView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTreeView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QTreeView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTreeView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QTreeView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTreeView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QTreeView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTreeView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QTreeView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QTreeView::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QTreeView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTreeView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTreeView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QTreeView_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTreeView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTreeView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QTreeView_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QTreeView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTreeView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QTreeView_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QTreeView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTreeView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QTreeView_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QTreeView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTreeView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QTreeView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTreeView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTreeView_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QTreeView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTreeView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTreeView_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QTreeView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTreeView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTreeView_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QTreeView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QTreeView_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldSize, int newSize);
	friend void QTreeView_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTreeView_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_reexpand(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_rowsRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTreeView_protectedbase_drawTree(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRegion* region);
	friend int QTreeView_protectedbase_indexRowSizeHint(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend int QTreeView_protectedbase_rowHeight(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend int QTreeView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QTreeView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QTreeView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QTreeView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QTreeView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTreeView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTreeView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTreeView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTreeView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTreeView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTreeView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTreeView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTreeView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTreeView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTreeView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTreeView* QTreeView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQTreeView(parent);
}

QTreeView* QTreeView_new2() {
	return new (std::nothrow) MiqtVirtualQTreeView();
}

void QTreeView_virtbase(QTreeView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QTreeView_metaObject(const QTreeView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTreeView_metacast(QTreeView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTreeView_tr(const char* s) {
	QString _ret = QTreeView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_setModel(QTreeView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTreeView_setRootIndex(QTreeView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTreeView_setSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QHeaderView* QTreeView_header(const QTreeView* self) {
	return self->header();
}

void QTreeView_setHeader(QTreeView* self, QHeaderView* header) {
	self->setHeader(header);
}

int QTreeView_autoExpandDelay(const QTreeView* self) {
	return self->autoExpandDelay();
}

void QTreeView_setAutoExpandDelay(QTreeView* self, int delay) {
	self->setAutoExpandDelay(static_cast<int>(delay));
}

int QTreeView_indentation(const QTreeView* self) {
	return self->indentation();
}

void QTreeView_setIndentation(QTreeView* self, int i) {
	self->setIndentation(static_cast<int>(i));
}

void QTreeView_resetIndentation(QTreeView* self) {
	self->resetIndentation();
}

bool QTreeView_rootIsDecorated(const QTreeView* self) {
	return self->rootIsDecorated();
}

void QTreeView_setRootIsDecorated(QTreeView* self, bool show) {
	self->setRootIsDecorated(show);
}

bool QTreeView_uniformRowHeights(const QTreeView* self) {
	return self->uniformRowHeights();
}

void QTreeView_setUniformRowHeights(QTreeView* self, bool uniform) {
	self->setUniformRowHeights(uniform);
}

bool QTreeView_itemsExpandable(const QTreeView* self) {
	return self->itemsExpandable();
}

void QTreeView_setItemsExpandable(QTreeView* self, bool enable) {
	self->setItemsExpandable(enable);
}

bool QTreeView_expandsOnDoubleClick(const QTreeView* self) {
	return self->expandsOnDoubleClick();
}

void QTreeView_setExpandsOnDoubleClick(QTreeView* self, bool enable) {
	self->setExpandsOnDoubleClick(enable);
}

int QTreeView_columnViewportPosition(const QTreeView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTreeView_columnWidth(const QTreeView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

void QTreeView_setColumnWidth(QTreeView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTreeView_columnAt(const QTreeView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

bool QTreeView_isColumnHidden(const QTreeView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTreeView_setColumnHidden(QTreeView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

bool QTreeView_isHeaderHidden(const QTreeView* self) {
	return self->isHeaderHidden();
}

void QTreeView_setHeaderHidden(QTreeView* self, bool hide) {
	self->setHeaderHidden(hide);
}

bool QTreeView_isRowHidden(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isRowHidden(static_cast<int>(row), *parent);
}

void QTreeView_setRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide) {
	self->setRowHidden(static_cast<int>(row), *parent, hide);
}

bool QTreeView_isFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isFirstColumnSpanned(static_cast<int>(row), *parent);
}

void QTreeView_setFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span) {
	self->setFirstColumnSpanned(static_cast<int>(row), *parent, span);
}

bool QTreeView_isExpanded(const QTreeView* self, QModelIndex* index) {
	return self->isExpanded(*index);
}

void QTreeView_setExpanded(QTreeView* self, QModelIndex* index, bool expand) {
	self->setExpanded(*index, expand);
}

void QTreeView_setSortingEnabled(QTreeView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTreeView_isSortingEnabled(const QTreeView* self) {
	return self->isSortingEnabled();
}

void QTreeView_setAnimated(QTreeView* self, bool enable) {
	self->setAnimated(enable);
}

bool QTreeView_isAnimated(const QTreeView* self) {
	return self->isAnimated();
}

void QTreeView_setAllColumnsShowFocus(QTreeView* self, bool enable) {
	self->setAllColumnsShowFocus(enable);
}

bool QTreeView_allColumnsShowFocus(const QTreeView* self) {
	return self->allColumnsShowFocus();
}

void QTreeView_setWordWrap(QTreeView* self, bool on) {
	self->setWordWrap(on);
}

bool QTreeView_wordWrap(const QTreeView* self) {
	return self->wordWrap();
}

void QTreeView_setTreePosition(QTreeView* self, int logicalIndex) {
	self->setTreePosition(static_cast<int>(logicalIndex));
}

int QTreeView_treePosition(const QTreeView* self) {
	return self->treePosition();
}

void QTreeView_keyboardSearch(QTreeView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QTreeView_visualRect(const QTreeView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTreeView_scrollTo(QTreeView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTreeView_indexAt(const QTreeView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

QModelIndex* QTreeView_indexAbove(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_indexBelow(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_doItemsLayout(QTreeView* self) {
	self->doItemsLayout();
}

void QTreeView_reset(QTreeView* self) {
	self->reset();
}

void QTreeView_dataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QList<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QTreeView_selectAll(QTreeView* self) {
	self->selectAll();
}

void QTreeView_expanded(QTreeView* self, QModelIndex* index) {
	self->expanded(*index);
}

void QTreeView_connect_expanded(QTreeView* self, intptr_t slot) {
	QTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::expanded), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_expanded(slot, sigval1);
	});
}

void QTreeView_collapsed(QTreeView* self, QModelIndex* index) {
	self->collapsed(*index);
}

void QTreeView_connect_collapsed(QTreeView* self, intptr_t slot) {
	QTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::collapsed), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_collapsed(slot, sigval1);
	});
}

void QTreeView_hideColumn(QTreeView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTreeView_showColumn(QTreeView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTreeView_expand(QTreeView* self, QModelIndex* index) {
	self->expand(*index);
}

void QTreeView_collapse(QTreeView* self, QModelIndex* index) {
	self->collapse(*index);
}

void QTreeView_resizeColumnToContents(QTreeView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTreeView_sortByColumn(QTreeView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeView_expandAll(QTreeView* self) {
	self->expandAll();
}

void QTreeView_expandRecursively(QTreeView* self, QModelIndex* index) {
	self->expandRecursively(*index);
}

void QTreeView_collapseAll(QTreeView* self) {
	self->collapseAll();
}

void QTreeView_expandToDepth(QTreeView* self, int depth) {
	self->expandToDepth(static_cast<int>(depth));
}

struct miqt_string QTreeView_tr2(const char* s, const char* c) {
	QString _ret = QTreeView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_expandRecursively2(QTreeView* self, QModelIndex* index, int depth) {
	self->expandRecursively(*index, static_cast<int>(depth));
}

bool QTreeView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = slot;
	return true;
}

void QTreeView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setModel(model);
}

bool QTreeView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = slot;
	return true;
}

void QTreeView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setRootIndex(*index);
}

bool QTreeView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QTreeView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setSelectionModel(selectionModel);
}

bool QTreeView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QTreeView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::keyboardSearch(search_QString);
}

bool QTreeView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QTreeView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::visualRect(*index));
}

bool QTreeView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = slot;
	return true;
}

void QTreeView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::scrollTo(*index, static_cast<MiqtVirtualQTreeView::ScrollHint>(hint));
}

bool QTreeView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QTreeView_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::indexAt(*p));
}

bool QTreeView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QTreeView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::doItemsLayout();
}

bool QTreeView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

void QTreeView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::reset();
}

bool QTreeView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = slot;
	return true;
}

void QTreeView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QList<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QTreeView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = slot;
	return true;
}

void QTreeView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::selectAll();
}

bool QTreeView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QTreeView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QTreeView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTreeView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QTreeView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = slot;
	return true;
}

void QTreeView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QTreeView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QTreeView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QTreeView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QTreeView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::moveCursor(static_cast<MiqtVirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QTreeView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QTreeView_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::horizontalOffset();
}

bool QTreeView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = slot;
	return true;
}

int QTreeView_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::verticalOffset();
}

bool QTreeView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = slot;
	return true;
}

void QTreeView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QTreeView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QTreeView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::visualRegionForSelection(*selection));
}

bool QTreeView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTreeView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::selectedIndexes();
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

bool QTreeView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QTreeView_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::changeEvent(event);
}

bool QTreeView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QTreeView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::timerEvent(event);
}

bool QTreeView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QTreeView_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::paintEvent(event);
}

bool QTreeView_override_virtual_drawRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRow = slot;
	return true;
}

void QTreeView_virtualbase_drawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
	static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::drawRow(painter, *options, *index);
}

bool QTreeView_override_virtual_drawBranches(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBranches = slot;
	return true;
}

void QTreeView_virtualbase_drawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index) {
	static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::drawBranches(painter, *rect, *index);
}

bool QTreeView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTreeView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::mousePressEvent(event);
}

bool QTreeView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTreeView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::mouseReleaseEvent(event);
}

bool QTreeView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTreeView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::mouseDoubleClickEvent(event);
}

bool QTreeView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTreeView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::mouseMoveEvent(event);
}

bool QTreeView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTreeView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::keyPressEvent(event);
}

bool QTreeView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTreeView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::dragMoveEvent(event);
}

bool QTreeView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTreeView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::viewportEvent(event);
}

bool QTreeView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = slot;
	return true;
}

void QTreeView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::updateGeometries();
}

bool QTreeView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::viewportSizeHint());
}

bool QTreeView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QTreeView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::sizeHintForColumn(static_cast<int>(column));
}

bool QTreeView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QTreeView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QTreeView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QTreeView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::isIndexHidden(*index);
}

bool QTreeView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = slot;
	return true;
}

void QTreeView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::selectionChanged(*selected, *deselected);
}

bool QTreeView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = slot;
	return true;
}

void QTreeView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::currentChanged(*current, *previous);
}

bool QTreeView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QTreeView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::sizeHintForRow(static_cast<int>(row));
}

bool QTreeView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QTreeView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::itemDelegateForIndex(*index);
}

bool QTreeView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTreeView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QTreeView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = slot;
	return true;
}

void QTreeView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::updateEditorData();
}

bool QTreeView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QTreeView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::updateEditorGeometries();
}

bool QTreeView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QTreeView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::verticalScrollbarAction(static_cast<int>(action));
}

bool QTreeView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QTreeView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QTreeView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = slot;
	return true;
}

void QTreeView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QTreeView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = slot;
	return true;
}

void QTreeView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::commitData(editor);
}

bool QTreeView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QTreeView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::editorDestroyed(editor);
}

bool QTreeView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = slot;
	return true;
}

bool QTreeView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::edit(*index, static_cast<MiqtVirtualQTreeView::EditTrigger>(trigger), event);
}

bool QTreeView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = slot;
	return true;
}

int QTreeView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QTreeView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = slot;
	return true;
}

void QTreeView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QTreeView_override_virtual_initViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initViewItemOption = slot;
	return true;
}

void QTreeView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option) {
	static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::initViewItemOption(option);
}

bool QTreeView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTreeView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::focusNextPrevChild(next);
}

bool QTreeView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTreeView_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::event(event);
}

bool QTreeView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTreeView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::dragEnterEvent(event);
}

bool QTreeView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTreeView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::dragLeaveEvent(event);
}

bool QTreeView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QTreeView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::dropEvent(event);
}

bool QTreeView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTreeView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::focusInEvent(event);
}

bool QTreeView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTreeView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::focusOutEvent(event);
}

bool QTreeView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTreeView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::resizeEvent(event);
}

bool QTreeView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTreeView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::inputMethodEvent(event);
}

bool QTreeView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTreeView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::eventFilter(object, event);
}

bool QTreeView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::minimumSizeHint());
}

bool QTreeView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::sizeHint());
}

bool QTreeView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = slot;
	return true;
}

void QTreeView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setupViewport(viewport);
}

bool QTreeView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTreeView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::wheelEvent(param1);
}

bool QTreeView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTreeView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::contextMenuEvent(param1);
}

bool QTreeView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = slot;
	return true;
}

void QTreeView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::initStyleOption(option);
}

bool QTreeView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QTreeView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::devType();
}

bool QTreeView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QTreeView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::setVisible(visible);
}

bool QTreeView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTreeView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::heightForWidth(static_cast<int>(param1));
}

bool QTreeView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTreeView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::hasHeightForWidth();
}

bool QTreeView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTreeView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::paintEngine();
}

bool QTreeView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTreeView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::keyReleaseEvent(event);
}

bool QTreeView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QTreeView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::enterEvent(event);
}

bool QTreeView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTreeView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::leaveEvent(event);
}

bool QTreeView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QTreeView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::moveEvent(event);
}

bool QTreeView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QTreeView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::closeEvent(event);
}

bool QTreeView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTreeView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::tabletEvent(event);
}

bool QTreeView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QTreeView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::actionEvent(event);
}

bool QTreeView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QTreeView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::showEvent(event);
}

bool QTreeView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QTreeView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::hideEvent(event);
}

bool QTreeView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTreeView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QTreeView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QTreeView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::metric(static_cast<MiqtVirtualQTreeView::PaintDeviceMetric>(param1));
}

bool QTreeView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QTreeView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::initPainter(painter);
}

bool QTreeView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTreeView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::redirected(offset);
}

bool QTreeView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTreeView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQTreeView*>(self)->QTreeView::sharedPainter();
}

bool QTreeView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QTreeView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::childEvent(event);
}

bool QTreeView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QTreeView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::customEvent(event);
}

bool QTreeView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QTreeView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::connectNotify(*signal);
}

bool QTreeView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTreeView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTreeView*>(self)->QTreeView::disconnectNotify(*signal);
}

void QTreeView_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldSize, int newSize) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QTreeView_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QTreeView_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnMoved();
}

void QTreeView_protectedbase_reexpand(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->reexpand();
}

void QTreeView_protectedbase_rowsRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QTreeView_protectedbase_drawTree(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRegion* region) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawTree(painter, *region);
}

int QTreeView_protectedbase_indexRowSizeHint(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->indexRowSizeHint(*index);
}

int QTreeView_protectedbase_rowHeight(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->rowHeight(*index);
}

int QTreeView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQTreeView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QTreeView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQTreeView::State>(state));
}

void QTreeView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QTreeView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QTreeView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QTreeView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QTreeView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QTreeView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QTreeView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QTreeView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QTreeView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQTreeView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QTreeView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QTreeView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QTreeView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QTreeView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QTreeView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QTreeView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QTreeView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QTreeView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QTreeView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTreeView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTreeView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTreeView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTreeView_delete(QTreeView* self) {
	delete self;
}

