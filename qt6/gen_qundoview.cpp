#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFrame>
#include <QIcon>
#include <QItemSelection>
#include <QList>
#include <QListView>
#include <QMetaObject>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QWheelEvent>
#include <QWidget>
#include <qundoview.h>
#include "gen_qundoview.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQUndoView : public virtual QUndoView {
public:

	MiqtVirtualQUndoView(QWidget* parent): QUndoView(parent) {};
	MiqtVirtualQUndoView(): QUndoView() {};
	MiqtVirtualQUndoView(QUndoStack* stack): QUndoView(stack) {};
	MiqtVirtualQUndoView(QUndoGroup* group): QUndoView(group) {};
	MiqtVirtualQUndoView(QUndoStack* stack, QWidget* parent): QUndoView(stack, parent) {};
	MiqtVirtualQUndoView(QUndoGroup* group, QWidget* parent): QUndoView(group, parent) {};

	virtual ~MiqtVirtualQUndoView() = default;

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
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
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

		miqt_exec_callback_QUndoView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
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
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QUndoView::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QUndoView_InitViewItemOption(const_cast<MiqtVirtualQUndoView*>(this), handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QUndoView::initViewItemOption(option);

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

void QUndoView_override_virtual_VisualRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__VisualRect = slot;
}

QRect* QUndoView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VisualRect(index);
}

void QUndoView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__ScrollTo = slot;
}

void QUndoView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ScrollTo(index, hint);
}

void QUndoView_override_virtual_IndexAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__IndexAt = slot;
}

QModelIndex* QUndoView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_IndexAt(p);
}

void QUndoView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__DoItemsLayout = slot;
}

void QUndoView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DoItemsLayout();
}

void QUndoView_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__Reset = slot;
}

void QUndoView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_Reset();
}

void QUndoView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__SetRootIndex = slot;
}

void QUndoView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetRootIndex(index);
}

void QUndoView_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__Event = slot;
}

bool QUndoView_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_Event(e);
}

void QUndoView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__ScrollContentsBy = slot;
}

void QUndoView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QUndoView_override_virtual_DataChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__DataChanged = slot;
}

void QUndoView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

void QUndoView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__RowsInserted = slot;
}

void QUndoView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

void QUndoView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__RowsAboutToBeRemoved = slot;
}

void QUndoView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

void QUndoView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__MouseMoveEvent = slot;
}

void QUndoView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QUndoView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__MouseReleaseEvent = slot;
}

void QUndoView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QUndoView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__WheelEvent = slot;
}

void QUndoView_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_WheelEvent(e);
}

void QUndoView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__TimerEvent = slot;
}

void QUndoView_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_TimerEvent(e);
}

void QUndoView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__ResizeEvent = slot;
}

void QUndoView_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_ResizeEvent(e);
}

void QUndoView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__DragMoveEvent = slot;
}

void QUndoView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DragMoveEvent(e);
}

void QUndoView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__DragLeaveEvent = slot;
}

void QUndoView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QUndoView_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__DropEvent = slot;
}

void QUndoView_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_DropEvent(e);
}

void QUndoView_override_virtual_StartDrag(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__StartDrag = slot;
}

void QUndoView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_StartDrag(supportedActions);
}

void QUndoView_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__InitViewItemOption = slot;
}

void QUndoView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQUndoView*)(self) )->virtualbase_InitViewItemOption(option);
}

void QUndoView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__PaintEvent = slot;
}

void QUndoView_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_PaintEvent(e);
}

void QUndoView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__HorizontalOffset = slot;
}

int QUndoView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_HorizontalOffset();
}

void QUndoView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__VerticalOffset = slot;
}

int QUndoView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VerticalOffset();
}

void QUndoView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__MoveCursor = slot;
}

QModelIndex* QUndoView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQUndoView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

void QUndoView_override_virtual_SetSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__SetSelection = slot;
}

void QUndoView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SetSelection(rect, command);
}

void QUndoView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__VisualRegionForSelection = slot;
}

QRegion* QUndoView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

void QUndoView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__SelectedIndexes = slot;
}

struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_SelectedIndexes();
}

void QUndoView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__UpdateGeometries = slot;
}

void QUndoView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_UpdateGeometries();
}

void QUndoView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__IsIndexHidden = slot;
}

bool QUndoView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_IsIndexHidden(index);
}

void QUndoView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__SelectionChanged = slot;
}

void QUndoView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

void QUndoView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__CurrentChanged = slot;
}

void QUndoView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQUndoView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

void QUndoView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QUndoView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQUndoView*)(self) )->virtualbase_ViewportSizeHint();
}

void QUndoView_Delete(QUndoView* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQUndoView*>( self );
	} else {
		delete self;
	}
}

