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
#include <QRect>
#include <QRectF>
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
#include <qwt_knob.h>
#include "gen_qwt_knob.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QwtKnob_sizeHint(const QwtKnob*, intptr_t);
QSize* miqt_exec_callback_QwtKnob_minimumSizeHint(const QwtKnob*, intptr_t);
void miqt_exec_callback_QwtKnob_paintEvent(QwtKnob*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtKnob_changeEvent(QwtKnob*, intptr_t, QEvent*);
void miqt_exec_callback_QwtKnob_drawKnob(const QwtKnob*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QwtKnob_drawFocusIndicator(const QwtKnob*, intptr_t, QPainter*);
void miqt_exec_callback_QwtKnob_drawMarker(const QwtKnob*, intptr_t, QPainter*, QRectF*, double);
double miqt_exec_callback_QwtKnob_scrolledTo(const QwtKnob*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtKnob_isScrollPosition(const QwtKnob*, intptr_t, QPoint*);
void miqt_exec_callback_QwtKnob_mousePressEvent(QwtKnob*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtKnob_mouseReleaseEvent(QwtKnob*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtKnob_mouseMoveEvent(QwtKnob*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtKnob_keyPressEvent(QwtKnob*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtKnob_wheelEvent(QwtKnob*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtKnob_scaleChange(QwtKnob*, intptr_t);
void miqt_exec_callback_QwtKnob_sliderChange(QwtKnob*, intptr_t);
int miqt_exec_callback_QwtKnob_devType(const QwtKnob*, intptr_t);
void miqt_exec_callback_QwtKnob_setVisible(QwtKnob*, intptr_t, bool);
int miqt_exec_callback_QwtKnob_heightForWidth(const QwtKnob*, intptr_t, int);
bool miqt_exec_callback_QwtKnob_hasHeightForWidth(const QwtKnob*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtKnob_paintEngine(const QwtKnob*, intptr_t);
bool miqt_exec_callback_QwtKnob_event(QwtKnob*, intptr_t, QEvent*);
void miqt_exec_callback_QwtKnob_mouseDoubleClickEvent(QwtKnob*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtKnob_keyReleaseEvent(QwtKnob*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtKnob_focusInEvent(QwtKnob*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtKnob_focusOutEvent(QwtKnob*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtKnob_enterEvent(QwtKnob*, intptr_t, QEvent*);
void miqt_exec_callback_QwtKnob_leaveEvent(QwtKnob*, intptr_t, QEvent*);
void miqt_exec_callback_QwtKnob_moveEvent(QwtKnob*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtKnob_resizeEvent(QwtKnob*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtKnob_closeEvent(QwtKnob*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtKnob_contextMenuEvent(QwtKnob*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtKnob_tabletEvent(QwtKnob*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtKnob_actionEvent(QwtKnob*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtKnob_dragEnterEvent(QwtKnob*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtKnob_dragMoveEvent(QwtKnob*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtKnob_dragLeaveEvent(QwtKnob*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtKnob_dropEvent(QwtKnob*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtKnob_showEvent(QwtKnob*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtKnob_hideEvent(QwtKnob*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtKnob_nativeEvent(QwtKnob*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtKnob_metric(const QwtKnob*, intptr_t, int);
void miqt_exec_callback_QwtKnob_initPainter(const QwtKnob*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtKnob_redirected(const QwtKnob*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtKnob_sharedPainter(const QwtKnob*, intptr_t);
void miqt_exec_callback_QwtKnob_inputMethodEvent(QwtKnob*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtKnob_inputMethodQuery(const QwtKnob*, intptr_t, int);
bool miqt_exec_callback_QwtKnob_focusNextPrevChild(QwtKnob*, intptr_t, bool);
bool miqt_exec_callback_QwtKnob_eventFilter(QwtKnob*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtKnob_timerEvent(QwtKnob*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtKnob_childEvent(QwtKnob*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtKnob_customEvent(QwtKnob*, intptr_t, QEvent*);
void miqt_exec_callback_QwtKnob_connectNotify(QwtKnob*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtKnob_disconnectNotify(QwtKnob*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtKnob final : public QwtKnob {
public:

	MiqtVirtualQwtKnob(QWidget* parent): QwtKnob(parent) {}
	MiqtVirtualQwtKnob(): QwtKnob() {}

	virtual ~MiqtVirtualQwtKnob() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtKnob::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtKnob_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtKnob_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtKnob::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtKnob_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtKnob_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtKnob::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtKnob::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawKnob = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawKnob(QPainter* param1, const QRectF& param2) const override {
		if (handle__drawKnob == 0) {
			QwtKnob::drawKnob(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtKnob_drawKnob(this, handle__drawKnob, sigval1, sigval2);

	}

	friend void QwtKnob_virtualbase_drawKnob(const void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawFocusIndicator = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFocusIndicator(QPainter* param1) const override {
		if (handle__drawFocusIndicator == 0) {
			QwtKnob::drawFocusIndicator(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtKnob_drawFocusIndicator(this, handle__drawFocusIndicator, sigval1);

	}

	friend void QwtKnob_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawMarker = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawMarker(QPainter* param1, const QRectF& param2, double angle) const override {
		if (handle__drawMarker == 0) {
			QwtKnob::drawMarker(param1, param2, angle);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		double sigval3 = angle;
		miqt_exec_callback_QwtKnob_drawMarker(this, handle__drawMarker, sigval1, sigval2, sigval3);

	}

	friend void QwtKnob_virtualbase_drawMarker(const void* self, QPainter* param1, QRectF* param2, double angle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrolledTo = 0;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& param1) const override {
		if (handle__scrolledTo == 0) {
			return QwtKnob::scrolledTo(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtKnob_scrolledTo(this, handle__scrolledTo, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtKnob_virtualbase_scrolledTo(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isScrollPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& param1) const override {
		if (handle__isScrollPosition == 0) {
			return QwtKnob::isScrollPosition(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		bool callback_return_value = miqt_exec_callback_QwtKnob_isScrollPosition(this, handle__isScrollPosition, sigval1);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_isScrollPosition(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QwtKnob::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtKnob::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QwtKnob::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QwtKnob::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QwtKnob::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (handle__scaleChange == 0) {
			QwtKnob::scaleChange();
			return;
		}

		miqt_exec_callback_QwtKnob_scaleChange(this, handle__scaleChange);

	}

	friend void QwtKnob_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (handle__sliderChange == 0) {
			QwtKnob::sliderChange();
			return;
		}

		miqt_exec_callback_QwtKnob_sliderChange(this, handle__sliderChange);

	}

	friend void QwtKnob_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtKnob::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtKnob_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtKnob_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtKnob::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtKnob_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtKnob_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtKnob::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtKnob_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtKnob_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtKnob::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtKnob_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtKnob::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtKnob_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtKnob_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtKnob::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtKnob_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtKnob::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtKnob::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtKnob::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtKnob::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtKnob::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtKnob::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtKnob::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtKnob::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtKnob::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtKnob::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtKnob::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtKnob::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtKnob::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtKnob::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtKnob::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtKnob::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtKnob::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtKnob::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtKnob::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtKnob_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtKnob::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtKnob_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtKnob_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtKnob::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtKnob_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtKnob_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtKnob::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtKnob_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtKnob_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtKnob::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtKnob_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtKnob_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtKnob::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtKnob_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtKnob::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtKnob_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtKnob_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtKnob::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtKnob_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtKnob::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtKnob_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtKnob_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtKnob::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtKnob::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtKnob::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtKnob_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtKnob_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtKnob::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtKnob_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtKnob_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtKnob::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtKnob_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtKnob_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtKnob_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtKnob_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtKnob_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtKnob_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtKnob_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtKnob_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtKnob_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtKnob_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtKnob_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtKnob_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtKnob_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtKnob_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtKnob_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtKnob_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtKnob* QwtKnob_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtKnob(parent);
}

QwtKnob* QwtKnob_new2() {
	return new (std::nothrow) MiqtVirtualQwtKnob();
}

void QwtKnob_virtbase(QwtKnob* src, QwtAbstractSlider** outptr_QwtAbstractSlider) {
	*outptr_QwtAbstractSlider = static_cast<QwtAbstractSlider*>(src);
}

QMetaObject* QwtKnob_metaObject(const QwtKnob* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtKnob_metacast(QwtKnob* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtKnob_tr(const char* s) {
	QString _ret = QwtKnob::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtKnob_trUtf8(const char* s) {
	QString _ret = QwtKnob::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtKnob_setAlignment(QwtKnob* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QwtKnob_alignment(const QwtKnob* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QwtKnob_setKnobWidth(QwtKnob* self, int knobWidth) {
	self->setKnobWidth(static_cast<int>(knobWidth));
}

int QwtKnob_knobWidth(const QwtKnob* self) {
	return self->knobWidth();
}

void QwtKnob_setNumTurns(QwtKnob* self, int numTurns) {
	self->setNumTurns(static_cast<int>(numTurns));
}

int QwtKnob_numTurns(const QwtKnob* self) {
	return self->numTurns();
}

void QwtKnob_setTotalAngle(QwtKnob* self, double angle) {
	self->setTotalAngle(static_cast<double>(angle));
}

double QwtKnob_totalAngle(const QwtKnob* self) {
	return self->totalAngle();
}

void QwtKnob_setKnobStyle(QwtKnob* self, int knobStyle) {
	self->setKnobStyle(static_cast<QwtKnob::KnobStyle>(knobStyle));
}

int QwtKnob_knobStyle(const QwtKnob* self) {
	QwtKnob::KnobStyle _ret = self->knobStyle();
	return static_cast<int>(_ret);
}

void QwtKnob_setBorderWidth(QwtKnob* self, int borderWidth) {
	self->setBorderWidth(static_cast<int>(borderWidth));
}

int QwtKnob_borderWidth(const QwtKnob* self) {
	return self->borderWidth();
}

void QwtKnob_setMarkerStyle(QwtKnob* self, int markerStyle) {
	self->setMarkerStyle(static_cast<QwtKnob::MarkerStyle>(markerStyle));
}

int QwtKnob_markerStyle(const QwtKnob* self) {
	QwtKnob::MarkerStyle _ret = self->markerStyle();
	return static_cast<int>(_ret);
}

void QwtKnob_setMarkerSize(QwtKnob* self, int markerSize) {
	self->setMarkerSize(static_cast<int>(markerSize));
}

int QwtKnob_markerSize(const QwtKnob* self) {
	return self->markerSize();
}

QSize* QwtKnob_sizeHint(const QwtKnob* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtKnob_minimumSizeHint(const QwtKnob* self) {
	return new QSize(self->minimumSizeHint());
}

void QwtKnob_setScaleDraw(QwtKnob* self, QwtRoundScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtRoundScaleDraw* QwtKnob_scaleDraw(const QwtKnob* self) {
	return (QwtRoundScaleDraw*) self->scaleDraw();
}

QwtRoundScaleDraw* QwtKnob_scaleDraw2(QwtKnob* self) {
	return self->scaleDraw();
}

QRect* QwtKnob_knobRect(const QwtKnob* self) {
	return new QRect(self->knobRect());
}

struct miqt_string QwtKnob_tr2(const char* s, const char* c) {
	QString _ret = QwtKnob::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtKnob_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtKnob::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtKnob_trUtf82(const char* s, const char* c) {
	QString _ret = QwtKnob::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtKnob_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtKnob::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtKnob_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtKnob_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::sizeHint());
}

bool QwtKnob_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtKnob_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::minimumSizeHint());
}

bool QwtKnob_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtKnob_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::paintEvent(param1);
}

bool QwtKnob_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtKnob_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::changeEvent(param1);
}

bool QwtKnob_override_virtual_drawKnob(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawKnob = slot;
	return true;
}

void QwtKnob_virtualbase_drawKnob(const void* self, QPainter* param1, QRectF* param2) {
	static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::drawKnob(param1, *param2);
}

bool QwtKnob_override_virtual_drawFocusIndicator(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFocusIndicator = slot;
	return true;
}

void QwtKnob_virtualbase_drawFocusIndicator(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::drawFocusIndicator(param1);
}

bool QwtKnob_override_virtual_drawMarker(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawMarker = slot;
	return true;
}

void QwtKnob_virtualbase_drawMarker(const void* self, QPainter* param1, QRectF* param2, double angle) {
	static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::drawMarker(param1, *param2, static_cast<double>(angle));
}

bool QwtKnob_override_virtual_scrolledTo(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = slot;
	return true;
}

double QwtKnob_virtualbase_scrolledTo(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::scrolledTo(*param1);
}

bool QwtKnob_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = slot;
	return true;
}

bool QwtKnob_virtualbase_isScrollPosition(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::isScrollPosition(*param1);
}

bool QwtKnob_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtKnob_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::mousePressEvent(param1);
}

bool QwtKnob_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtKnob_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::mouseReleaseEvent(param1);
}

bool QwtKnob_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtKnob_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::mouseMoveEvent(param1);
}

bool QwtKnob_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtKnob_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::keyPressEvent(param1);
}

bool QwtKnob_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtKnob_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::wheelEvent(param1);
}

bool QwtKnob_override_virtual_scaleChange(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = slot;
	return true;
}

void QwtKnob_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::scaleChange();
}

bool QwtKnob_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = slot;
	return true;
}

void QwtKnob_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::sliderChange();
}

bool QwtKnob_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtKnob_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::devType();
}

bool QwtKnob_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtKnob_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::setVisible(visible);
}

bool QwtKnob_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtKnob_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::heightForWidth(static_cast<int>(param1));
}

bool QwtKnob_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtKnob_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::hasHeightForWidth();
}

bool QwtKnob_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtKnob_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::paintEngine();
}

bool QwtKnob_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtKnob_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::event(event);
}

bool QwtKnob_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtKnob_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::mouseDoubleClickEvent(event);
}

bool QwtKnob_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtKnob_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::keyReleaseEvent(event);
}

bool QwtKnob_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtKnob_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::focusInEvent(event);
}

bool QwtKnob_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtKnob_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::focusOutEvent(event);
}

bool QwtKnob_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtKnob_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::enterEvent(event);
}

bool QwtKnob_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtKnob_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::leaveEvent(event);
}

bool QwtKnob_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtKnob_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::moveEvent(event);
}

bool QwtKnob_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtKnob_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::resizeEvent(event);
}

bool QwtKnob_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtKnob_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::closeEvent(event);
}

bool QwtKnob_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtKnob_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::contextMenuEvent(event);
}

bool QwtKnob_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtKnob_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::tabletEvent(event);
}

bool QwtKnob_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtKnob_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::actionEvent(event);
}

bool QwtKnob_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtKnob_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::dragEnterEvent(event);
}

bool QwtKnob_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtKnob_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::dragMoveEvent(event);
}

bool QwtKnob_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtKnob_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::dragLeaveEvent(event);
}

bool QwtKnob_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtKnob_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::dropEvent(event);
}

bool QwtKnob_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtKnob_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::showEvent(event);
}

bool QwtKnob_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtKnob_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::hideEvent(event);
}

bool QwtKnob_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtKnob_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtKnob_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtKnob_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::metric(static_cast<MiqtVirtualQwtKnob::PaintDeviceMetric>(param1));
}

bool QwtKnob_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtKnob_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::initPainter(painter);
}

bool QwtKnob_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtKnob_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::redirected(offset);
}

bool QwtKnob_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtKnob_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::sharedPainter();
}

bool QwtKnob_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtKnob_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::inputMethodEvent(param1);
}

bool QwtKnob_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtKnob_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtKnob*>(self)->QwtKnob::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtKnob_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtKnob_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::focusNextPrevChild(next);
}

bool QwtKnob_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtKnob_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::eventFilter(watched, event);
}

bool QwtKnob_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtKnob_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::timerEvent(event);
}

bool QwtKnob_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtKnob_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::childEvent(event);
}

bool QwtKnob_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtKnob_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::customEvent(event);
}

bool QwtKnob_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtKnob_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::connectNotify(*signal);
}

bool QwtKnob_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtKnob_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtKnob*>(self)->QwtKnob::disconnectNotify(*signal);
}

void QwtKnob_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtKnob_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtKnob_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtKnob_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtKnob_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtKnob_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtKnob_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtKnob_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtKnob_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtKnob_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtKnob_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtKnob_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtKnob_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtKnob_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtKnob* self_cast = dynamic_cast<MiqtVirtualQwtKnob*>( (QwtKnob*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtKnob_delete(QwtKnob* self) {
	delete self;
}

