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
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractscrollarea.h>
#include "gen_qabstractscrollarea.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QAbstractScrollArea_minimumSizeHint(const QAbstractScrollArea*, intptr_t);
QSize* miqt_exec_callback_QAbstractScrollArea_sizeHint(const QAbstractScrollArea*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_setupViewport(QAbstractScrollArea*, intptr_t, QWidget*);
bool miqt_exec_callback_QAbstractScrollArea_eventFilter(QAbstractScrollArea*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QAbstractScrollArea_event(QAbstractScrollArea*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractScrollArea_viewportEvent(QAbstractScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_resizeEvent(QAbstractScrollArea*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractScrollArea_paintEvent(QAbstractScrollArea*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractScrollArea_mousePressEvent(QAbstractScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_mouseReleaseEvent(QAbstractScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_mouseDoubleClickEvent(QAbstractScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_mouseMoveEvent(QAbstractScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractScrollArea_wheelEvent(QAbstractScrollArea*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractScrollArea_contextMenuEvent(QAbstractScrollArea*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractScrollArea_dragEnterEvent(QAbstractScrollArea*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractScrollArea_dragMoveEvent(QAbstractScrollArea*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractScrollArea_dragLeaveEvent(QAbstractScrollArea*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractScrollArea_dropEvent(QAbstractScrollArea*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractScrollArea_keyPressEvent(QAbstractScrollArea*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractScrollArea_scrollContentsBy(QAbstractScrollArea*, intptr_t, int, int);
QSize* miqt_exec_callback_QAbstractScrollArea_viewportSizeHint(const QAbstractScrollArea*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_changeEvent(QAbstractScrollArea*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractScrollArea_devType(const QAbstractScrollArea*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_setVisible(QAbstractScrollArea*, intptr_t, bool);
int miqt_exec_callback_QAbstractScrollArea_heightForWidth(const QAbstractScrollArea*, intptr_t, int);
bool miqt_exec_callback_QAbstractScrollArea_hasHeightForWidth(const QAbstractScrollArea*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractScrollArea_paintEngine(const QAbstractScrollArea*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_keyReleaseEvent(QAbstractScrollArea*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractScrollArea_focusInEvent(QAbstractScrollArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractScrollArea_focusOutEvent(QAbstractScrollArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractScrollArea_enterEvent(QAbstractScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_leaveEvent(QAbstractScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_moveEvent(QAbstractScrollArea*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractScrollArea_closeEvent(QAbstractScrollArea*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractScrollArea_tabletEvent(QAbstractScrollArea*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractScrollArea_actionEvent(QAbstractScrollArea*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractScrollArea_showEvent(QAbstractScrollArea*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractScrollArea_hideEvent(QAbstractScrollArea*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractScrollArea_nativeEvent(QAbstractScrollArea*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractScrollArea_metric(const QAbstractScrollArea*, intptr_t, int);
void miqt_exec_callback_QAbstractScrollArea_initPainter(const QAbstractScrollArea*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractScrollArea_redirected(const QAbstractScrollArea*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractScrollArea_sharedPainter(const QAbstractScrollArea*, intptr_t);
void miqt_exec_callback_QAbstractScrollArea_inputMethodEvent(QAbstractScrollArea*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractScrollArea_inputMethodQuery(const QAbstractScrollArea*, intptr_t, int);
bool miqt_exec_callback_QAbstractScrollArea_focusNextPrevChild(QAbstractScrollArea*, intptr_t, bool);
void miqt_exec_callback_QAbstractScrollArea_timerEvent(QAbstractScrollArea*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractScrollArea_childEvent(QAbstractScrollArea*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractScrollArea_customEvent(QAbstractScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractScrollArea_connectNotify(QAbstractScrollArea*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractScrollArea_disconnectNotify(QAbstractScrollArea*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractScrollArea final : public QAbstractScrollArea {
public:

	MiqtVirtualQAbstractScrollArea(QWidget* parent): QAbstractScrollArea(parent) {};
	MiqtVirtualQAbstractScrollArea(): QAbstractScrollArea() {};

	virtual ~MiqtVirtualQAbstractScrollArea() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QAbstractScrollArea::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QAbstractScrollArea::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QAbstractScrollArea::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QAbstractScrollArea::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QAbstractScrollArea::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QAbstractScrollArea_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QAbstractScrollArea::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QAbstractScrollArea::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QAbstractScrollArea::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QAbstractScrollArea::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QAbstractScrollArea::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QAbstractScrollArea::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* param1) {

		return QAbstractScrollArea::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QAbstractScrollArea::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QAbstractScrollArea::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QAbstractScrollArea::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QAbstractScrollArea::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QAbstractScrollArea::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractScrollArea::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractScrollArea::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractScrollArea::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QAbstractScrollArea::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QAbstractScrollArea::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QAbstractScrollArea::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractScrollArea::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QAbstractScrollArea::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractScrollArea::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* param1) {

		QAbstractScrollArea::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractScrollArea::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* param1) {

		QAbstractScrollArea::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractScrollArea::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* param1) {

		QAbstractScrollArea::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			QAbstractScrollArea::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* param1) {

		QAbstractScrollArea::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QAbstractScrollArea::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QAbstractScrollArea::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QAbstractScrollArea::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QAbstractScrollArea_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QAbstractScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QAbstractScrollArea::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractScrollArea_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QAbstractScrollArea::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QAbstractScrollArea::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QAbstractScrollArea::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QAbstractScrollArea::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractScrollArea_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QAbstractScrollArea::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QAbstractScrollArea::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractScrollArea_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QAbstractScrollArea::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QAbstractScrollArea::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractScrollArea_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QAbstractScrollArea::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QAbstractScrollArea::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QAbstractScrollArea::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QAbstractScrollArea::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractScrollArea_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QAbstractScrollArea::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractScrollArea::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractScrollArea::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractScrollArea::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractScrollArea::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractScrollArea::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractScrollArea::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QAbstractScrollArea::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QAbstractScrollArea::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QAbstractScrollArea::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QAbstractScrollArea::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QAbstractScrollArea::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QAbstractScrollArea::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QAbstractScrollArea::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QAbstractScrollArea::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QAbstractScrollArea::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QAbstractScrollArea::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QAbstractScrollArea::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QAbstractScrollArea::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QAbstractScrollArea::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QAbstractScrollArea::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QAbstractScrollArea::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QAbstractScrollArea::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QAbstractScrollArea::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractScrollArea::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QAbstractScrollArea::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractScrollArea_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QAbstractScrollArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QAbstractScrollArea::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractScrollArea_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QAbstractScrollArea::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QAbstractScrollArea::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractScrollArea_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QAbstractScrollArea::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QAbstractScrollArea::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractScrollArea_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QAbstractScrollArea::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractScrollArea::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractScrollArea_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QAbstractScrollArea::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractScrollArea::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractScrollArea_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QAbstractScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QAbstractScrollArea::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractScrollArea_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QAbstractScrollArea::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractScrollArea::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractScrollArea::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractScrollArea::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractScrollArea::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractScrollArea::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractScrollArea_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractScrollArea::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractScrollArea::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractScrollArea_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractScrollArea::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractScrollArea::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractScrollArea_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractScrollArea::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend void QAbstractScrollArea_protectedbase_setViewportMarginsWithMargins(bool* _dynamic_cast_ok, void* self, QMargins* margins);
	friend QMargins* QAbstractScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QAbstractScrollArea_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QAbstractScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent) {
	return new MiqtVirtualQAbstractScrollArea(parent);
}

QAbstractScrollArea* QAbstractScrollArea_new2() {
	return new MiqtVirtualQAbstractScrollArea();
}

void QAbstractScrollArea_virtbase(QAbstractScrollArea* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QAbstractScrollArea_metaObject(const QAbstractScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractScrollArea_metacast(QAbstractScrollArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractScrollArea_tr(const char* s) {
	QString _ret = QAbstractScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractScrollArea_trUtf8(const char* s) {
	QString _ret = QAbstractScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractScrollArea_verticalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->verticalScrollBarPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_setVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy) {
	self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_verticalScrollBar(const QAbstractScrollArea* self) {
	return self->verticalScrollBar();
}

void QAbstractScrollArea_setVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setVerticalScrollBar(scrollbar);
}

int QAbstractScrollArea_horizontalScrollBarPolicy(const QAbstractScrollArea* self) {
	Qt::ScrollBarPolicy _ret = self->horizontalScrollBarPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_setHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy) {
	self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_horizontalScrollBar(const QAbstractScrollArea* self) {
	return self->horizontalScrollBar();
}

void QAbstractScrollArea_setHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_cornerWidget(const QAbstractScrollArea* self) {
	return self->cornerWidget();
}

void QAbstractScrollArea_setCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
	self->setCornerWidget(widget);
}

void QAbstractScrollArea_addScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
	self->addScrollBarWidget(widget, static_cast<Qt::Alignment>(alignment));
}

struct miqt_array /* of QWidget* */  QAbstractScrollArea_scrollBarWidgets(QAbstractScrollArea* self, int alignment) {
	QWidgetList _ret = self->scrollBarWidgets(static_cast<Qt::Alignment>(alignment));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWidget* QAbstractScrollArea_viewport(const QAbstractScrollArea* self) {
	return self->viewport();
}

void QAbstractScrollArea_setViewport(QAbstractScrollArea* self, QWidget* widget) {
	self->setViewport(widget);
}

QSize* QAbstractScrollArea_maximumViewportSize(const QAbstractScrollArea* self) {
	return new QSize(self->maximumViewportSize());
}

QSize* QAbstractScrollArea_minimumSizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QAbstractScrollArea_sizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->sizeHint());
}

void QAbstractScrollArea_setupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	self->setupViewport(viewport);
}

int QAbstractScrollArea_sizeAdjustPolicy(const QAbstractScrollArea* self) {
	QAbstractScrollArea::SizeAdjustPolicy _ret = self->sizeAdjustPolicy();
	return static_cast<int>(_ret);
}

void QAbstractScrollArea_setSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

struct miqt_string QAbstractScrollArea_tr2(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractScrollArea_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractScrollArea_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractScrollArea_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractScrollArea_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_minimumSizeHint();
}

bool QAbstractScrollArea_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_sizeHint();
}

bool QAbstractScrollArea_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_setupViewport(viewport);
}

bool QAbstractScrollArea_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QAbstractScrollArea_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_event(param1);
}

bool QAbstractScrollArea_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_viewportEvent(param1);
}

bool QAbstractScrollArea_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_resizeEvent(param1);
}

bool QAbstractScrollArea_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_paintEvent(param1);
}

bool QAbstractScrollArea_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QAbstractScrollArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QAbstractScrollArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_mouseDoubleClickEvent(param1);
}

bool QAbstractScrollArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_wheelEvent(param1);
}

bool QAbstractScrollArea_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QAbstractScrollArea_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_dragEnterEvent(param1);
}

bool QAbstractScrollArea_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_dragMoveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_dragLeaveEvent(param1);
}

bool QAbstractScrollArea_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_dropEvent(param1);
}

bool QAbstractScrollArea_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QAbstractScrollArea_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QAbstractScrollArea_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QAbstractScrollArea_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_viewportSizeHint();
}

bool QAbstractScrollArea_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_changeEvent(param1);
}

bool QAbstractScrollArea_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QAbstractScrollArea_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_devType();
}

bool QAbstractScrollArea_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_setVisible(visible);
}

bool QAbstractScrollArea_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QAbstractScrollArea_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_heightForWidth(param1);
}

bool QAbstractScrollArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_hasHeightForWidth();
}

bool QAbstractScrollArea_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QAbstractScrollArea_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_paintEngine();
}

bool QAbstractScrollArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractScrollArea_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractScrollArea_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractScrollArea_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_enterEvent(event);
}

bool QAbstractScrollArea_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_leaveEvent(event);
}

bool QAbstractScrollArea_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_moveEvent(event);
}

bool QAbstractScrollArea_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_closeEvent(event);
}

bool QAbstractScrollArea_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_tabletEvent(event);
}

bool QAbstractScrollArea_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_actionEvent(event);
}

bool QAbstractScrollArea_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_showEvent(event);
}

bool QAbstractScrollArea_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_hideEvent(event);
}

bool QAbstractScrollArea_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QAbstractScrollArea_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QAbstractScrollArea_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_metric(param1);
}

bool QAbstractScrollArea_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_initPainter(painter);
}

bool QAbstractScrollArea_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QAbstractScrollArea_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_redirected(offset);
}

bool QAbstractScrollArea_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QAbstractScrollArea_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_sharedPainter();
}

bool QAbstractScrollArea_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QAbstractScrollArea_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractScrollArea_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QAbstractScrollArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QAbstractScrollArea_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QAbstractScrollArea_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractScrollArea_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractScrollArea_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractScrollArea_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractScrollArea_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractScrollArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractScrollArea*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

void QAbstractScrollArea_protectedbase_setViewportMarginsWithMargins(bool* _dynamic_cast_ok, void* self, QMargins* margins) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(*margins);

}

QMargins* QAbstractScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QAbstractScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QAbstractScrollArea_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QAbstractScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QAbstractScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QAbstractScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QAbstractScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QAbstractScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractScrollArea* self_cast = dynamic_cast<MiqtVirtualQAbstractScrollArea*>( (QAbstractScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractScrollArea_delete(QAbstractScrollArea* self) {
	delete self;
}

