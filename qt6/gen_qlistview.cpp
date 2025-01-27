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

void miqt_exec_callback_QListView_IndexesMoved(intptr_t, struct miqt_array /* of QModelIndex* */ );
QRect* miqt_exec_callback_QListView_VisualRect(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_ScrollTo(QListView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListView_IndexAt(const QListView*, intptr_t, QPoint*);
void miqt_exec_callback_QListView_DoItemsLayout(QListView*, intptr_t);
void miqt_exec_callback_QListView_Reset(QListView*, intptr_t);
void miqt_exec_callback_QListView_SetRootIndex(QListView*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QListView_Event(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_ScrollContentsBy(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_DataChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListView_RowsInserted(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_RowsAboutToBeRemoved(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_MouseMoveEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_MouseReleaseEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_WheelEvent(QListView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListView_TimerEvent(QListView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListView_ResizeEvent(QListView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListView_DragMoveEvent(QListView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListView_DragLeaveEvent(QListView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListView_DropEvent(QListView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QListView_StartDrag(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_InitViewItemOption(const QListView*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QListView_PaintEvent(QListView*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListView_HorizontalOffset(const QListView*, intptr_t);
int miqt_exec_callback_QListView_VerticalOffset(const QListView*, intptr_t);
QModelIndex* miqt_exec_callback_QListView_MoveCursor(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_SetSelection(QListView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListView_VisualRegionForSelection(const QListView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListView_SelectedIndexes(const QListView*, intptr_t);
void miqt_exec_callback_QListView_UpdateGeometries(QListView*, intptr_t);
bool miqt_exec_callback_QListView_IsIndexHidden(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_SelectionChanged(QListView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListView_CurrentChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListView_ViewportSizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_SetModel(QListView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QListView_SetSelectionModel(QListView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListView_KeyboardSearch(QListView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListView_SizeHintForRow(const QListView*, intptr_t, int);
int miqt_exec_callback_QListView_SizeHintForColumn(const QListView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QListView_ItemDelegateForIndex(const QListView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QListView_InputMethodQuery(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_SelectAll(QListView*, intptr_t);
void miqt_exec_callback_QListView_UpdateEditorData(QListView*, intptr_t);
void miqt_exec_callback_QListView_UpdateEditorGeometries(QListView*, intptr_t);
void miqt_exec_callback_QListView_VerticalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_HorizontalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_VerticalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_HorizontalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_CloseEditor(QListView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListView_CommitData(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_EditorDestroyed(QListView*, intptr_t, QObject*);
bool miqt_exec_callback_QListView_Edit2(QListView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListView_SelectionCommand(const QListView*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListView_FocusNextPrevChild(QListView*, intptr_t, bool);
bool miqt_exec_callback_QListView_ViewportEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_MousePressEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_MouseDoubleClickEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_DragEnterEvent(QListView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListView_FocusInEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_FocusOutEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_KeyPressEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_InputMethodEvent(QListView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListView_EventFilter(QListView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListView_MinimumSizeHint(const QListView*, intptr_t);
QSize* miqt_exec_callback_QListView_SizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_SetupViewport(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_ContextMenuEvent(QListView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListView_ChangeEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_InitStyleOption(const QListView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QListView_DevType(const QListView*, intptr_t);
void miqt_exec_callback_QListView_SetVisible(QListView*, intptr_t, bool);
int miqt_exec_callback_QListView_HeightForWidth(const QListView*, intptr_t, int);
bool miqt_exec_callback_QListView_HasHeightForWidth(const QListView*, intptr_t);
QPaintEngine* miqt_exec_callback_QListView_PaintEngine(const QListView*, intptr_t);
void miqt_exec_callback_QListView_KeyReleaseEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_EnterEvent(QListView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QListView_LeaveEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_MoveEvent(QListView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListView_CloseEvent(QListView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListView_TabletEvent(QListView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListView_ActionEvent(QListView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListView_ShowEvent(QListView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListView_HideEvent(QListView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListView_NativeEvent(QListView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QListView_Metric(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_InitPainter(const QListView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListView_Redirected(const QListView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListView_SharedPainter(const QListView*, intptr_t);
void miqt_exec_callback_QListView_ChildEvent(QListView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListView_CustomEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_ConnectNotify(QListView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListView_DisconnectNotify(QListView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListView final : public QListView {
public:

	MiqtVirtualQListView(QWidget* parent): QListView(parent) {};
	MiqtVirtualQListView(): QListView() {};

	virtual ~MiqtVirtualQListView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QListView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QListView_VisualRect(this, handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QListView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QListView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QListView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QListView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListView_IndexAt(this, handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QListView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QListView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QListView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QListView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QListView::reset();
			return;
		}
		

		miqt_exec_callback_QListView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QListView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QListView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QListView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QListView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QListView::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QListView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QListView::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QListView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QListView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QListView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__DataChanged == 0) {
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

		miqt_exec_callback_QListView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QListView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QListView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QListView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QListView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QListView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QListView::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QListView::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QListView::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QListView::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QListView::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QListView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QListView::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QListView::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QListView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QListView::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QListView::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QListView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QListView::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QListView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QListView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QListView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QListView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QListView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QListView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QListView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QListView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QListView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QListView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QListView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QListView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QListView::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QListView_InitViewItemOption(this, handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QListView::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QListView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QListView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QListView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QListView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_HorizontalOffset(this, handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QListView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QListView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_VerticalOffset(this, handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QListView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QListView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QListView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QListView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QListView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QListView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QListView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QListView_VisualRegionForSelection(this, handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QListView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QListView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListView_SelectedIndexes(this, handle__SelectedIndexes);
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
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QListView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QListView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QListView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QListView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QListView_IsIndexHidden(this, handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QListView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QListView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QListView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QListView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QListView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QListView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QListView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QListView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QListView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QListView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QListView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QListView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QListView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QListView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QListView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
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

		miqt_exec_callback_QListView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QListView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QListView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QListView_SizeHintForRow(this, handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QListView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QListView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QListView_SizeHintForColumn(this, handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QListView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemDelegateForIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (handle__ItemDelegateForIndex == 0) {
			return QListView::itemDelegateForIndex(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QListView_ItemDelegateForIndex(this, handle__ItemDelegateForIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemDelegate* virtualbase_ItemDelegateForIndex(QModelIndex* index) const {

		return QListView::itemDelegateForIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QListView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QListView_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QListView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QListView::selectAll();
			return;
		}
		

		miqt_exec_callback_QListView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QListView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QListView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QListView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QListView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QListView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QListView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QListView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QListView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QListView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QListView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QListView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QListView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QListView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QListView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QListView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QListView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QListView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QListView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QListView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QListView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QListView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QListView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QListView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QListView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QListView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QListView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QListView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QListView_SelectionCommand(this, handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QListView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QListView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QListView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QListView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QListView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QListView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QListView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QListView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QListView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QListView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QListView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QListView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QListView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QListView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QListView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QListView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QListView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QListView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QListView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QListView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QListView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QListView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QListView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QListView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QListView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QListView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QListView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QListView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QListView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListView_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QListView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QListView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QListView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QListView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QListView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QListView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QListView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QListView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QListView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QListView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QListView::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QListView_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QListView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QListView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QListView_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QListView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QListView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QListView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QListView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QListView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QListView_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QListView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QListView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QListView_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QListView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QListView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QListView_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QListView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QListView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QListView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QListView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QListView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QListView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QListView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QListView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QListView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QListView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QListView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QListView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QListView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QListView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QListView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QListView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QListView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QListView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QListView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QListView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QListView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QListView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QListView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QListView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QListView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QListView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QListView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QListView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QListView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QListView_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QListView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QListView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QListView_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QListView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QListView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QListView_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QListView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QListView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QListView_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QListView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QListView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QListView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QListView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QListView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QListView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QListView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QListView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QListView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QListView::disconnectNotify(*signal);

	}

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

QMetaObject* QListView_MetaObject(const QListView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListView_Metacast(QListView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListView_Tr(const char* s) {
	QString _ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListView_SetMovement(QListView* self, int movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_Movement(const QListView* self) {
	QListView::Movement _ret = self->movement();
	return static_cast<int>(_ret);
}

void QListView_SetFlow(QListView* self, int flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_Flow(const QListView* self) {
	QListView::Flow _ret = self->flow();
	return static_cast<int>(_ret);
}

void QListView_SetWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_IsWrapping(const QListView* self) {
	return self->isWrapping();
}

void QListView_SetResizeMode(QListView* self, int mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_ResizeMode(const QListView* self) {
	QListView::ResizeMode _ret = self->resizeMode();
	return static_cast<int>(_ret);
}

void QListView_SetLayoutMode(QListView* self, int mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_LayoutMode(const QListView* self) {
	QListView::LayoutMode _ret = self->layoutMode();
	return static_cast<int>(_ret);
}

void QListView_SetSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_Spacing(const QListView* self) {
	return self->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_BatchSize(const QListView* self) {
	return self->batchSize();
}

void QListView_SetGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_GridSize(const QListView* self) {
	return new QSize(self->gridSize());
}

void QListView_SetViewMode(QListView* self, int mode) {
	self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

int QListView_ViewMode(const QListView* self) {
	QListView::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QListView_ClearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_IsRowHidden(const QListView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_ModelColumn(const QListView* self) {
	return self->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(const QListView* self) {
	return self->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_WordWrap(const QListView* self) {
	return self->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(const QListView* self) {
	return self->isSelectionRectVisible();
}

void QListView_SetItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_ItemAlignment(const QListView* self) {
	Qt::Alignment _ret = self->itemAlignment();
	return static_cast<int>(_ret);
}

QRect* QListView_VisualRect(const QListView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QListView_ScrollTo(QListView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QListView_IndexAt(const QListView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QListView_DoItemsLayout(QListView* self) {
	self->doItemsLayout();
}

void QListView_Reset(QListView* self) {
	self->reset();
}

void QListView_SetRootIndex(QListView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QListView_IndexesMoved(QListView* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	self->indexesMoved(indexes_QList);
}

void QListView_connect_IndexesMoved(QListView* self, intptr_t slot) {
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
		miqt_exec_callback_QListView_IndexesMoved(slot, sigval1);
	});
}

struct miqt_string QListView_Tr2(const char* s, const char* c) {
	QString _ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QListView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QListView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_VisualRect(index);
}

bool QListView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QListView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QListView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QListView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_IndexAt(p);
}

bool QListView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QListView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DoItemsLayout();
}

bool QListView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QListView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_Reset();
}

bool QListView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QListView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QListView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QListView_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_Event(e);
}

bool QListView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QListView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QListView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QListView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QListView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QListView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QListView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QListView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QListView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QListView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QListView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QListView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QListView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QListView_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_WheelEvent(e);
}

bool QListView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QListView_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_TimerEvent(e);
}

bool QListView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QListView_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ResizeEvent(e);
}

bool QListView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QListView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QListView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QListView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QListView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QListView_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DropEvent(e);
}

bool QListView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QListView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QListView_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitViewItemOption = slot;
	return true;
}

void QListView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_InitViewItemOption(option);
}

bool QListView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QListView_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_PaintEvent(e);
}

bool QListView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QListView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_HorizontalOffset();
}

bool QListView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QListView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_VerticalOffset();
}

bool QListView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QListView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QListView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QListView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QListView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QListView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QListView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QListView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SelectedIndexes();
}

bool QListView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QListView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_UpdateGeometries();
}

bool QListView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QListView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QListView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QListView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QListView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QListView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QListView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QListView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QListView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetModel(model);
}

bool QListView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QListView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QListView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QListView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QListView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QListView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QListView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QListView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QListView_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemDelegateForIndex = slot;
	return true;
}

QAbstractItemDelegate* QListView_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_ItemDelegateForIndex(index);
}

bool QListView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QListView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QListView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QListView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SelectAll();
}

bool QListView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QListView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_UpdateEditorData();
}

bool QListView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QListView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QListView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QListView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QListView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QListView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QListView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QListView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QListView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QListView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QListView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QListView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QListView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QListView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_CommitData(editor);
}

bool QListView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QListView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QListView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QListView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QListView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QListView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QListView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QListView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QListView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QListView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QListView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QListView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QListView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QListView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QListView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QListView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QListView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QListView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QListView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QListView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QListView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QListView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QListView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QListView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QListView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QListView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QListView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QListView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QListView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SizeHint();
}

bool QListView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QListView_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QListView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QListView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QListView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QListView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QListView_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QListView_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_InitStyleOption(option);
}

bool QListView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QListView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_DevType();
}

bool QListView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QListView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_SetVisible(visible);
}

bool QListView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QListView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QListView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QListView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QListView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QListView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_PaintEngine();
}

bool QListView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QListView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QListView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QListView_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_EnterEvent(event);
}

bool QListView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QListView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QListView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QListView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_MoveEvent(event);
}

bool QListView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QListView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_CloseEvent(event);
}

bool QListView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QListView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_TabletEvent(event);
}

bool QListView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QListView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ActionEvent(event);
}

bool QListView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QListView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ShowEvent(event);
}

bool QListView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QListView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_HideEvent(event);
}

bool QListView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QListView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQListView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QListView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QListView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_Metric(param1);
}

bool QListView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QListView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQListView*)(self) )->virtualbase_InitPainter(painter);
}

bool QListView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QListView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_Redirected(offset);
}

bool QListView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QListView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQListView*)(self) )->virtualbase_SharedPainter();
}

bool QListView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QListView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ChildEvent(event);
}

bool QListView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QListView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_CustomEvent(event);
}

bool QListView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QListView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QListView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QListView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QListView_Delete(QListView* self) {
	delete self;
}

