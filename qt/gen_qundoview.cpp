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

QRect* miqt_exec_callback_QUndoView_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QUndoView_IndexAt(void*, intptr_t, QPoint*);
void miqt_exec_callback_QUndoView_DoItemsLayout(void*, intptr_t);
void miqt_exec_callback_QUndoView_Reset(void*, intptr_t);
void miqt_exec_callback_QUndoView_SetRootIndex(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QUndoView_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_DataChanged(void*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QUndoView_RowsInserted(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_RowsAboutToBeRemoved(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QUndoView_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUndoView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QUndoView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QUndoView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QUndoView_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QUndoView_StartDrag(void*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QUndoView_ViewOptions(void*, intptr_t);
void miqt_exec_callback_QUndoView_PaintEvent(void*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QUndoView_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QUndoView_VerticalOffset(void*, intptr_t);
QModelIndex* miqt_exec_callback_QUndoView_MoveCursor(void*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QUndoView_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QUndoView_SelectedIndexes(void*, intptr_t);
void miqt_exec_callback_QUndoView_UpdateGeometries(void*, intptr_t);
bool miqt_exec_callback_QUndoView_IsIndexHidden(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QUndoView_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QUndoView_ViewportSizeHint(void*, intptr_t);
void miqt_exec_callback_QUndoView_SetModel(void*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QUndoView_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QUndoView_KeyboardSearch(void*, intptr_t, struct miqt_string);
int miqt_exec_callback_QUndoView_SizeHintForRow(void*, intptr_t, int);
int miqt_exec_callback_QUndoView_SizeHintForColumn(void*, intptr_t, int);
QVariant* miqt_exec_callback_QUndoView_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_SelectAll(void*, intptr_t);
void miqt_exec_callback_QUndoView_UpdateEditorData(void*, intptr_t);
void miqt_exec_callback_QUndoView_UpdateEditorGeometries(void*, intptr_t);
void miqt_exec_callback_QUndoView_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_HorizontalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_VerticalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_HorizontalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_CloseEditor(void*, intptr_t, QWidget*, int);
void miqt_exec_callback_QUndoView_CommitData(void*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_EditorDestroyed(void*, intptr_t, QObject*);
bool miqt_exec_callback_QUndoView_Edit2(void*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QUndoView_SelectionCommand(void*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QUndoView_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QUndoView_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QUndoView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QUndoView_EventFilter(void*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QUndoView_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QUndoView_SizeHint(void*, intptr_t);
void miqt_exec_callback_QUndoView_SetupViewport(void*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QUndoView_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QUndoView_DevType(void*, intptr_t);
void miqt_exec_callback_QUndoView_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QUndoView_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QUndoView_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QUndoView_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QUndoView_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QUndoView_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QUndoView_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QUndoView_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QUndoView_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QUndoView_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QUndoView_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QUndoView_Metric(void*, intptr_t, int);
void miqt_exec_callback_QUndoView_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QUndoView_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QUndoView_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QUndoView_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUndoView_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUndoView_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QUndoView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QUndoView_VisualRect(const_cast<MiqtVirtualQUndoView*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QUndoView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QUndoView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QUndoView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QUndoView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QUndoView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_IndexAt(const_cast<MiqtVirtualQUndoView*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QUndoView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QUndoView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QUndoView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QUndoView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QUndoView::reset();
			return;
		}
		

		miqt_exec_callback_QUndoView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QUndoView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QUndoView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QUndoView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QUndoView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QUndoView::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QUndoView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QUndoView::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QUndoView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QUndoView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QUndoView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QUndoView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QUndoView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QUndoView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QUndoView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QUndoView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QUndoView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QUndoView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QUndoView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QUndoView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QUndoView::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QUndoView::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QUndoView::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QUndoView::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QUndoView::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QUndoView::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QUndoView::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QUndoView::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QUndoView::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QUndoView::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QUndoView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QUndoView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QUndoView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QUndoView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QUndoView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QUndoView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QUndoView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QUndoView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QUndoView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QUndoView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QUndoView_ViewOptions(const_cast<MiqtVirtualQUndoView*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QUndoView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QUndoView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QUndoView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QUndoView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QUndoView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_HorizontalOffset(const_cast<MiqtVirtualQUndoView*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QUndoView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QUndoView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_VerticalOffset(const_cast<MiqtVirtualQUndoView*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QUndoView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QUndoView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QUndoView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QUndoView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QUndoView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QUndoView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QUndoView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QUndoView_VisualRegionForSelection(const_cast<MiqtVirtualQUndoView*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QUndoView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QUndoView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QUndoView_SelectedIndexes(const_cast<MiqtVirtualQUndoView*>(this), handle__SelectedIndexes);
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
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QUndoView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QUndoView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QUndoView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QUndoView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QUndoView_IsIndexHidden(const_cast<MiqtVirtualQUndoView*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QUndoView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QUndoView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QUndoView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QUndoView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QUndoView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QUndoView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QUndoView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QUndoView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_ViewportSizeHint(const_cast<MiqtVirtualQUndoView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QUndoView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QUndoView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QUndoView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QUndoView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QUndoView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QUndoView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QUndoView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
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

		miqt_exec_callback_QUndoView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QUndoView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QUndoView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QUndoView_SizeHintForRow(const_cast<MiqtVirtualQUndoView*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QUndoView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QUndoView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QUndoView_SizeHintForColumn(const_cast<MiqtVirtualQUndoView*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QUndoView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QUndoView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QUndoView_InputMethodQuery(const_cast<MiqtVirtualQUndoView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QUndoView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QUndoView::selectAll();
			return;
		}
		

		miqt_exec_callback_QUndoView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QUndoView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QUndoView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QUndoView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QUndoView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QUndoView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QUndoView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QUndoView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QUndoView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QUndoView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QUndoView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QUndoView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QUndoView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QUndoView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QUndoView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QUndoView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QUndoView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QUndoView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QUndoView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QUndoView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QUndoView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QUndoView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QUndoView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QUndoView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QUndoView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QUndoView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QUndoView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QUndoView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QUndoView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QUndoView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QUndoView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QUndoView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QUndoView_SelectionCommand(const_cast<MiqtVirtualQUndoView*>(this), handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QUndoView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QUndoView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QUndoView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QUndoView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QUndoView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QUndoView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QUndoView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QUndoView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QUndoView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QUndoView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QUndoView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QUndoView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QUndoView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QUndoView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QUndoView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QUndoView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QUndoView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QUndoView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QUndoView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QUndoView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QUndoView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUndoView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QUndoView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QUndoView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_MinimumSizeHint(const_cast<MiqtVirtualQUndoView*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QUndoView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QUndoView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QUndoView_SizeHint(const_cast<MiqtVirtualQUndoView*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QUndoView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QUndoView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QUndoView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QUndoView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QUndoView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QUndoView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QUndoView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QUndoView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QUndoView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QUndoView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QUndoView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QUndoView_DevType(const_cast<MiqtVirtualQUndoView*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QUndoView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QUndoView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QUndoView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QUndoView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QUndoView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QUndoView_HeightForWidth(const_cast<MiqtVirtualQUndoView*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QUndoView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QUndoView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QUndoView_HasHeightForWidth(const_cast<MiqtVirtualQUndoView*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QUndoView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QUndoView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QUndoView_PaintEngine(const_cast<MiqtVirtualQUndoView*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QUndoView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QUndoView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QUndoView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QUndoView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QUndoView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QUndoView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QUndoView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QUndoView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QUndoView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QUndoView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QUndoView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QUndoView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QUndoView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QUndoView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QUndoView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QUndoView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QUndoView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QUndoView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QUndoView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QUndoView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QUndoView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QUndoView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QUndoView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QUndoView_Metric(const_cast<MiqtVirtualQUndoView*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QUndoView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QUndoView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QUndoView_InitPainter(const_cast<MiqtVirtualQUndoView*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QUndoView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QUndoView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QUndoView_Redirected(const_cast<MiqtVirtualQUndoView*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QUndoView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QUndoView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QUndoView_SharedPainter(const_cast<MiqtVirtualQUndoView*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QUndoView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QUndoView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QUndoView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QUndoView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUndoView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QUndoView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QUndoView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QUndoView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QUndoView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUndoView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QUndoView::disconnectNotify(*signal);

	}

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

QMetaObject* QUndoView_MetaObject(const QUndoView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoView_Metacast(QUndoView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoView_Tr(const char* s) {
	QString _ret = QUndoView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_TrUtf8(const char* s) {
	QString _ret = QUndoView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
	return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setEmptyLabel(label_QString);
}

struct miqt_string QUndoView_EmptyLabel(const QUndoView* self) {
	QString _ret = self->emptyLabel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
	return new QIcon(self->cleanIcon());
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

struct miqt_string QUndoView_Tr2(const char* s, const char* c) {
	QString _ret = QUndoView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_TrUtf82(const char* s, const char* c) {
	QString _ret = QUndoView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QUndoView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VisualRect(index);
}

bool QUndoView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QUndoView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QUndoView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QUndoView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_IndexAt(p);
}

bool QUndoView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QUndoView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DoItemsLayout();
}

bool QUndoView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QUndoView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_Reset();
}

bool QUndoView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QUndoView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QUndoView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QUndoView_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_Event(e);
}

bool QUndoView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QUndoView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QUndoView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QUndoView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QUndoView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QUndoView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QUndoView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QUndoView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QUndoView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QUndoView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QUndoView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QUndoView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QUndoView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QUndoView_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_WheelEvent(e);
}

bool QUndoView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QUndoView_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_TimerEvent(e);
}

bool QUndoView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QUndoView_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ResizeEvent(e);
}

bool QUndoView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QUndoView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QUndoView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QUndoView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QUndoView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QUndoView_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DropEvent(e);
}

bool QUndoView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QUndoView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QUndoView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QUndoView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_ViewOptions();
}

bool QUndoView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QUndoView_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_PaintEvent(e);
}

bool QUndoView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QUndoView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_HorizontalOffset();
}

bool QUndoView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QUndoView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VerticalOffset();
}

bool QUndoView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QUndoView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QUndoView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QUndoView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QUndoView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QUndoView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QUndoView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SelectedIndexes();
}

bool QUndoView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QUndoView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_UpdateGeometries();
}

bool QUndoView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QUndoView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QUndoView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QUndoView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QUndoView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QUndoView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QUndoView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QUndoView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QUndoView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetModel(model);
}

bool QUndoView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QUndoView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QUndoView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QUndoView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QUndoView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QUndoView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QUndoView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QUndoView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QUndoView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QUndoView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QUndoView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QUndoView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SelectAll();
}

bool QUndoView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QUndoView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_UpdateEditorData();
}

bool QUndoView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QUndoView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QUndoView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QUndoView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QUndoView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QUndoView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QUndoView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QUndoView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QUndoView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QUndoView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QUndoView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QUndoView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QUndoView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QUndoView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CommitData(editor);
}

bool QUndoView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QUndoView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QUndoView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QUndoView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QUndoView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QUndoView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QUndoView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QUndoView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QUndoView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QUndoView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QUndoView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QUndoView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QUndoView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QUndoView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QUndoView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QUndoView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QUndoView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QUndoView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QUndoView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QUndoView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QUndoView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QUndoView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QUndoView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QUndoView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QUndoView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QUndoView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QUndoView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QUndoView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QUndoView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SizeHint();
}

bool QUndoView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QUndoView_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QUndoView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QUndoView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QUndoView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QUndoView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QUndoView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QUndoView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_DevType();
}

bool QUndoView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QUndoView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetVisible(visible);
}

bool QUndoView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QUndoView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QUndoView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QUndoView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QUndoView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QUndoView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_PaintEngine();
}

bool QUndoView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QUndoView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QUndoView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QUndoView_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_EnterEvent(event);
}

bool QUndoView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QUndoView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QUndoView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QUndoView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MoveEvent(event);
}

bool QUndoView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QUndoView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CloseEvent(event);
}

bool QUndoView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QUndoView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_TabletEvent(event);
}

bool QUndoView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QUndoView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ActionEvent(event);
}

bool QUndoView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QUndoView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ShowEvent(event);
}

bool QUndoView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QUndoView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_HideEvent(event);
}

bool QUndoView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QUndoView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QUndoView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QUndoView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_Metric(param1);
}

bool QUndoView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QUndoView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQUndoView*)(self) )->virtualbase_InitPainter(painter);
}

bool QUndoView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QUndoView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_Redirected(offset);
}

bool QUndoView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QUndoView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SharedPainter();
}

bool QUndoView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QUndoView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ChildEvent(event);
}

bool QUndoView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QUndoView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CustomEvent(event);
}

bool QUndoView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QUndoView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QUndoView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QUndoView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QUndoView_Delete(QUndoView* self) {
	delete self;
}

