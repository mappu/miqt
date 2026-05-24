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
#include <qwt_wheel.h>
#include "gen_qwt_wheel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtWheel_valueChanged(intptr_t, double);
void miqt_exec_callback_QwtWheel_wheelPressed(intptr_t);
void miqt_exec_callback_QwtWheel_wheelReleased(intptr_t);
void miqt_exec_callback_QwtWheel_wheelMoved(intptr_t, double);
void miqt_exec_callback_QwtWheel_paintEvent(QwtWheel*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtWheel_mousePressEvent(QwtWheel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWheel_mouseReleaseEvent(QwtWheel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWheel_mouseMoveEvent(QwtWheel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWheel_keyPressEvent(QwtWheel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtWheel_wheelEvent(QwtWheel*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtWheel_timerEvent(QwtWheel*, intptr_t, QTimerEvent*);
QSize* miqt_exec_callback_QwtWheel_sizeHint(const QwtWheel*, intptr_t);
QSize* miqt_exec_callback_QwtWheel_minimumSizeHint(const QwtWheel*, intptr_t);
void miqt_exec_callback_QwtWheel_drawTicks(QwtWheel*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QwtWheel_drawWheelBackground(QwtWheel*, intptr_t, QPainter*, QRectF*);
double miqt_exec_callback_QwtWheel_valueAt(const QwtWheel*, intptr_t, QPoint*);
int miqt_exec_callback_QwtWheel_devType(const QwtWheel*, intptr_t);
void miqt_exec_callback_QwtWheel_setVisible(QwtWheel*, intptr_t, bool);
int miqt_exec_callback_QwtWheel_heightForWidth(const QwtWheel*, intptr_t, int);
bool miqt_exec_callback_QwtWheel_hasHeightForWidth(const QwtWheel*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtWheel_paintEngine(const QwtWheel*, intptr_t);
bool miqt_exec_callback_QwtWheel_event(QwtWheel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWheel_mouseDoubleClickEvent(QwtWheel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWheel_keyReleaseEvent(QwtWheel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtWheel_focusInEvent(QwtWheel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtWheel_focusOutEvent(QwtWheel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtWheel_enterEvent(QwtWheel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWheel_leaveEvent(QwtWheel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWheel_moveEvent(QwtWheel*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtWheel_resizeEvent(QwtWheel*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtWheel_closeEvent(QwtWheel*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtWheel_contextMenuEvent(QwtWheel*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtWheel_tabletEvent(QwtWheel*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtWheel_actionEvent(QwtWheel*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtWheel_dragEnterEvent(QwtWheel*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtWheel_dragMoveEvent(QwtWheel*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtWheel_dragLeaveEvent(QwtWheel*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtWheel_dropEvent(QwtWheel*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtWheel_showEvent(QwtWheel*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtWheel_hideEvent(QwtWheel*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtWheel_nativeEvent(QwtWheel*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtWheel_changeEvent(QwtWheel*, intptr_t, QEvent*);
int miqt_exec_callback_QwtWheel_metric(const QwtWheel*, intptr_t, int);
void miqt_exec_callback_QwtWheel_initPainter(const QwtWheel*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtWheel_redirected(const QwtWheel*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtWheel_sharedPainter(const QwtWheel*, intptr_t);
void miqt_exec_callback_QwtWheel_inputMethodEvent(QwtWheel*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtWheel_inputMethodQuery(const QwtWheel*, intptr_t, int);
bool miqt_exec_callback_QwtWheel_focusNextPrevChild(QwtWheel*, intptr_t, bool);
bool miqt_exec_callback_QwtWheel_eventFilter(QwtWheel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtWheel_childEvent(QwtWheel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtWheel_customEvent(QwtWheel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWheel_connectNotify(QwtWheel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtWheel_disconnectNotify(QwtWheel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtWheel final : public QwtWheel {
public:

	MiqtVirtualQwtWheel(QWidget* parent): QwtWheel(parent) {}
	MiqtVirtualQwtWheel(): QwtWheel() {}

	virtual ~MiqtVirtualQwtWheel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtWheel::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QwtWheel::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtWheel::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QwtWheel::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QwtWheel::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QwtWheel::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QwtWheel::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtWheel::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtWheel_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtWheel_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtWheel::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtWheel_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtWheel_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTicks = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTicks(QPainter* param1, const QRectF& param2) override {
		if (handle__drawTicks == 0) {
			QwtWheel::drawTicks(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtWheel_drawTicks(this, handle__drawTicks, sigval1, sigval2);

	}

	friend void QwtWheel_virtualbase_drawTicks(void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawWheelBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawWheelBackground(QPainter* param1, const QRectF& param2) override {
		if (handle__drawWheelBackground == 0) {
			QwtWheel::drawWheelBackground(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtWheel_drawWheelBackground(this, handle__drawWheelBackground, sigval1, sigval2);

	}

	friend void QwtWheel_virtualbase_drawWheelBackground(void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valueAt = 0;

	// Subclass to allow providing a Go implementation
	virtual double valueAt(const QPoint& param1) const override {
		if (handle__valueAt == 0) {
			return QwtWheel::valueAt(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtWheel_valueAt(this, handle__valueAt, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtWheel_virtualbase_valueAt(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtWheel::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtWheel_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWheel_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtWheel::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtWheel_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtWheel_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtWheel::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtWheel_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWheel_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtWheel::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtWheel_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtWheel_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtWheel::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtWheel_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtWheel_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtWheel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtWheel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtWheel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtWheel::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtWheel::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtWheel::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtWheel::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtWheel::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtWheel::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtWheel::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtWheel::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtWheel::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtWheel::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtWheel::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtWheel::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtWheel::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtWheel::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtWheel::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtWheel::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtWheel::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtWheel::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtWheel::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtWheel_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtWheel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtWheel::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtWheel::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtWheel_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWheel_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtWheel::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtWheel_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtWheel_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtWheel::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtWheel_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtWheel_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtWheel::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtWheel_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtWheel_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtWheel::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtWheel_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtWheel::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtWheel_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtWheel_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtWheel::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtWheel_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtWheel_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtWheel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtWheel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtWheel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtWheel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtWheel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWheel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtWheel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtWheel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtWheel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtWheel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtWheel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtWheel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtWheel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtWheel_protectedbase_stopFlying(bool* _dynamic_cast_ok, void* self);
	friend QRect* QwtWheel_protectedbase_wheelRect(bool* _dynamic_cast_ok, const void* self);
	friend void QwtWheel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtWheel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtWheel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtWheel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtWheel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtWheel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtWheel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtWheel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtWheel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtWheel* QwtWheel_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtWheel(parent);
}

QwtWheel* QwtWheel_new2() {
	return new (std::nothrow) MiqtVirtualQwtWheel();
}

void QwtWheel_virtbase(QwtWheel* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QwtWheel_metaObject(const QwtWheel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtWheel_metacast(QwtWheel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtWheel_tr(const char* s) {
	QString _ret = QwtWheel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtWheel_trUtf8(const char* s) {
	QString _ret = QwtWheel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QwtWheel_value(const QwtWheel* self) {
	return self->value();
}

void QwtWheel_setOrientation(QwtWheel* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QwtWheel_orientation(const QwtWheel* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

double QwtWheel_totalAngle(const QwtWheel* self) {
	return self->totalAngle();
}

double QwtWheel_viewAngle(const QwtWheel* self) {
	return self->viewAngle();
}

void QwtWheel_setTickCount(QwtWheel* self, int tickCount) {
	self->setTickCount(static_cast<int>(tickCount));
}

int QwtWheel_tickCount(const QwtWheel* self) {
	return self->tickCount();
}

void QwtWheel_setWheelWidth(QwtWheel* self, int wheelWidth) {
	self->setWheelWidth(static_cast<int>(wheelWidth));
}

int QwtWheel_wheelWidth(const QwtWheel* self) {
	return self->wheelWidth();
}

void QwtWheel_setWheelBorderWidth(QwtWheel* self, int wheelBorderWidth) {
	self->setWheelBorderWidth(static_cast<int>(wheelBorderWidth));
}

int QwtWheel_wheelBorderWidth(const QwtWheel* self) {
	return self->wheelBorderWidth();
}

void QwtWheel_setBorderWidth(QwtWheel* self, int borderWidth) {
	self->setBorderWidth(static_cast<int>(borderWidth));
}

int QwtWheel_borderWidth(const QwtWheel* self) {
	return self->borderWidth();
}

void QwtWheel_setInverted(QwtWheel* self, bool inverted) {
	self->setInverted(inverted);
}

bool QwtWheel_isInverted(const QwtWheel* self) {
	return self->isInverted();
}

void QwtWheel_setWrapping(QwtWheel* self, bool wrapping) {
	self->setWrapping(wrapping);
}

bool QwtWheel_wrapping(const QwtWheel* self) {
	return self->wrapping();
}

void QwtWheel_setSingleStep(QwtWheel* self, double singleStep) {
	self->setSingleStep(static_cast<double>(singleStep));
}

double QwtWheel_singleStep(const QwtWheel* self) {
	return self->singleStep();
}

void QwtWheel_setPageStepCount(QwtWheel* self, int pageStepCount) {
	self->setPageStepCount(static_cast<int>(pageStepCount));
}

int QwtWheel_pageStepCount(const QwtWheel* self) {
	return self->pageStepCount();
}

void QwtWheel_setStepAlignment(QwtWheel* self, bool on) {
	self->setStepAlignment(on);
}

bool QwtWheel_stepAlignment(const QwtWheel* self) {
	return self->stepAlignment();
}

void QwtWheel_setRange(QwtWheel* self, double min, double max) {
	self->setRange(static_cast<double>(min), static_cast<double>(max));
}

void QwtWheel_setMinimum(QwtWheel* self, double minimum) {
	self->setMinimum(static_cast<double>(minimum));
}

double QwtWheel_minimum(const QwtWheel* self) {
	return self->minimum();
}

void QwtWheel_setMaximum(QwtWheel* self, double maximum) {
	self->setMaximum(static_cast<double>(maximum));
}

double QwtWheel_maximum(const QwtWheel* self) {
	return self->maximum();
}

void QwtWheel_setUpdateInterval(QwtWheel* self, int updateInterval) {
	self->setUpdateInterval(static_cast<int>(updateInterval));
}

int QwtWheel_updateInterval(const QwtWheel* self) {
	return self->updateInterval();
}

void QwtWheel_setTracking(QwtWheel* self, bool tracking) {
	self->setTracking(tracking);
}

bool QwtWheel_isTracking(const QwtWheel* self) {
	return self->isTracking();
}

double QwtWheel_mass(const QwtWheel* self) {
	return self->mass();
}

void QwtWheel_setValue(QwtWheel* self, double value) {
	self->setValue(static_cast<double>(value));
}

void QwtWheel_setTotalAngle(QwtWheel* self, double totalAngle) {
	self->setTotalAngle(static_cast<double>(totalAngle));
}

void QwtWheel_setViewAngle(QwtWheel* self, double viewAngle) {
	self->setViewAngle(static_cast<double>(viewAngle));
}

void QwtWheel_setMass(QwtWheel* self, double mass) {
	self->setMass(static_cast<double>(mass));
}

void QwtWheel_valueChanged(QwtWheel* self, double value) {
	self->valueChanged(static_cast<double>(value));
}

void QwtWheel_connect_valueChanged(QwtWheel* self, intptr_t slot) {
	QwtWheel::connect(self, static_cast<void (QwtWheel::*)(double)>(&QwtWheel::valueChanged), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QwtWheel_valueChanged(slot, sigval1);
	});
}

void QwtWheel_wheelPressed(QwtWheel* self) {
	self->wheelPressed();
}

void QwtWheel_connect_wheelPressed(QwtWheel* self, intptr_t slot) {
	QwtWheel::connect(self, static_cast<void (QwtWheel::*)()>(&QwtWheel::wheelPressed), self, [=]() {
		miqt_exec_callback_QwtWheel_wheelPressed(slot);
	});
}

void QwtWheel_wheelReleased(QwtWheel* self) {
	self->wheelReleased();
}

void QwtWheel_connect_wheelReleased(QwtWheel* self, intptr_t slot) {
	QwtWheel::connect(self, static_cast<void (QwtWheel::*)()>(&QwtWheel::wheelReleased), self, [=]() {
		miqt_exec_callback_QwtWheel_wheelReleased(slot);
	});
}

void QwtWheel_wheelMoved(QwtWheel* self, double value) {
	self->wheelMoved(static_cast<double>(value));
}

void QwtWheel_connect_wheelMoved(QwtWheel* self, intptr_t slot) {
	QwtWheel::connect(self, static_cast<void (QwtWheel::*)(double)>(&QwtWheel::wheelMoved), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QwtWheel_wheelMoved(slot, sigval1);
	});
}

struct miqt_string QwtWheel_tr2(const char* s, const char* c) {
	QString _ret = QwtWheel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtWheel_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtWheel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtWheel_trUtf82(const char* s, const char* c) {
	QString _ret = QwtWheel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtWheel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtWheel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtWheel_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtWheel_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::paintEvent(param1);
}

bool QwtWheel_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtWheel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::mousePressEvent(param1);
}

bool QwtWheel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtWheel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::mouseReleaseEvent(param1);
}

bool QwtWheel_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtWheel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::mouseMoveEvent(param1);
}

bool QwtWheel_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtWheel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::keyPressEvent(param1);
}

bool QwtWheel_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtWheel_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::wheelEvent(param1);
}

bool QwtWheel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtWheel_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::timerEvent(param1);
}

bool QwtWheel_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtWheel_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::sizeHint());
}

bool QwtWheel_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtWheel_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::minimumSizeHint());
}

bool QwtWheel_override_virtual_drawTicks(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTicks = slot;
	return true;
}

void QwtWheel_virtualbase_drawTicks(void* self, QPainter* param1, QRectF* param2) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::drawTicks(param1, *param2);
}

bool QwtWheel_override_virtual_drawWheelBackground(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawWheelBackground = slot;
	return true;
}

void QwtWheel_virtualbase_drawWheelBackground(void* self, QPainter* param1, QRectF* param2) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::drawWheelBackground(param1, *param2);
}

bool QwtWheel_override_virtual_valueAt(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__valueAt = slot;
	return true;
}

double QwtWheel_virtualbase_valueAt(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::valueAt(*param1);
}

bool QwtWheel_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtWheel_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::devType();
}

bool QwtWheel_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtWheel_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::setVisible(visible);
}

bool QwtWheel_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtWheel_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::heightForWidth(static_cast<int>(param1));
}

bool QwtWheel_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtWheel_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::hasHeightForWidth();
}

bool QwtWheel_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtWheel_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::paintEngine();
}

bool QwtWheel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtWheel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::event(event);
}

bool QwtWheel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtWheel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::mouseDoubleClickEvent(event);
}

bool QwtWheel_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtWheel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::keyReleaseEvent(event);
}

bool QwtWheel_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtWheel_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::focusInEvent(event);
}

bool QwtWheel_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtWheel_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::focusOutEvent(event);
}

bool QwtWheel_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtWheel_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::enterEvent(event);
}

bool QwtWheel_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtWheel_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::leaveEvent(event);
}

bool QwtWheel_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtWheel_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::moveEvent(event);
}

bool QwtWheel_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtWheel_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::resizeEvent(event);
}

bool QwtWheel_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtWheel_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::closeEvent(event);
}

bool QwtWheel_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtWheel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::contextMenuEvent(event);
}

bool QwtWheel_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtWheel_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::tabletEvent(event);
}

bool QwtWheel_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtWheel_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::actionEvent(event);
}

bool QwtWheel_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtWheel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::dragEnterEvent(event);
}

bool QwtWheel_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtWheel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::dragMoveEvent(event);
}

bool QwtWheel_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtWheel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::dragLeaveEvent(event);
}

bool QwtWheel_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtWheel_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::dropEvent(event);
}

bool QwtWheel_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtWheel_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::showEvent(event);
}

bool QwtWheel_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtWheel_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::hideEvent(event);
}

bool QwtWheel_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtWheel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtWheel_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtWheel_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::changeEvent(param1);
}

bool QwtWheel_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtWheel_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::metric(static_cast<MiqtVirtualQwtWheel::PaintDeviceMetric>(param1));
}

bool QwtWheel_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtWheel_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::initPainter(painter);
}

bool QwtWheel_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtWheel_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::redirected(offset);
}

bool QwtWheel_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtWheel_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::sharedPainter();
}

bool QwtWheel_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtWheel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::inputMethodEvent(param1);
}

bool QwtWheel_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtWheel_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtWheel*>(self)->QwtWheel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtWheel_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtWheel_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::focusNextPrevChild(next);
}

bool QwtWheel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtWheel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::eventFilter(watched, event);
}

bool QwtWheel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtWheel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::childEvent(event);
}

bool QwtWheel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtWheel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::customEvent(event);
}

bool QwtWheel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtWheel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::connectNotify(*signal);
}

bool QwtWheel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtWheel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtWheel*>(self)->QwtWheel::disconnectNotify(*signal);
}

void QwtWheel_protectedbase_stopFlying(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopFlying();
}

QRect* QwtWheel_protectedbase_wheelRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->wheelRect());
}

void QwtWheel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtWheel_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtWheel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtWheel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtWheel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtWheel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtWheel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtWheel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtWheel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtWheel* self_cast = dynamic_cast<MiqtVirtualQwtWheel*>( (QwtWheel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtWheel_delete(QwtWheel* self) {
	delete self;
}

