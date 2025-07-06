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
#include <QStyleOptionHeader>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#include <qheaderview.h>
#include "gen_qheaderview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHeaderView_sectionMoved(intptr_t, int, int, int);
void miqt_exec_callback_QHeaderView_sectionResized(intptr_t, int, int, int);
void miqt_exec_callback_QHeaderView_sectionPressed(intptr_t, int);
void miqt_exec_callback_QHeaderView_sectionClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_sectionEntered(intptr_t, int);
void miqt_exec_callback_QHeaderView_sectionDoubleClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_sectionCountChanged(intptr_t, int, int);
void miqt_exec_callback_QHeaderView_sectionHandleDoubleClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_geometriesChanged(intptr_t);
void miqt_exec_callback_QHeaderView_sortIndicatorChanged(intptr_t, int, int);
void miqt_exec_callback_QHeaderView_setModel(QHeaderView*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QHeaderView_sizeHint(const QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_setVisible(QHeaderView*, intptr_t, bool);
void miqt_exec_callback_QHeaderView_doItemsLayout(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_reset(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_currentChanged(QHeaderView*, intptr_t, QModelIndex*, QModelIndex*);
bool miqt_exec_callback_QHeaderView_event(QHeaderView*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_paintEvent(QHeaderView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QHeaderView_mousePressEvent(QHeaderView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_mouseMoveEvent(QHeaderView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_mouseReleaseEvent(QHeaderView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_mouseDoubleClickEvent(QHeaderView*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QHeaderView_viewportEvent(QHeaderView*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_paintSection(const QHeaderView*, intptr_t, QPainter*, QRect*, int);
QSize* miqt_exec_callback_QHeaderView_sectionSizeFromContents(const QHeaderView*, intptr_t, int);
int miqt_exec_callback_QHeaderView_horizontalOffset(const QHeaderView*, intptr_t);
int miqt_exec_callback_QHeaderView_verticalOffset(const QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_updateGeometries(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_scrollContentsBy(QHeaderView*, intptr_t, int, int);
void miqt_exec_callback_QHeaderView_dataChanged(QHeaderView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QHeaderView_rowsInserted(QHeaderView*, intptr_t, QModelIndex*, int, int);
QRect* miqt_exec_callback_QHeaderView_visualRect(const QHeaderView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QHeaderView_scrollTo(QHeaderView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QHeaderView_indexAt(const QHeaderView*, intptr_t, QPoint*);
bool miqt_exec_callback_QHeaderView_isIndexHidden(const QHeaderView*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QHeaderView_moveCursor(QHeaderView*, intptr_t, int, int);
void miqt_exec_callback_QHeaderView_setSelection(QHeaderView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QHeaderView_visualRegionForSelection(const QHeaderView*, intptr_t, QItemSelection*);
void miqt_exec_callback_QHeaderView_setSelectionModel(QHeaderView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QHeaderView_keyboardSearch(QHeaderView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QHeaderView_sizeHintForRow(const QHeaderView*, intptr_t, int);
int miqt_exec_callback_QHeaderView_sizeHintForColumn(const QHeaderView*, intptr_t, int);
QVariant* miqt_exec_callback_QHeaderView_inputMethodQuery(const QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_setRootIndex(QHeaderView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QHeaderView_selectAll(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_rowsAboutToBeRemoved(QHeaderView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QHeaderView_selectionChanged(QHeaderView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QHeaderView_updateEditorData(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_updateEditorGeometries(QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_verticalScrollbarAction(QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_horizontalScrollbarAction(QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_verticalScrollbarValueChanged(QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_horizontalScrollbarValueChanged(QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_closeEditor(QHeaderView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QHeaderView_commitData(QHeaderView*, intptr_t, QWidget*);
void miqt_exec_callback_QHeaderView_editorDestroyed(QHeaderView*, intptr_t, QObject*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QHeaderView_selectedIndexes(const QHeaderView*, intptr_t);
bool miqt_exec_callback_QHeaderView_edit2(QHeaderView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QHeaderView_selectionCommand(const QHeaderView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QHeaderView_startDrag(QHeaderView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QHeaderView_viewOptions(const QHeaderView*, intptr_t);
bool miqt_exec_callback_QHeaderView_focusNextPrevChild(QHeaderView*, intptr_t, bool);
void miqt_exec_callback_QHeaderView_dragEnterEvent(QHeaderView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QHeaderView_dragMoveEvent(QHeaderView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QHeaderView_dragLeaveEvent(QHeaderView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QHeaderView_dropEvent(QHeaderView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QHeaderView_focusInEvent(QHeaderView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QHeaderView_focusOutEvent(QHeaderView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QHeaderView_keyPressEvent(QHeaderView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QHeaderView_resizeEvent(QHeaderView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QHeaderView_timerEvent(QHeaderView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHeaderView_inputMethodEvent(QHeaderView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QHeaderView_eventFilter(QHeaderView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QHeaderView_viewportSizeHint(const QHeaderView*, intptr_t);
QSize* miqt_exec_callback_QHeaderView_minimumSizeHint(const QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_setupViewport(QHeaderView*, intptr_t, QWidget*);
void miqt_exec_callback_QHeaderView_wheelEvent(QHeaderView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QHeaderView_contextMenuEvent(QHeaderView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QHeaderView_changeEvent(QHeaderView*, intptr_t, QEvent*);
int miqt_exec_callback_QHeaderView_devType(const QHeaderView*, intptr_t);
int miqt_exec_callback_QHeaderView_heightForWidth(const QHeaderView*, intptr_t, int);
bool miqt_exec_callback_QHeaderView_hasHeightForWidth(const QHeaderView*, intptr_t);
QPaintEngine* miqt_exec_callback_QHeaderView_paintEngine(const QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_keyReleaseEvent(QHeaderView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QHeaderView_enterEvent(QHeaderView*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_leaveEvent(QHeaderView*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_moveEvent(QHeaderView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QHeaderView_closeEvent(QHeaderView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QHeaderView_tabletEvent(QHeaderView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QHeaderView_actionEvent(QHeaderView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QHeaderView_showEvent(QHeaderView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QHeaderView_hideEvent(QHeaderView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QHeaderView_nativeEvent(QHeaderView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QHeaderView_metric(const QHeaderView*, intptr_t, int);
void miqt_exec_callback_QHeaderView_initPainter(const QHeaderView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QHeaderView_redirected(const QHeaderView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QHeaderView_sharedPainter(const QHeaderView*, intptr_t);
void miqt_exec_callback_QHeaderView_childEvent(QHeaderView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHeaderView_customEvent(QHeaderView*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_connectNotify(QHeaderView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHeaderView_disconnectNotify(QHeaderView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHeaderView final : public QHeaderView {
public:

	MiqtVirtualQHeaderView(Qt::Orientation orientation): QHeaderView(orientation) {}
	MiqtVirtualQHeaderView(Qt::Orientation orientation, QWidget* parent): QHeaderView(orientation, parent) {}

	virtual ~MiqtVirtualQHeaderView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QHeaderView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QHeaderView_setModel(this, handle__setModel, sigval1);

	}

	friend void QHeaderView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QHeaderView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QHeaderView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool v) override {
		if (handle__setVisible == 0) {
			QHeaderView::setVisible(v);
			return;
		}

		bool sigval1 = v;
		miqt_exec_callback_QHeaderView_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QHeaderView_virtualbase_setVisible(void* self, bool v);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QHeaderView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QHeaderView_doItemsLayout(this, handle__doItemsLayout);

	}

	friend void QHeaderView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QHeaderView::reset();
			return;
		}

		miqt_exec_callback_QHeaderView_reset(this, handle__reset);

	}

	friend void QHeaderView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& old) override {
		if (handle__currentChanged == 0) {
			QHeaderView::currentChanged(current, old);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& old_ret = old;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&old_ret);
		miqt_exec_callback_QHeaderView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* old);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QHeaderView::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QHeaderView_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QHeaderView::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QHeaderView_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QHeaderView::mousePressEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QHeaderView_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QHeaderView::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QHeaderView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QHeaderView::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QHeaderView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QHeaderView::mouseDoubleClickEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QHeaderView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* e) override {
		if (handle__viewportEvent == 0) {
			return QHeaderView::viewportEvent(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QHeaderView_viewportEvent(this, handle__viewportEvent, sigval1);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_viewportEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintSection = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const override {
		if (handle__paintSection == 0) {
			QHeaderView::paintSection(painter, rect, logicalIndex);
			return;
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = logicalIndex;
		miqt_exec_callback_QHeaderView_paintSection(this, handle__paintSection, sigval1, sigval2, sigval3);

	}

	friend void QHeaderView_virtualbase_paintSection(const void* self, QPainter* painter, QRect* rect, int logicalIndex);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sectionSizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sectionSizeFromContents(int logicalIndex) const override {
		if (handle__sectionSizeFromContents == 0) {
			return QHeaderView::sectionSizeFromContents(logicalIndex);
		}

		int sigval1 = logicalIndex;
		QSize* callback_return_value = miqt_exec_callback_QHeaderView_sectionSizeFromContents(this, handle__sectionSizeFromContents, sigval1);
		return *callback_return_value;
	}

	friend QSize* QHeaderView_virtualbase_sectionSizeFromContents(const void* self, int logicalIndex);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QHeaderView::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QHeaderView_horizontalOffset(this, handle__horizontalOffset);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QHeaderView::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QHeaderView_verticalOffset(this, handle__verticalOffset);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QHeaderView::updateGeometries();
			return;
		}

		miqt_exec_callback_QHeaderView_updateGeometries(this, handle__updateGeometries);

	}

	friend void QHeaderView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QHeaderView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QHeaderView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
			QHeaderView::dataChanged(topLeft, bottomRight, roles);
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
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		for (size_t i = 0, e = roles_ret.size(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.size();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;
		miqt_exec_callback_QHeaderView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

	}

	friend void QHeaderView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QHeaderView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QHeaderView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

	}

	friend void QHeaderView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QHeaderView::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QHeaderView_visualRect(this, handle__visualRect, sigval1);
		return *callback_return_value;
	}

	friend QRect* QHeaderView_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QHeaderView::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QHeaderView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QHeaderView::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QHeaderView_indexAt(this, handle__indexAt, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QHeaderView_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QHeaderView::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QHeaderView_isIndexHidden(this, handle__isIndexHidden, sigval1);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction param1, Qt::KeyboardModifiers param2) override {
		if (handle__moveCursor == 0) {
			return QHeaderView::moveCursor(param1, param2);
		}

		QAbstractItemView::CursorAction param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		Qt::KeyboardModifiers param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QHeaderView_moveCursor(this, handle__moveCursor, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QModelIndex* QHeaderView_virtualbase_moveCursor(void* self, int param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
		if (handle__setSelection == 0) {
			QHeaderView::setSelection(rect, flags);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags flags_ret = flags;
		int sigval2 = static_cast<int>(flags_ret);
		miqt_exec_callback_QHeaderView_setSelection(this, handle__setSelection, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_setSelection(void* self, QRect* rect, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QHeaderView::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QHeaderView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);
		return *callback_return_value;
	}

	friend QRegion* QHeaderView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QHeaderView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QHeaderView_setSelectionModel(this, handle__setSelectionModel, sigval1);

	}

	friend void QHeaderView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
			QHeaderView::keyboardSearch(search);
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
		miqt_exec_callback_QHeaderView_keyboardSearch(this, handle__keyboardSearch, sigval1);

	}

	friend void QHeaderView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QHeaderView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QHeaderView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QHeaderView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QHeaderView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QHeaderView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QHeaderView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QHeaderView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QHeaderView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QHeaderView_setRootIndex(this, handle__setRootIndex, sigval1);

	}

	friend void QHeaderView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QHeaderView::selectAll();
			return;
		}

		miqt_exec_callback_QHeaderView_selectAll(this, handle__selectAll);

	}

	friend void QHeaderView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QHeaderView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QHeaderView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

	}

	friend void QHeaderView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QHeaderView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QHeaderView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QHeaderView::updateEditorData();
			return;
		}

		miqt_exec_callback_QHeaderView_updateEditorData(this, handle__updateEditorData);

	}

	friend void QHeaderView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QHeaderView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QHeaderView_updateEditorGeometries(this, handle__updateEditorGeometries);

	}

	friend void QHeaderView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QHeaderView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QHeaderView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

	}

	friend void QHeaderView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QHeaderView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QHeaderView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

	}

	friend void QHeaderView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QHeaderView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QHeaderView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

	}

	friend void QHeaderView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QHeaderView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QHeaderView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

	}

	friend void QHeaderView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QHeaderView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QHeaderView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

	}

	friend void QHeaderView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QHeaderView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QHeaderView_commitData(this, handle__commitData, sigval1);

	}

	friend void QHeaderView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QHeaderView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QHeaderView_editorDestroyed(this, handle__editorDestroyed, sigval1);

	}

	friend void QHeaderView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QHeaderView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QHeaderView_selectedIndexes(this, handle__selectedIndexes);
		QModelIndexList callback_return_value_QModelIndexList;
		callback_return_value_QModelIndexList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QModelIndexList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QModelIndexList;
	}

	friend struct miqt_array /* of QModelIndex* */  QHeaderView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QHeaderView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QHeaderView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QHeaderView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QHeaderView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QHeaderView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QHeaderView_startDrag(this, handle__startDrag, sigval1);

	}

	friend void QHeaderView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QHeaderView::viewOptions();
		}

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QHeaderView_viewOptions(this, handle__viewOptions);
		return *callback_return_value;
	}

	friend QStyleOptionViewItem* QHeaderView_virtualbase_viewOptions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QHeaderView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QHeaderView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QHeaderView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QHeaderView::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QHeaderView::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QHeaderView::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QHeaderView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QHeaderView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QHeaderView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QHeaderView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHeaderView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QHeaderView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHeaderView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHeaderView_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QHeaderView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_viewportSizeHint(this, handle__viewportSizeHint);
		return *callback_return_value;
	}

	friend QSize* QHeaderView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QHeaderView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QHeaderView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QHeaderView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QHeaderView_setupViewport(this, handle__setupViewport, sigval1);

	}

	friend void QHeaderView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QHeaderView::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QHeaderView_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QHeaderView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QHeaderView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QHeaderView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QHeaderView_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QHeaderView::devType();
		}

		int callback_return_value = miqt_exec_callback_QHeaderView_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QHeaderView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QHeaderView_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QHeaderView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QHeaderView_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QHeaderView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QHeaderView_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QHeaderView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QHeaderView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QHeaderView::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QHeaderView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QHeaderView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QHeaderView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QHeaderView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QHeaderView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QHeaderView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QHeaderView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QHeaderView::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QHeaderView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QHeaderView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QHeaderView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QHeaderView_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QHeaderView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QHeaderView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QHeaderView_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QHeaderView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QHeaderView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QHeaderView_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QHeaderView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QHeaderView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QHeaderView_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QHeaderView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHeaderView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHeaderView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHeaderView_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QHeaderView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHeaderView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHeaderView_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QHeaderView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHeaderView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHeaderView_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QHeaderView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QHeaderView_protectedbase_updateSection(bool* _dynamic_cast_ok, void* self, int logicalIndex);
	friend void QHeaderView_protectedbase_resizeSections2(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_sectionsInserted(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_protectedbase_sectionsAboutToBeRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int logicalFirst, int logicalLast);
	friend void QHeaderView_protectedbase_initialize(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_initializeSections(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_initializeSections2(bool* _dynamic_cast_ok, void* self, int start, int end);
	friend void QHeaderView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionHeader* option);
	friend void QHeaderView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QHeaderView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QHeaderView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QHeaderView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QHeaderView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QHeaderView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QHeaderView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QHeaderView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QHeaderView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QHeaderView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QHeaderView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QHeaderView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QHeaderView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QHeaderView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QHeaderView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QHeaderView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QHeaderView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QHeaderView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QHeaderView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHeaderView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHeaderView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHeaderView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHeaderView* QHeaderView_new(int orientation) {
	return new (std::nothrow) MiqtVirtualQHeaderView(static_cast<Qt::Orientation>(orientation));
}

QHeaderView* QHeaderView_new2(int orientation, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQHeaderView(static_cast<Qt::Orientation>(orientation), parent);
}

void QHeaderView_virtbase(QHeaderView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QHeaderView_metaObject(const QHeaderView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHeaderView_metacast(QHeaderView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHeaderView_tr(const char* s) {
	QString _ret = QHeaderView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_trUtf8(const char* s) {
	QString _ret = QHeaderView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHeaderView_setModel(QHeaderView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

int QHeaderView_orientation(const QHeaderView* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QHeaderView_offset(const QHeaderView* self) {
	return self->offset();
}

int QHeaderView_length(const QHeaderView* self) {
	return self->length();
}

QSize* QHeaderView_sizeHint(const QHeaderView* self) {
	return new QSize(self->sizeHint());
}

void QHeaderView_setVisible(QHeaderView* self, bool v) {
	self->setVisible(v);
}

int QHeaderView_sectionSizeHint(const QHeaderView* self, int logicalIndex) {
	return self->sectionSizeHint(static_cast<int>(logicalIndex));
}

int QHeaderView_visualIndexAt(const QHeaderView* self, int position) {
	return self->visualIndexAt(static_cast<int>(position));
}

int QHeaderView_logicalIndexAt(const QHeaderView* self, int position) {
	return self->logicalIndexAt(static_cast<int>(position));
}

int QHeaderView_logicalIndexAt2(const QHeaderView* self, int x, int y) {
	return self->logicalIndexAt(static_cast<int>(x), static_cast<int>(y));
}

int QHeaderView_logicalIndexAtWithPos(const QHeaderView* self, QPoint* pos) {
	return self->logicalIndexAt(*pos);
}

int QHeaderView_sectionSize(const QHeaderView* self, int logicalIndex) {
	return self->sectionSize(static_cast<int>(logicalIndex));
}

int QHeaderView_sectionPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionPosition(static_cast<int>(logicalIndex));
}

int QHeaderView_sectionViewportPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionViewportPosition(static_cast<int>(logicalIndex));
}

void QHeaderView_moveSection(QHeaderView* self, int from, int to) {
	self->moveSection(static_cast<int>(from), static_cast<int>(to));
}

void QHeaderView_swapSections(QHeaderView* self, int first, int second) {
	self->swapSections(static_cast<int>(first), static_cast<int>(second));
}

void QHeaderView_resizeSection(QHeaderView* self, int logicalIndex, int size) {
	self->resizeSection(static_cast<int>(logicalIndex), static_cast<int>(size));
}

void QHeaderView_resizeSections(QHeaderView* self, int mode) {
	self->resizeSections(static_cast<QHeaderView::ResizeMode>(mode));
}

bool QHeaderView_isSectionHidden(const QHeaderView* self, int logicalIndex) {
	return self->isSectionHidden(static_cast<int>(logicalIndex));
}

void QHeaderView_setSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
	self->setSectionHidden(static_cast<int>(logicalIndex), hide);
}

int QHeaderView_hiddenSectionCount(const QHeaderView* self) {
	return self->hiddenSectionCount();
}

void QHeaderView_hideSection(QHeaderView* self, int logicalIndex) {
	self->hideSection(static_cast<int>(logicalIndex));
}

void QHeaderView_showSection(QHeaderView* self, int logicalIndex) {
	self->showSection(static_cast<int>(logicalIndex));
}

int QHeaderView_count(const QHeaderView* self) {
	return self->count();
}

int QHeaderView_visualIndex(const QHeaderView* self, int logicalIndex) {
	return self->visualIndex(static_cast<int>(logicalIndex));
}

int QHeaderView_logicalIndex(const QHeaderView* self, int visualIndex) {
	return self->logicalIndex(static_cast<int>(visualIndex));
}

void QHeaderView_setSectionsMovable(QHeaderView* self, bool movable) {
	self->setSectionsMovable(movable);
}

bool QHeaderView_sectionsMovable(const QHeaderView* self) {
	return self->sectionsMovable();
}

void QHeaderView_setFirstSectionMovable(QHeaderView* self, bool movable) {
	self->setFirstSectionMovable(movable);
}

bool QHeaderView_isFirstSectionMovable(const QHeaderView* self) {
	return self->isFirstSectionMovable();
}

void QHeaderView_setSectionsClickable(QHeaderView* self, bool clickable) {
	self->setSectionsClickable(clickable);
}

bool QHeaderView_sectionsClickable(const QHeaderView* self) {
	return self->sectionsClickable();
}

void QHeaderView_setHighlightSections(QHeaderView* self, bool highlight) {
	self->setHighlightSections(highlight);
}

bool QHeaderView_highlightSections(const QHeaderView* self) {
	return self->highlightSections();
}

int QHeaderView_sectionResizeMode(const QHeaderView* self, int logicalIndex) {
	QHeaderView::ResizeMode _ret = self->sectionResizeMode(static_cast<int>(logicalIndex));
	return static_cast<int>(_ret);
}

void QHeaderView_setSectionResizeMode(QHeaderView* self, int mode) {
	self->setSectionResizeMode(static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_setSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode) {
	self->setSectionResizeMode(static_cast<int>(logicalIndex), static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_setResizeContentsPrecision(QHeaderView* self, int precision) {
	self->setResizeContentsPrecision(static_cast<int>(precision));
}

int QHeaderView_resizeContentsPrecision(const QHeaderView* self) {
	return self->resizeContentsPrecision();
}

int QHeaderView_stretchSectionCount(const QHeaderView* self) {
	return self->stretchSectionCount();
}

void QHeaderView_setSortIndicatorShown(QHeaderView* self, bool show) {
	self->setSortIndicatorShown(show);
}

bool QHeaderView_isSortIndicatorShown(const QHeaderView* self) {
	return self->isSortIndicatorShown();
}

void QHeaderView_setSortIndicator(QHeaderView* self, int logicalIndex, int order) {
	self->setSortIndicator(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

int QHeaderView_sortIndicatorSection(const QHeaderView* self) {
	return self->sortIndicatorSection();
}

int QHeaderView_sortIndicatorOrder(const QHeaderView* self) {
	Qt::SortOrder _ret = self->sortIndicatorOrder();
	return static_cast<int>(_ret);
}

bool QHeaderView_stretchLastSection(const QHeaderView* self) {
	return self->stretchLastSection();
}

void QHeaderView_setStretchLastSection(QHeaderView* self, bool stretch) {
	self->setStretchLastSection(stretch);
}

bool QHeaderView_cascadingSectionResizes(const QHeaderView* self) {
	return self->cascadingSectionResizes();
}

void QHeaderView_setCascadingSectionResizes(QHeaderView* self, bool enable) {
	self->setCascadingSectionResizes(enable);
}

int QHeaderView_defaultSectionSize(const QHeaderView* self) {
	return self->defaultSectionSize();
}

void QHeaderView_setDefaultSectionSize(QHeaderView* self, int size) {
	self->setDefaultSectionSize(static_cast<int>(size));
}

void QHeaderView_resetDefaultSectionSize(QHeaderView* self) {
	self->resetDefaultSectionSize();
}

int QHeaderView_minimumSectionSize(const QHeaderView* self) {
	return self->minimumSectionSize();
}

void QHeaderView_setMinimumSectionSize(QHeaderView* self, int size) {
	self->setMinimumSectionSize(static_cast<int>(size));
}

int QHeaderView_maximumSectionSize(const QHeaderView* self) {
	return self->maximumSectionSize();
}

void QHeaderView_setMaximumSectionSize(QHeaderView* self, int size) {
	self->setMaximumSectionSize(static_cast<int>(size));
}

int QHeaderView_defaultAlignment(const QHeaderView* self) {
	Qt::Alignment _ret = self->defaultAlignment();
	return static_cast<int>(_ret);
}

void QHeaderView_setDefaultAlignment(QHeaderView* self, int alignment) {
	self->setDefaultAlignment(static_cast<Qt::Alignment>(alignment));
}

void QHeaderView_doItemsLayout(QHeaderView* self) {
	self->doItemsLayout();
}

bool QHeaderView_sectionsMoved(const QHeaderView* self) {
	return self->sectionsMoved();
}

bool QHeaderView_sectionsHidden(const QHeaderView* self) {
	return self->sectionsHidden();
}

struct miqt_string QHeaderView_saveState(const QHeaderView* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QHeaderView_restoreState(QHeaderView* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

void QHeaderView_reset(QHeaderView* self) {
	self->reset();
}

void QHeaderView_setOffset(QHeaderView* self, int offset) {
	self->setOffset(static_cast<int>(offset));
}

void QHeaderView_setOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
	self->setOffsetToSectionPosition(static_cast<int>(visualIndex));
}

void QHeaderView_setOffsetToLastSection(QHeaderView* self) {
	self->setOffsetToLastSection();
}

void QHeaderView_headerDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_sectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
	self->sectionMoved(static_cast<int>(logicalIndex), static_cast<int>(oldVisualIndex), static_cast<int>(newVisualIndex));
}

void QHeaderView_connect_sectionMoved(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionMoved), self, [=](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
		int sigval1 = logicalIndex;
		int sigval2 = oldVisualIndex;
		int sigval3 = newVisualIndex;
		miqt_exec_callback_QHeaderView_sectionMoved(slot, sigval1, sigval2, sigval3);
	});
}

void QHeaderView_sectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
	self->sectionResized(static_cast<int>(logicalIndex), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QHeaderView_connect_sectionResized(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionResized), self, [=](int logicalIndex, int oldSize, int newSize) {
		int sigval1 = logicalIndex;
		int sigval2 = oldSize;
		int sigval3 = newSize;
		miqt_exec_callback_QHeaderView_sectionResized(slot, sigval1, sigval2, sigval3);
	});
}

void QHeaderView_sectionPressed(QHeaderView* self, int logicalIndex) {
	self->sectionPressed(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_sectionPressed(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionPressed), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_sectionPressed(slot, sigval1);
	});
}

void QHeaderView_sectionClicked(QHeaderView* self, int logicalIndex) {
	self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_sectionClicked(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_sectionClicked(slot, sigval1);
	});
}

void QHeaderView_sectionEntered(QHeaderView* self, int logicalIndex) {
	self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_sectionEntered(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionEntered), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_sectionEntered(slot, sigval1);
	});
}

void QHeaderView_sectionDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_sectionDoubleClicked(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionDoubleClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_sectionDoubleClicked(slot, sigval1);
	});
}

void QHeaderView_sectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
	self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_connect_sectionCountChanged(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int)>(&QHeaderView::sectionCountChanged), self, [=](int oldCount, int newCount) {
		int sigval1 = oldCount;
		int sigval2 = newCount;
		miqt_exec_callback_QHeaderView_sectionCountChanged(slot, sigval1, sigval2);
	});
}

void QHeaderView_sectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionHandleDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_sectionHandleDoubleClicked(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionHandleDoubleClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_sectionHandleDoubleClicked(slot, sigval1);
	});
}

void QHeaderView_geometriesChanged(QHeaderView* self) {
	self->geometriesChanged();
}

void QHeaderView_connect_geometriesChanged(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)()>(&QHeaderView::geometriesChanged), self, [=]() {
		miqt_exec_callback_QHeaderView_geometriesChanged(slot);
	});
}

void QHeaderView_sortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
	self->sortIndicatorChanged(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

void QHeaderView_connect_sortIndicatorChanged(QHeaderView* self, intptr_t slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, Qt::SortOrder)>(&QHeaderView::sortIndicatorChanged), self, [=](int logicalIndex, Qt::SortOrder order) {
		int sigval1 = logicalIndex;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QHeaderView_sortIndicatorChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QHeaderView_tr2(const char* s, const char* c) {
	QString _ret = QHeaderView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_tr3(const char* s, const char* c, int n) {
	QString _ret = QHeaderView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_trUtf82(const char* s, const char* c) {
	QString _ret = QHeaderView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QHeaderView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHeaderView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = slot;
	return true;
}

void QHeaderView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setModel(model);
}

bool QHeaderView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QHeaderView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::sizeHint());
}

bool QHeaderView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QHeaderView_virtualbase_setVisible(void* self, bool v) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setVisible(v);
}

bool QHeaderView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QHeaderView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::doItemsLayout();
}

bool QHeaderView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

void QHeaderView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::reset();
}

bool QHeaderView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = slot;
	return true;
}

void QHeaderView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* old) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::currentChanged(*current, *old);
}

bool QHeaderView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QHeaderView_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::event(e);
}

bool QHeaderView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QHeaderView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::paintEvent(e);
}

bool QHeaderView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QHeaderView_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::mousePressEvent(e);
}

bool QHeaderView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::mouseMoveEvent(e);
}

bool QHeaderView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QHeaderView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::mouseReleaseEvent(e);
}

bool QHeaderView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QHeaderView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::mouseDoubleClickEvent(e);
}

bool QHeaderView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QHeaderView_virtualbase_viewportEvent(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::viewportEvent(e);
}

bool QHeaderView_override_virtual_paintSection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintSection = slot;
	return true;
}

void QHeaderView_virtualbase_paintSection(const void* self, QPainter* painter, QRect* rect, int logicalIndex) {
	static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::paintSection(painter, *rect, static_cast<int>(logicalIndex));
}

bool QHeaderView_override_virtual_sectionSizeFromContents(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sectionSizeFromContents = slot;
	return true;
}

QSize* QHeaderView_virtualbase_sectionSizeFromContents(const void* self, int logicalIndex) {
	return new QSize(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::sectionSizeFromContents(static_cast<int>(logicalIndex)));
}

bool QHeaderView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QHeaderView_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::horizontalOffset();
}

bool QHeaderView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = slot;
	return true;
}

int QHeaderView_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::verticalOffset();
}

bool QHeaderView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = slot;
	return true;
}

void QHeaderView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::updateGeometries();
}

bool QHeaderView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QHeaderView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QHeaderView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = slot;
	return true;
}

void QHeaderView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QVector;
	roles_QVector.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QVector.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::dataChanged(*topLeft, *bottomRight, roles_QVector);
}

bool QHeaderView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = slot;
	return true;
}

void QHeaderView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QHeaderView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QHeaderView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::visualRect(*index));
}

bool QHeaderView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = slot;
	return true;
}

void QHeaderView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::scrollTo(*index, static_cast<MiqtVirtualQHeaderView::ScrollHint>(hint));
}

bool QHeaderView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QHeaderView_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::indexAt(*p));
}

bool QHeaderView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QHeaderView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::isIndexHidden(*index);
}

bool QHeaderView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QHeaderView_virtualbase_moveCursor(void* self, int param1, int param2) {
	return new QModelIndex(static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::moveCursor(static_cast<MiqtVirtualQHeaderView::CursorAction>(param1), static_cast<Qt::KeyboardModifiers>(param2)));
}

bool QHeaderView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = slot;
	return true;
}

void QHeaderView_virtualbase_setSelection(void* self, QRect* rect, int flags) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
}

bool QHeaderView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QHeaderView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::visualRegionForSelection(*selection));
}

bool QHeaderView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QHeaderView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setSelectionModel(selectionModel);
}

bool QHeaderView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QHeaderView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::keyboardSearch(search_QString);
}

bool QHeaderView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QHeaderView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::sizeHintForRow(static_cast<int>(row));
}

bool QHeaderView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QHeaderView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::sizeHintForColumn(static_cast<int>(column));
}

bool QHeaderView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QHeaderView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QHeaderView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = slot;
	return true;
}

void QHeaderView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setRootIndex(*index);
}

bool QHeaderView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = slot;
	return true;
}

void QHeaderView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::selectAll();
}

bool QHeaderView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QHeaderView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QHeaderView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = slot;
	return true;
}

void QHeaderView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::selectionChanged(*selected, *deselected);
}

bool QHeaderView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = slot;
	return true;
}

void QHeaderView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::updateEditorData();
}

bool QHeaderView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QHeaderView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::updateEditorGeometries();
}

bool QHeaderView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QHeaderView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::verticalScrollbarAction(static_cast<int>(action));
}

bool QHeaderView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QHeaderView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QHeaderView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QHeaderView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QHeaderView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QHeaderView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QHeaderView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = slot;
	return true;
}

void QHeaderView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QHeaderView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = slot;
	return true;
}

void QHeaderView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::commitData(editor);
}

bool QHeaderView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QHeaderView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::editorDestroyed(editor);
}

bool QHeaderView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QHeaderView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::selectedIndexes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QHeaderView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = slot;
	return true;
}

bool QHeaderView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::edit(*index, static_cast<MiqtVirtualQHeaderView::EditTrigger>(trigger), event);
}

bool QHeaderView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = slot;
	return true;
}

int QHeaderView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QHeaderView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = slot;
	return true;
}

void QHeaderView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QHeaderView_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QHeaderView_virtualbase_viewOptions(const void* self) {
	return new QStyleOptionViewItem(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::viewOptions());
}

bool QHeaderView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QHeaderView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::focusNextPrevChild(next);
}

bool QHeaderView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QHeaderView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::dragEnterEvent(event);
}

bool QHeaderView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::dragMoveEvent(event);
}

bool QHeaderView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::dragLeaveEvent(event);
}

bool QHeaderView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QHeaderView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::dropEvent(event);
}

bool QHeaderView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QHeaderView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::focusInEvent(event);
}

bool QHeaderView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QHeaderView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::focusOutEvent(event);
}

bool QHeaderView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QHeaderView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::keyPressEvent(event);
}

bool QHeaderView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QHeaderView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::resizeEvent(event);
}

bool QHeaderView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QHeaderView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::timerEvent(event);
}

bool QHeaderView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QHeaderView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::inputMethodEvent(event);
}

bool QHeaderView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHeaderView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::eventFilter(object, event);
}

bool QHeaderView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QHeaderView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::viewportSizeHint());
}

bool QHeaderView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QHeaderView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::minimumSizeHint());
}

bool QHeaderView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = slot;
	return true;
}

void QHeaderView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::setupViewport(viewport);
}

bool QHeaderView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QHeaderView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::wheelEvent(param1);
}

bool QHeaderView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QHeaderView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::contextMenuEvent(param1);
}

bool QHeaderView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QHeaderView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::changeEvent(param1);
}

bool QHeaderView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QHeaderView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::devType();
}

bool QHeaderView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QHeaderView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::heightForWidth(static_cast<int>(param1));
}

bool QHeaderView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QHeaderView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::hasHeightForWidth();
}

bool QHeaderView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QHeaderView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::paintEngine();
}

bool QHeaderView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QHeaderView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::keyReleaseEvent(event);
}

bool QHeaderView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QHeaderView_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::enterEvent(event);
}

bool QHeaderView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::leaveEvent(event);
}

bool QHeaderView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::moveEvent(event);
}

bool QHeaderView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QHeaderView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::closeEvent(event);
}

bool QHeaderView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QHeaderView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::tabletEvent(event);
}

bool QHeaderView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QHeaderView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::actionEvent(event);
}

bool QHeaderView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QHeaderView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::showEvent(event);
}

bool QHeaderView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QHeaderView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::hideEvent(event);
}

bool QHeaderView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QHeaderView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QHeaderView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QHeaderView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::metric(static_cast<MiqtVirtualQHeaderView::PaintDeviceMetric>(param1));
}

bool QHeaderView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QHeaderView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::initPainter(painter);
}

bool QHeaderView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QHeaderView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::redirected(offset);
}

bool QHeaderView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QHeaderView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQHeaderView*>(self)->QHeaderView::sharedPainter();
}

bool QHeaderView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QHeaderView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::childEvent(event);
}

bool QHeaderView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QHeaderView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::customEvent(event);
}

bool QHeaderView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QHeaderView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::connectNotify(*signal);
}

bool QHeaderView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHeaderView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHeaderView*>(self)->QHeaderView::disconnectNotify(*signal);
}

void QHeaderView_protectedbase_updateSection(bool* _dynamic_cast_ok, void* self, int logicalIndex) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateSection(static_cast<int>(logicalIndex));
}

void QHeaderView_protectedbase_resizeSections2(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resizeSections();
}

void QHeaderView_protectedbase_sectionsInserted(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_protectedbase_sectionsAboutToBeRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_protectedbase_initialize(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initialize();
}

void QHeaderView_protectedbase_initializeSections(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initializeSections();
}

void QHeaderView_protectedbase_initializeSections2(bool* _dynamic_cast_ok, void* self, int start, int end) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initializeSections(static_cast<int>(start), static_cast<int>(end));
}

void QHeaderView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionHeader* option) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QHeaderView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));
}

int QHeaderView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->horizontalStepsPerItem();
}

void QHeaderView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));
}

int QHeaderView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->verticalStepsPerItem();
}

int QHeaderView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQHeaderView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QHeaderView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQHeaderView::State>(state));
}

void QHeaderView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QHeaderView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QHeaderView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QHeaderView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QHeaderView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QHeaderView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QHeaderView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QHeaderView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QHeaderView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQHeaderView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QHeaderView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QHeaderView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QHeaderView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QHeaderView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QHeaderView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QHeaderView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QHeaderView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QHeaderView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QHeaderView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHeaderView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHeaderView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHeaderView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHeaderView_delete(QHeaderView* self) {
	delete self;
}

