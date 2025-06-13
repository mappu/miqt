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
#include <QStackedWidget>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstackedwidget.h>
#include "gen_qstackedwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStackedWidget_currentChanged(intptr_t, int);
void miqt_exec_callback_QStackedWidget_widgetRemoved(intptr_t, int);
bool miqt_exec_callback_QStackedWidget_event(QStackedWidget*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QStackedWidget_sizeHint(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_paintEvent(QStackedWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QStackedWidget_changeEvent(QStackedWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QStackedWidget_devType(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_setVisible(QStackedWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QStackedWidget_minimumSizeHint(const QStackedWidget*, intptr_t);
int miqt_exec_callback_QStackedWidget_heightForWidth(const QStackedWidget*, intptr_t, int);
bool miqt_exec_callback_QStackedWidget_hasHeightForWidth(const QStackedWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QStackedWidget_paintEngine(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_mousePressEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_mouseReleaseEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_mouseDoubleClickEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_mouseMoveEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_wheelEvent(QStackedWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QStackedWidget_keyPressEvent(QStackedWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStackedWidget_keyReleaseEvent(QStackedWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStackedWidget_focusInEvent(QStackedWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStackedWidget_focusOutEvent(QStackedWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStackedWidget_enterEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_leaveEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_moveEvent(QStackedWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QStackedWidget_resizeEvent(QStackedWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QStackedWidget_closeEvent(QStackedWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QStackedWidget_contextMenuEvent(QStackedWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QStackedWidget_tabletEvent(QStackedWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QStackedWidget_actionEvent(QStackedWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QStackedWidget_dragEnterEvent(QStackedWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QStackedWidget_dragMoveEvent(QStackedWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QStackedWidget_dragLeaveEvent(QStackedWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QStackedWidget_dropEvent(QStackedWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QStackedWidget_showEvent(QStackedWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QStackedWidget_hideEvent(QStackedWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QStackedWidget_nativeEvent(QStackedWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QStackedWidget_metric(const QStackedWidget*, intptr_t, int);
void miqt_exec_callback_QStackedWidget_initPainter(const QStackedWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QStackedWidget_redirected(const QStackedWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QStackedWidget_sharedPainter(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_inputMethodEvent(QStackedWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QStackedWidget_inputMethodQuery(const QStackedWidget*, intptr_t, int);
bool miqt_exec_callback_QStackedWidget_focusNextPrevChild(QStackedWidget*, intptr_t, bool);
bool miqt_exec_callback_QStackedWidget_eventFilter(QStackedWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedWidget_timerEvent(QStackedWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedWidget_childEvent(QStackedWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStackedWidget_customEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_connectNotify(QStackedWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedWidget_disconnectNotify(QStackedWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedWidget final : public QStackedWidget {
public:

	MiqtVirtualQStackedWidget(QWidget* parent): QStackedWidget(parent) {}
	MiqtVirtualQStackedWidget(): QStackedWidget() {}

	virtual ~MiqtVirtualQStackedWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QStackedWidget::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QStackedWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QStackedWidget_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QStackedWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QStackedWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QStackedWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QStackedWidget::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QStackedWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QStackedWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QStackedWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QStackedWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QStackedWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QStackedWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QStackedWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QStackedWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QStackedWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QStackedWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QStackedWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QStackedWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QStackedWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QStackedWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QStackedWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QStackedWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QStackedWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QStackedWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QStackedWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QStackedWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QStackedWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QStackedWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QStackedWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QStackedWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QStackedWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QStackedWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QStackedWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QStackedWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QStackedWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QStackedWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QStackedWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QStackedWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QStackedWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QStackedWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QStackedWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QStackedWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QStackedWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QStackedWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QStackedWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QStackedWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QStackedWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QStackedWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QStackedWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QStackedWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QStackedWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QStackedWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QStackedWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QStackedWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QStackedWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QStackedWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QStackedWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QStackedWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QStackedWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QStackedWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QStackedWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QStackedWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QStackedWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QStackedWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QStackedWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QStackedWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QStackedWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QStackedWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QStackedWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QStackedWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStackedWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QStackedWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QStackedWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStackedWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStackedWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStackedWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QStackedWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStackedWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QStackedWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStackedWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QStackedWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QStackedWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QStackedWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QStackedWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QStackedWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QStackedWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QStackedWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QStackedWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QStackedWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStackedWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStackedWidget* QStackedWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
	return new (std::nothrow) MiqtVirtualQStackedWidget();
}

void QStackedWidget_virtbase(QStackedWidget* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QStackedWidget_metaObject(const QStackedWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedWidget_metacast(QStackedWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedWidget_tr(const char* s) {
	QString _ret = QStackedWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_trUtf8(const char* s) {
	QString _ret = QStackedWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedWidget_addWidget(QStackedWidget* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedWidget_insertWidget(QStackedWidget* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_removeWidget(QStackedWidget* self, QWidget* w) {
	self->removeWidget(w);
}

QWidget* QStackedWidget_currentWidget(const QStackedWidget* self) {
	return self->currentWidget();
}

int QStackedWidget_currentIndex(const QStackedWidget* self) {
	return self->currentIndex();
}

int QStackedWidget_indexOf(const QStackedWidget* self, QWidget* param1) {
	return self->indexOf(param1);
}

QWidget* QStackedWidget_widget(const QStackedWidget* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedWidget_count(const QStackedWidget* self) {
	return self->count();
}

void QStackedWidget_setCurrentIndex(QStackedWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_setCurrentWidget(QStackedWidget* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedWidget_currentChanged(QStackedWidget* self, int param1) {
	self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_connect_currentChanged(QStackedWidget* self, intptr_t slot) {
	QStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::currentChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QStackedWidget_currentChanged(slot, sigval1);
	});
}

void QStackedWidget_widgetRemoved(QStackedWidget* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_connect_widgetRemoved(QStackedWidget* self, intptr_t slot) {
	QStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedWidget_widgetRemoved(slot, sigval1);
	});
}

struct miqt_string QStackedWidget_tr2(const char* s, const char* c) {
	QString _ret = QStackedWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QStackedWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStackedWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QStackedWidget_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::event(e);
}

bool QStackedWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QStackedWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::sizeHint());
}

bool QStackedWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::paintEvent(param1);
}

bool QStackedWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::changeEvent(param1);
}

bool QStackedWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QStackedWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::devType();
}

bool QStackedWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QStackedWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::setVisible(visible);
}

bool QStackedWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QStackedWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::minimumSizeHint());
}

bool QStackedWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QStackedWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::heightForWidth(static_cast<int>(param1));
}

bool QStackedWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QStackedWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::hasHeightForWidth();
}

bool QStackedWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QStackedWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::paintEngine();
}

bool QStackedWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::mousePressEvent(event);
}

bool QStackedWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::mouseReleaseEvent(event);
}

bool QStackedWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::mouseDoubleClickEvent(event);
}

bool QStackedWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::mouseMoveEvent(event);
}

bool QStackedWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::wheelEvent(event);
}

bool QStackedWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::keyPressEvent(event);
}

bool QStackedWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::keyReleaseEvent(event);
}

bool QStackedWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::focusInEvent(event);
}

bool QStackedWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::focusOutEvent(event);
}

bool QStackedWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::enterEvent(event);
}

bool QStackedWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::leaveEvent(event);
}

bool QStackedWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::moveEvent(event);
}

bool QStackedWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::resizeEvent(event);
}

bool QStackedWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::closeEvent(event);
}

bool QStackedWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::contextMenuEvent(event);
}

bool QStackedWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::tabletEvent(event);
}

bool QStackedWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::actionEvent(event);
}

bool QStackedWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::dragEnterEvent(event);
}

bool QStackedWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::dragMoveEvent(event);
}

bool QStackedWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::dragLeaveEvent(event);
}

bool QStackedWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::dropEvent(event);
}

bool QStackedWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::showEvent(event);
}

bool QStackedWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::hideEvent(event);
}

bool QStackedWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QStackedWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QStackedWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QStackedWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::metric(static_cast<MiqtVirtualQStackedWidget::PaintDeviceMetric>(param1));
}

bool QStackedWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QStackedWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::initPainter(painter);
}

bool QStackedWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QStackedWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::redirected(offset);
}

bool QStackedWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QStackedWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::sharedPainter();
}

bool QStackedWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::inputMethodEvent(param1);
}

bool QStackedWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QStackedWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQStackedWidget*>(self)->QStackedWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QStackedWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QStackedWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::focusNextPrevChild(next);
}

bool QStackedWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStackedWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::eventFilter(watched, event);
}

bool QStackedWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::timerEvent(event);
}

bool QStackedWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::childEvent(event);
}

bool QStackedWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::customEvent(event);
}

bool QStackedWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QStackedWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::connectNotify(*signal);
}

bool QStackedWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStackedWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedWidget*>(self)->QStackedWidget::disconnectNotify(*signal);
}

void QStackedWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QStackedWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QStackedWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QStackedWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QStackedWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QStackedWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QStackedWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QStackedWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QStackedWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QStackedWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QStackedWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QStackedWidget_delete(QStackedWidget* self) {
	delete self;
}

