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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistview.h>
#include "gen_qlistview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QListView_indexesMoved(intptr_t, struct miqt_array /* of QModelIndex* */ );
QRect* miqt_exec_callback_QListView_visualRect(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_scrollTo(QListView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListView_indexAt(const QListView*, intptr_t, QPoint*);
void miqt_exec_callback_QListView_doItemsLayout(QListView*, intptr_t);
void miqt_exec_callback_QListView_reset(QListView*, intptr_t);
void miqt_exec_callback_QListView_setRootIndex(QListView*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QListView_event(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_scrollContentsBy(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_dataChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListView_rowsInserted(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_rowsAboutToBeRemoved(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_mouseMoveEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_mouseReleaseEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_wheelEvent(QListView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListView_timerEvent(QListView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListView_resizeEvent(QListView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListView_dragMoveEvent(QListView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListView_dragLeaveEvent(QListView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListView_dropEvent(QListView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QListView_startDrag(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_initViewItemOption(const QListView*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QListView_paintEvent(QListView*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListView_horizontalOffset(const QListView*, intptr_t);
int miqt_exec_callback_QListView_verticalOffset(const QListView*, intptr_t);
QModelIndex* miqt_exec_callback_QListView_moveCursor(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_setSelection(QListView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListView_visualRegionForSelection(const QListView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListView_selectedIndexes(const QListView*, intptr_t);
void miqt_exec_callback_QListView_updateGeometries(QListView*, intptr_t);
bool miqt_exec_callback_QListView_isIndexHidden(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_selectionChanged(QListView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListView_currentChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListView_viewportSizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setModel(QListView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QListView_setSelectionModel(QListView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListView_keyboardSearch(QListView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListView_sizeHintForRow(const QListView*, intptr_t, int);
int miqt_exec_callback_QListView_sizeHintForColumn(const QListView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QListView_itemDelegateForIndex(const QListView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QListView_inputMethodQuery(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_selectAll(QListView*, intptr_t);
void miqt_exec_callback_QListView_updateEditorData(QListView*, intptr_t);
void miqt_exec_callback_QListView_updateEditorGeometries(QListView*, intptr_t);
void miqt_exec_callback_QListView_verticalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_horizontalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_verticalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_horizontalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_closeEditor(QListView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListView_commitData(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_editorDestroyed(QListView*, intptr_t, QObject*);
bool miqt_exec_callback_QListView_edit2(QListView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListView_selectionCommand(const QListView*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListView_focusNextPrevChild(QListView*, intptr_t, bool);
bool miqt_exec_callback_QListView_viewportEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_mousePressEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_mouseDoubleClickEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_dragEnterEvent(QListView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListView_focusInEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_focusOutEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_keyPressEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_inputMethodEvent(QListView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListView_eventFilter(QListView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListView_minimumSizeHint(const QListView*, intptr_t);
QSize* miqt_exec_callback_QListView_sizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setupViewport(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_contextMenuEvent(QListView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListView_changeEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_initStyleOption(const QListView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QListView_devType(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setVisible(QListView*, intptr_t, bool);
int miqt_exec_callback_QListView_heightForWidth(const QListView*, intptr_t, int);
bool miqt_exec_callback_QListView_hasHeightForWidth(const QListView*, intptr_t);
QPaintEngine* miqt_exec_callback_QListView_paintEngine(const QListView*, intptr_t);
void miqt_exec_callback_QListView_keyReleaseEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_enterEvent(QListView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QListView_leaveEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_moveEvent(QListView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListView_closeEvent(QListView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListView_tabletEvent(QListView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListView_actionEvent(QListView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListView_showEvent(QListView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListView_hideEvent(QListView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListView_nativeEvent(QListView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QListView_metric(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_initPainter(const QListView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListView_redirected(const QListView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListView_sharedPainter(const QListView*, intptr_t);
void miqt_exec_callback_QListView_childEvent(QListView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListView_customEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_connectNotify(QListView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListView_disconnectNotify(QListView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListView final : public QListView {
public:

	MiqtVirtualQListView(QWidget* parent): QListView(parent) {};
	MiqtVirtualQListView(): QListView() {};

	virtual ~MiqtVirtualQListView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QListView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QListView_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QListView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QListView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QListView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QListView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListView_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QListView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QListView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QListView_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QListView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QListView::reset();
			return;
		}
		

		miqt_exec_callback_QListView_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QListView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QListView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QListView_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QListView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QListView::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QListView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QListView::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QListView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QListView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QListView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__dataChanged == 0) {
			QListView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QListView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QListView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QListView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QListView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QListView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QListView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QListView::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QListView::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QListView::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QListView::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QListView::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QListView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QListView::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QListView::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QListView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QListView::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QListView::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QListView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QListView::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QListView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QListView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QListView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QListView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QListView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QListView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QListView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QListView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QListView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QListView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QListView_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QListView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__initViewItemOption == 0) {
			QListView::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QListView_initViewItemOption(this, handle__initViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initViewItemOption(QStyleOptionViewItem* option) const {

		QListView::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QListView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QListView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QListView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QListView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QListView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QListView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QListView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QListView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListView_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QListView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QListView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QListView_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QListView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QListView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QListView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QListView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QListView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListView_selectedIndexes(this, handle__selectedIndexes);
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

		QModelIndexList _ret = QListView::selectedIndexes();
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
			QListView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QListView_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QListView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QListView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QListView_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QListView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QListView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QListView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QListView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QListView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QListView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QListView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QListView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QListView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QListView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QListView_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QListView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QListView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QListView_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QListView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
			QListView::keyboardSearch(search);
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

		miqt_exec_callback_QListView_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QListView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QListView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QListView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QListView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QListView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QListView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QListView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__itemDelegateForIndex == 0) {
			return QListView::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QListView_itemDelegateForIndex(this, handle__itemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_itemDelegateForIndex(QModelIndex* index) const {

		return QListView::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QListView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QListView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QListView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QListView::selectAll();
			return;
		}
		

		miqt_exec_callback_QListView_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QListView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QListView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QListView_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QListView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QListView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QListView_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QListView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QListView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QListView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QListView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QListView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QListView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QListView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QListView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QListView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QListView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QListView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QListView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QListView_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QListView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QListView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QListView_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QListView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QListView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QListView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QListView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QListView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QListView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QListView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QListView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QListView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QListView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QListView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QListView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QListView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QListView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QListView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QListView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QListView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QListView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QListView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QListView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QListView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QListView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QListView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QListView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QListView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QListView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QListView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QListView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QListView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QListView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QListView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QListView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QListView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QListView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QListView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QListView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QListView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QListView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QListView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QListView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QListView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QListView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QListView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QListView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QListView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QListView::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QListView_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionFrame* option) const {

		QListView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QListView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QListView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QListView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QListView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QListView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QListView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QListView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QListView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QListView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QListView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QListView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QListView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QListView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QListView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QListView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QListView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QListView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QListView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QListView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QListView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QListView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QListView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QListView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QListView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QListView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QListView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QListView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QListView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QListView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QListView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QListView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QListView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QListView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QListView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QListView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QListView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QListView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QListView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QListView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QListView::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QListView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QListView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QListView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QListView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QListView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QListView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QListView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QListView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QListView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QListView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QListView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QListView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QListView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QListView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QListView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QListView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QListView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QListView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QListView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QListView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QListView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QListView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QListView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QListView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QListView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QListView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend int QListView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QListView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QListView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QListView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QListView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QListView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QListView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QListView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QListView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QListView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QListView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QListView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QListView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QListView* QListView_new(QWidget* parent) {
	return new MiqtVirtualQListView(parent);
}

QListView* QListView_new2() {
	return new MiqtVirtualQListView();
}

void QListView_virtbase(QListView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QListView_metaObject(const QListView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListView_metacast(QListView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListView_tr(const char* s) {
	QString _ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListView_setMovement(QListView* self, int movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_movement(const QListView* self) {
	QListView::Movement _ret = self->movement();
	return static_cast<int>(_ret);
}

void QListView_setFlow(QListView* self, int flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_flow(const QListView* self) {
	QListView::Flow _ret = self->flow();
	return static_cast<int>(_ret);
}

void QListView_setWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_isWrapping(const QListView* self) {
	return self->isWrapping();
}

void QListView_setResizeMode(QListView* self, int mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_resizeMode(const QListView* self) {
	QListView::ResizeMode _ret = self->resizeMode();
	return static_cast<int>(_ret);
}

void QListView_setLayoutMode(QListView* self, int mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_layoutMode(const QListView* self) {
	QListView::LayoutMode _ret = self->layoutMode();
	return static_cast<int>(_ret);
}

void QListView_setSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_spacing(const QListView* self) {
	return self->spacing();
}

void QListView_setBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_batchSize(const QListView* self) {
	return self->batchSize();
}

void QListView_setGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_gridSize(const QListView* self) {
	return new QSize(self->gridSize());
}

void QListView_setViewMode(QListView* self, int mode) {
	self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

int QListView_viewMode(const QListView* self) {
	QListView::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QListView_clearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_isRowHidden(const QListView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QListView_setRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_setModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_modelColumn(const QListView* self) {
	return self->modelColumn();
}

void QListView_setUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_uniformItemSizes(const QListView* self) {
	return self->uniformItemSizes();
}

void QListView_setWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_wordWrap(const QListView* self) {
	return self->wordWrap();
}

void QListView_setSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_isSelectionRectVisible(const QListView* self) {
	return self->isSelectionRectVisible();
}

void QListView_setItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_itemAlignment(const QListView* self) {
	Qt::Alignment _ret = self->itemAlignment();
	return static_cast<int>(_ret);
}

QRect* QListView_visualRect(const QListView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QListView_scrollTo(QListView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QListView_indexAt(const QListView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QListView_doItemsLayout(QListView* self) {
	self->doItemsLayout();
}

void QListView_reset(QListView* self) {
	self->reset();
}

void QListView_setRootIndex(QListView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QListView_indexesMoved(QListView* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	self->indexesMoved(indexes_QList);
}

void QListView_connect_indexesMoved(QListView* self, intptr_t slot) {
	MiqtVirtualQListView::connect(self, static_cast<void (QListView::*)(const QModelIndexList&)>(&QListView::indexesMoved), self, [=](const QModelIndexList& indexes) {
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
		miqt_exec_callback_QListView_indexesMoved(slot, sigval1);
	});
}

struct miqt_string QListView_tr2(const char* s, const char* c) {
	QString _ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListView_tr3(const char* s, const char* c, int n) {
	QString _ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QListView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QListView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_visualRect(index);
}

bool QListView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QListView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QListView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QListView_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_indexAt(p);
}

bool QListView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QListView_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_doItemsLayout();
}

bool QListView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QListView_virtualbase_reset(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_reset();
}

bool QListView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QListView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setRootIndex(index);
}

bool QListView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QListView_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_event(e);
}

bool QListView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QListView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QListView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QListView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QListView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QListView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QListView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QListView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QListView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QListView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QListView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QListView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QListView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QListView_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_wheelEvent(e);
}

bool QListView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QListView_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_timerEvent(e);
}

bool QListView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QListView_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_resizeEvent(e);
}

bool QListView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QListView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QListView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QListView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QListView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QListView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_dropEvent(e);
}

bool QListView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QListView_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QListView_override_virtual_initViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initViewItemOption = slot;
	return true;
}

void QListView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_initViewItemOption(option);
}

bool QListView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QListView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_paintEvent(e);
}

bool QListView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QListView_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_horizontalOffset();
}

bool QListView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QListView_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_verticalOffset();
}

bool QListView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QListView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QListView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QListView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setSelection(rect, command);
}

bool QListView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QListView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QListView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QListView_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_selectedIndexes();
}

bool QListView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QListView_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_updateGeometries();
}

bool QListView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QListView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_isIndexHidden(index);
}

bool QListView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QListView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QListView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QListView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QListView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_viewportSizeHint();
}

bool QListView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QListView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setModel(model);
}

bool QListView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QListView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QListView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QListView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_keyboardSearch(search);
}

bool QListView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QListView_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QListView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QListView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QListView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QListView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_itemDelegateForIndex(index);
}

bool QListView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QListView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QListView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QListView_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_selectAll();
}

bool QListView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QListView_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_updateEditorData();
}

bool QListView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QListView_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_updateEditorGeometries();
}

bool QListView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QListView_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QListView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QListView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QListView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QListView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QListView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QListView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QListView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QListView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QListView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QListView_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_commitData(editor);
}

bool QListView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QListView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QListView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QListView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QListView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QListView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QListView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QListView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QListView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QListView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_viewportEvent(event);
}

bool QListView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QListView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QListView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QListView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QListView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QListView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QListView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QListView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_focusInEvent(event);
}

bool QListView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QListView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QListView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QListView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QListView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QListView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QListView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QListView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_eventFilter(object, event);
}

bool QListView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_minimumSizeHint();
}

bool QListView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_sizeHint();
}

bool QListView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QListView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setupViewport(viewport);
}

bool QListView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QListView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QListView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QListView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_changeEvent(param1);
}

bool QListView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QListView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_initStyleOption(option);
}

bool QListView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QListView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_devType();
}

bool QListView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QListView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_setVisible(visible);
}

bool QListView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QListView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QListView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QListView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QListView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QListView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_paintEngine();
}

bool QListView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QListView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QListView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QListView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_enterEvent(event);
}

bool QListView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QListView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_leaveEvent(event);
}

bool QListView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QListView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_moveEvent(event);
}

bool QListView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QListView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_closeEvent(event);
}

bool QListView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QListView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_tabletEvent(event);
}

bool QListView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QListView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_actionEvent(event);
}

bool QListView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QListView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_showEvent(event);
}

bool QListView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QListView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_hideEvent(event);
}

bool QListView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QListView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QListView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QListView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_metric(param1);
}

bool QListView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QListView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_initPainter(painter);
}

bool QListView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QListView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_redirected(offset);
}

bool QListView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QListView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_sharedPainter();
}

bool QListView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QListView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_childEvent(event);
}

bool QListView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QListView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_customEvent(event);
}

bool QListView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QListView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_connectNotify(signal);
}

bool QListView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QListView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QListView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));

}

QSize* QListView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QSize(self_cast->contentsSize());

}

QRect* QListView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->rectForIndex(*index));

}

void QListView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPositionForIndex(*position, *index);

}

int QListView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQListView::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QListView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQListView::State>(state));

}

void QListView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QListView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QListView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QListView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QListView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QListView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QListView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QListView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QListView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQListView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QListView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QListView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QListView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QListView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QListView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QListView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QListView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QListView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QListView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QListView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QListView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QListView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QListView_delete(QListView* self) {
	delete self;
}

