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
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
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
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qundoview.h>
#include "gen_qundoview.h"

#ifdef __cplusplus
extern "C" {
#endif

QRect* miqt_exec_callback_QUndoView_visualRect(const QUndoView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_scrollTo(QUndoView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QUndoView_indexAt(const QUndoView*, intptr_t, QPoint*);
void miqt_exec_callback_QUndoView_doItemsLayout(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_reset(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setRootIndex(QUndoView*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QUndoView_event(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_scrollContentsBy(QUndoView*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_dataChanged(QUndoView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QUndoView_rowsInserted(QUndoView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_rowsAboutToBeRemoved(QUndoView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_mouseMoveEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_mouseReleaseEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_wheelEvent(QUndoView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QUndoView_timerEvent(QUndoView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUndoView_resizeEvent(QUndoView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QUndoView_dragMoveEvent(QUndoView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QUndoView_dragLeaveEvent(QUndoView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QUndoView_dropEvent(QUndoView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QUndoView_startDrag(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_initViewItemOption(const QUndoView*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QUndoView_paintEvent(QUndoView*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QUndoView_horizontalOffset(const QUndoView*, intptr_t);
int miqt_exec_callback_QUndoView_verticalOffset(const QUndoView*, intptr_t);
QModelIndex* miqt_exec_callback_QUndoView_moveCursor(QUndoView*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_setSelection(QUndoView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QUndoView_visualRegionForSelection(const QUndoView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QUndoView_selectedIndexes(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateGeometries(QUndoView*, intptr_t);
bool miqt_exec_callback_QUndoView_isIndexHidden(const QUndoView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_selectionChanged(QUndoView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QUndoView_currentChanged(QUndoView*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QUndoView_viewportSizeHint(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setModel(QUndoView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QUndoView_setSelectionModel(QUndoView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QUndoView_keyboardSearch(QUndoView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QUndoView_sizeHintForRow(const QUndoView*, intptr_t, int);
int miqt_exec_callback_QUndoView_sizeHintForColumn(const QUndoView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QUndoView_itemDelegateForIndex(const QUndoView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QUndoView_inputMethodQuery(const QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_selectAll(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateEditorData(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateEditorGeometries(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_verticalScrollbarAction(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_horizontalScrollbarAction(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_verticalScrollbarValueChanged(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_horizontalScrollbarValueChanged(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_closeEditor(QUndoView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QUndoView_commitData(QUndoView*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_editorDestroyed(QUndoView*, intptr_t, QObject*);
bool miqt_exec_callback_QUndoView_edit2(QUndoView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QUndoView_selectionCommand(const QUndoView*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QUndoView_focusNextPrevChild(QUndoView*, intptr_t, bool);
bool miqt_exec_callback_QUndoView_viewportEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_mousePressEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_mouseDoubleClickEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_dragEnterEvent(QUndoView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QUndoView_focusInEvent(QUndoView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_focusOutEvent(QUndoView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_keyPressEvent(QUndoView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_inputMethodEvent(QUndoView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QUndoView_eventFilter(QUndoView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QUndoView_minimumSizeHint(const QUndoView*, intptr_t);
QSize* miqt_exec_callback_QUndoView_sizeHint(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setupViewport(QUndoView*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_contextMenuEvent(QUndoView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QUndoView_changeEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_initStyleOption(const QUndoView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QUndoView_devType(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setVisible(QUndoView*, intptr_t, bool);
int miqt_exec_callback_QUndoView_heightForWidth(const QUndoView*, intptr_t, int);
bool miqt_exec_callback_QUndoView_hasHeightForWidth(const QUndoView*, intptr_t);
QPaintEngine* miqt_exec_callback_QUndoView_paintEngine(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_keyReleaseEvent(QUndoView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_enterEvent(QUndoView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QUndoView_leaveEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_moveEvent(QUndoView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QUndoView_closeEvent(QUndoView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QUndoView_tabletEvent(QUndoView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QUndoView_actionEvent(QUndoView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QUndoView_showEvent(QUndoView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QUndoView_hideEvent(QUndoView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QUndoView_nativeEvent(QUndoView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QUndoView_metric(const QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_initPainter(const QUndoView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QUndoView_redirected(const QUndoView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QUndoView_sharedPainter(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_childEvent(QUndoView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUndoView_customEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_connectNotify(QUndoView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUndoView_disconnectNotify(QUndoView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUndoView final : public QUndoView {
public:

	MiqtVirtualQUndoView(QWidget* parent): QUndoView(parent) {};
	MiqtVirtualQUndoView(): QUndoView() {};
	MiqtVirtualQUndoView(QUndoStack* stack): QUndoView(stack) {};
	MiqtVirtualQUndoView(QUndoGroup* group): QUndoView(group) {};
	MiqtVirtualQUndoView(QUndoStack* stack, QWidget* parent): QUndoView(stack, parent) {};
	MiqtVirtualQUndoView(QUndoGroup* group, QWidget* parent): QUndoView(group, parent) {};

	virtual ~MiqtVirtualQUndoView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QUndoView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QUndoView_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QUndoView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QUndoView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QUndoView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QUndoView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QUndoView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QUndoView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QUndoView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QUndoView_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QUndoView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QUndoView::reset();
			return;
		}
		

		miqt_exec_callback_QUndoView_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QUndoView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QUndoView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QUndoView_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QUndoView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QUndoView::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QUndoView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QUndoView::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QUndoView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QUndoView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QUndoView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__dataChanged == 0) {
			QUndoView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QUndoView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QUndoView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QUndoView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QUndoView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QUndoView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QUndoView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QUndoView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QUndoView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QUndoView::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QUndoView::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QUndoView::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QUndoView::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QUndoView::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QUndoView::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QUndoView::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QUndoView::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QUndoView::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QUndoView::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QUndoView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QUndoView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QUndoView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QUndoView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QUndoView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QUndoView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QUndoView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QUndoView_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QUndoView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__initViewItemOption == 0) {
			QUndoView::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QUndoView_initViewItemOption(this, handle__initViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initViewItemOption(QStyleOptionViewItem* option) const {

		QUndoView::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QUndoView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QUndoView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QUndoView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QUndoView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QUndoView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QUndoView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QUndoView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QUndoView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QUndoView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QUndoView_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QUndoView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QUndoView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QUndoView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QUndoView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QUndoView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QUndoView_selectedIndexes(this, handle__selectedIndexes);
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

		QModelIndexList _ret = QUndoView::selectedIndexes();
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
			QUndoView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QUndoView_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QUndoView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QUndoView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QUndoView_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QUndoView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QUndoView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QUndoView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QUndoView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QUndoView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QUndoView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QUndoView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QUndoView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QUndoView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QUndoView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QUndoView_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QUndoView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QUndoView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QUndoView_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QUndoView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
			QUndoView::keyboardSearch(search);
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

		miqt_exec_callback_QUndoView_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QUndoView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QUndoView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QUndoView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QUndoView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QUndoView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QUndoView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QUndoView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__itemDelegateForIndex == 0) {
			return QUndoView::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QUndoView_itemDelegateForIndex(this, handle__itemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_itemDelegateForIndex(QModelIndex* index) const {

		return QUndoView::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QUndoView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QUndoView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QUndoView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QUndoView::selectAll();
			return;
		}
		

		miqt_exec_callback_QUndoView_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QUndoView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QUndoView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QUndoView_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QUndoView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QUndoView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QUndoView_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QUndoView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QUndoView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QUndoView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QUndoView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QUndoView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QUndoView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QUndoView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QUndoView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QUndoView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QUndoView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QUndoView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QUndoView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QUndoView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QUndoView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QUndoView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QUndoView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QUndoView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QUndoView_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QUndoView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QUndoView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QUndoView_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QUndoView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QUndoView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QUndoView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QUndoView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QUndoView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QUndoView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QUndoView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QUndoView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QUndoView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QUndoView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QUndoView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QUndoView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QUndoView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QUndoView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QUndoView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QUndoView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QUndoView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QUndoView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QUndoView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QUndoView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QUndoView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QUndoView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QUndoView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QUndoView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QUndoView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUndoView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QUndoView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QUndoView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QUndoView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QUndoView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QUndoView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QUndoView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QUndoView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QUndoView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QUndoView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QUndoView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QUndoView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QUndoView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QUndoView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QUndoView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QUndoView::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QUndoView_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionFrame* option) const {

		QUndoView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QUndoView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QUndoView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QUndoView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QUndoView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QUndoView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QUndoView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QUndoView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QUndoView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QUndoView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QUndoView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QUndoView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QUndoView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QUndoView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QUndoView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QUndoView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QUndoView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QUndoView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QUndoView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QUndoView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QUndoView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QUndoView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QUndoView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QUndoView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QUndoView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QUndoView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QUndoView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QUndoView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QUndoView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QUndoView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QUndoView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QUndoView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QUndoView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QUndoView::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QUndoView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QUndoView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QUndoView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QUndoView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QUndoView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QUndoView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QUndoView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QUndoView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QUndoView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QUndoView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QUndoView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QUndoView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QUndoView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QUndoView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QUndoView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QUndoView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QUndoView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QUndoView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QUndoView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QUndoView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QUndoView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QUndoView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QUndoView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QUndoView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QUndoView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QUndoView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend int QUndoView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QUndoView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QUndoView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QUndoView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QUndoView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QUndoView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QUndoView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QUndoView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QUndoView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QUndoView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QUndoView* QUndoView_new(QWidget* parent) {
	return new MiqtVirtualQUndoView(parent);
}

QUndoView* QUndoView_new2() {
	return new MiqtVirtualQUndoView();
}

QUndoView* QUndoView_new3(QUndoStack* stack) {
	return new MiqtVirtualQUndoView(stack);
}

QUndoView* QUndoView_new4(QUndoGroup* group) {
	return new MiqtVirtualQUndoView(group);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
	return new MiqtVirtualQUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
	return new MiqtVirtualQUndoView(group, parent);
}

void QUndoView_virtbase(QUndoView* src, QListView** outptr_QListView) {
	*outptr_QListView = static_cast<QListView*>(src);
}

QMetaObject* QUndoView_metaObject(const QUndoView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoView_metacast(QUndoView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoView_tr(const char* s) {
	QString _ret = QUndoView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUndoStack* QUndoView_stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_group(const QUndoView* self) {
	return self->group();
}

void QUndoView_setEmptyLabel(QUndoView* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setEmptyLabel(label_QString);
}

struct miqt_string QUndoView_emptyLabel(const QUndoView* self) {
	QString _ret = self->emptyLabel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoView_setCleanIcon(QUndoView* self, QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_cleanIcon(const QUndoView* self) {
	return new QIcon(self->cleanIcon());
}

void QUndoView_setStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_setGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

struct miqt_string QUndoView_tr2(const char* s, const char* c) {
	QString _ret = QUndoView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QUndoView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_visualRect(index);
}

bool QUndoView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QUndoView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QUndoView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QUndoView_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_indexAt(p);
}

bool QUndoView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QUndoView_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_doItemsLayout();
}

bool QUndoView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QUndoView_virtualbase_reset(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_reset();
}

bool QUndoView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QUndoView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setRootIndex(index);
}

bool QUndoView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QUndoView_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_event(e);
}

bool QUndoView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QUndoView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QUndoView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QUndoView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QUndoView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QUndoView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QUndoView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QUndoView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QUndoView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QUndoView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QUndoView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QUndoView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QUndoView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QUndoView_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_wheelEvent(e);
}

bool QUndoView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QUndoView_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_timerEvent(e);
}

bool QUndoView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QUndoView_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_resizeEvent(e);
}

bool QUndoView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QUndoView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QUndoView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QUndoView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QUndoView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QUndoView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_dropEvent(e);
}

bool QUndoView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QUndoView_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QUndoView_override_virtual_initViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initViewItemOption = slot;
	return true;
}

void QUndoView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQUndoView*)(self) )->virtualbase_initViewItemOption(option);
}

bool QUndoView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QUndoView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_paintEvent(e);
}

bool QUndoView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QUndoView_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_horizontalOffset();
}

bool QUndoView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QUndoView_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_verticalOffset();
}

bool QUndoView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QUndoView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QUndoView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QUndoView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setSelection(rect, command);
}

bool QUndoView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QUndoView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QUndoView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_selectedIndexes();
}

bool QUndoView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QUndoView_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_updateGeometries();
}

bool QUndoView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QUndoView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_isIndexHidden(index);
}

bool QUndoView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QUndoView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QUndoView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QUndoView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QUndoView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_viewportSizeHint();
}

bool QUndoView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QUndoView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setModel(model);
}

bool QUndoView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QUndoView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QUndoView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QUndoView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_keyboardSearch(search);
}

bool QUndoView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QUndoView_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QUndoView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QUndoView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QUndoView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QUndoView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_itemDelegateForIndex(index);
}

bool QUndoView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QUndoView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QUndoView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QUndoView_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_selectAll();
}

bool QUndoView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QUndoView_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_updateEditorData();
}

bool QUndoView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QUndoView_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_updateEditorGeometries();
}

bool QUndoView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QUndoView_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QUndoView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QUndoView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QUndoView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QUndoView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QUndoView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QUndoView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QUndoView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QUndoView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QUndoView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QUndoView_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_commitData(editor);
}

bool QUndoView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QUndoView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QUndoView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QUndoView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QUndoView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QUndoView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QUndoView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QUndoView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QUndoView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QUndoView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_viewportEvent(event);
}

bool QUndoView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QUndoView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QUndoView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QUndoView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QUndoView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QUndoView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QUndoView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QUndoView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_focusInEvent(event);
}

bool QUndoView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QUndoView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QUndoView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QUndoView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QUndoView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QUndoView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QUndoView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUndoView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_eventFilter(object, event);
}

bool QUndoView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_minimumSizeHint();
}

bool QUndoView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_sizeHint();
}

bool QUndoView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QUndoView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setupViewport(viewport);
}

bool QUndoView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QUndoView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QUndoView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QUndoView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_changeEvent(param1);
}

bool QUndoView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QUndoView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQUndoView*)(self) )->virtualbase_initStyleOption(option);
}

bool QUndoView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QUndoView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_devType();
}

bool QUndoView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QUndoView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_setVisible(visible);
}

bool QUndoView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QUndoView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QUndoView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QUndoView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QUndoView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QUndoView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_paintEngine();
}

bool QUndoView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QUndoView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QUndoView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QUndoView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_enterEvent(event);
}

bool QUndoView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QUndoView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_leaveEvent(event);
}

bool QUndoView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QUndoView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_moveEvent(event);
}

bool QUndoView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QUndoView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_closeEvent(event);
}

bool QUndoView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QUndoView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_tabletEvent(event);
}

bool QUndoView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QUndoView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_actionEvent(event);
}

bool QUndoView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QUndoView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_showEvent(event);
}

bool QUndoView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QUndoView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_hideEvent(event);
}

bool QUndoView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QUndoView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QUndoView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QUndoView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_metric(param1);
}

bool QUndoView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QUndoView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQUndoView*)(self) )->virtualbase_initPainter(painter);
}

bool QUndoView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QUndoView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_redirected(offset);
}

bool QUndoView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QUndoView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_sharedPainter();
}

bool QUndoView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QUndoView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_childEvent(event);
}

bool QUndoView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QUndoView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_customEvent(event);
}

bool QUndoView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QUndoView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_connectNotify(signal);
}

bool QUndoView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QUndoView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QUndoView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));

}

QSize* QUndoView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QSize(self_cast->contentsSize());

}

QRect* QUndoView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->rectForIndex(*index));

}

void QUndoView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPositionForIndex(*position, *index);

}

int QUndoView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQUndoView::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QUndoView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQUndoView::State>(state));

}

void QUndoView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QUndoView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QUndoView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QUndoView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QUndoView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QUndoView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QUndoView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QUndoView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QUndoView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQUndoView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QUndoView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QUndoView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QUndoView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QUndoView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QUndoView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QUndoView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QUndoView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QUndoView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QUndoView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QUndoView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QUndoView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QUndoView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QUndoView_delete(QUndoView* self) {
	delete self;
}

