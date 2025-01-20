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
#include <QHeaderView>
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
#include <QTreeView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtreeview.h>
#include "gen_qtreeview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTreeView_Expanded(intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_Collapsed(intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_SetModel(void*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QTreeView_SetRootIndex(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTreeView_KeyboardSearch(void*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QTreeView_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTreeView_IndexAt(void*, intptr_t, QPoint*);
void miqt_exec_callback_QTreeView_DoItemsLayout(void*, intptr_t);
void miqt_exec_callback_QTreeView_Reset(void*, intptr_t);
void miqt_exec_callback_QTreeView_DataChanged(void*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTreeView_SelectAll(void*, intptr_t);
void miqt_exec_callback_QTreeView_VerticalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QTreeView_RowsInserted(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTreeView_RowsAboutToBeRemoved(void*, intptr_t, QModelIndex*, int, int);
QModelIndex* miqt_exec_callback_QTreeView_MoveCursor(void*, intptr_t, int, int);
int miqt_exec_callback_QTreeView_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QTreeView_VerticalOffset(void*, intptr_t);
void miqt_exec_callback_QTreeView_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTreeView_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTreeView_SelectedIndexes(void*, intptr_t);
void miqt_exec_callback_QTreeView_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTreeView_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTreeView_DrawRow(void*, intptr_t, QPainter*, QStyleOptionViewItem*, QModelIndex*);
void miqt_exec_callback_QTreeView_DrawBranches(void*, intptr_t, QPainter*, QRect*, QModelIndex*);
void miqt_exec_callback_QTreeView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTreeView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
bool miqt_exec_callback_QTreeView_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_UpdateGeometries(void*, intptr_t);
QSize* miqt_exec_callback_QTreeView_ViewportSizeHint(void*, intptr_t);
int miqt_exec_callback_QTreeView_SizeHintForColumn(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_HorizontalScrollbarAction(void*, intptr_t, int);
bool miqt_exec_callback_QTreeView_IsIndexHidden(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTreeView_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTreeView_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
int miqt_exec_callback_QTreeView_SizeHintForRow(void*, intptr_t, int);
QVariant* miqt_exec_callback_QTreeView_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_UpdateEditorData(void*, intptr_t);
void miqt_exec_callback_QTreeView_UpdateEditorGeometries(void*, intptr_t);
void miqt_exec_callback_QTreeView_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_HorizontalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_CloseEditor(void*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTreeView_CommitData(void*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeView_EditorDestroyed(void*, intptr_t, QObject*);
bool miqt_exec_callback_QTreeView_Edit2(void*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTreeView_SelectionCommand(void*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTreeView_StartDrag(void*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QTreeView_ViewOptions(void*, intptr_t);
bool miqt_exec_callback_QTreeView_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QTreeView_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTreeView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTreeView_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTreeView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTreeView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTreeView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTreeView_EventFilter(void*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTreeView_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QTreeView_SizeHint(void*, intptr_t);
void miqt_exec_callback_QTreeView_SetupViewport(void*, intptr_t, QWidget*);
void miqt_exec_callback_QTreeView_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTreeView_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTreeView_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QTreeView_DevType(void*, intptr_t);
void miqt_exec_callback_QTreeView_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QTreeView_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QTreeView_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QTreeView_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QTreeView_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTreeView_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTreeView_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTreeView_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTreeView_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTreeView_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTreeView_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTreeView_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTreeView_Metric(void*, intptr_t, int);
void miqt_exec_callback_QTreeView_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTreeView_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTreeView_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QTreeView_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTreeView_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTreeView_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTreeView_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTreeView final : public QTreeView {
public:

	MiqtVirtualQTreeView(QWidget* parent): QTreeView(parent) {};
	MiqtVirtualQTreeView(): QTreeView() {};

	virtual ~MiqtVirtualQTreeView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QTreeView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QTreeView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QTreeView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QTreeView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTreeView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QTreeView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QTreeView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTreeView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QTreeView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
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

		miqt_exec_callback_QTreeView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTreeView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QTreeView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTreeView_VisualRect(const_cast<MiqtVirtualQTreeView*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QTreeView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QTreeView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QTreeView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QTreeView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeView_IndexAt(const_cast<MiqtVirtualQTreeView*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QTreeView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QTreeView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTreeView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QTreeView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QTreeView::reset();
			return;
		}
		

		miqt_exec_callback_QTreeView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QTreeView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QTreeView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QTreeView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTreeView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QTreeView::selectAll();
			return;
		}
		

		miqt_exec_callback_QTreeView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QTreeView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QTreeView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QTreeView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTreeView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTreeView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTreeView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QTreeView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QTreeView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QTreeView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTreeView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTreeView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QTreeView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTreeView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTreeView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QTreeView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeView_HorizontalOffset(const_cast<MiqtVirtualQTreeView*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QTreeView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QTreeView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeView_VerticalOffset(const_cast<MiqtVirtualQTreeView*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QTreeView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QTreeView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTreeView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QTreeView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QTreeView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTreeView_VisualRegionForSelection(const_cast<MiqtVirtualQTreeView*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTreeView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QTreeView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTreeView_SelectedIndexes(const_cast<MiqtVirtualQTreeView*>(this), handle__SelectedIndexes);
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

		QModelIndexList _ret = QTreeView::selectedIndexes();
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
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTreeView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTreeView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QTreeView::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QTreeView::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRow(QPainter* painter, const QStyleOptionViewItem& options, const QModelIndex& index) const override {
		if (handle__DrawRow == 0) {
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

		miqt_exec_callback_QTreeView_DrawRow(const_cast<MiqtVirtualQTreeView*>(this), handle__DrawRow, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawRow(QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) const {

		QTreeView::drawRow(painter, *options, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawBranches = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBranches(QPainter* painter, const QRect& rect, const QModelIndex& index) const override {
		if (handle__DrawBranches == 0) {
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

		miqt_exec_callback_QTreeView_DrawBranches(const_cast<MiqtVirtualQTreeView*>(this), handle__DrawBranches, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawBranches(QPainter* painter, QRect* rect, QModelIndex* index) const {

		QTreeView::drawBranches(painter, *rect, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTreeView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTreeView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTreeView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTreeView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTreeView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTreeView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTreeView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTreeView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QTreeView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QTreeView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTreeView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTreeView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QTreeView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTreeView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QTreeView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QTreeView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QTreeView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTreeView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeView_ViewportSizeHint(const_cast<MiqtVirtualQTreeView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTreeView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QTreeView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTreeView_SizeHintForColumn(const_cast<MiqtVirtualQTreeView*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QTreeView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QTreeView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QTreeView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QTreeView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTreeView_IsIndexHidden(const_cast<MiqtVirtualQTreeView*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QTreeView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QTreeView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTreeView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTreeView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QTreeView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTreeView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QTreeView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QTreeView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTreeView_SizeHintForRow(const_cast<MiqtVirtualQTreeView*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QTreeView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QTreeView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTreeView_InputMethodQuery(const_cast<MiqtVirtualQTreeView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QTreeView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QTreeView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTreeView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QTreeView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QTreeView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTreeView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QTreeView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QTreeView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTreeView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QTreeView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QTreeView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTreeView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QTreeView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QTreeView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTreeView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QTreeView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QTreeView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTreeView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QTreeView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QTreeView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTreeView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QTreeView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QTreeView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTreeView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTreeView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QTreeView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTreeView_SelectionCommand(const_cast<MiqtVirtualQTreeView*>(this), handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTreeView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QTreeView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTreeView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QTreeView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QTreeView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTreeView_ViewOptions(const_cast<MiqtVirtualQTreeView*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QTreeView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTreeView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTreeView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTreeView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTreeView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTreeView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTreeView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTreeView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTreeView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTreeView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTreeView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTreeView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTreeView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTreeView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTreeView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTreeView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTreeView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QTreeView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QTreeView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QTreeView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QTreeView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTreeView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTreeView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QTreeView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTreeView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeView_MinimumSizeHint(const_cast<MiqtVirtualQTreeView*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTreeView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTreeView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTreeView_SizeHint(const_cast<MiqtVirtualQTreeView*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTreeView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QTreeView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTreeView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QTreeView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QTreeView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTreeView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QTreeView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QTreeView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTreeView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QTreeView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QTreeView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTreeView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QTreeView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTreeView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTreeView_DevType(const_cast<MiqtVirtualQTreeView*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTreeView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTreeView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTreeView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTreeView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTreeView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTreeView_HeightForWidth(const_cast<MiqtVirtualQTreeView*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTreeView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTreeView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTreeView_HasHeightForWidth(const_cast<MiqtVirtualQTreeView*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTreeView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTreeView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTreeView_PaintEngine(const_cast<MiqtVirtualQTreeView*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTreeView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTreeView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTreeView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTreeView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QTreeView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTreeView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTreeView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTreeView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTreeView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTreeView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTreeView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTreeView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTreeView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTreeView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTreeView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QTreeView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QTreeView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTreeView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTreeView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QTreeView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTreeView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTreeView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTreeView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTreeView_Metric(const_cast<MiqtVirtualQTreeView*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTreeView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTreeView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTreeView_InitPainter(const_cast<MiqtVirtualQTreeView*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTreeView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTreeView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTreeView_Redirected(const_cast<MiqtVirtualQTreeView*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTreeView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTreeView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTreeView_SharedPainter(const_cast<MiqtVirtualQTreeView*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTreeView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTreeView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTreeView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTreeView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTreeView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTreeView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTreeView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTreeView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTreeView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTreeView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTreeView::disconnectNotify(*signal);

	}

};

QTreeView* QTreeView_new(QWidget* parent) {
	return new MiqtVirtualQTreeView(parent);
}

QTreeView* QTreeView_new2() {
	return new MiqtVirtualQTreeView();
}

void QTreeView_virtbase(QTreeView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QTreeView_MetaObject(const QTreeView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTreeView_Metacast(QTreeView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTreeView_Tr(const char* s) {
	QString _ret = QTreeView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf8(const char* s) {
	QString _ret = QTreeView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTreeView_SetRootIndex(QTreeView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QHeaderView* QTreeView_Header(const QTreeView* self) {
	return self->header();
}

void QTreeView_SetHeader(QTreeView* self, QHeaderView* header) {
	self->setHeader(header);
}

int QTreeView_AutoExpandDelay(const QTreeView* self) {
	return self->autoExpandDelay();
}

void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay) {
	self->setAutoExpandDelay(static_cast<int>(delay));
}

int QTreeView_Indentation(const QTreeView* self) {
	return self->indentation();
}

void QTreeView_SetIndentation(QTreeView* self, int i) {
	self->setIndentation(static_cast<int>(i));
}

void QTreeView_ResetIndentation(QTreeView* self) {
	self->resetIndentation();
}

bool QTreeView_RootIsDecorated(const QTreeView* self) {
	return self->rootIsDecorated();
}

void QTreeView_SetRootIsDecorated(QTreeView* self, bool show) {
	self->setRootIsDecorated(show);
}

bool QTreeView_UniformRowHeights(const QTreeView* self) {
	return self->uniformRowHeights();
}

void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform) {
	self->setUniformRowHeights(uniform);
}

bool QTreeView_ItemsExpandable(const QTreeView* self) {
	return self->itemsExpandable();
}

void QTreeView_SetItemsExpandable(QTreeView* self, bool enable) {
	self->setItemsExpandable(enable);
}

bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self) {
	return self->expandsOnDoubleClick();
}

void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable) {
	self->setExpandsOnDoubleClick(enable);
}

int QTreeView_ColumnViewportPosition(const QTreeView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTreeView_ColumnWidth(const QTreeView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

void QTreeView_SetColumnWidth(QTreeView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTreeView_ColumnAt(const QTreeView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

bool QTreeView_IsColumnHidden(const QTreeView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

bool QTreeView_IsHeaderHidden(const QTreeView* self) {
	return self->isHeaderHidden();
}

void QTreeView_SetHeaderHidden(QTreeView* self, bool hide) {
	self->setHeaderHidden(hide);
}

bool QTreeView_IsRowHidden(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isRowHidden(static_cast<int>(row), *parent);
}

void QTreeView_SetRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide) {
	self->setRowHidden(static_cast<int>(row), *parent, hide);
}

bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent) {
	return self->isFirstColumnSpanned(static_cast<int>(row), *parent);
}

void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span) {
	self->setFirstColumnSpanned(static_cast<int>(row), *parent, span);
}

bool QTreeView_IsExpanded(const QTreeView* self, QModelIndex* index) {
	return self->isExpanded(*index);
}

void QTreeView_SetExpanded(QTreeView* self, QModelIndex* index, bool expand) {
	self->setExpanded(*index, expand);
}

void QTreeView_SetSortingEnabled(QTreeView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTreeView_IsSortingEnabled(const QTreeView* self) {
	return self->isSortingEnabled();
}

void QTreeView_SetAnimated(QTreeView* self, bool enable) {
	self->setAnimated(enable);
}

bool QTreeView_IsAnimated(const QTreeView* self) {
	return self->isAnimated();
}

void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable) {
	self->setAllColumnsShowFocus(enable);
}

bool QTreeView_AllColumnsShowFocus(const QTreeView* self) {
	return self->allColumnsShowFocus();
}

void QTreeView_SetWordWrap(QTreeView* self, bool on) {
	self->setWordWrap(on);
}

bool QTreeView_WordWrap(const QTreeView* self) {
	return self->wordWrap();
}

void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex) {
	self->setTreePosition(static_cast<int>(logicalIndex));
}

int QTreeView_TreePosition(const QTreeView* self) {
	return self->treePosition();
}

void QTreeView_KeyboardSearch(QTreeView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QTreeView_VisualRect(const QTreeView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTreeView_ScrollTo(QTreeView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTreeView_IndexAt(const QTreeView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, QModelIndex* index) {
	return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_DoItemsLayout(QTreeView* self) {
	self->doItemsLayout();
}

void QTreeView_Reset(QTreeView* self) {
	self->reset();
}

void QTreeView_DataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QTreeView_SelectAll(QTreeView* self) {
	self->selectAll();
}

void QTreeView_Expanded(QTreeView* self, QModelIndex* index) {
	self->expanded(*index);
}

void QTreeView_connect_Expanded(QTreeView* self, intptr_t slot) {
	MiqtVirtualQTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::expanded), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_Expanded(slot, sigval1);
	});
}

void QTreeView_Collapsed(QTreeView* self, QModelIndex* index) {
	self->collapsed(*index);
}

void QTreeView_connect_Collapsed(QTreeView* self, intptr_t slot) {
	MiqtVirtualQTreeView::connect(self, static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::collapsed), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTreeView_Collapsed(slot, sigval1);
	});
}

void QTreeView_HideColumn(QTreeView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTreeView_ShowColumn(QTreeView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTreeView_Expand(QTreeView* self, QModelIndex* index) {
	self->expand(*index);
}

void QTreeView_Collapse(QTreeView* self, QModelIndex* index) {
	self->collapse(*index);
}

void QTreeView_ResizeColumnToContents(QTreeView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTreeView_SortByColumn(QTreeView* self, int column) {
	self->sortByColumn(static_cast<int>(column));
}

void QTreeView_SortByColumn2(QTreeView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeView_ExpandAll(QTreeView* self) {
	self->expandAll();
}

void QTreeView_ExpandRecursively(QTreeView* self, QModelIndex* index) {
	self->expandRecursively(*index);
}

void QTreeView_CollapseAll(QTreeView* self) {
	self->collapseAll();
}

void QTreeView_ExpandToDepth(QTreeView* self, int depth) {
	self->expandToDepth(static_cast<int>(depth));
}

struct miqt_string QTreeView_Tr2(const char* s, const char* c) {
	QString _ret = QTreeView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTreeView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf82(const char* s, const char* c) {
	QString _ret = QTreeView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTreeView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTreeView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTreeView_ExpandRecursively2(QTreeView* self, QModelIndex* index, int depth) {
	self->expandRecursively(*index, static_cast<int>(depth));
}

bool QTreeView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QTreeView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetModel(model);
}

bool QTreeView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QTreeView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QTreeView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QTreeView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QTreeView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QTreeView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QTreeView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QTreeView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_VisualRect(index);
}

bool QTreeView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QTreeView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QTreeView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QTreeView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_IndexAt(p);
}

bool QTreeView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QTreeView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DoItemsLayout();
}

bool QTreeView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QTreeView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_Reset();
}

bool QTreeView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QTreeView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QTreeView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QTreeView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SelectAll();
}

bool QTreeView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QTreeView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QTreeView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QTreeView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QTreeView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QTreeView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QTreeView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QTreeView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QTreeView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QTreeView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QTreeView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QTreeView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_HorizontalOffset();
}

bool QTreeView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QTreeView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_VerticalOffset();
}

bool QTreeView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QTreeView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QTreeView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QTreeView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QTreeView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTreeView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SelectedIndexes();
}

bool QTreeView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTreeView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_TimerEvent(event);
}

bool QTreeView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTreeView_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_PaintEvent(event);
}

bool QTreeView_override_virtual_DrawRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawRow = slot;
	return true;
}

void QTreeView_virtualbase_DrawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
	( (const MiqtVirtualQTreeView*)(self) )->virtualbase_DrawRow(painter, options, index);
}

bool QTreeView_override_virtual_DrawBranches(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawBranches = slot;
	return true;
}

void QTreeView_virtualbase_DrawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index) {
	( (const MiqtVirtualQTreeView*)(self) )->virtualbase_DrawBranches(painter, rect, index);
}

bool QTreeView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTreeView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTreeView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTreeView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTreeView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTreeView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTreeView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTreeView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTreeView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTreeView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QTreeView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTreeView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTreeView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QTreeView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QTreeView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QTreeView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_UpdateGeometries();
}

bool QTreeView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QTreeView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QTreeView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QTreeView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QTreeView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QTreeView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QTreeView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QTreeView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QTreeView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QTreeView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QTreeView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QTreeView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QTreeView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QTreeView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTreeView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QTreeView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QTreeView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_UpdateEditorData();
}

bool QTreeView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QTreeView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QTreeView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QTreeView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QTreeView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QTreeView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QTreeView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QTreeView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QTreeView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QTreeView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_CommitData(editor);
}

bool QTreeView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QTreeView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QTreeView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QTreeView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QTreeView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QTreeView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QTreeView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QTreeView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QTreeView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QTreeView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_ViewOptions();
}

bool QTreeView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTreeView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTreeView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTreeView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_Event(event);
}

bool QTreeView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTreeView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTreeView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTreeView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTreeView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTreeView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DropEvent(event);
}

bool QTreeView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTreeView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTreeView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTreeView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTreeView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTreeView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QTreeView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTreeView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QTreeView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTreeView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QTreeView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTreeView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTreeView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SizeHint();
}

bool QTreeView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QTreeView_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QTreeView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTreeView_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_WheelEvent(param1);
}

bool QTreeView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTreeView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QTreeView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTreeView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QTreeView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTreeView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_DevType();
}

bool QTreeView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTreeView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_SetVisible(visible);
}

bool QTreeView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTreeView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QTreeView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTreeView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTreeView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTreeView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_PaintEngine();
}

bool QTreeView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTreeView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QTreeView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTreeView_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_EnterEvent(event);
}

bool QTreeView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTreeView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTreeView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTreeView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_MoveEvent(event);
}

bool QTreeView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTreeView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_CloseEvent(event);
}

bool QTreeView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTreeView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_TabletEvent(event);
}

bool QTreeView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTreeView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ActionEvent(event);
}

bool QTreeView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTreeView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ShowEvent(event);
}

bool QTreeView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTreeView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_HideEvent(event);
}

bool QTreeView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTreeView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTreeView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTreeView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTreeView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_Metric(param1);
}

bool QTreeView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTreeView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTreeView*)(self) )->virtualbase_InitPainter(painter);
}

bool QTreeView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTreeView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_Redirected(offset);
}

bool QTreeView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTreeView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTreeView*)(self) )->virtualbase_SharedPainter();
}

bool QTreeView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTreeView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ChildEvent(event);
}

bool QTreeView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTreeView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_CustomEvent(event);
}

bool QTreeView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTreeView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTreeView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTreeView* self_cast = dynamic_cast<MiqtVirtualQTreeView*>( (QTreeView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTreeView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTreeView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTreeView_Delete(QTreeView* self) {
	delete self;
}

