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
#include <QTableView>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtableview.h>
#include "gen_qtableview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTableView_setModel(QTableView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QTableView_setRootIndex(QTableView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_setSelectionModel(QTableView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableView_doItemsLayout(QTableView*, intptr_t);
QRect* miqt_exec_callback_QTableView_visualRect(const QTableView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_scrollTo(QTableView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableView_indexAt(const QTableView*, intptr_t, QPoint*);
void miqt_exec_callback_QTableView_scrollContentsBy(QTableView*, intptr_t, int, int);
QStyleOptionViewItem* miqt_exec_callback_QTableView_viewOptions(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_paintEvent(QTableView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableView_timerEvent(QTableView*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableView_horizontalOffset(const QTableView*, intptr_t);
int miqt_exec_callback_QTableView_verticalOffset(const QTableView*, intptr_t);
QModelIndex* miqt_exec_callback_QTableView_moveCursor(QTableView*, intptr_t, int, int);
void miqt_exec_callback_QTableView_setSelection(QTableView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableView_visualRegionForSelection(const QTableView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableView_selectedIndexes(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_updateGeometries(QTableView*, intptr_t);
QSize* miqt_exec_callback_QTableView_viewportSizeHint(const QTableView*, intptr_t);
int miqt_exec_callback_QTableView_sizeHintForRow(const QTableView*, intptr_t, int);
int miqt_exec_callback_QTableView_sizeHintForColumn(const QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_verticalScrollbarAction(QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_horizontalScrollbarAction(QTableView*, intptr_t, int);
bool miqt_exec_callback_QTableView_isIndexHidden(const QTableView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableView_selectionChanged(QTableView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableView_currentChanged(QTableView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QTableView_keyboardSearch(QTableView*, intptr_t, struct miqt_string);
QVariant* miqt_exec_callback_QTableView_inputMethodQuery(const QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_reset(QTableView*, intptr_t);
void miqt_exec_callback_QTableView_selectAll(QTableView*, intptr_t);
void miqt_exec_callback_QTableView_dataChanged(QTableView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTableView_rowsInserted(QTableView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableView_rowsAboutToBeRemoved(QTableView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableView_updateEditorData(QTableView*, intptr_t);
void miqt_exec_callback_QTableView_updateEditorGeometries(QTableView*, intptr_t);
void miqt_exec_callback_QTableView_verticalScrollbarValueChanged(QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_horizontalScrollbarValueChanged(QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_closeEditor(QTableView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTableView_commitData(QTableView*, intptr_t, QWidget*);
void miqt_exec_callback_QTableView_editorDestroyed(QTableView*, intptr_t, QObject*);
bool miqt_exec_callback_QTableView_edit2(QTableView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTableView_selectionCommand(const QTableView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTableView_startDrag(QTableView*, intptr_t, int);
bool miqt_exec_callback_QTableView_focusNextPrevChild(QTableView*, intptr_t, bool);
bool miqt_exec_callback_QTableView_event(QTableView*, intptr_t, QEvent*);
bool miqt_exec_callback_QTableView_viewportEvent(QTableView*, intptr_t, QEvent*);
void miqt_exec_callback_QTableView_mousePressEvent(QTableView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_mouseMoveEvent(QTableView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_mouseReleaseEvent(QTableView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_mouseDoubleClickEvent(QTableView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableView_dragEnterEvent(QTableView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTableView_dragMoveEvent(QTableView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTableView_dragLeaveEvent(QTableView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTableView_dropEvent(QTableView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableView_focusInEvent(QTableView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableView_focusOutEvent(QTableView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableView_keyPressEvent(QTableView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableView_resizeEvent(QTableView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTableView_inputMethodEvent(QTableView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTableView_eventFilter(QTableView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTableView_minimumSizeHint(const QTableView*, intptr_t);
QSize* miqt_exec_callback_QTableView_sizeHint(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_setupViewport(QTableView*, intptr_t, QWidget*);
void miqt_exec_callback_QTableView_wheelEvent(QTableView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTableView_contextMenuEvent(QTableView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTableView_changeEvent(QTableView*, intptr_t, QEvent*);
int miqt_exec_callback_QTableView_devType(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_setVisible(QTableView*, intptr_t, bool);
int miqt_exec_callback_QTableView_heightForWidth(const QTableView*, intptr_t, int);
bool miqt_exec_callback_QTableView_hasHeightForWidth(const QTableView*, intptr_t);
QPaintEngine* miqt_exec_callback_QTableView_paintEngine(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_keyReleaseEvent(QTableView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableView_enterEvent(QTableView*, intptr_t, QEvent*);
void miqt_exec_callback_QTableView_leaveEvent(QTableView*, intptr_t, QEvent*);
void miqt_exec_callback_QTableView_moveEvent(QTableView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTableView_closeEvent(QTableView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTableView_tabletEvent(QTableView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTableView_actionEvent(QTableView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTableView_showEvent(QTableView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTableView_hideEvent(QTableView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTableView_nativeEvent(QTableView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTableView_metric(const QTableView*, intptr_t, int);
void miqt_exec_callback_QTableView_initPainter(const QTableView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTableView_redirected(const QTableView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTableView_sharedPainter(const QTableView*, intptr_t);
void miqt_exec_callback_QTableView_childEvent(QTableView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTableView_customEvent(QTableView*, intptr_t, QEvent*);
void miqt_exec_callback_QTableView_connectNotify(QTableView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTableView_disconnectNotify(QTableView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTableView final : public QTableView {
public:

	MiqtVirtualQTableView(QWidget* parent): QTableView(parent) {};
	MiqtVirtualQTableView(): QTableView() {};

	virtual ~MiqtVirtualQTableView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QTableView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QTableView_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QTableView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QTableView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTableView_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QTableView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QTableView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTableView_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QTableView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QTableView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTableView_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QTableView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QTableView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTableView_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QTableView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QTableView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QTableView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QTableView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableView_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QTableView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTableView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTableView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QTableView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QTableView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTableView_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QTableView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QTableView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTableView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QTableView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTableView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTableView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTableView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QTableView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableView_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QTableView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QTableView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableView_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QTableView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QTableView::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableView_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTableView::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QTableView::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTableView_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QTableView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QTableView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTableView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTableView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QTableView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableView_selectedIndexes(this, handle__selectedIndexes);
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
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QTableView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTableView_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QTableView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTableView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QTableView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QTableView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTableView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QTableView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QTableView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTableView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QTableView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QTableView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QTableView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QTableView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QTableView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QTableView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTableView_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QTableView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QTableView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTableView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTableView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QTableView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTableView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QTableView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
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

		miqt_exec_callback_QTableView_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QTableView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QTableView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTableView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QTableView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QTableView::reset();
			return;
		}
		

		miqt_exec_callback_QTableView_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QTableView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QTableView::selectAll();
			return;
		}
		

		miqt_exec_callback_QTableView_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QTableView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
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

		miqt_exec_callback_QTableView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QTableView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QTableView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QTableView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QTableView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QTableView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QTableView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QTableView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QTableView_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QTableView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QTableView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QTableView_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QTableView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QTableView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QTableView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QTableView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QTableView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QTableView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QTableView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QTableView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QTableView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QTableView_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QTableView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QTableView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QTableView_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QTableView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QTableView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QTableView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QTableView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QTableView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QTableView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QTableView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QTableView_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QTableView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTableView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTableView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTableView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTableView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTableView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QTableView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QTableView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTableView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QTableView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTableView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QTableView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTableView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QTableView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTableView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QTableView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTableView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTableView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QTableView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTableView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QTableView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTableView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTableView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QTableView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTableView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTableView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QTableView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTableView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QTableView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTableView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTableView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QTableView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTableView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QTableView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QTableView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTableView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QTableView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QTableView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QTableView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QTableView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTableView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTableView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QTableView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTableView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTableView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTableView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTableView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTableView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTableView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QTableView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QTableView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QTableView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QTableView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QTableView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QTableView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QTableView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QTableView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTableView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QTableView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTableView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTableView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTableView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTableView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTableView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTableView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTableView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTableView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTableView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTableView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTableView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTableView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTableView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTableView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTableView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTableView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTableView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QTableView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QTableView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QTableView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTableView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTableView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTableView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTableView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTableView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTableView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTableView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTableView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTableView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTableView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTableView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTableView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTableView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTableView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTableView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTableView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QTableView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTableView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTableView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTableView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QTableView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTableView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTableView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTableView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTableView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTableView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTableView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTableView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTableView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTableView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTableView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTableView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTableView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTableView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTableView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTableView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTableView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTableView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTableView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTableView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTableView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTableView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTableView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTableView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTableView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTableView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTableView_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex);
	friend void QTableView_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex);
	friend void QTableView_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight);
	friend void QTableView_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth);
	friend void QTableView_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableView_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QTableView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QTableView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QTableView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QTableView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QTableView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QTableView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QTableView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QTableView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QTableView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTableView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTableView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTableView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QTableView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTableView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTableView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTableView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTableView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTableView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTableView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTableView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTableView_metaObject(const QTableView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableView_metacast(QTableView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableView_tr(const char* s) {
	QString _ret = QTableView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_trUtf8(const char* s) {
	QString _ret = QTableView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableView_setModel(QTableView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QTableView_setRootIndex(QTableView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QTableView_setSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QTableView_doItemsLayout(QTableView* self) {
	self->doItemsLayout();
}

QHeaderView* QTableView_horizontalHeader(const QTableView* self) {
	return self->horizontalHeader();
}

QHeaderView* QTableView_verticalHeader(const QTableView* self) {
	return self->verticalHeader();
}

void QTableView_setHorizontalHeader(QTableView* self, QHeaderView* header) {
	self->setHorizontalHeader(header);
}

void QTableView_setVerticalHeader(QTableView* self, QHeaderView* header) {
	self->setVerticalHeader(header);
}

int QTableView_rowViewportPosition(const QTableView* self, int row) {
	return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_rowAt(const QTableView* self, int y) {
	return self->rowAt(static_cast<int>(y));
}

void QTableView_setRowHeight(QTableView* self, int row, int height) {
	self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_rowHeight(const QTableView* self, int row) {
	return self->rowHeight(static_cast<int>(row));
}

int QTableView_columnViewportPosition(const QTableView* self, int column) {
	return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_columnAt(const QTableView* self, int x) {
	return self->columnAt(static_cast<int>(x));
}

void QTableView_setColumnWidth(QTableView* self, int column, int width) {
	self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_columnWidth(const QTableView* self, int column) {
	return self->columnWidth(static_cast<int>(column));
}

bool QTableView_isRowHidden(const QTableView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QTableView_setRowHidden(QTableView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_isColumnHidden(const QTableView* self, int column) {
	return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_setColumnHidden(QTableView* self, int column, bool hide) {
	self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_setSortingEnabled(QTableView* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableView_isSortingEnabled(const QTableView* self) {
	return self->isSortingEnabled();
}

bool QTableView_showGrid(const QTableView* self) {
	return self->showGrid();
}

int QTableView_gridStyle(const QTableView* self) {
	Qt::PenStyle _ret = self->gridStyle();
	return static_cast<int>(_ret);
}

void QTableView_setGridStyle(QTableView* self, int style) {
	self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_setWordWrap(QTableView* self, bool on) {
	self->setWordWrap(on);
}

bool QTableView_wordWrap(const QTableView* self) {
	return self->wordWrap();
}

void QTableView_setCornerButtonEnabled(QTableView* self, bool enable) {
	self->setCornerButtonEnabled(enable);
}

bool QTableView_isCornerButtonEnabled(const QTableView* self) {
	return self->isCornerButtonEnabled();
}

QRect* QTableView_visualRect(const QTableView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QTableView_scrollTo(QTableView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTableView_indexAt(const QTableView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QTableView_setSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
	self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_rowSpan(const QTableView* self, int row, int column) {
	return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_columnSpan(const QTableView* self, int row, int column) {
	return self->columnSpan(static_cast<int>(row), static_cast<int>(column));
}

void QTableView_clearSpans(QTableView* self) {
	self->clearSpans();
}

void QTableView_selectRow(QTableView* self, int row) {
	self->selectRow(static_cast<int>(row));
}

void QTableView_selectColumn(QTableView* self, int column) {
	self->selectColumn(static_cast<int>(column));
}

void QTableView_hideRow(QTableView* self, int row) {
	self->hideRow(static_cast<int>(row));
}

void QTableView_hideColumn(QTableView* self, int column) {
	self->hideColumn(static_cast<int>(column));
}

void QTableView_showRow(QTableView* self, int row) {
	self->showRow(static_cast<int>(row));
}

void QTableView_showColumn(QTableView* self, int column) {
	self->showColumn(static_cast<int>(column));
}

void QTableView_resizeRowToContents(QTableView* self, int row) {
	self->resizeRowToContents(static_cast<int>(row));
}

void QTableView_resizeRowsToContents(QTableView* self) {
	self->resizeRowsToContents();
}

void QTableView_resizeColumnToContents(QTableView* self, int column) {
	self->resizeColumnToContents(static_cast<int>(column));
}

void QTableView_resizeColumnsToContents(QTableView* self) {
	self->resizeColumnsToContents();
}

void QTableView_sortByColumn(QTableView* self, int column) {
	self->sortByColumn(static_cast<int>(column));
}

void QTableView_sortByColumn2(QTableView* self, int column, int order) {
	self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableView_setShowGrid(QTableView* self, bool show) {
	self->setShowGrid(show);
}

struct miqt_string QTableView_tr2(const char* s, const char* c) {
	QString _ret = QTableView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_tr3(const char* s, const char* c, int n) {
	QString _ret = QTableView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_trUtf82(const char* s, const char* c) {
	QString _ret = QTableView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTableView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QTableView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setModel(model);
}

bool QTableView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QTableView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setRootIndex(index);
}

bool QTableView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QTableView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QTableView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QTableView_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_doItemsLayout();
}

bool QTableView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QTableView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_visualRect(index);
}

bool QTableView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QTableView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QTableView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QTableView_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_indexAt(p);
}

bool QTableView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTableView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QTableView_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QTableView_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_viewOptions();
}

bool QTableView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTableView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_paintEvent(e);
}

bool QTableView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTableView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_timerEvent(event);
}

bool QTableView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QTableView_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_horizontalOffset();
}

bool QTableView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QTableView_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_verticalOffset();
}

bool QTableView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QTableView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QTableView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QTableView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setSelection(rect, command);
}

bool QTableView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QTableView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QTableView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTableView_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_selectedIndexes();
}

bool QTableView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QTableView_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_updateGeometries();
}

bool QTableView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTableView_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_viewportSizeHint();
}

bool QTableView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QTableView_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QTableView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QTableView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QTableView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QTableView_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QTableView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QTableView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QTableView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QTableView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_isIndexHidden(index);
}

bool QTableView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QTableView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QTableView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QTableView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QTableView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QTableView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_keyboardSearch(search);
}

bool QTableView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTableView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QTableView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QTableView_virtualbase_reset(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_reset();
}

bool QTableView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QTableView_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_selectAll();
}

bool QTableView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QTableView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QTableView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QTableView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QTableView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QTableView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QTableView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QTableView_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_updateEditorData();
}

bool QTableView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QTableView_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_updateEditorGeometries();
}

bool QTableView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QTableView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QTableView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QTableView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QTableView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QTableView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QTableView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QTableView_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_commitData(editor);
}

bool QTableView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QTableView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QTableView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QTableView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QTableView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QTableView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QTableView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QTableView_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QTableView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTableView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTableView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTableView_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_event(event);
}

bool QTableView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTableView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_viewportEvent(event);
}

bool QTableView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTableView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QTableView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTableView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QTableView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTableView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QTableView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTableView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QTableView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTableView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QTableView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTableView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QTableView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTableView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QTableView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTableView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_dropEvent(event);
}

bool QTableView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTableView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_focusInEvent(event);
}

bool QTableView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTableView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QTableView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTableView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QTableView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTableView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_resizeEvent(event);
}

bool QTableView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTableView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QTableView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTableView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_eventFilter(object, event);
}

bool QTableView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTableView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_minimumSizeHint();
}

bool QTableView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTableView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_sizeHint();
}

bool QTableView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QTableView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setupViewport(viewport);
}

bool QTableView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTableView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_wheelEvent(param1);
}

bool QTableView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTableView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QTableView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTableView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_changeEvent(param1);
}

bool QTableView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTableView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_devType();
}

bool QTableView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTableView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_setVisible(visible);
}

bool QTableView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTableView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTableView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTableView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTableView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTableView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_paintEngine();
}

bool QTableView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTableView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QTableView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTableView_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_enterEvent(event);
}

bool QTableView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTableView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_leaveEvent(event);
}

bool QTableView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTableView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_moveEvent(event);
}

bool QTableView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTableView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_closeEvent(event);
}

bool QTableView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTableView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_tabletEvent(event);
}

bool QTableView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTableView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_actionEvent(event);
}

bool QTableView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTableView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_showEvent(event);
}

bool QTableView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTableView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_hideEvent(event);
}

bool QTableView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTableView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTableView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTableView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTableView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_metric(param1);
}

bool QTableView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTableView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTableView*)(self) )->virtualbase_initPainter(painter);
}

bool QTableView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTableView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_redirected(offset);
}

bool QTableView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTableView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTableView*)(self) )->virtualbase_sharedPainter();
}

bool QTableView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTableView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_childEvent(event);
}

bool QTableView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTableView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_customEvent(event);
}

bool QTableView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTableView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_connectNotify(signal);
}

bool QTableView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTableView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTableView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTableView_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));

}

void QTableView_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));

}

void QTableView_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));

}

void QTableView_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));

}

void QTableView_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));

}

void QTableView_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));

}

void QTableView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QTableView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QTableView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QTableView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QTableView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTableView::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QTableView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQTableView::State>(state));

}

void QTableView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QTableView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QTableView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QTableView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QTableView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QTableView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QTableView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QTableView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QTableView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQTableView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QTableView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QTableView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QTableView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QTableView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QTableView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTableView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTableView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTableView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTableView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTableView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTableView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTableView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTableView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTableView* self_cast = dynamic_cast<MiqtVirtualQTableView*>( (QTableView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTableView_delete(QTableView* self) {
	delete self;
}

