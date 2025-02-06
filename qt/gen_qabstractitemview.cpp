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
#include <qabstractitemview.h>
#include "gen_qabstractitemview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractItemView_pressed(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_clicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_doubleClicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_activated(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_entered(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_viewportEntered(intptr_t);
void miqt_exec_callback_QAbstractItemView_iconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QAbstractItemView_setModel(QAbstractItemView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QAbstractItemView_setSelectionModel(QAbstractItemView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QAbstractItemView_keyboardSearch(QAbstractItemView*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QAbstractItemView_visualRect(const QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_scrollTo(QAbstractItemView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QAbstractItemView_indexAt(const QAbstractItemView*, intptr_t, QPoint*);
int miqt_exec_callback_QAbstractItemView_sizeHintForRow(const QAbstractItemView*, intptr_t, int);
int miqt_exec_callback_QAbstractItemView_sizeHintForColumn(const QAbstractItemView*, intptr_t, int);
QVariant* miqt_exec_callback_QAbstractItemView_inputMethodQuery(const QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_reset(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setRootIndex(QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_doItemsLayout(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_selectAll(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_dataChanged(QAbstractItemView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemView_rowsInserted(QAbstractItemView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved(QAbstractItemView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_selectionChanged(QAbstractItemView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QAbstractItemView_currentChanged(QAbstractItemView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_updateEditorData(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_updateEditorGeometries(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_updateGeometries(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_verticalScrollbarAction(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_closeEditor(QAbstractItemView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QAbstractItemView_commitData(QAbstractItemView*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_editorDestroyed(QAbstractItemView*, intptr_t, QObject*);
QModelIndex* miqt_exec_callback_QAbstractItemView_moveCursor(QAbstractItemView*, intptr_t, int, int);
int miqt_exec_callback_QAbstractItemView_horizontalOffset(const QAbstractItemView*, intptr_t);
int miqt_exec_callback_QAbstractItemView_verticalOffset(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_isIndexHidden(const QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_setSelection(QAbstractItemView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QAbstractItemView_visualRegionForSelection(const QAbstractItemView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemView_selectedIndexes(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_edit2(QAbstractItemView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QAbstractItemView_selectionCommand(const QAbstractItemView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QAbstractItemView_startDrag(QAbstractItemView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QAbstractItemView_viewOptions(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_focusNextPrevChild(QAbstractItemView*, intptr_t, bool);
bool miqt_exec_callback_QAbstractItemView_event(QAbstractItemView*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemView_viewportEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_mousePressEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseMoveEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseReleaseEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_dragEnterEvent(QAbstractItemView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractItemView_dragMoveEvent(QAbstractItemView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractItemView_dragLeaveEvent(QAbstractItemView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractItemView_dropEvent(QAbstractItemView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractItemView_focusInEvent(QAbstractItemView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_focusOutEvent(QAbstractItemView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_keyPressEvent(QAbstractItemView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractItemView_resizeEvent(QAbstractItemView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractItemView_timerEvent(QAbstractItemView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemView_inputMethodEvent(QAbstractItemView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QAbstractItemView_eventFilter(QAbstractItemView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QAbstractItemView_viewportSizeHint(const QAbstractItemView*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_minimumSizeHint(const QAbstractItemView*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_sizeHint(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setupViewport(QAbstractItemView*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_paintEvent(QAbstractItemView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractItemView_wheelEvent(QAbstractItemView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractItemView_contextMenuEvent(QAbstractItemView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractItemView_scrollContentsBy(QAbstractItemView*, intptr_t, int, int);
void miqt_exec_callback_QAbstractItemView_changeEvent(QAbstractItemView*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractItemView_devType(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setVisible(QAbstractItemView*, intptr_t, bool);
int miqt_exec_callback_QAbstractItemView_heightForWidth(const QAbstractItemView*, intptr_t, int);
bool miqt_exec_callback_QAbstractItemView_hasHeightForWidth(const QAbstractItemView*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractItemView_paintEngine(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_keyReleaseEvent(QAbstractItemView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractItemView_enterEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_leaveEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_moveEvent(QAbstractItemView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractItemView_closeEvent(QAbstractItemView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractItemView_tabletEvent(QAbstractItemView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractItemView_actionEvent(QAbstractItemView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractItemView_showEvent(QAbstractItemView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractItemView_hideEvent(QAbstractItemView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractItemView_nativeEvent(QAbstractItemView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractItemView_metric(const QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_initPainter(const QAbstractItemView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractItemView_redirected(const QAbstractItemView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractItemView_sharedPainter(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_childEvent(QAbstractItemView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemView_customEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_connectNotify(QAbstractItemView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemView_disconnectNotify(QAbstractItemView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractItemView final : public QAbstractItemView {
public:

	MiqtVirtualQAbstractItemView(QWidget* parent): QAbstractItemView(parent) {};
	MiqtVirtualQAbstractItemView(): QAbstractItemView() {};

	virtual ~MiqtVirtualQAbstractItemView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__setModel == 0) {
			QAbstractItemView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QAbstractItemView_setModel(this, handle__setModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setModel(QAbstractItemModel* model) {

		QAbstractItemView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QAbstractItemView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QAbstractItemView_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QAbstractItemView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
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

		miqt_exec_callback_QAbstractItemView_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QAbstractItemView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QAbstractItemView_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QAbstractItemView_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (handle__indexAt == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QAbstractItemView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QAbstractItemView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QAbstractItemView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QAbstractItemView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractItemView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QAbstractItemView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QAbstractItemView::reset();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QAbstractItemView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QAbstractItemView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QAbstractItemView_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QAbstractItemView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QAbstractItemView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QAbstractItemView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QAbstractItemView::selectAll();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QAbstractItemView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
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

		miqt_exec_callback_QAbstractItemView_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QAbstractItemView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QAbstractItemView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QAbstractItemView_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QAbstractItemView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QAbstractItemView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QAbstractItemView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QAbstractItemView_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QAbstractItemView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QAbstractItemView::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QAbstractItemView_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QAbstractItemView::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QAbstractItemView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QAbstractItemView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QAbstractItemView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QAbstractItemView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QAbstractItemView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QAbstractItemView_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QAbstractItemView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QAbstractItemView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QAbstractItemView_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QAbstractItemView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QAbstractItemView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QAbstractItemView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QAbstractItemView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QAbstractItemView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QAbstractItemView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QAbstractItemView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QAbstractItemView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QAbstractItemView_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QAbstractItemView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QAbstractItemView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QAbstractItemView_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QAbstractItemView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QAbstractItemView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QAbstractItemView_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QAbstractItemView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemView_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemView_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QAbstractItemView_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QRegion(); // Pure virtual, there is no base we can call
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QAbstractItemView_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QAbstractItemView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemView_selectedIndexes(this, handle__selectedIndexes);
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
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QAbstractItemView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QAbstractItemView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QAbstractItemView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QAbstractItemView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QAbstractItemView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QAbstractItemView_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QAbstractItemView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QAbstractItemView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QAbstractItemView_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QAbstractItemView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractItemView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractItemView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractItemView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractItemView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QAbstractItemView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QAbstractItemView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QAbstractItemView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QAbstractItemView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractItemView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QAbstractItemView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractItemView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QAbstractItemView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractItemView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractItemView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractItemView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QAbstractItemView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractItemView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QAbstractItemView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractItemView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractItemView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractItemView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QAbstractItemView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractItemView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractItemView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractItemView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractItemView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QAbstractItemView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QAbstractItemView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QAbstractItemView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QAbstractItemView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractItemView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractItemView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractItemView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QAbstractItemView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractItemView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QAbstractItemView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QAbstractItemView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QAbstractItemView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractItemView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractItemView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractItemView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractItemView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QAbstractItemView::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QAbstractItemView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QAbstractItemView::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QAbstractItemView::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QAbstractItemView::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QAbstractItemView::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QAbstractItemView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractItemView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QAbstractItemView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QAbstractItemView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QAbstractItemView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QAbstractItemView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QAbstractItemView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractItemView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QAbstractItemView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractItemView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractItemView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractItemView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractItemView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractItemView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractItemView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractItemView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractItemView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractItemView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractItemView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractItemView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractItemView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractItemView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractItemView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractItemView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractItemView::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QAbstractItemView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractItemView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractItemView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractItemView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractItemView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QAbstractItemView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QAbstractItemView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractItemView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractItemView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractItemView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractItemView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QAbstractItemView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QAbstractItemView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractItemView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractItemView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QAbstractItemView::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractItemView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractItemView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractItemView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractItemView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractItemView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractItemView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractItemView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractItemView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractItemView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractItemView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractItemView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractItemView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractItemView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractItemView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractItemView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractItemView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractItemView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractItemView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractItemView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractItemView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractItemView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QAbstractItemView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QAbstractItemView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QAbstractItemView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QAbstractItemView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QAbstractItemView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QAbstractItemView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QAbstractItemView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QAbstractItemView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QAbstractItemView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractItemView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractItemView_metaObject(const QAbstractItemView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemView_metacast(QAbstractItemView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemView_tr(const char* s) {
	QString _ret = QAbstractItemView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf8(const char* s) {
	QString _ret = QAbstractItemView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemView_setModel(QAbstractItemView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_model(const QAbstractItemView* self) {
	return self->model();
}

void QAbstractItemView_setSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_selectionModel(const QAbstractItemView* self) {
	return self->selectionModel();
}

void QAbstractItemView_setItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegate(const QAbstractItemView* self) {
	return self->itemDelegate();
}

void QAbstractItemView_setSelectionMode(QAbstractItemView* self, int mode) {
	self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_selectionMode(const QAbstractItemView* self) {
	QAbstractItemView::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setSelectionBehavior(QAbstractItemView* self, int behavior) {
	self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_selectionBehavior(const QAbstractItemView* self) {
	QAbstractItemView::SelectionBehavior _ret = self->selectionBehavior();
	return static_cast<int>(_ret);
}

QModelIndex* QAbstractItemView_currentIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_rootIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_setEditTriggers(QAbstractItemView* self, int triggers) {
	self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_editTriggers(const QAbstractItemView* self) {
	QAbstractItemView::EditTriggers _ret = self->editTriggers();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setVerticalScrollMode(QAbstractItemView* self, int mode) {
	self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_verticalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->verticalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_resetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_setHorizontalScrollMode(QAbstractItemView* self, int mode) {
	self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_horizontalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->horizontalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_resetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_setAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_hasAutoScroll(const QAbstractItemView* self) {
	return self->hasAutoScroll();
}

void QAbstractItemView_setAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_autoScrollMargin(const QAbstractItemView* self) {
	return self->autoScrollMargin();
}

void QAbstractItemView_setTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_tabKeyNavigation(const QAbstractItemView* self) {
	return self->tabKeyNavigation();
}

void QAbstractItemView_setDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_showDropIndicator(const QAbstractItemView* self) {
	return self->showDropIndicator();
}

void QAbstractItemView_setDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_dragEnabled(const QAbstractItemView* self) {
	return self->dragEnabled();
}

void QAbstractItemView_setDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_dragDropOverwriteMode(const QAbstractItemView* self) {
	return self->dragDropOverwriteMode();
}

void QAbstractItemView_setDragDropMode(QAbstractItemView* self, int behavior) {
	self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_dragDropMode(const QAbstractItemView* self) {
	QAbstractItemView::DragDropMode _ret = self->dragDropMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setDefaultDropAction(QAbstractItemView* self, int dropAction) {
	self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_defaultDropAction(const QAbstractItemView* self) {
	Qt::DropAction _ret = self->defaultDropAction();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_alternatingRowColors(const QAbstractItemView* self) {
	return self->alternatingRowColors();
}

void QAbstractItemView_setIconSize(QAbstractItemView* self, QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_iconSize(const QAbstractItemView* self) {
	return new QSize(self->iconSize());
}

void QAbstractItemView_setTextElideMode(QAbstractItemView* self, int mode) {
	self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_textElideMode(const QAbstractItemView* self) {
	Qt::TextElideMode _ret = self->textElideMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_keyboardSearch(QAbstractItemView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_visualRect(const QAbstractItemView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QAbstractItemView_scrollTo(QAbstractItemView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QAbstractItemView_indexAt(const QAbstractItemView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

QSize* QAbstractItemView_sizeHintForIndex(const QAbstractItemView* self, QModelIndex* index) {
	return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_sizeHintForRow(const QAbstractItemView* self, int row) {
	return self->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_sizeHintForColumn(const QAbstractItemView* self, int column) {
	return self->sizeHintForColumn(static_cast<int>(column));
}

void QAbstractItemView_openPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_closePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_isPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index) {
	return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_setIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_indexWidget(const QAbstractItemView* self, QModelIndex* index) {
	return self->indexWidget(*index);
}

void QAbstractItemView_setItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateForRow(const QAbstractItemView* self, int row) {
	return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_setItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateForColumn(const QAbstractItemView* self, int column) {
	return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index) {
	return self->itemDelegate(*index);
}

QVariant* QAbstractItemView_inputMethodQuery(const QAbstractItemView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

void QAbstractItemView_reset(QAbstractItemView* self) {
	self->reset();
}

void QAbstractItemView_setRootIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QAbstractItemView_doItemsLayout(QAbstractItemView* self) {
	self->doItemsLayout();
}

void QAbstractItemView_selectAll(QAbstractItemView* self) {
	self->selectAll();
}

void QAbstractItemView_edit(QAbstractItemView* self, QModelIndex* index) {
	self->edit(*index);
}

void QAbstractItemView_clearSelection(QAbstractItemView* self) {
	self->clearSelection();
}

void QAbstractItemView_setCurrentIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setCurrentIndex(*index);
}

void QAbstractItemView_scrollToTop(QAbstractItemView* self) {
	self->scrollToTop();
}

void QAbstractItemView_scrollToBottom(QAbstractItemView* self) {
	self->scrollToBottom();
}

void QAbstractItemView_update(QAbstractItemView* self, QModelIndex* index) {
	self->update(*index);
}

void QAbstractItemView_pressed(QAbstractItemView* self, QModelIndex* index) {
	self->pressed(*index);
}

void QAbstractItemView_connect_pressed(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::pressed), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_pressed(slot, sigval1);
	});
}

void QAbstractItemView_clicked(QAbstractItemView* self, QModelIndex* index) {
	self->clicked(*index);
}

void QAbstractItemView_connect_clicked(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::clicked), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_clicked(slot, sigval1);
	});
}

void QAbstractItemView_doubleClicked(QAbstractItemView* self, QModelIndex* index) {
	self->doubleClicked(*index);
}

void QAbstractItemView_connect_doubleClicked(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::doubleClicked), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_doubleClicked(slot, sigval1);
	});
}

void QAbstractItemView_activated(QAbstractItemView* self, QModelIndex* index) {
	self->activated(*index);
}

void QAbstractItemView_connect_activated(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::activated), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_activated(slot, sigval1);
	});
}

void QAbstractItemView_entered(QAbstractItemView* self, QModelIndex* index) {
	self->entered(*index);
}

void QAbstractItemView_connect_entered(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::entered), self, [=](const QModelIndex& index) {
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_entered(slot, sigval1);
	});
}

void QAbstractItemView_viewportEntered(QAbstractItemView* self) {
	self->viewportEntered();
}

void QAbstractItemView_connect_viewportEntered(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)()>(&QAbstractItemView::viewportEntered), self, [=]() {
		miqt_exec_callback_QAbstractItemView_viewportEntered(slot);
	});
}

void QAbstractItemView_iconSizeChanged(QAbstractItemView* self, QSize* size) {
	self->iconSizeChanged(*size);
}

void QAbstractItemView_connect_iconSizeChanged(QAbstractItemView* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QSize&)>(&QAbstractItemView::iconSizeChanged), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QAbstractItemView_iconSizeChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractItemView_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemView_override_virtual_setModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModel = slot;
	return true;
}

void QAbstractItemView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_setModel(model);
}

bool QAbstractItemView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QAbstractItemView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QAbstractItemView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QAbstractItemView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_keyboardSearch(search);
}

bool QAbstractItemView_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

bool QAbstractItemView_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

bool QAbstractItemView_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

bool QAbstractItemView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QAbstractItemView_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QAbstractItemView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QAbstractItemView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QAbstractItemView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractItemView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QAbstractItemView_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QAbstractItemView_virtualbase_reset(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_reset();
}

bool QAbstractItemView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QAbstractItemView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_setRootIndex(index);
}

bool QAbstractItemView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QAbstractItemView_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_doItemsLayout();
}

bool QAbstractItemView_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QAbstractItemView_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_selectAll();
}

bool QAbstractItemView_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QAbstractItemView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QAbstractItemView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QAbstractItemView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QAbstractItemView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QAbstractItemView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QAbstractItemView_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QAbstractItemView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QAbstractItemView_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_updateEditorData();
}

bool QAbstractItemView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QAbstractItemView_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_updateEditorGeometries();
}

bool QAbstractItemView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QAbstractItemView_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_updateGeometries();
}

bool QAbstractItemView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QAbstractItemView_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QAbstractItemView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QAbstractItemView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QAbstractItemView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QAbstractItemView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QAbstractItemView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QAbstractItemView_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QAbstractItemView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QAbstractItemView_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QAbstractItemView_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_commitData(editor);
}

bool QAbstractItemView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QAbstractItemView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QAbstractItemView_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

bool QAbstractItemView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

bool QAbstractItemView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

bool QAbstractItemView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QAbstractItemView_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

bool QAbstractItemView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

bool QAbstractItemView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemView_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_selectedIndexes();
}

bool QAbstractItemView_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QAbstractItemView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QAbstractItemView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QAbstractItemView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QAbstractItemView_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QAbstractItemView_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QAbstractItemView_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QAbstractItemView_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_viewOptions();
}

bool QAbstractItemView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractItemView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractItemView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractItemView_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_event(event);
}

bool QAbstractItemView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QAbstractItemView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_viewportEvent(event);
}

bool QAbstractItemView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QAbstractItemView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QAbstractItemView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QAbstractItemView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractItemView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractItemView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractItemView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractItemView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractItemView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractItemView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractItemView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QAbstractItemView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_resizeEvent(event);
}

bool QAbstractItemView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractItemView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QAbstractItemView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractItemView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_eventFilter(object, event);
}

bool QAbstractItemView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_viewportSizeHint();
}

bool QAbstractItemView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractItemView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractItemView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_sizeHint();
}

bool QAbstractItemView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QAbstractItemView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_setupViewport(viewport);
}

bool QAbstractItemView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_paintEvent(param1);
}

bool QAbstractItemView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_wheelEvent(param1);
}

bool QAbstractItemView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QAbstractItemView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QAbstractItemView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QAbstractItemView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_changeEvent(param1);
}

bool QAbstractItemView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractItemView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_devType();
}

bool QAbstractItemView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractItemView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractItemView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractItemView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractItemView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractItemView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractItemView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractItemView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_paintEngine();
}

bool QAbstractItemView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractItemView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractItemView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractItemView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractItemView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_closeEvent(event);
}

bool QAbstractItemView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractItemView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractItemView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_showEvent(event);
}

bool QAbstractItemView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractItemView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractItemView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractItemView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractItemView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_metric(param1);
}

bool QAbstractItemView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractItemView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractItemView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractItemView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractItemView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractItemView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractItemView*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractItemView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractItemView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractItemView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractItemView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractItemView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractItemView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractItemView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractItemView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QAbstractItemView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QAbstractItemView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QAbstractItemView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QAbstractItemView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQAbstractItemView::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QAbstractItemView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQAbstractItemView::State>(state));

}

void QAbstractItemView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QAbstractItemView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QAbstractItemView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QAbstractItemView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QAbstractItemView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QAbstractItemView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QAbstractItemView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QAbstractItemView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QAbstractItemView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQAbstractItemView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QAbstractItemView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QAbstractItemView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QAbstractItemView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QAbstractItemView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QAbstractItemView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractItemView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractItemView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractItemView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractItemView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractItemView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractItemView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractItemView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractItemView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractItemView_delete(QAbstractItemView* self) {
	delete self;
}

