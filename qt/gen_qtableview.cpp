#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHeaderView>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
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
#include <QTableView>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qtableview.h>
#include "gen_qtableview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTableView_SetModel(void*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QTableView_SetRootIndex(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableView_DoItemsLayout(void*, intptr_t);
QRect* miqt_exec_callback_QTableView_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableView_IndexAt(void*, intptr_t, QPoint*);
void miqt_exec_callback_QTableView_ScrollContentsBy(void*, intptr_t, int, int);
QStyleOptionViewItem* miqt_exec_callback_QTableView_ViewOptions(void*, intptr_t);
void miqt_exec_callback_QTableView_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableView_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableView_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QTableView_VerticalOffset(void*, intptr_t);
QModelIndex* miqt_exec_callback_QTableView_MoveCursor(void*, intptr_t, int, int);
void miqt_exec_callback_QTableView_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableView_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableView_SelectedIndexes(void*, intptr_t);
void miqt_exec_callback_QTableView_UpdateGeometries(void*, intptr_t);
QSize* miqt_exec_callback_QTableView_ViewportSizeHint(void*, intptr_t);
int miqt_exec_callback_QTableView_SizeHintForRow(void*, intptr_t, int);
int miqt_exec_callback_QTableView_SizeHintForColumn(void*, intptr_t, int);
void miqt_exec_callback_QTableView_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QTableView_HorizontalScrollbarAction(void*, intptr_t, int);
bool miqt_exec_callback_QTableView_IsIndexHidden(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableView_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QTableView_KeyboardSearch(void*, intptr_t, struct miqt_string);
QVariant* miqt_exec_callback_QTableView_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QTableView_Reset(void*, intptr_t);
void miqt_exec_callback_QTableView_SelectAll(void*, intptr_t);
void miqt_exec_callback_QTableView_DataChanged(void*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTableView_RowsInserted(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableView_RowsAboutToBeRemoved(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableView_UpdateEditorData(void*, intptr_t);
void miqt_exec_callback_QTableView_UpdateEditorGeometries(void*, intptr_t);
void miqt_exec_callback_QTableView_VerticalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QTableView_HorizontalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QTableView_CloseEditor(void*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTableView_CommitData(void*, intptr_t, QWidget*);
void miqt_exec_callback_QTableView_EditorDestroyed(void*, intptr_t, QObject*);
bool miqt_exec_callback_QTableView_Edit2(void*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTableView_SelectionCommand(void*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTableView_StartDrag(void*, intptr_t, int);
bool miqt_exec_callback_QTableView_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QTableView_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QTableView_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTableView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTableView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTableView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTableView_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTableView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTableView_EventFilter(void*, intptr_t, QObject*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTableView final : public QTableView {
public:

	MiqtVirtualQTableView(QWidget* parent): QTableView(parent) {};
	MiqtVirtualQTableView(): QTableView() {};

	virtual ~MiqtVirtualQTableView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QTableView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QTableView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QTableView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QTableView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTableView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QTableView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QTableView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTableView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QTableView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QTableView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTableView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QTableView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QTableView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTableView_VisualRect(const_cast<MiqtVirtualQTableView*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QTableView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QTableView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QTableView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QTableView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableView_IndexAt(const_cast<MiqtVirtualQTableView*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QTableView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTableView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTableView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTableView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QTableView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTableView_ViewOptions(const_cast<MiqtVirtualQTableView*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QTableView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QTableView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTableView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QTableView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTableView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTableView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTableView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QTableView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableView_HorizontalOffset(const_cast<MiqtVirtualQTableView*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QTableView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QTableView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableView_VerticalOffset(const_cast<MiqtVirtualQTableView*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QTableView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QTableView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTableView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QTableView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTableView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QTableView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QTableView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTableView_VisualRegionForSelection(const_cast<MiqtVirtualQTableView*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTableView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QTableView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableView_SelectedIndexes(const_cast<MiqtVirtualQTableView*>(this), handle__SelectedIndexes);
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

		QModelIndexList _ret = QTableView::selectedIndexes();
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
			QTableView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTableView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QTableView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTableView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableView_ViewportSizeHint(const_cast<MiqtVirtualQTableView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTableView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QTableView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTableView_SizeHintForRow(const_cast<MiqtVirtualQTableView*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QTableView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QTableView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTableView_SizeHintForColumn(const_cast<MiqtVirtualQTableView*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QTableView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QTableView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QTableView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QTableView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QTableView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QTableView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTableView_IsIndexHidden(const_cast<MiqtVirtualQTableView*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QTableView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QTableView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTableView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTableView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QTableView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTableView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QTableView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QTableView::keyboardSearch(search);
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

		miqt_exec_callback_QTableView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTableView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QTableView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTableView_InputMethodQuery(const_cast<MiqtVirtualQTableView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QTableView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QTableView::reset();
			return;
		}
		

		miqt_exec_callback_QTableView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QTableView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QTableView::selectAll();
			return;
		}
		

		miqt_exec_callback_QTableView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QTableView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QTableView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QTableView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTableView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QTableView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QTableView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QTableView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTableView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QTableView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTableView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QTableView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QTableView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTableView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QTableView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QTableView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QTableView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QTableView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QTableView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QTableView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QTableView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QTableView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTableView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QTableView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QTableView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTableView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QTableView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__Edit2 == 0) {
			return QTableView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTableView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QTableView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTableView_SelectionCommand(const_cast<MiqtVirtualQTableView*>(this), handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTableView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QTableView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTableView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QTableView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTableView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTableView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTableView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTableView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTableView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QTableView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QTableView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTableView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTableView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTableView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTableView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTableView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTableView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTableView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTableView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTableView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTableView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTableView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTableView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTableView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTableView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTableView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTableView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTableView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTableView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTableView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTableView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTableView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTableView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTableView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QTableView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QTableView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QTableView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTableView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QTableView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QTableView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTableView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QTableView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTableView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QTableView::eventFilter(object, event);

	}

};

QTableView* QTableView_new(QWidget* parent) {
	return new MiqtVirtualQTableView(parent);
}

QTableView* QTableView_new2() {
	return new MiqtVirtualQTableView();
}

void QTableView_virtbase(QTableView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QTableView_MetaObject(const QTableView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableView_Metacast(QTableView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableView_Tr(const char* s) {
	QString _ret = QTableView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_TrUtf8(const char* s) {
	QString _ret = QTableView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableView_SetModel(QTableView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTableView_SetRootIndex(QTableView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTableView_DoItemsLayout(QTableView* self) {
	self->doItemsLayout();
}

QHeaderView* QTableView_HorizontalHeader(const QTableView* self) {
	return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(const QTableView* self) {
	return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
	self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
	self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(const QTableView* self, int row) {
	return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_RowAt(const QTableView* self, int y) {
	return self->rowAt(static_cast<int>(y));
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
	self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_RowHeight(const QTableView* self, int row) {
	return self->rowHeight(static_cast<int>(row));
}

int QTableView_ColumnViewportPosition(const QTableView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_ColumnAt(const QTableView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_ColumnWidth(const QTableView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

bool QTableView_IsRowHidden(const QTableView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_IsColumnHidden(const QTableView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(const QTableView* self) {
	return self->isSortingEnabled();
}

bool QTableView_ShowGrid(const QTableView* self) {
	return self->showGrid();
}

int QTableView_GridStyle(const QTableView* self) {
	Qt::PenStyle _ret = self->gridStyle();
	return static_cast<int>(_ret);
}

void QTableView_SetGridStyle(QTableView* self, int style) {
	self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
	self->setWordWrap(on);
}

bool QTableView_WordWrap(const QTableView* self) {
	return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
	self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(const QTableView* self) {
	return self->isCornerButtonEnabled();
}

QRect* QTableView_VisualRect(const QTableView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTableView_ScrollTo(QTableView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTableView_IndexAt(const QTableView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
	self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_RowSpan(const QTableView* self, int row, int column) {
	return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_ColumnSpan(const QTableView* self, int row, int column) {
	return self->columnSpan(static_cast<int>(row), static_cast<int>(column));
}

void QTableView_ClearSpans(QTableView* self) {
	self->clearSpans();
}

void QTableView_SelectRow(QTableView* self, int row) {
	self->selectRow(static_cast<int>(row));
}

void QTableView_SelectColumn(QTableView* self, int column) {
	self->selectColumn(static_cast<int>(column));
}

void QTableView_HideRow(QTableView* self, int row) {
	self->hideRow(static_cast<int>(row));
}

void QTableView_HideColumn(QTableView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTableView_ShowRow(QTableView* self, int row) {
	self->showRow(static_cast<int>(row));
}

void QTableView_ShowColumn(QTableView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTableView_ResizeRowToContents(QTableView* self, int row) {
	self->resizeRowToContents(static_cast<int>(row));
}

void QTableView_ResizeRowsToContents(QTableView* self) {
	self->resizeRowsToContents();
}

void QTableView_ResizeColumnToContents(QTableView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTableView_ResizeColumnsToContents(QTableView* self) {
	self->resizeColumnsToContents();
}

void QTableView_SortByColumn(QTableView* self, int column) {
	self->sortByColumn(static_cast<int>(column));
}

void QTableView_SortByColumn2(QTableView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
	self->setShowGrid(show);
}

struct miqt_string QTableView_Tr2(const char* s, const char* c) {
	QString _ret = QTableView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_TrUtf82(const char* s, const char* c) {
	QString _ret = QTableView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTableView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QTableView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SetModel(model);
}

bool QTableView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QTableView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QTableView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QTableView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QTableView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QTableView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DoItemsLayout();
}

bool QTableView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QTableView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_VisualRect(index);
}

bool QTableView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QTableView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QTableView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QTableView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_IndexAt(p);
}

bool QTableView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QTableView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QTableView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QTableView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_ViewOptions();
}

bool QTableView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTableView_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_PaintEvent(e);
}

bool QTableView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTableView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_TimerEvent(event);
}

bool QTableView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QTableView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_HorizontalOffset();
}

bool QTableView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QTableView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_VerticalOffset();
}

bool QTableView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QTableView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

bool QTableView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QTableView_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SetSelection(rect, command);
}

bool QTableView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QTableView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QTableView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTableView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_SelectedIndexes();
}

bool QTableView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QTableView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_UpdateGeometries();
}

bool QTableView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QTableView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QTableView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QTableView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QTableView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QTableView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QTableView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QTableView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QTableView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QTableView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QTableView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QTableView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QTableView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QTableView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QTableView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QTableView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QTableView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QTableView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QTableView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTableView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QTableView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QTableView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_Reset();
}

bool QTableView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QTableView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_SelectAll();
}

bool QTableView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QTableView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QTableView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QTableView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QTableView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QTableView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QTableView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QTableView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_UpdateEditorData();
}

bool QTableView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QTableView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QTableView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QTableView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QTableView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QTableView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QTableView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QTableView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QTableView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QTableView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_CommitData(editor);
}

bool QTableView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QTableView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QTableView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QTableView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QTableView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QTableView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QTableView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QTableView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QTableView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTableView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTableView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTableView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_Event(event);
}

bool QTableView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QTableView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QTableView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTableView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTableView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTableView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTableView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTableView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTableView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTableView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTableView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTableView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTableView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTableView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTableView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTableView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTableView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTableView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_DropEvent(event);
}

bool QTableView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTableView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTableView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTableView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTableView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTableView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QTableView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTableView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QTableView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTableView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QTableView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTableView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_EventFilter(object, event);
}

void QTableView_Delete(QTableView* self) {
	delete self;
}

