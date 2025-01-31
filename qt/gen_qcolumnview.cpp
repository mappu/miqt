#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColumnView>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcolumnview.h>
#include "gen_qcolumnview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QColumnView_UpdatePreviewWidget(intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_IndexAt(const QColumnView*, intptr_t, QPoint*);
void miqt_exec_callback_QColumnView_ScrollTo(QColumnView*, intptr_t, QModelIndex*, int);
QSize* miqt_exec_callback_QColumnView_SizeHint(const QColumnView*, intptr_t);
QRect* miqt_exec_callback_QColumnView_VisualRect(const QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_SetModel(QColumnView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QColumnView_SetSelectionModel(QColumnView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QColumnView_SetRootIndex(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_SelectAll(QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_IsIndexHidden(const QColumnView*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_MoveCursor(QColumnView*, intptr_t, int, int);
void miqt_exec_callback_QColumnView_ResizeEvent(QColumnView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColumnView_SetSelection(QColumnView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QColumnView_VisualRegionForSelection(const QColumnView*, intptr_t, QItemSelection*);
int miqt_exec_callback_QColumnView_HorizontalOffset(const QColumnView*, intptr_t);
int miqt_exec_callback_QColumnView_VerticalOffset(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_RowsInserted(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_CurrentChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QColumnView_ScrollContentsBy(QColumnView*, intptr_t, int, int);
QAbstractItemView* miqt_exec_callback_QColumnView_CreateColumn(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_KeyboardSearch(QColumnView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QColumnView_SizeHintForRow(const QColumnView*, intptr_t, int);
int miqt_exec_callback_QColumnView_SizeHintForColumn(const QColumnView*, intptr_t, int);
QVariant* miqt_exec_callback_QColumnView_InputMethodQuery(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_Reset(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_DoItemsLayout(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_DataChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QColumnView_RowsAboutToBeRemoved(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_SelectionChanged(QColumnView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QColumnView_UpdateEditorData(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_UpdateEditorGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_UpdateGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_VerticalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_HorizontalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_VerticalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_HorizontalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_CloseEditor(QColumnView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QColumnView_CommitData(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_EditorDestroyed(QColumnView*, intptr_t, QObject*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QColumnView_SelectedIndexes(const QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_Edit2(QColumnView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QColumnView_SelectionCommand(const QColumnView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QColumnView_StartDrag(QColumnView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QColumnView_ViewOptions(const QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_FocusNextPrevChild(QColumnView*, intptr_t, bool);
bool miqt_exec_callback_QColumnView_Event(QColumnView*, intptr_t, QEvent*);
bool miqt_exec_callback_QColumnView_ViewportEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_MousePressEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_MouseMoveEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_MouseReleaseEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_MouseDoubleClickEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_DragEnterEvent(QColumnView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColumnView_DragMoveEvent(QColumnView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColumnView_DragLeaveEvent(QColumnView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColumnView_DropEvent(QColumnView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColumnView_FocusInEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_FocusOutEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_KeyPressEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_TimerEvent(QColumnView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColumnView_InputMethodEvent(QColumnView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QColumnView_EventFilter(QColumnView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QColumnView_ViewportSizeHint(const QColumnView*, intptr_t);
QSize* miqt_exec_callback_QColumnView_MinimumSizeHint(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_SetupViewport(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_PaintEvent(QColumnView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColumnView_WheelEvent(QColumnView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColumnView_ContextMenuEvent(QColumnView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QColumnView_ChangeEvent(QColumnView*, intptr_t, QEvent*);
int miqt_exec_callback_QColumnView_DevType(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_SetVisible(QColumnView*, intptr_t, bool);
int miqt_exec_callback_QColumnView_HeightForWidth(const QColumnView*, intptr_t, int);
bool miqt_exec_callback_QColumnView_HasHeightForWidth(const QColumnView*, intptr_t);
QPaintEngine* miqt_exec_callback_QColumnView_PaintEngine(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_KeyReleaseEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_EnterEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_LeaveEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_MoveEvent(QColumnView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColumnView_CloseEvent(QColumnView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColumnView_TabletEvent(QColumnView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColumnView_ActionEvent(QColumnView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColumnView_ShowEvent(QColumnView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColumnView_HideEvent(QColumnView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColumnView_NativeEvent(QColumnView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QColumnView_Metric(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_InitPainter(const QColumnView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColumnView_Redirected(const QColumnView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColumnView_SharedPainter(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_ChildEvent(QColumnView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColumnView_CustomEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_ConnectNotify(QColumnView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColumnView_DisconnectNotify(QColumnView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColumnView final : public QColumnView {
public:

	MiqtVirtualQColumnView(QWidget* parent): QColumnView(parent) {};
	MiqtVirtualQColumnView(): QColumnView() {};

	virtual ~MiqtVirtualQColumnView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (handle__IndexAt == 0) {
			return QColumnView::indexAt(point);
		}
		
		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_IndexAt(this, handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* point) const {

		return new QModelIndex(QColumnView::indexAt(*point));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QColumnView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QColumnView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QColumnView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QColumnView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QColumnView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QColumnView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QColumnView_VisualRect(this, handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QColumnView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QColumnView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QColumnView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QColumnView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QColumnView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QColumnView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QColumnView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QColumnView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QColumnView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QColumnView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QColumnView::selectAll();
			return;
		}
		

		miqt_exec_callback_QColumnView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QColumnView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QColumnView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QColumnView_IsIndexHidden(this, handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QColumnView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QColumnView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QColumnView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QColumnView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QColumnView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QColumnView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QColumnView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QColumnView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QColumnView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QColumnView_VisualRegionForSelection(this, handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QColumnView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QColumnView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_HorizontalOffset(this, handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QColumnView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QColumnView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_VerticalOffset(this, handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QColumnView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QColumnView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QColumnView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QColumnView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QColumnView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QColumnView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QColumnView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QColumnView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QColumnView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QColumnView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
		if (handle__CreateColumn == 0) {
			return QColumnView::createColumn(rootIndex);
		}
		
		const QModelIndex& rootIndex_ret = rootIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&rootIndex_ret);

		QAbstractItemView* callback_return_value = miqt_exec_callback_QColumnView_CreateColumn(this, handle__CreateColumn, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemView* virtualbase_CreateColumn(QModelIndex* rootIndex) {

		return QColumnView::createColumn(*rootIndex);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QColumnView::keyboardSearch(search);
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

		miqt_exec_callback_QColumnView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QColumnView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QColumnView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QColumnView_SizeHintForRow(this, handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QColumnView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QColumnView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QColumnView_SizeHintForColumn(this, handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QColumnView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QColumnView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QColumnView_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QColumnView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QColumnView::reset();
			return;
		}
		

		miqt_exec_callback_QColumnView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QColumnView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QColumnView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QColumnView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QColumnView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QColumnView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QColumnView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QColumnView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QColumnView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QColumnView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QColumnView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QColumnView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QColumnView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QColumnView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QColumnView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QColumnView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QColumnView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QColumnView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QColumnView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QColumnView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QColumnView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QColumnView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QColumnView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QColumnView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QColumnView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QColumnView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QColumnView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QColumnView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QColumnView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QColumnView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QColumnView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QColumnView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QColumnView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QColumnView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QColumnView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QColumnView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QColumnView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QColumnView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QColumnView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QColumnView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QColumnView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QColumnView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QColumnView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QColumnView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QColumnView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QColumnView_SelectedIndexes(this, handle__SelectedIndexes);
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

		QModelIndexList _ret = QColumnView::selectedIndexes();
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
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QColumnView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QColumnView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QColumnView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QColumnView_SelectionCommand(this, handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QColumnView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QColumnView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QColumnView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QColumnView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QColumnView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QColumnView_ViewOptions(this, handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QColumnView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QColumnView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QColumnView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QColumnView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QColumnView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QColumnView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QColumnView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QColumnView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QColumnView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QColumnView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QColumnView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QColumnView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QColumnView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QColumnView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QColumnView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QColumnView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QColumnView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QColumnView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QColumnView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QColumnView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QColumnView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QColumnView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QColumnView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QColumnView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QColumnView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QColumnView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QColumnView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QColumnView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QColumnView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QColumnView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QColumnView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QColumnView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QColumnView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QColumnView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QColumnView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QColumnView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QColumnView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QColumnView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QColumnView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QColumnView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QColumnView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QColumnView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QColumnView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QColumnView::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QColumnView::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QColumnView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QColumnView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QColumnView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QColumnView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QColumnView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QColumnView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QColumnView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QColumnView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QColumnView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QColumnView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QColumnView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QColumnView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QColumnView_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QColumnView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QColumnView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QColumnView_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QColumnView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QColumnView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QColumnView_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QColumnView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QColumnView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QColumnView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QColumnView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QColumnView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QColumnView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QColumnView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QColumnView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QColumnView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QColumnView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QColumnView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QColumnView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QColumnView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QColumnView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QColumnView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QColumnView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QColumnView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QColumnView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QColumnView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QColumnView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QColumnView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QColumnView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QColumnView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QColumnView_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QColumnView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QColumnView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QColumnView_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QColumnView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QColumnView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QColumnView_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QColumnView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QColumnView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QColumnView_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QColumnView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QColumnView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QColumnView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QColumnView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QColumnView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QColumnView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColumnView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QColumnView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QColumnView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColumnView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QColumnView::disconnectNotify(*signal);

	}

};

QColumnView* QColumnView_new(QWidget* parent) {
	return new MiqtVirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
	return new MiqtVirtualQColumnView();
}

void QColumnView_virtbase(QColumnView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QColumnView_MetaObject(const QColumnView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColumnView_Metacast(QColumnView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColumnView_Tr(const char* s) {
	QString _ret = QColumnView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_TrUtf8(const char* s) {
	QString _ret = QColumnView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void QColumnView_connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot) {
	MiqtVirtualQColumnView::connect(self, static_cast<void (QColumnView::*)(const QModelIndex&)>(&QColumnView::updatePreviewWidget), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QColumnView_UpdatePreviewWidget(slot, sigval1);
	});
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
	return new QSize(self->sizeHint());
}

QRect* QColumnView_VisualRect(const QColumnView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_SelectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setColumnWidths(list_QList);
}

struct miqt_array /* of int */  QColumnView_ColumnWidths(const QColumnView* self) {
	QList<int> _ret = self->columnWidths();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QColumnView_Tr2(const char* s, const char* c) {
	QString _ret = QColumnView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColumnView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_TrUtf82(const char* s, const char* c) {
	QString _ret = QColumnView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QColumnView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QColumnView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QColumnView_virtualbase_IndexAt(const void* self, QPoint* point) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_IndexAt(point);
}

bool QColumnView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QColumnView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QColumnView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SizeHint();
}

bool QColumnView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QColumnView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_VisualRect(index);
}

bool QColumnView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QColumnView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetModel(model);
}

bool QColumnView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QColumnView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QColumnView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QColumnView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QColumnView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QColumnView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SelectAll();
}

bool QColumnView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QColumnView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QColumnView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QColumnView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QColumnView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QColumnView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QColumnView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QColumnView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QColumnView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QColumnView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QColumnView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QColumnView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_HorizontalOffset();
}

bool QColumnView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QColumnView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_VerticalOffset();
}

bool QColumnView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QColumnView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QColumnView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QColumnView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QColumnView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QColumnView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QColumnView_override_virtual_CreateColumn(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateColumn = slot;
	return true;
}

QAbstractItemView* QColumnView_virtualbase_CreateColumn(void* self, QModelIndex* rootIndex) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_CreateColumn(rootIndex);
}

bool QColumnView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QColumnView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QColumnView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QColumnView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QColumnView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QColumnView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QColumnView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QColumnView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QColumnView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QColumnView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_Reset();
}

bool QColumnView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QColumnView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DoItemsLayout();
}

bool QColumnView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QColumnView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QColumnView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QColumnView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QColumnView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QColumnView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QColumnView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QColumnView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_UpdateEditorData();
}

bool QColumnView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QColumnView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QColumnView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QColumnView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_UpdateGeometries();
}

bool QColumnView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QColumnView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QColumnView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QColumnView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QColumnView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QColumnView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QColumnView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QColumnView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QColumnView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QColumnView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QColumnView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QColumnView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_CommitData(editor);
}

bool QColumnView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QColumnView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QColumnView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QColumnView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SelectedIndexes();
}

bool QColumnView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QColumnView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QColumnView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QColumnView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QColumnView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QColumnView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QColumnView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QColumnView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_ViewOptions();
}

bool QColumnView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QColumnView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QColumnView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QColumnView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_Event(event);
}

bool QColumnView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QColumnView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QColumnView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QColumnView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QColumnView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QColumnView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QColumnView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QColumnView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QColumnView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QColumnView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QColumnView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QColumnView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QColumnView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QColumnView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QColumnView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QColumnView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QColumnView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QColumnView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DropEvent(event);
}

bool QColumnView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QColumnView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QColumnView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QColumnView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QColumnView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QColumnView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QColumnView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QColumnView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_TimerEvent(event);
}

bool QColumnView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QColumnView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QColumnView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QColumnView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QColumnView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QColumnView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QColumnView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QColumnView_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QColumnView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QColumnView_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_PaintEvent(param1);
}

bool QColumnView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QColumnView_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_WheelEvent(param1);
}

bool QColumnView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QColumnView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QColumnView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QColumnView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QColumnView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QColumnView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_DevType();
}

bool QColumnView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QColumnView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_SetVisible(visible);
}

bool QColumnView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QColumnView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QColumnView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QColumnView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QColumnView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QColumnView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_PaintEngine();
}

bool QColumnView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QColumnView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QColumnView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QColumnView_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_EnterEvent(event);
}

bool QColumnView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QColumnView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QColumnView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QColumnView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_MoveEvent(event);
}

bool QColumnView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QColumnView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_CloseEvent(event);
}

bool QColumnView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QColumnView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_TabletEvent(event);
}

bool QColumnView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QColumnView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ActionEvent(event);
}

bool QColumnView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QColumnView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ShowEvent(event);
}

bool QColumnView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QColumnView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_HideEvent(event);
}

bool QColumnView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QColumnView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QColumnView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QColumnView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_Metric(param1);
}

bool QColumnView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QColumnView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQColumnView*)(self) )->virtualbase_InitPainter(painter);
}

bool QColumnView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QColumnView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_Redirected(offset);
}

bool QColumnView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QColumnView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_SharedPainter();
}

bool QColumnView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QColumnView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ChildEvent(event);
}

bool QColumnView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QColumnView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_CustomEvent(event);
}

bool QColumnView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QColumnView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QColumnView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QColumnView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QColumnView_Delete(QColumnView* self) {
	delete self;
}

