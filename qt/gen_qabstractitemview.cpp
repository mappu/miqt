#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
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
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractitemview.h>
#include "gen_qabstractitemview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractItemView_Pressed(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_Clicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_DoubleClicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_Activated(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_Entered(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_ViewportEntered(intptr_t);
void miqt_exec_callback_QAbstractItemView_IconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QAbstractItemView_SetModel(void*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QAbstractItemView_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QAbstractItemView_KeyboardSearch(void*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QAbstractItemView_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QAbstractItemView_IndexAt(void*, intptr_t, QPoint*);
int miqt_exec_callback_QAbstractItemView_SizeHintForRow(void*, intptr_t, int);
int miqt_exec_callback_QAbstractItemView_SizeHintForColumn(void*, intptr_t, int);
QVariant* miqt_exec_callback_QAbstractItemView_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_Reset(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_SetRootIndex(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_DoItemsLayout(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_SelectAll(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_DataChanged(void*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemView_RowsInserted(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_RowsAboutToBeRemoved(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QAbstractItemView_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_UpdateEditorData(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_UpdateEditorGeometries(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_UpdateGeometries(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_HorizontalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_VerticalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_HorizontalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_CloseEditor(void*, intptr_t, QWidget*, int);
void miqt_exec_callback_QAbstractItemView_CommitData(void*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_EditorDestroyed(void*, intptr_t, QObject*);
QModelIndex* miqt_exec_callback_QAbstractItemView_MoveCursor(void*, intptr_t, int, int);
int miqt_exec_callback_QAbstractItemView_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QAbstractItemView_VerticalOffset(void*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_IsIndexHidden(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QAbstractItemView_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemView_SelectedIndexes(void*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_Edit2(void*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QAbstractItemView_SelectionCommand(void*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QAbstractItemView_StartDrag(void*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QAbstractItemView_ViewOptions(void*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QAbstractItemView_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemView_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractItemView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractItemView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractItemView_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractItemView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractItemView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractItemView_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QAbstractItemView_EventFilter(void*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QAbstractItemView_ViewportSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_SizeHint(void*, intptr_t);
void miqt_exec_callback_QAbstractItemView_SetupViewport(void*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractItemView_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractItemView_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractItemView_ScrollContentsBy(void*, intptr_t, int, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractItemView final : public QAbstractItemView {
public:

	MiqtVirtualQAbstractItemView(QWidget* parent): QAbstractItemView(parent) {};
	MiqtVirtualQAbstractItemView(): QAbstractItemView() {};

	virtual ~MiqtVirtualQAbstractItemView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QAbstractItemView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QAbstractItemView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QAbstractItemView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QAbstractItemView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QAbstractItemView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QAbstractItemView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
			QAbstractItemView::keyboardSearch(search);
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

		miqt_exec_callback_QAbstractItemView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QAbstractItemView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QAbstractItemView_VisualRect(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QAbstractItemView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (handle__IndexAt == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_IndexAt(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QAbstractItemView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_SizeHintForRow(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QAbstractItemView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QAbstractItemView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_SizeHintForColumn(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QAbstractItemView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractItemView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemView_InputMethodQuery(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QAbstractItemView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QAbstractItemView::reset();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QAbstractItemView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QAbstractItemView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QAbstractItemView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QAbstractItemView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QAbstractItemView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QAbstractItemView::selectAll();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QAbstractItemView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
			QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
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

		miqt_exec_callback_QAbstractItemView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QAbstractItemView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QAbstractItemView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QAbstractItemView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QAbstractItemView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QAbstractItemView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QAbstractItemView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QAbstractItemView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QAbstractItemView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QAbstractItemView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QAbstractItemView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QAbstractItemView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QAbstractItemView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QAbstractItemView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QAbstractItemView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QAbstractItemView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QAbstractItemView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QAbstractItemView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QAbstractItemView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QAbstractItemView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QAbstractItemView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QAbstractItemView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QAbstractItemView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QAbstractItemView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QAbstractItemView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QAbstractItemView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QAbstractItemView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QAbstractItemView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QAbstractItemView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QAbstractItemView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QAbstractItemView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QAbstractItemView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QAbstractItemView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QAbstractItemView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QAbstractItemView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QAbstractItemView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QAbstractItemView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QAbstractItemView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QAbstractItemView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QAbstractItemView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemView_HorizontalOffset(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemView_VerticalOffset(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_IsIndexHidden(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QAbstractItemView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QRegion(); // Pure virtual, there is no base we can call
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QAbstractItemView_VisualRegionForSelection(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QAbstractItemView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemView_SelectedIndexes(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__SelectedIndexes);
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

		QModelIndexList _ret = QAbstractItemView::selectedIndexes();
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
			return QAbstractItemView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QAbstractItemView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QAbstractItemView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_SelectionCommand(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QAbstractItemView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QAbstractItemView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QAbstractItemView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QAbstractItemView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QAbstractItemView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QAbstractItemView_ViewOptions(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QAbstractItemView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QAbstractItemView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QAbstractItemView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractItemView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractItemView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QAbstractItemView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QAbstractItemView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QAbstractItemView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QAbstractItemView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractItemView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QAbstractItemView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractItemView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QAbstractItemView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractItemView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractItemView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractItemView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QAbstractItemView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractItemView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QAbstractItemView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractItemView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractItemView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractItemView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QAbstractItemView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QAbstractItemView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QAbstractItemView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractItemView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QAbstractItemView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractItemView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QAbstractItemView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QAbstractItemView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QAbstractItemView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractItemView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractItemView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractItemView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QAbstractItemView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractItemView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QAbstractItemView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QAbstractItemView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_ViewportSizeHint(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QAbstractItemView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractItemView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_MinimumSizeHint(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractItemView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractItemView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_SizeHint(const_cast<MiqtVirtualQAbstractItemView*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractItemView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QAbstractItemView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QAbstractItemView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QAbstractItemView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QAbstractItemView::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QAbstractItemView::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QAbstractItemView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QAbstractItemView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractItemView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QAbstractItemView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QAbstractItemView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QAbstractItemView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QAbstractItemView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

};

QAbstractItemView* QAbstractItemView_new(QWidget* parent) {
	return new MiqtVirtualQAbstractItemView(parent);
}

QAbstractItemView* QAbstractItemView_new2() {
	return new MiqtVirtualQAbstractItemView();
}

void QAbstractItemView_virtbase(QAbstractItemView* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QAbstractItemView_MetaObject(const QAbstractItemView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemView_Metacast(QAbstractItemView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemView_Tr(const char* s) {
	QString _ret = QAbstractItemView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_TrUtf8(const char* s) {
	QString _ret = QAbstractItemView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self) {
	return self->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_SelectionModel(const QAbstractItemView* self) {
	return self->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(const QAbstractItemView* self) {
	return self->itemDelegate();
}

void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, int mode) {
	self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_SelectionMode(const QAbstractItemView* self) {
	QAbstractItemView::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, int behavior) {
	self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_SelectionBehavior(const QAbstractItemView* self) {
	QAbstractItemView::SelectionBehavior _ret = self->selectionBehavior();
	return static_cast<int>(_ret);
}

QModelIndex* QAbstractItemView_CurrentIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_RootIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers) {
	self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_EditTriggers(const QAbstractItemView* self) {
	QAbstractItemView::EditTriggers _ret = self->editTriggers();
	return static_cast<int>(_ret);
}

void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, int mode) {
	self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_VerticalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->verticalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, int mode) {
	self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_HorizontalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->horizontalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(const QAbstractItemView* self) {
	return self->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_AutoScrollMargin(const QAbstractItemView* self) {
	return self->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(const QAbstractItemView* self) {
	return self->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(const QAbstractItemView* self) {
	return self->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(const QAbstractItemView* self) {
	return self->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(const QAbstractItemView* self) {
	return self->dragDropOverwriteMode();
}

void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, int behavior) {
	self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_DragDropMode(const QAbstractItemView* self) {
	QAbstractItemView::DragDropMode _ret = self->dragDropMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, int dropAction) {
	self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_DefaultDropAction(const QAbstractItemView* self) {
	Qt::DropAction _ret = self->defaultDropAction();
	return static_cast<int>(_ret);
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(const QAbstractItemView* self) {
	return self->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(const QAbstractItemView* self) {
	return new QSize(self->iconSize());
}

void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, int mode) {
	self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_TextElideMode(const QAbstractItemView* self) {
	Qt::TextElideMode _ret = self->textElideMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, QModelIndex* index) {
	return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row) {
	return self->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column) {
	return self->sizeHintForColumn(static_cast<int>(column));
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index) {
	return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(const QAbstractItemView* self, QModelIndex* index) {
	return self->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(const QAbstractItemView* self, int row) {
	return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(const QAbstractItemView* self, int column) {
	return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index) {
	return self->itemDelegate(*index);
}

QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

void QAbstractItemView_Reset(QAbstractItemView* self) {
	self->reset();
}

void QAbstractItemView_SetRootIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
	self->doItemsLayout();
}

void QAbstractItemView_SelectAll(QAbstractItemView* self) {
	self->selectAll();
}

void QAbstractItemView_Edit(QAbstractItemView* self, QModelIndex* index) {
	self->edit(*index);
}

void QAbstractItemView_ClearSelection(QAbstractItemView* self) {
	self->clearSelection();
}

void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setCurrentIndex(*index);
}

void QAbstractItemView_ScrollToTop(QAbstractItemView* self) {
	self->scrollToTop();
}

void QAbstractItemView_ScrollToBottom(QAbstractItemView* self) {
	self->scrollToBottom();
}

void QAbstractItemView_Update(QAbstractItemView* self, QModelIndex* index) {
	self->update(*index);
}

void QAbstractItemView_Pressed(QAbstractItemView* self, QModelIndex* index) {
	self->pressed(*index);
}

void QAbstractItemView_connect_Pressed(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::pressed), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_Pressed(slot, sigval1);
	});
}

void QAbstractItemView_Clicked(QAbstractItemView* self, QModelIndex* index) {
	self->clicked(*index);
}

void QAbstractItemView_connect_Clicked(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::clicked), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_Clicked(slot, sigval1);
	});
}

void QAbstractItemView_DoubleClicked(QAbstractItemView* self, QModelIndex* index) {
	self->doubleClicked(*index);
}

void QAbstractItemView_connect_DoubleClicked(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::doubleClicked), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_DoubleClicked(slot, sigval1);
	});
}

void QAbstractItemView_Activated(QAbstractItemView* self, QModelIndex* index) {
	self->activated(*index);
}

void QAbstractItemView_connect_Activated(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::activated), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_Activated(slot, sigval1);
	});
}

void QAbstractItemView_Entered(QAbstractItemView* self, QModelIndex* index) {
	self->entered(*index);
}

void QAbstractItemView_connect_Entered(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::entered), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_Entered(slot, sigval1);
	});
}

void QAbstractItemView_ViewportEntered(QAbstractItemView* self) {
	self->viewportEntered();
}

void QAbstractItemView_connect_ViewportEntered(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)()>(&QAbstractItemView::viewportEntered), self, [=]() {
		miqt_exec_callback_QAbstractItemView_ViewportEntered(slot);
	});
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, QSize* size) {
	self->iconSizeChanged(*size);
}

void QAbstractItemView_connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QSize&)>(&QAbstractItemView::iconSizeChanged), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QAbstractItemView_IconSizeChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractItemView_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QAbstractItemView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SetModel(model);
}

bool QAbstractItemView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QAbstractItemView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QAbstractItemView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QAbstractItemView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QAbstractItemView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

bool QAbstractItemView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

bool QAbstractItemView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

bool QAbstractItemView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QAbstractItemView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QAbstractItemView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QAbstractItemView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QAbstractItemView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QAbstractItemView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QAbstractItemView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QAbstractItemView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_Reset();
}

bool QAbstractItemView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QAbstractItemView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QAbstractItemView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QAbstractItemView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DoItemsLayout();
}

bool QAbstractItemView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QAbstractItemView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SelectAll();
}

bool QAbstractItemView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QAbstractItemView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QAbstractItemView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QAbstractItemView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QAbstractItemView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QAbstractItemView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QAbstractItemView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_CurrentChanged(current, previous);
}

bool QAbstractItemView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QAbstractItemView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_UpdateEditorData();
}

bool QAbstractItemView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QAbstractItemView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QAbstractItemView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QAbstractItemView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_UpdateGeometries();
}

bool QAbstractItemView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QAbstractItemView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QAbstractItemView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QAbstractItemView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QAbstractItemView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QAbstractItemView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QAbstractItemView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QAbstractItemView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QAbstractItemView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QAbstractItemView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_CommitData(editor);
}

bool QAbstractItemView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QAbstractItemView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QAbstractItemView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

bool QAbstractItemView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

bool QAbstractItemView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

bool QAbstractItemView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QAbstractItemView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

bool QAbstractItemView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

bool QAbstractItemView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SelectedIndexes();
}

bool QAbstractItemView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QAbstractItemView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QAbstractItemView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QAbstractItemView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QAbstractItemView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QAbstractItemView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QAbstractItemView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QAbstractItemView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ViewOptions();
}

bool QAbstractItemView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QAbstractItemView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QAbstractItemView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractItemView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_Event(event);
}

bool QAbstractItemView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QAbstractItemView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QAbstractItemView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QAbstractItemView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QAbstractItemView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QAbstractItemView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QAbstractItemView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QAbstractItemView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QAbstractItemView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QAbstractItemView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_DropEvent(event);
}

bool QAbstractItemView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QAbstractItemView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QAbstractItemView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QAbstractItemView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QAbstractItemView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractItemView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QAbstractItemView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractItemView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QAbstractItemView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QAbstractItemView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QAbstractItemView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SizeHint();
}

bool QAbstractItemView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QAbstractItemView_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QAbstractItemView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_PaintEvent(param1);
}

bool QAbstractItemView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_WheelEvent(param1);
}

bool QAbstractItemView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QAbstractItemView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QAbstractItemView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
	delete self;
}

