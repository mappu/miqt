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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_abstract_slider.h>
#include "gen_qwt_abstract_slider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtAbstractSlider_valueChanged(intptr_t, double);
void miqt_exec_callback_QwtAbstractSlider_sliderPressed(intptr_t);
void miqt_exec_callback_QwtAbstractSlider_sliderReleased(intptr_t);
void miqt_exec_callback_QwtAbstractSlider_sliderMoved(intptr_t, double);
void miqt_exec_callback_QwtAbstractSlider_mousePressEvent(QwtAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractSlider_mouseReleaseEvent(QwtAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractSlider_mouseMoveEvent(QwtAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractSlider_keyPressEvent(QwtAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractSlider_wheelEvent(QwtAbstractSlider*, intptr_t, QWheelEvent*);
bool miqt_exec_callback_QwtAbstractSlider_isScrollPosition(const QwtAbstractSlider*, intptr_t, QPoint*);
double miqt_exec_callback_QwtAbstractSlider_scrolledTo(const QwtAbstractSlider*, intptr_t, QPoint*);
void miqt_exec_callback_QwtAbstractSlider_scaleChange(QwtAbstractSlider*, intptr_t);
void miqt_exec_callback_QwtAbstractSlider_sliderChange(QwtAbstractSlider*, intptr_t);
int miqt_exec_callback_QwtAbstractSlider_devType(const QwtAbstractSlider*, intptr_t);
void miqt_exec_callback_QwtAbstractSlider_setVisible(QwtAbstractSlider*, intptr_t, bool);
QSize* miqt_exec_callback_QwtAbstractSlider_sizeHint(const QwtAbstractSlider*, intptr_t);
QSize* miqt_exec_callback_QwtAbstractSlider_minimumSizeHint(const QwtAbstractSlider*, intptr_t);
int miqt_exec_callback_QwtAbstractSlider_heightForWidth(const QwtAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractSlider_hasHeightForWidth(const QwtAbstractSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtAbstractSlider_paintEngine(const QwtAbstractSlider*, intptr_t);
bool miqt_exec_callback_QwtAbstractSlider_event(QwtAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractSlider_mouseDoubleClickEvent(QwtAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractSlider_keyReleaseEvent(QwtAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractSlider_focusInEvent(QwtAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractSlider_focusOutEvent(QwtAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractSlider_enterEvent(QwtAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractSlider_leaveEvent(QwtAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractSlider_paintEvent(QwtAbstractSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtAbstractSlider_moveEvent(QwtAbstractSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtAbstractSlider_resizeEvent(QwtAbstractSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtAbstractSlider_closeEvent(QwtAbstractSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtAbstractSlider_contextMenuEvent(QwtAbstractSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtAbstractSlider_tabletEvent(QwtAbstractSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtAbstractSlider_actionEvent(QwtAbstractSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtAbstractSlider_dragEnterEvent(QwtAbstractSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtAbstractSlider_dragMoveEvent(QwtAbstractSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtAbstractSlider_dragLeaveEvent(QwtAbstractSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtAbstractSlider_dropEvent(QwtAbstractSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtAbstractSlider_showEvent(QwtAbstractSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtAbstractSlider_hideEvent(QwtAbstractSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtAbstractSlider_nativeEvent(QwtAbstractSlider*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtAbstractSlider_changeEvent(QwtAbstractSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QwtAbstractSlider_metric(const QwtAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QwtAbstractSlider_initPainter(const QwtAbstractSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtAbstractSlider_redirected(const QwtAbstractSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtAbstractSlider_sharedPainter(const QwtAbstractSlider*, intptr_t);
void miqt_exec_callback_QwtAbstractSlider_inputMethodEvent(QwtAbstractSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtAbstractSlider_inputMethodQuery(const QwtAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractSlider_focusNextPrevChild(QwtAbstractSlider*, intptr_t, bool);
bool miqt_exec_callback_QwtAbstractSlider_eventFilter(QwtAbstractSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtAbstractSlider_timerEvent(QwtAbstractSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtAbstractSlider_childEvent(QwtAbstractSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtAbstractSlider_customEvent(QwtAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractSlider_connectNotify(QwtAbstractSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtAbstractSlider_disconnectNotify(QwtAbstractSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtAbstractSlider final : public QwtAbstractSlider {
public:

	MiqtVirtualQwtAbstractSlider(QWidget* parent): QwtAbstractSlider(parent) {}
	MiqtVirtualQwtAbstractSlider(): QwtAbstractSlider() {}

	virtual ~MiqtVirtualQwtAbstractSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QwtAbstractSlider::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtAbstractSlider::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QwtAbstractSlider::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QwtAbstractSlider::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QwtAbstractSlider::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isScrollPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& pos) const override {
		if (handle__isScrollPosition == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_isScrollPosition(this, handle__isScrollPosition, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrolledTo = 0;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& pos) const override {
		if (handle__scrolledTo == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		double callback_return_value = miqt_exec_callback_QwtAbstractSlider_scrolledTo(this, handle__scrolledTo, sigval1);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (handle__scaleChange == 0) {
			QwtAbstractSlider::scaleChange();
			return;
		}

		miqt_exec_callback_QwtAbstractSlider_scaleChange(this, handle__scaleChange);

	}

	friend void QwtAbstractSlider_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (handle__sliderChange == 0) {
			QwtAbstractSlider::sliderChange();
			return;
		}

		miqt_exec_callback_QwtAbstractSlider_sliderChange(this, handle__sliderChange);

	}

	friend void QwtAbstractSlider_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtAbstractSlider::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtAbstractSlider_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractSlider_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtAbstractSlider::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtAbstractSlider_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtAbstractSlider::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractSlider_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtAbstractSlider_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtAbstractSlider::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractSlider_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtAbstractSlider_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtAbstractSlider::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtAbstractSlider_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractSlider_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtAbstractSlider::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtAbstractSlider_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtAbstractSlider::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtAbstractSlider_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtAbstractSlider_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtAbstractSlider::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractSlider_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtAbstractSlider::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtAbstractSlider::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtAbstractSlider::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtAbstractSlider::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtAbstractSlider::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtAbstractSlider::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QwtAbstractSlider::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtAbstractSlider::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtAbstractSlider::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtAbstractSlider::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtAbstractSlider::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtAbstractSlider::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtAbstractSlider::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtAbstractSlider::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtAbstractSlider::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtAbstractSlider::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtAbstractSlider::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtAbstractSlider::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtAbstractSlider::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtAbstractSlider::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtAbstractSlider::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtAbstractSlider::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtAbstractSlider_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractSlider_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtAbstractSlider::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtAbstractSlider_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtAbstractSlider::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtAbstractSlider_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtAbstractSlider::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtAbstractSlider_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtAbstractSlider_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtAbstractSlider::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractSlider_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtAbstractSlider::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtAbstractSlider_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtAbstractSlider::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtAbstractSlider::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtAbstractSlider_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtAbstractSlider::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtAbstractSlider::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtAbstractSlider::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractSlider_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtAbstractSlider::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractSlider_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtAbstractSlider::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractSlider_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtAbstractSlider_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtAbstractSlider_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtAbstractSlider_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtAbstractSlider_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtAbstractSlider_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtAbstractSlider* QwtAbstractSlider_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtAbstractSlider(parent);
}

QwtAbstractSlider* QwtAbstractSlider_new2() {
	return new (std::nothrow) MiqtVirtualQwtAbstractSlider();
}

void QwtAbstractSlider_virtbase(QwtAbstractSlider* src, QwtAbstractScale** outptr_QwtAbstractScale) {
	*outptr_QwtAbstractScale = static_cast<QwtAbstractScale*>(src);
}

QMetaObject* QwtAbstractSlider_metaObject(const QwtAbstractSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtAbstractSlider_metacast(QwtAbstractSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtAbstractSlider_tr(const char* s) {
	QString _ret = QwtAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractSlider_trUtf8(const char* s) {
	QString _ret = QwtAbstractSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtAbstractSlider_setValid(QwtAbstractSlider* self, bool valid) {
	self->setValid(valid);
}

bool QwtAbstractSlider_isValid(const QwtAbstractSlider* self) {
	return self->isValid();
}

double QwtAbstractSlider_value(const QwtAbstractSlider* self) {
	return self->value();
}

void QwtAbstractSlider_setWrapping(QwtAbstractSlider* self, bool wrapping) {
	self->setWrapping(wrapping);
}

bool QwtAbstractSlider_wrapping(const QwtAbstractSlider* self) {
	return self->wrapping();
}

void QwtAbstractSlider_setTotalSteps(QwtAbstractSlider* self, unsigned int totalSteps) {
	self->setTotalSteps(static_cast<uint>(totalSteps));
}

unsigned int QwtAbstractSlider_totalSteps(const QwtAbstractSlider* self) {
	uint _ret = self->totalSteps();
	return static_cast<unsigned int>(_ret);
}

void QwtAbstractSlider_setSingleSteps(QwtAbstractSlider* self, unsigned int singleSteps) {
	self->setSingleSteps(static_cast<uint>(singleSteps));
}

unsigned int QwtAbstractSlider_singleSteps(const QwtAbstractSlider* self) {
	uint _ret = self->singleSteps();
	return static_cast<unsigned int>(_ret);
}

void QwtAbstractSlider_setPageSteps(QwtAbstractSlider* self, unsigned int pageSteps) {
	self->setPageSteps(static_cast<uint>(pageSteps));
}

unsigned int QwtAbstractSlider_pageSteps(const QwtAbstractSlider* self) {
	uint _ret = self->pageSteps();
	return static_cast<unsigned int>(_ret);
}

void QwtAbstractSlider_setStepAlignment(QwtAbstractSlider* self, bool stepAlignment) {
	self->setStepAlignment(stepAlignment);
}

bool QwtAbstractSlider_stepAlignment(const QwtAbstractSlider* self) {
	return self->stepAlignment();
}

void QwtAbstractSlider_setTracking(QwtAbstractSlider* self, bool tracking) {
	self->setTracking(tracking);
}

bool QwtAbstractSlider_isTracking(const QwtAbstractSlider* self) {
	return self->isTracking();
}

void QwtAbstractSlider_setReadOnly(QwtAbstractSlider* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

bool QwtAbstractSlider_isReadOnly(const QwtAbstractSlider* self) {
	return self->isReadOnly();
}

void QwtAbstractSlider_setInvertedControls(QwtAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QwtAbstractSlider_invertedControls(const QwtAbstractSlider* self) {
	return self->invertedControls();
}

void QwtAbstractSlider_setValue(QwtAbstractSlider* self, double value) {
	self->setValue(static_cast<double>(value));
}

void QwtAbstractSlider_valueChanged(QwtAbstractSlider* self, double value) {
	self->valueChanged(static_cast<double>(value));
}

void QwtAbstractSlider_connect_valueChanged(QwtAbstractSlider* self, intptr_t slot) {
	QwtAbstractSlider::connect(self, static_cast<void (QwtAbstractSlider::*)(double)>(&QwtAbstractSlider::valueChanged), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QwtAbstractSlider_valueChanged(slot, sigval1);
	});
}

void QwtAbstractSlider_sliderPressed(QwtAbstractSlider* self) {
	self->sliderPressed();
}

void QwtAbstractSlider_connect_sliderPressed(QwtAbstractSlider* self, intptr_t slot) {
	QwtAbstractSlider::connect(self, static_cast<void (QwtAbstractSlider::*)()>(&QwtAbstractSlider::sliderPressed), self, [=]() {
		miqt_exec_callback_QwtAbstractSlider_sliderPressed(slot);
	});
}

void QwtAbstractSlider_sliderReleased(QwtAbstractSlider* self) {
	self->sliderReleased();
}

void QwtAbstractSlider_connect_sliderReleased(QwtAbstractSlider* self, intptr_t slot) {
	QwtAbstractSlider::connect(self, static_cast<void (QwtAbstractSlider::*)()>(&QwtAbstractSlider::sliderReleased), self, [=]() {
		miqt_exec_callback_QwtAbstractSlider_sliderReleased(slot);
	});
}

void QwtAbstractSlider_sliderMoved(QwtAbstractSlider* self, double value) {
	self->sliderMoved(static_cast<double>(value));
}

void QwtAbstractSlider_connect_sliderMoved(QwtAbstractSlider* self, intptr_t slot) {
	QwtAbstractSlider::connect(self, static_cast<void (QwtAbstractSlider::*)(double)>(&QwtAbstractSlider::sliderMoved), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QwtAbstractSlider_sliderMoved(slot, sigval1);
	});
}

struct miqt_string QwtAbstractSlider_tr2(const char* s, const char* c) {
	QString _ret = QwtAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractSlider_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractSlider_trUtf82(const char* s, const char* c) {
	QString _ret = QwtAbstractSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractSlider_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtAbstractSlider_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::mousePressEvent(param1);
}

bool QwtAbstractSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::mouseReleaseEvent(param1);
}

bool QwtAbstractSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::mouseMoveEvent(param1);
}

bool QwtAbstractSlider_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::keyPressEvent(param1);
}

bool QwtAbstractSlider_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::wheelEvent(param1);
}

bool QwtAbstractSlider_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = slot;
	return true;
}

bool QwtAbstractSlider_override_virtual_scrolledTo(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = slot;
	return true;
}

bool QwtAbstractSlider_override_virtual_scaleChange(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::scaleChange();
}

bool QwtAbstractSlider_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::sliderChange();
}

bool QwtAbstractSlider_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtAbstractSlider_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::devType();
}

bool QwtAbstractSlider_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::setVisible(visible);
}

bool QwtAbstractSlider_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtAbstractSlider_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::sizeHint());
}

bool QwtAbstractSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtAbstractSlider_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::minimumSizeHint());
}

bool QwtAbstractSlider_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtAbstractSlider_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::heightForWidth(static_cast<int>(param1));
}

bool QwtAbstractSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtAbstractSlider_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::hasHeightForWidth();
}

bool QwtAbstractSlider_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtAbstractSlider_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::paintEngine();
}

bool QwtAbstractSlider_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtAbstractSlider_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::event(event);
}

bool QwtAbstractSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::mouseDoubleClickEvent(event);
}

bool QwtAbstractSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::keyReleaseEvent(event);
}

bool QwtAbstractSlider_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::focusInEvent(event);
}

bool QwtAbstractSlider_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::focusOutEvent(event);
}

bool QwtAbstractSlider_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::enterEvent(event);
}

bool QwtAbstractSlider_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::leaveEvent(event);
}

bool QwtAbstractSlider_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::paintEvent(event);
}

bool QwtAbstractSlider_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::moveEvent(event);
}

bool QwtAbstractSlider_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::resizeEvent(event);
}

bool QwtAbstractSlider_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::closeEvent(event);
}

bool QwtAbstractSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::contextMenuEvent(event);
}

bool QwtAbstractSlider_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::tabletEvent(event);
}

bool QwtAbstractSlider_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::actionEvent(event);
}

bool QwtAbstractSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::dragEnterEvent(event);
}

bool QwtAbstractSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::dragMoveEvent(event);
}

bool QwtAbstractSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::dragLeaveEvent(event);
}

bool QwtAbstractSlider_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::dropEvent(event);
}

bool QwtAbstractSlider_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::showEvent(event);
}

bool QwtAbstractSlider_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::hideEvent(event);
}

bool QwtAbstractSlider_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtAbstractSlider_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::changeEvent(param1);
}

bool QwtAbstractSlider_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtAbstractSlider_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::metric(static_cast<MiqtVirtualQwtAbstractSlider::PaintDeviceMetric>(param1));
}

bool QwtAbstractSlider_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::initPainter(painter);
}

bool QwtAbstractSlider_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::redirected(offset);
}

bool QwtAbstractSlider_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtAbstractSlider_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::sharedPainter();
}

bool QwtAbstractSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::inputMethodEvent(param1);
}

bool QwtAbstractSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtAbstractSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::focusNextPrevChild(next);
}

bool QwtAbstractSlider_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::eventFilter(watched, event);
}

bool QwtAbstractSlider_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::timerEvent(event);
}

bool QwtAbstractSlider_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::childEvent(event);
}

bool QwtAbstractSlider_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::customEvent(event);
}

bool QwtAbstractSlider_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::connectNotify(*signal);
}

bool QwtAbstractSlider_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractSlider*>(self)->QwtAbstractSlider::disconnectNotify(*signal);
}

void QwtAbstractSlider_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtAbstractSlider_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtAbstractSlider_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtAbstractSlider_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtAbstractSlider_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQwtAbstractSlider*>( (QwtAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtAbstractSlider_delete(QwtAbstractSlider* self) {
	delete self;
}

