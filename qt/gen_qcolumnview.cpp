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
#include <qcolumnview.h>
#include "gen_qcolumnview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QColumnView_updatePreviewWidget(intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_indexAt(const QColumnView*, intptr_t, QPoint*);
void miqt_exec_callback_QColumnView_scrollTo(QColumnView*, intptr_t, QModelIndex*, int);
QSize* miqt_exec_callback_QColumnView_sizeHint(const QColumnView*, intptr_t);
QRect* miqt_exec_callback_QColumnView_visualRect(const QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_setModel(QColumnView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QColumnView_setSelectionModel(QColumnView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QColumnView_setRootIndex(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_selectAll(QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_isIndexHidden(const QColumnView*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_moveCursor(QColumnView*, intptr_t, int, int);
void miqt_exec_callback_QColumnView_resizeEvent(QColumnView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColumnView_setSelection(QColumnView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QColumnView_visualRegionForSelection(const QColumnView*, intptr_t, QItemSelection*);
int miqt_exec_callback_QColumnView_horizontalOffset(const QColumnView*, intptr_t);
int miqt_exec_callback_QColumnView_verticalOffset(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_rowsInserted(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_currentChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QColumnView_scrollContentsBy(QColumnView*, intptr_t, int, int);
QAbstractItemView* miqt_exec_callback_QColumnView_createColumn(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_keyboardSearch(QColumnView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QColumnView_sizeHintForRow(const QColumnView*, intptr_t, int);
int miqt_exec_callback_QColumnView_sizeHintForColumn(const QColumnView*, intptr_t, int);
QVariant* miqt_exec_callback_QColumnView_inputMethodQuery(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_reset(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_doItemsLayout(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_dataChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QColumnView_rowsAboutToBeRemoved(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_selectionChanged(QColumnView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QColumnView_updateEditorData(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_updateEditorGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_updateGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_verticalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_horizontalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_verticalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_closeEditor(QColumnView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QColumnView_commitData(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_editorDestroyed(QColumnView*, intptr_t, QObject*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QColumnView_selectedIndexes(const QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_edit2(QColumnView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QColumnView_selectionCommand(const QColumnView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QColumnView_startDrag(QColumnView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QColumnView_viewOptions(const QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_focusNextPrevChild(QColumnView*, intptr_t, bool);
bool miqt_exec_callback_QColumnView_event(QColumnView*, intptr_t, QEvent*);
bool miqt_exec_callback_QColumnView_viewportEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_mousePressEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseMoveEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseReleaseEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseDoubleClickEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_dragEnterEvent(QColumnView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColumnView_dragMoveEvent(QColumnView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColumnView_dragLeaveEvent(QColumnView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColumnView_dropEvent(QColumnView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColumnView_focusInEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_focusOutEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_keyPressEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_timerEvent(QColumnView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColumnView_inputMethodEvent(QColumnView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QColumnView_eventFilter(QColumnView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QColumnView_viewportSizeHint(const QColumnView*, intptr_t);
QSize* miqt_exec_callback_QColumnView_minimumSizeHint(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_setupViewport(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_paintEvent(QColumnView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColumnView_wheelEvent(QColumnView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColumnView_contextMenuEvent(QColumnView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QColumnView_changeEvent(QColumnView*, intptr_t, QEvent*);
int miqt_exec_callback_QColumnView_devType(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_setVisible(QColumnView*, intptr_t, bool);
int miqt_exec_callback_QColumnView_heightForWidth(const QColumnView*, intptr_t, int);
bool miqt_exec_callback_QColumnView_hasHeightForWidth(const QColumnView*, intptr_t);
QPaintEngine* miqt_exec_callback_QColumnView_paintEngine(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_keyReleaseEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_enterEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_leaveEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_moveEvent(QColumnView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColumnView_closeEvent(QColumnView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColumnView_tabletEvent(QColumnView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColumnView_actionEvent(QColumnView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColumnView_showEvent(QColumnView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColumnView_hideEvent(QColumnView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColumnView_nativeEvent(QColumnView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QColumnView_metric(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_initPainter(const QColumnView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColumnView_redirected(const QColumnView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColumnView_sharedPainter(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_childEvent(QColumnView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColumnView_customEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_connectNotify(QColumnView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColumnView_disconnectNotify(QColumnView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColumnView final : public QColumnView {
public:

	MiqtVirtualQColumnView(QWidget* parent): QColumnView(parent) {};
	MiqtVirtualQColumnView(): QColumnView() {};

	virtual ~MiqtVirtualQColumnView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (handle__indexAt == 0) {
			return QColumnView::indexAt(point);
		}
		
		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* point) const {

		return new QModelIndex(QColumnView::indexAt(*point));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QColumnView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QColumnView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QColumnView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QColumnView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QColumnView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QColumnView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QColumnView_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QColumnView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QColumnView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QColumnView_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QColumnView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QColumnView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QColumnView_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QColumnView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QColumnView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QColumnView_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QColumnView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QColumnView::selectAll();
			return;
		}
		

		miqt_exec_callback_QColumnView_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QColumnView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QColumnView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QColumnView_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QColumnView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QColumnView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QColumnView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QColumnView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QColumnView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QColumnView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QColumnView_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QColumnView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QColumnView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QColumnView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QColumnView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QColumnView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QColumnView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QColumnView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QColumnView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QColumnView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QColumnView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QColumnView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QColumnView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QColumnView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QColumnView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QColumnView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QColumnView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QColumnView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
		if (handle__createColumn == 0) {
			return QColumnView::createColumn(rootIndex);
		}
		
		const QModelIndex& rootIndex_ret = rootIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&rootIndex_ret);

		QAbstractItemView* callback_return_value = miqt_exec_callback_QColumnView_createColumn(this, handle__createColumn, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAbstractItemView* virtualbase_createColumn(QModelIndex* rootIndex) {

		return QColumnView::createColumn(*rootIndex);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
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

		miqt_exec_callback_QColumnView_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QColumnView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QColumnView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QColumnView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QColumnView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QColumnView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QColumnView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QColumnView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QColumnView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QColumnView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QColumnView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QColumnView::reset();
			return;
		}
		

		miqt_exec_callback_QColumnView_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QColumnView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QColumnView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QColumnView_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QColumnView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
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

		miqt_exec_callback_QColumnView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QColumnView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QColumnView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QColumnView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QColumnView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QColumnView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QColumnView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QColumnView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QColumnView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QColumnView_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QColumnView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QColumnView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QColumnView_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QColumnView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QColumnView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QColumnView_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QColumnView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QColumnView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QColumnView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QColumnView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QColumnView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QColumnView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QColumnView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QColumnView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QColumnView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QColumnView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QColumnView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QColumnView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QColumnView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QColumnView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QColumnView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QColumnView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QColumnView_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QColumnView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QColumnView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QColumnView_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QColumnView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QColumnView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QColumnView_selectedIndexes(this, handle__selectedIndexes);
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
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QColumnView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QColumnView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QColumnView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QColumnView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QColumnView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QColumnView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QColumnView_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QColumnView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QColumnView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QColumnView_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QColumnView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QColumnView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QColumnView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QColumnView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QColumnView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QColumnView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QColumnView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QColumnView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QColumnView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QColumnView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QColumnView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QColumnView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QColumnView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QColumnView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QColumnView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QColumnView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QColumnView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QColumnView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QColumnView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QColumnView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QColumnView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QColumnView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QColumnView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QColumnView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QColumnView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QColumnView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QColumnView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QColumnView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QColumnView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QColumnView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QColumnView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QColumnView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QColumnView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QColumnView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QColumnView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QColumnView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QColumnView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QColumnView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QColumnView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QColumnView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColumnView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QColumnView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QColumnView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QColumnView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QColumnView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QColumnView::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QColumnView::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QColumnView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QColumnView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QColumnView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QColumnView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QColumnView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QColumnView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QColumnView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QColumnView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QColumnView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QColumnView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QColumnView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QColumnView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QColumnView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QColumnView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QColumnView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QColumnView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QColumnView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QColumnView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QColumnView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QColumnView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QColumnView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QColumnView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QColumnView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QColumnView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QColumnView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QColumnView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QColumnView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QColumnView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QColumnView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QColumnView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QColumnView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QColumnView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QColumnView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QColumnView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QColumnView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QColumnView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QColumnView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QColumnView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QColumnView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QColumnView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QColumnView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QColumnView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QColumnView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QColumnView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QColumnView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QColumnView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QColumnView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QColumnView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QColumnView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QColumnView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QColumnView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QColumnView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QColumnView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QColumnView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QColumnView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QColumnView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QColumnView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColumnView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QColumnView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QColumnView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColumnView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QColumnView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QColumnView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColumnView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QColumnView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QColumnView_protectedbase_initializeColumn(bool* _dynamic_cast_ok, const void* self, QAbstractItemView* column);
	friend void QColumnView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QColumnView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QColumnView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QColumnView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QColumnView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QColumnView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QColumnView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QColumnView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QColumnView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QColumnView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QColumnView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QColumnView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QColumnView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QColumnView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QColumnView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QColumnView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QColumnView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QColumnView_metaObject(const QColumnView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColumnView_metacast(QColumnView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColumnView_tr(const char* s) {
	QString _ret = QColumnView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_trUtf8(const char* s) {
	QString _ret = QColumnView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColumnView_updatePreviewWidget(QColumnView* self, QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void QColumnView_connect_updatePreviewWidget(QColumnView* self, intptr_t slot) {
	MiqtVirtualQColumnView::connect(self, static_cast<void (QColumnView::*)(const QModelIndex&)>(&QColumnView::updatePreviewWidget), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QColumnView_updatePreviewWidget(slot, sigval1);
	});
}

QModelIndex* QColumnView_indexAt(const QColumnView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

void QColumnView_scrollTo(QColumnView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_sizeHint(const QColumnView* self) {
	return new QSize(self->sizeHint());
}

QRect* QColumnView_visualRect(const QColumnView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QColumnView_setModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_setSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_setRootIndex(QColumnView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_selectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_setResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_resizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_previewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_setPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_setColumnWidths(QColumnView* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setColumnWidths(list_QList);
}

struct miqt_array /* of int */  QColumnView_columnWidths(const QColumnView* self) {
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

struct miqt_string QColumnView_tr2(const char* s, const char* c) {
	QString _ret = QColumnView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_tr3(const char* s, const char* c, int n) {
	QString _ret = QColumnView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_trUtf82(const char* s, const char* c) {
	QString _ret = QColumnView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QColumnView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QColumnView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QColumnView_virtualbase_indexAt(const void* self, QPoint* point) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_indexAt(point);
}

bool QColumnView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QColumnView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QColumnView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_sizeHint();
}

bool QColumnView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QColumnView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_visualRect(index);
}

bool QColumnView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QColumnView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setModel(model);
}

bool QColumnView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QColumnView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QColumnView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QColumnView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setRootIndex(index);
}

bool QColumnView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QColumnView_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_selectAll();
}

bool QColumnView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QColumnView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_isIndexHidden(index);
}

bool QColumnView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QColumnView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QColumnView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QColumnView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_resizeEvent(event);
}

bool QColumnView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QColumnView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setSelection(rect, command);
}

bool QColumnView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QColumnView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QColumnView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QColumnView_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_horizontalOffset();
}

bool QColumnView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QColumnView_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_verticalOffset();
}

bool QColumnView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QColumnView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QColumnView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QColumnView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QColumnView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QColumnView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QColumnView_override_virtual_createColumn(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createColumn = slot;
	return true;
}

QAbstractItemView* QColumnView_virtualbase_createColumn(void* self, QModelIndex* rootIndex) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_createColumn(rootIndex);
}

bool QColumnView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QColumnView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_keyboardSearch(search);
}

bool QColumnView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QColumnView_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QColumnView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QColumnView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QColumnView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QColumnView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QColumnView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QColumnView_virtualbase_reset(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_reset();
}

bool QColumnView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QColumnView_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_doItemsLayout();
}

bool QColumnView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QColumnView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QColumnView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QColumnView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QColumnView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QColumnView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QColumnView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QColumnView_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_updateEditorData();
}

bool QColumnView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QColumnView_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_updateEditorGeometries();
}

bool QColumnView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QColumnView_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_updateGeometries();
}

bool QColumnView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QColumnView_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QColumnView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QColumnView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QColumnView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QColumnView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QColumnView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QColumnView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QColumnView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QColumnView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QColumnView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QColumnView_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_commitData(editor);
}

bool QColumnView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QColumnView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QColumnView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QColumnView_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_selectedIndexes();
}

bool QColumnView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QColumnView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QColumnView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QColumnView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QColumnView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QColumnView_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QColumnView_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QColumnView_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_viewOptions();
}

bool QColumnView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QColumnView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QColumnView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QColumnView_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_event(event);
}

bool QColumnView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QColumnView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_viewportEvent(event);
}

bool QColumnView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QColumnView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QColumnView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QColumnView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QColumnView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QColumnView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QColumnView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QColumnView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QColumnView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QColumnView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QColumnView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QColumnView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QColumnView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QColumnView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QColumnView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QColumnView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_dropEvent(event);
}

bool QColumnView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QColumnView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_focusInEvent(event);
}

bool QColumnView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QColumnView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QColumnView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QColumnView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QColumnView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QColumnView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_timerEvent(event);
}

bool QColumnView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QColumnView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QColumnView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QColumnView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_eventFilter(object, event);
}

bool QColumnView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_viewportSizeHint();
}

bool QColumnView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QColumnView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_minimumSizeHint();
}

bool QColumnView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QColumnView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setupViewport(viewport);
}

bool QColumnView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QColumnView_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_paintEvent(param1);
}

bool QColumnView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QColumnView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_wheelEvent(param1);
}

bool QColumnView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QColumnView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QColumnView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QColumnView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_changeEvent(param1);
}

bool QColumnView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QColumnView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_devType();
}

bool QColumnView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QColumnView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_setVisible(visible);
}

bool QColumnView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QColumnView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QColumnView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QColumnView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QColumnView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QColumnView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_paintEngine();
}

bool QColumnView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QColumnView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QColumnView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QColumnView_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_enterEvent(event);
}

bool QColumnView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QColumnView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_leaveEvent(event);
}

bool QColumnView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QColumnView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_moveEvent(event);
}

bool QColumnView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QColumnView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_closeEvent(event);
}

bool QColumnView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QColumnView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_tabletEvent(event);
}

bool QColumnView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QColumnView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_actionEvent(event);
}

bool QColumnView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QColumnView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_showEvent(event);
}

bool QColumnView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QColumnView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_hideEvent(event);
}

bool QColumnView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QColumnView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQColumnView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QColumnView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QColumnView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_metric(param1);
}

bool QColumnView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QColumnView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQColumnView*)(self) )->virtualbase_initPainter(painter);
}

bool QColumnView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QColumnView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_redirected(offset);
}

bool QColumnView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QColumnView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQColumnView*)(self) )->virtualbase_sharedPainter();
}

bool QColumnView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QColumnView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_childEvent(event);
}

bool QColumnView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QColumnView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_customEvent(event);
}

bool QColumnView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QColumnView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_connectNotify(signal);
}

bool QColumnView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QColumnView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColumnView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QColumnView_protectedbase_initializeColumn(bool* _dynamic_cast_ok, const void* self, QAbstractItemView* column) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initializeColumn(column);

}

void QColumnView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QColumnView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QColumnView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QColumnView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QColumnView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQColumnView::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QColumnView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQColumnView::State>(state));

}

void QColumnView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QColumnView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QColumnView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QColumnView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QColumnView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QColumnView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QColumnView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QColumnView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QColumnView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQColumnView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QColumnView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QColumnView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QColumnView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QColumnView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QColumnView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QColumnView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QColumnView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QColumnView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QColumnView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QColumnView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QColumnView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QColumnView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QColumnView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QColumnView_delete(QColumnView* self) {
	delete self;
}

