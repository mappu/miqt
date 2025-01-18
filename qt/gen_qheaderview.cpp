#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QByteArray>
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
#include <QPainter>
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
#include <QWidget>
#include <qheaderview.h>
#include "gen_qheaderview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QHeaderView_SectionMoved(intptr_t, int, int, int);
void miqt_exec_callback_QHeaderView_SectionResized(intptr_t, int, int, int);
void miqt_exec_callback_QHeaderView_SectionPressed(intptr_t, int);
void miqt_exec_callback_QHeaderView_SectionClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_SectionEntered(intptr_t, int);
void miqt_exec_callback_QHeaderView_SectionDoubleClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_SectionCountChanged(intptr_t, int, int);
void miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked(intptr_t, int);
void miqt_exec_callback_QHeaderView_GeometriesChanged(intptr_t);
void miqt_exec_callback_QHeaderView_SortIndicatorChanged(intptr_t, int, int);
void miqt_exec_callback_QHeaderView_SetModel(void*, intptr_t, QAbstractItemModel*);
QSize* miqt_exec_callback_QHeaderView_SizeHint(void*, intptr_t);
void miqt_exec_callback_QHeaderView_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QHeaderView_DoItemsLayout(void*, intptr_t);
void miqt_exec_callback_QHeaderView_Reset(void*, intptr_t);
void miqt_exec_callback_QHeaderView_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
bool miqt_exec_callback_QHeaderView_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QHeaderView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QHeaderView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QHeaderView_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QHeaderView_PaintSection(void*, intptr_t, QPainter*, QRect*, int);
QSize* miqt_exec_callback_QHeaderView_SectionSizeFromContents(void*, intptr_t, int);
int miqt_exec_callback_QHeaderView_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QHeaderView_VerticalOffset(void*, intptr_t);
void miqt_exec_callback_QHeaderView_UpdateGeometries(void*, intptr_t);
void miqt_exec_callback_QHeaderView_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QHeaderView_DataChanged(void*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QHeaderView_RowsInserted(void*, intptr_t, QModelIndex*, int, int);
QRect* miqt_exec_callback_QHeaderView_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QHeaderView_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QHeaderView_IndexAt(void*, intptr_t, QPoint*);
bool miqt_exec_callback_QHeaderView_IsIndexHidden(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QHeaderView_MoveCursor(void*, intptr_t, int, int);
void miqt_exec_callback_QHeaderView_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QHeaderView_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
void miqt_exec_callback_QHeaderView_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QHeaderView_KeyboardSearch(void*, intptr_t, struct miqt_string);
int miqt_exec_callback_QHeaderView_SizeHintForRow(void*, intptr_t, int);
int miqt_exec_callback_QHeaderView_SizeHintForColumn(void*, intptr_t, int);
QVariant* miqt_exec_callback_QHeaderView_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QHeaderView_SetRootIndex(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QHeaderView_SelectAll(void*, intptr_t);
void miqt_exec_callback_QHeaderView_RowsAboutToBeRemoved(void*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QHeaderView_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QHeaderView_UpdateEditorData(void*, intptr_t);
void miqt_exec_callback_QHeaderView_UpdateEditorGeometries(void*, intptr_t);
void miqt_exec_callback_QHeaderView_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QHeaderView_HorizontalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QHeaderView_VerticalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QHeaderView_HorizontalScrollbarValueChanged(void*, intptr_t, int);
void miqt_exec_callback_QHeaderView_CloseEditor(void*, intptr_t, QWidget*, int);
void miqt_exec_callback_QHeaderView_CommitData(void*, intptr_t, QWidget*);
void miqt_exec_callback_QHeaderView_EditorDestroyed(void*, intptr_t, QObject*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QHeaderView_SelectedIndexes(void*, intptr_t);
bool miqt_exec_callback_QHeaderView_Edit2(void*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QHeaderView_SelectionCommand(void*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QHeaderView_StartDrag(void*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QHeaderView_ViewOptions(void*, intptr_t);
bool miqt_exec_callback_QHeaderView_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QHeaderView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QHeaderView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QHeaderView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QHeaderView_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QHeaderView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QHeaderView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QHeaderView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QHeaderView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QHeaderView_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHeaderView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QHeaderView_EventFilter(void*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QHeaderView_ViewportSizeHint(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHeaderView final : public QHeaderView {
public:

	MiqtVirtualQHeaderView(Qt::Orientation orientation): QHeaderView(orientation) {};
	MiqtVirtualQHeaderView(Qt::Orientation orientation, QWidget* parent): QHeaderView(orientation, parent) {};

	virtual ~MiqtVirtualQHeaderView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (handle__SetModel == 0) {
			QHeaderView::setModel(model);
			return;
		}
		
		QAbstractItemModel* sigval1 = model;

		miqt_exec_callback_QHeaderView_SetModel(this, handle__SetModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModel(QAbstractItemModel* model) {

		QHeaderView::setModel(model);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QHeaderView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_SizeHint(const_cast<MiqtVirtualQHeaderView*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QHeaderView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool v) override {
		if (handle__SetVisible == 0) {
			QHeaderView::setVisible(v);
			return;
		}
		
		bool sigval1 = v;

		miqt_exec_callback_QHeaderView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool v) {

		QHeaderView::setVisible(v);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QHeaderView::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QHeaderView_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QHeaderView::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QHeaderView::reset();
			return;
		}
		

		miqt_exec_callback_QHeaderView_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QHeaderView::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& old) override {
		if (handle__CurrentChanged == 0) {
			QHeaderView::currentChanged(current, old);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& old_ret = old;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&old_ret);

		miqt_exec_callback_QHeaderView_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* old) {

		QHeaderView::currentChanged(*current, *old);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QHeaderView::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QHeaderView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QHeaderView::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QHeaderView::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QHeaderView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QHeaderView::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QHeaderView::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QHeaderView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QHeaderView::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QHeaderView::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QHeaderView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QHeaderView::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QHeaderView::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QHeaderView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QHeaderView::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QHeaderView::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QHeaderView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QHeaderView::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* e) override {
		if (handle__ViewportEvent == 0) {
			return QHeaderView::viewportEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QHeaderView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* e) {

		return QHeaderView::viewportEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintSection = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const override {
		if (handle__PaintSection == 0) {
			QHeaderView::paintSection(painter, rect, logicalIndex);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		int sigval3 = logicalIndex;

		miqt_exec_callback_QHeaderView_PaintSection(const_cast<MiqtVirtualQHeaderView*>(this), handle__PaintSection, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintSection(QPainter* painter, QRect* rect, int logicalIndex) const {

		QHeaderView::paintSection(painter, *rect, static_cast<int>(logicalIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SectionSizeFromContents = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sectionSizeFromContents(int logicalIndex) const override {
		if (handle__SectionSizeFromContents == 0) {
			return QHeaderView::sectionSizeFromContents(logicalIndex);
		}
		
		int sigval1 = logicalIndex;

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_SectionSizeFromContents(const_cast<MiqtVirtualQHeaderView*>(this), handle__SectionSizeFromContents, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SectionSizeFromContents(int logicalIndex) const {

		return new QSize(QHeaderView::sectionSizeFromContents(static_cast<int>(logicalIndex)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QHeaderView::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QHeaderView_HorizontalOffset(const_cast<MiqtVirtualQHeaderView*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QHeaderView::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QHeaderView::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QHeaderView_VerticalOffset(const_cast<MiqtVirtualQHeaderView*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QHeaderView::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QHeaderView::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QHeaderView_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QHeaderView::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QHeaderView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QHeaderView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QHeaderView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__DataChanged == 0) {
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
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;

		miqt_exec_callback_QHeaderView_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QHeaderView::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QHeaderView::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QHeaderView_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QHeaderView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QHeaderView::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QHeaderView_VisualRect(const_cast<MiqtVirtualQHeaderView*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QHeaderView::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QHeaderView::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QHeaderView_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QHeaderView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QHeaderView::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QHeaderView_IndexAt(const_cast<MiqtVirtualQHeaderView*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QHeaderView::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QHeaderView::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QHeaderView_IsIndexHidden(const_cast<MiqtVirtualQHeaderView*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QHeaderView::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction param1, Qt::KeyboardModifiers param2) override {
		if (handle__MoveCursor == 0) {
			return QHeaderView::moveCursor(param1, param2);
		}
		
		QAbstractItemView::CursorAction param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		Qt::KeyboardModifiers param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QHeaderView_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int param1, int param2) {

		return new QModelIndex(QHeaderView::moveCursor(static_cast<QAbstractItemView::CursorAction>(param1), static_cast<Qt::KeyboardModifiers>(param2)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags flags) override {
		if (handle__SetSelection == 0) {
			QHeaderView::setSelection(rect, flags);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags flags_ret = flags;
		int sigval2 = static_cast<int>(flags_ret);

		miqt_exec_callback_QHeaderView_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int flags) {

		QHeaderView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QHeaderView::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QHeaderView_VisualRegionForSelection(const_cast<MiqtVirtualQHeaderView*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QHeaderView::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QHeaderView::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QHeaderView_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QHeaderView::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__KeyboardSearch == 0) {
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

		miqt_exec_callback_QHeaderView_KeyboardSearch(this, handle__KeyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QHeaderView::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QHeaderView::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QHeaderView_SizeHintForRow(const_cast<MiqtVirtualQHeaderView*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QHeaderView::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QHeaderView::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QHeaderView_SizeHintForColumn(const_cast<MiqtVirtualQHeaderView*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QHeaderView::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QHeaderView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QHeaderView_InputMethodQuery(const_cast<MiqtVirtualQHeaderView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QHeaderView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QHeaderView::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QHeaderView_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QHeaderView::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__SelectAll == 0) {
			QHeaderView::selectAll();
			return;
		}
		

		miqt_exec_callback_QHeaderView_SelectAll(this, handle__SelectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll() {

		QHeaderView::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QHeaderView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QHeaderView_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QHeaderView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QHeaderView::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QHeaderView_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QHeaderView::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__UpdateEditorData == 0) {
			QHeaderView::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QHeaderView_UpdateEditorData(this, handle__UpdateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorData() {

		QHeaderView::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__UpdateEditorGeometries == 0) {
			QHeaderView::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QHeaderView_UpdateEditorGeometries(this, handle__UpdateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometries() {

		QHeaderView::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QHeaderView::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QHeaderView_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QHeaderView::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QHeaderView::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QHeaderView_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QHeaderView::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__VerticalScrollbarValueChanged == 0) {
			QHeaderView::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QHeaderView_VerticalScrollbarValueChanged(this, handle__VerticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarValueChanged(int value) {

		QHeaderView::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__HorizontalScrollbarValueChanged == 0) {
			QHeaderView::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QHeaderView_HorizontalScrollbarValueChanged(this, handle__HorizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarValueChanged(int value) {

		QHeaderView::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__CloseEditor == 0) {
			QHeaderView::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QHeaderView_CloseEditor(this, handle__CloseEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEditor(QWidget* editor, int hint) {

		QHeaderView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CommitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__CommitData == 0) {
			QHeaderView::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QHeaderView_CommitData(this, handle__CommitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CommitData(QWidget* editor) {

		QHeaderView::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__EditorDestroyed == 0) {
			QHeaderView::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QHeaderView_EditorDestroyed(this, handle__EditorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EditorDestroyed(QObject* editor) {

		QHeaderView::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QHeaderView::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QHeaderView_SelectedIndexes(const_cast<MiqtVirtualQHeaderView*>(this), handle__SelectedIndexes);
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

		QModelIndexList _ret = QHeaderView::selectedIndexes();
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
			return QHeaderView::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QHeaderView_Edit2(this, handle__Edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QHeaderView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__SelectionCommand == 0) {
			return QHeaderView::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QHeaderView_SelectionCommand(const_cast<MiqtVirtualQHeaderView*>(this), handle__SelectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SelectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QHeaderView::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QHeaderView::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QHeaderView_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QHeaderView::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QHeaderView::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QHeaderView_ViewOptions(const_cast<MiqtVirtualQHeaderView*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QHeaderView::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QHeaderView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QHeaderView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QHeaderView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QHeaderView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QHeaderView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QHeaderView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QHeaderView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QHeaderView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QHeaderView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QHeaderView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QHeaderView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QHeaderView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QHeaderView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QHeaderView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QHeaderView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QHeaderView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QHeaderView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QHeaderView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QHeaderView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QHeaderView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QHeaderView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QHeaderView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QHeaderView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QHeaderView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QHeaderView::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHeaderView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QHeaderView::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QHeaderView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHeaderView_ViewportSizeHint(const_cast<MiqtVirtualQHeaderView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QHeaderView::viewportSizeHint());

	}

};

QHeaderView* QHeaderView_new(int orientation) {
	return new MiqtVirtualQHeaderView(static_cast<Qt::Orientation>(orientation));
}

QHeaderView* QHeaderView_new2(int orientation, QWidget* parent) {
	return new MiqtVirtualQHeaderView(static_cast<Qt::Orientation>(orientation), parent);
}

void QHeaderView_virtbase(QHeaderView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QHeaderView_MetaObject(const QHeaderView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHeaderView_Metacast(QHeaderView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHeaderView_Tr(const char* s) {
	QString _ret = QHeaderView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_TrUtf8(const char* s) {
	QString _ret = QHeaderView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

int QHeaderView_Orientation(const QHeaderView* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QHeaderView_Offset(const QHeaderView* self) {
	return self->offset();
}

int QHeaderView_Length(const QHeaderView* self) {
	return self->length();
}

QSize* QHeaderView_SizeHint(const QHeaderView* self) {
	return new QSize(self->sizeHint());
}

void QHeaderView_SetVisible(QHeaderView* self, bool v) {
	self->setVisible(v);
}

int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex) {
	return self->sectionSizeHint(static_cast<int>(logicalIndex));
}

int QHeaderView_VisualIndexAt(const QHeaderView* self, int position) {
	return self->visualIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position) {
	return self->logicalIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y) {
	return self->logicalIndexAt(static_cast<int>(x), static_cast<int>(y));
}

int QHeaderView_LogicalIndexAtWithPos(const QHeaderView* self, QPoint* pos) {
	return self->logicalIndexAt(*pos);
}

int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex) {
	return self->sectionSize(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionPosition(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionViewportPosition(static_cast<int>(logicalIndex));
}

void QHeaderView_MoveSection(QHeaderView* self, int from, int to) {
	self->moveSection(static_cast<int>(from), static_cast<int>(to));
}

void QHeaderView_SwapSections(QHeaderView* self, int first, int second) {
	self->swapSections(static_cast<int>(first), static_cast<int>(second));
}

void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size) {
	self->resizeSection(static_cast<int>(logicalIndex), static_cast<int>(size));
}

void QHeaderView_ResizeSections(QHeaderView* self, int mode) {
	self->resizeSections(static_cast<QHeaderView::ResizeMode>(mode));
}

bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex) {
	return self->isSectionHidden(static_cast<int>(logicalIndex));
}

void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
	self->setSectionHidden(static_cast<int>(logicalIndex), hide);
}

int QHeaderView_HiddenSectionCount(const QHeaderView* self) {
	return self->hiddenSectionCount();
}

void QHeaderView_HideSection(QHeaderView* self, int logicalIndex) {
	self->hideSection(static_cast<int>(logicalIndex));
}

void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex) {
	self->showSection(static_cast<int>(logicalIndex));
}

int QHeaderView_Count(const QHeaderView* self) {
	return self->count();
}

int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex) {
	return self->visualIndex(static_cast<int>(logicalIndex));
}

int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex) {
	return self->logicalIndex(static_cast<int>(visualIndex));
}

void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable) {
	self->setSectionsMovable(movable);
}

bool QHeaderView_SectionsMovable(const QHeaderView* self) {
	return self->sectionsMovable();
}

void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable) {
	self->setFirstSectionMovable(movable);
}

bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self) {
	return self->isFirstSectionMovable();
}

void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable) {
	self->setSectionsClickable(clickable);
}

bool QHeaderView_SectionsClickable(const QHeaderView* self) {
	return self->sectionsClickable();
}

void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight) {
	self->setHighlightSections(highlight);
}

bool QHeaderView_HighlightSections(const QHeaderView* self) {
	return self->highlightSections();
}

int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex) {
	QHeaderView::ResizeMode _ret = self->sectionResizeMode(static_cast<int>(logicalIndex));
	return static_cast<int>(_ret);
}

void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode) {
	self->setSectionResizeMode(static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode) {
	self->setSectionResizeMode(static_cast<int>(logicalIndex), static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision) {
	self->setResizeContentsPrecision(static_cast<int>(precision));
}

int QHeaderView_ResizeContentsPrecision(const QHeaderView* self) {
	return self->resizeContentsPrecision();
}

int QHeaderView_StretchSectionCount(const QHeaderView* self) {
	return self->stretchSectionCount();
}

void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show) {
	self->setSortIndicatorShown(show);
}

bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self) {
	return self->isSortIndicatorShown();
}

void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order) {
	self->setSortIndicator(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

int QHeaderView_SortIndicatorSection(const QHeaderView* self) {
	return self->sortIndicatorSection();
}

int QHeaderView_SortIndicatorOrder(const QHeaderView* self) {
	Qt::SortOrder _ret = self->sortIndicatorOrder();
	return static_cast<int>(_ret);
}

bool QHeaderView_StretchLastSection(const QHeaderView* self) {
	return self->stretchLastSection();
}

void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch) {
	self->setStretchLastSection(stretch);
}

bool QHeaderView_CascadingSectionResizes(const QHeaderView* self) {
	return self->cascadingSectionResizes();
}

void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable) {
	self->setCascadingSectionResizes(enable);
}

int QHeaderView_DefaultSectionSize(const QHeaderView* self) {
	return self->defaultSectionSize();
}

void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size) {
	self->setDefaultSectionSize(static_cast<int>(size));
}

void QHeaderView_ResetDefaultSectionSize(QHeaderView* self) {
	self->resetDefaultSectionSize();
}

int QHeaderView_MinimumSectionSize(const QHeaderView* self) {
	return self->minimumSectionSize();
}

void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size) {
	self->setMinimumSectionSize(static_cast<int>(size));
}

int QHeaderView_MaximumSectionSize(const QHeaderView* self) {
	return self->maximumSectionSize();
}

void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size) {
	self->setMaximumSectionSize(static_cast<int>(size));
}

int QHeaderView_DefaultAlignment(const QHeaderView* self) {
	Qt::Alignment _ret = self->defaultAlignment();
	return static_cast<int>(_ret);
}

void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment) {
	self->setDefaultAlignment(static_cast<Qt::Alignment>(alignment));
}

void QHeaderView_DoItemsLayout(QHeaderView* self) {
	self->doItemsLayout();
}

bool QHeaderView_SectionsMoved(const QHeaderView* self) {
	return self->sectionsMoved();
}

bool QHeaderView_SectionsHidden(const QHeaderView* self) {
	return self->sectionsHidden();
}

struct miqt_string QHeaderView_SaveState(const QHeaderView* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QHeaderView_RestoreState(QHeaderView* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

void QHeaderView_Reset(QHeaderView* self) {
	self->reset();
}

void QHeaderView_SetOffset(QHeaderView* self, int offset) {
	self->setOffset(static_cast<int>(offset));
}

void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
	self->setOffsetToSectionPosition(static_cast<int>(visualIndex));
}

void QHeaderView_SetOffsetToLastSection(QHeaderView* self) {
	self->setOffsetToLastSection();
}

void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
	self->sectionMoved(static_cast<int>(logicalIndex), static_cast<int>(oldVisualIndex), static_cast<int>(newVisualIndex));
}

void QHeaderView_connect_SectionMoved(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionMoved), self, [=](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
		int sigval1 = logicalIndex;
		int sigval2 = oldVisualIndex;
		int sigval3 = newVisualIndex;
		miqt_exec_callback_QHeaderView_SectionMoved(slot, sigval1, sigval2, sigval3);
	});
}

void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
	self->sectionResized(static_cast<int>(logicalIndex), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QHeaderView_connect_SectionResized(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionResized), self, [=](int logicalIndex, int oldSize, int newSize) {
		int sigval1 = logicalIndex;
		int sigval2 = oldSize;
		int sigval3 = newSize;
		miqt_exec_callback_QHeaderView_SectionResized(slot, sigval1, sigval2, sigval3);
	});
}

void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex) {
	self->sectionPressed(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionPressed(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionPressed), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_SectionPressed(slot, sigval1);
	});
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
	self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionClicked(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_SectionClicked(slot, sigval1);
	});
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
	self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionEntered(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionEntered), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_SectionEntered(slot, sigval1);
	});
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionDoubleClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_SectionDoubleClicked(slot, sigval1);
	});
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
	self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_connect_SectionCountChanged(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int)>(&QHeaderView::sectionCountChanged), self, [=](int oldCount, int newCount) {
		int sigval1 = oldCount;
		int sigval2 = newCount;
		miqt_exec_callback_QHeaderView_SectionCountChanged(slot, sigval1, sigval2);
	});
}

void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionHandleDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionHandleDoubleClicked), self, [=](int logicalIndex) {
		int sigval1 = logicalIndex;
		miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked(slot, sigval1);
	});
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
	self->geometriesChanged();
}

void QHeaderView_connect_GeometriesChanged(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)()>(&QHeaderView::geometriesChanged), self, [=]() {
		miqt_exec_callback_QHeaderView_GeometriesChanged(slot);
	});
}

void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
	self->sortIndicatorChanged(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

void QHeaderView_connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot) {
	MiqtVirtualQHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, Qt::SortOrder)>(&QHeaderView::sortIndicatorChanged), self, [=](int logicalIndex, Qt::SortOrder order) {
		int sigval1 = logicalIndex;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QHeaderView_SortIndicatorChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QHeaderView_Tr2(const char* s, const char* c) {
	QString _ret = QHeaderView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHeaderView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_TrUtf82(const char* s, const char* c) {
	QString _ret = QHeaderView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHeaderView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHeaderView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHeaderView_override_virtual_SetModel(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModel = slot;
	return true;
}

void QHeaderView_virtualbase_SetModel(void* self, QAbstractItemModel* model) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SetModel(model);
}

bool QHeaderView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QHeaderView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SizeHint();
}

bool QHeaderView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QHeaderView_virtualbase_SetVisible(void* self, bool v) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SetVisible(v);
}

bool QHeaderView_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoItemsLayout = slot;
	return true;
}

void QHeaderView_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DoItemsLayout();
}

bool QHeaderView_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

void QHeaderView_virtualbase_Reset(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_Reset();
}

bool QHeaderView_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CurrentChanged = slot;
	return true;
}

void QHeaderView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* old) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_CurrentChanged(current, old);
}

bool QHeaderView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QHeaderView_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_Event(e);
}

bool QHeaderView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QHeaderView_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_PaintEvent(e);
}

bool QHeaderView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QHeaderView_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_MousePressEvent(e);
}

bool QHeaderView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QHeaderView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QHeaderView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QHeaderView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QHeaderView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

bool QHeaderView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QHeaderView_virtualbase_ViewportEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_ViewportEvent(e);
}

bool QHeaderView_override_virtual_PaintSection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintSection = slot;
	return true;
}

void QHeaderView_virtualbase_PaintSection(const void* self, QPainter* painter, QRect* rect, int logicalIndex) {
	( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_PaintSection(painter, rect, logicalIndex);
}

bool QHeaderView_override_virtual_SectionSizeFromContents(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SectionSizeFromContents = slot;
	return true;
}

QSize* QHeaderView_virtualbase_SectionSizeFromContents(const void* self, int logicalIndex) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SectionSizeFromContents(logicalIndex);
}

bool QHeaderView_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalOffset = slot;
	return true;
}

int QHeaderView_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_HorizontalOffset();
}

bool QHeaderView_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalOffset = slot;
	return true;
}

int QHeaderView_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_VerticalOffset();
}

bool QHeaderView_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometries = slot;
	return true;
}

void QHeaderView_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_UpdateGeometries();
}

bool QHeaderView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QHeaderView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QHeaderView_override_virtual_DataChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DataChanged = slot;
	return true;
}

void QHeaderView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

bool QHeaderView_override_virtual_RowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsInserted = slot;
	return true;
}

void QHeaderView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

bool QHeaderView_override_virtual_VisualRect(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRect = slot;
	return true;
}

QRect* QHeaderView_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_VisualRect(index);
}

bool QHeaderView_override_virtual_ScrollTo(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollTo = slot;
	return true;
}

void QHeaderView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_ScrollTo(index, hint);
}

bool QHeaderView_override_virtual_IndexAt(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexAt = slot;
	return true;
}

QModelIndex* QHeaderView_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_IndexAt(p);
}

bool QHeaderView_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsIndexHidden = slot;
	return true;
}

bool QHeaderView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_IsIndexHidden(index);
}

bool QHeaderView_override_virtual_MoveCursor(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveCursor = slot;
	return true;
}

QModelIndex* QHeaderView_virtualbase_MoveCursor(void* self, int param1, int param2) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_MoveCursor(param1, param2);
}

bool QHeaderView_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QHeaderView_virtualbase_SetSelection(void* self, QRect* rect, int flags) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SetSelection(rect, flags);
}

bool QHeaderView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VisualRegionForSelection = slot;
	return true;
}

QRegion* QHeaderView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

bool QHeaderView_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionModel = slot;
	return true;
}

void QHeaderView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

bool QHeaderView_override_virtual_KeyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyboardSearch = slot;
	return true;
}

void QHeaderView_virtualbase_KeyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_KeyboardSearch(search);
}

bool QHeaderView_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForRow = slot;
	return true;
}

int QHeaderView_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SizeHintForRow(row);
}

bool QHeaderView_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHintForColumn = slot;
	return true;
}

int QHeaderView_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SizeHintForColumn(column);
}

bool QHeaderView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QHeaderView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QHeaderView_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRootIndex = slot;
	return true;
}

void QHeaderView_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SetRootIndex(index);
}

bool QHeaderView_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QHeaderView_virtualbase_SelectAll(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SelectAll();
}

bool QHeaderView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowsAboutToBeRemoved = slot;
	return true;
}

void QHeaderView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

bool QHeaderView_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionChanged = slot;
	return true;
}

void QHeaderView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

bool QHeaderView_override_virtual_UpdateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorData = slot;
	return true;
}

void QHeaderView_virtualbase_UpdateEditorData(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_UpdateEditorData();
}

bool QHeaderView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateEditorGeometries = slot;
	return true;
}

void QHeaderView_virtualbase_UpdateEditorGeometries(void* self) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_UpdateEditorGeometries();
}

bool QHeaderView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarAction = slot;
	return true;
}

void QHeaderView_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

bool QHeaderView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarAction = slot;
	return true;
}

void QHeaderView_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

bool QHeaderView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__VerticalScrollbarValueChanged = slot;
	return true;
}

void QHeaderView_virtualbase_VerticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_VerticalScrollbarValueChanged(value);
}

bool QHeaderView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HorizontalScrollbarValueChanged = slot;
	return true;
}

void QHeaderView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_HorizontalScrollbarValueChanged(value);
}

bool QHeaderView_override_virtual_CloseEditor(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEditor = slot;
	return true;
}

void QHeaderView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_CloseEditor(editor, hint);
}

bool QHeaderView_override_virtual_CommitData(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CommitData = slot;
	return true;
}

void QHeaderView_virtualbase_CommitData(void* self, QWidget* editor) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_CommitData(editor);
}

bool QHeaderView_override_virtual_EditorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EditorDestroyed = slot;
	return true;
}

void QHeaderView_virtualbase_EditorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_EditorDestroyed(editor);
}

bool QHeaderView_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QHeaderView_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SelectedIndexes();
}

bool QHeaderView_override_virtual_Edit2(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Edit2 = slot;
	return true;
}

bool QHeaderView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_Edit2(index, trigger, event);
}

bool QHeaderView_override_virtual_SelectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectionCommand = slot;
	return true;
}

int QHeaderView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_SelectionCommand(index, event);
}

bool QHeaderView_override_virtual_StartDrag(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StartDrag = slot;
	return true;
}

void QHeaderView_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_StartDrag(supportedActions);
}

bool QHeaderView_override_virtual_ViewOptions(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewOptions = slot;
	return true;
}

QStyleOptionViewItem* QHeaderView_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_ViewOptions();
}

bool QHeaderView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QHeaderView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QHeaderView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QHeaderView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QHeaderView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QHeaderView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QHeaderView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QHeaderView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QHeaderView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_DropEvent(event);
}

bool QHeaderView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QHeaderView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QHeaderView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QHeaderView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QHeaderView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QHeaderView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QHeaderView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QHeaderView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QHeaderView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QHeaderView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_TimerEvent(event);
}

bool QHeaderView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QHeaderView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQHeaderView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QHeaderView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QHeaderView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQHeaderView*)(self) )->virtualbase_EventFilter(object, event);
}

bool QHeaderView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHeaderView* self_cast = dynamic_cast<MiqtVirtualQHeaderView*>( (QHeaderView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QHeaderView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQHeaderView*)(self) )->virtualbase_ViewportSizeHint();
}

void QHeaderView_Delete(QHeaderView* self) {
	delete self;
}

