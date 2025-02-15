#include <QAction>
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
#include <QIcon>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbar.h>
#include "gen_qtoolbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolBar_actionTriggered(intptr_t, QAction*);
void miqt_exec_callback_QToolBar_movableChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_allowedAreasChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_orientationChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_iconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QToolBar_toolButtonStyleChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_topLevelChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_visibilityChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_actionEvent(QToolBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolBar_changeEvent(QToolBar*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_paintEvent(QToolBar*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QToolBar_event(QToolBar*, intptr_t, QEvent*);
int miqt_exec_callback_QToolBar_devType(const QToolBar*, intptr_t);
void miqt_exec_callback_QToolBar_setVisible(QToolBar*, intptr_t, bool);
QSize* miqt_exec_callback_QToolBar_sizeHint(const QToolBar*, intptr_t);
QSize* miqt_exec_callback_QToolBar_minimumSizeHint(const QToolBar*, intptr_t);
int miqt_exec_callback_QToolBar_heightForWidth(const QToolBar*, intptr_t, int);
bool miqt_exec_callback_QToolBar_hasHeightForWidth(const QToolBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolBar_paintEngine(const QToolBar*, intptr_t);
void miqt_exec_callback_QToolBar_mousePressEvent(QToolBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_mouseReleaseEvent(QToolBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_mouseDoubleClickEvent(QToolBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_mouseMoveEvent(QToolBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_wheelEvent(QToolBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolBar_keyPressEvent(QToolBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBar_keyReleaseEvent(QToolBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBar_focusInEvent(QToolBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBar_focusOutEvent(QToolBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBar_enterEvent(QToolBar*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_leaveEvent(QToolBar*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_moveEvent(QToolBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolBar_resizeEvent(QToolBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolBar_closeEvent(QToolBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolBar_contextMenuEvent(QToolBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolBar_tabletEvent(QToolBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolBar_dragEnterEvent(QToolBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolBar_dragMoveEvent(QToolBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolBar_dragLeaveEvent(QToolBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolBar_dropEvent(QToolBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolBar_showEvent(QToolBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolBar_hideEvent(QToolBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolBar_nativeEvent(QToolBar*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QToolBar_metric(const QToolBar*, intptr_t, int);
void miqt_exec_callback_QToolBar_initPainter(const QToolBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolBar_redirected(const QToolBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolBar_sharedPainter(const QToolBar*, intptr_t);
void miqt_exec_callback_QToolBar_inputMethodEvent(QToolBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolBar_inputMethodQuery(const QToolBar*, intptr_t, int);
bool miqt_exec_callback_QToolBar_focusNextPrevChild(QToolBar*, intptr_t, bool);
bool miqt_exec_callback_QToolBar_eventFilter(QToolBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QToolBar_timerEvent(QToolBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolBar_childEvent(QToolBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QToolBar_customEvent(QToolBar*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_connectNotify(QToolBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QToolBar_disconnectNotify(QToolBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolBar final : public QToolBar {
public:

	MiqtVirtualQToolBar(QWidget* parent): QToolBar(parent) {};
	MiqtVirtualQToolBar(const QString& title): QToolBar(title) {};
	MiqtVirtualQToolBar(): QToolBar() {};
	MiqtVirtualQToolBar(const QString& title, QWidget* parent): QToolBar(title, parent) {};

	virtual ~MiqtVirtualQToolBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QToolBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QToolBar::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QToolBar::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QToolBar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QToolBar_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QToolBar_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QToolBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolBar_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBar_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QToolBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolBar_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QToolBar_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QToolBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBar_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QToolBar_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QToolBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBar_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QToolBar_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QToolBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolBar_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBar_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QToolBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolBar_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QToolBar_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QToolBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolBar_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QToolBar_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QToolBar::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QToolBar::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QToolBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QToolBar::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QToolBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QToolBar::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QToolBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QToolBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QToolBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QToolBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QToolBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QToolBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QToolBar::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QToolBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QToolBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QToolBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QToolBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QToolBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QToolBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QToolBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QToolBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QToolBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QToolBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QToolBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QToolBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QToolBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolBar_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBar_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QToolBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolBar_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QToolBar_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QToolBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolBar_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QToolBar_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QToolBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolBar_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QToolBar_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QToolBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QToolBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QToolBar_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QToolBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QToolBar_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QToolBar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QToolBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QToolBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QToolBar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QToolBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QToolBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QToolBar_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QToolBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBar_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QToolBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QToolBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QToolBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QToolBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionToolBar* option);
	friend void QToolBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QToolBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QToolBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QToolBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QToolBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QToolBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QToolBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QToolBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QToolBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QToolBar* QToolBar_new(QWidget* parent) {
	return new MiqtVirtualQToolBar(parent);
}

QToolBar* QToolBar_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQToolBar(title_QString);
}

QToolBar* QToolBar_new3() {
	return new MiqtVirtualQToolBar();
}

QToolBar* QToolBar_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQToolBar(title_QString, parent);
}

void QToolBar_virtbase(QToolBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QToolBar_metaObject(const QToolBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBar_metacast(QToolBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBar_tr(const char* s) {
	QString _ret = QToolBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_trUtf8(const char* s) {
	QString _ret = QToolBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBar_setMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_isMovable(const QToolBar* self) {
	return self->isMovable();
}

void QToolBar_setAllowedAreas(QToolBar* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_allowedAreas(const QToolBar* self) {
	Qt::ToolBarAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

bool QToolBar_isAreaAllowed(const QToolBar* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_setOrientation(QToolBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_orientation(const QToolBar* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QToolBar_clear(QToolBar* self) {
	self->clear();
}

QAction* QToolBar_addAction(QToolBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QToolBar_addAction2(QToolBar* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

QAction* QToolBar_addSeparator(QToolBar* self) {
	return self->addSeparator();
}

QAction* QToolBar_insertSeparator(QToolBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QToolBar_addWidget(QToolBar* self, QWidget* widget) {
	return self->addWidget(widget);
}

QAction* QToolBar_insertWidget(QToolBar* self, QAction* before, QWidget* widget) {
	return self->insertWidget(before, widget);
}

QRect* QToolBar_actionGeometry(const QToolBar* self, QAction* action) {
	return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_actionAt(const QToolBar* self, QPoint* p) {
	return self->actionAt(*p);
}

QAction* QToolBar_actionAt2(const QToolBar* self, int x, int y) {
	return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_toggleViewAction(const QToolBar* self) {
	return self->toggleViewAction();
}

QSize* QToolBar_iconSize(const QToolBar* self) {
	return new QSize(self->iconSize());
}

int QToolBar_toolButtonStyle(const QToolBar* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

QWidget* QToolBar_widgetForAction(const QToolBar* self, QAction* action) {
	return self->widgetForAction(action);
}

bool QToolBar_isFloatable(const QToolBar* self) {
	return self->isFloatable();
}

void QToolBar_setFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_isFloating(const QToolBar* self) {
	return self->isFloating();
}

void QToolBar_setIconSize(QToolBar* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_setToolButtonStyle(QToolBar* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_actionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_connect_actionTriggered(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QToolBar_actionTriggered(slot, sigval1);
	});
}

void QToolBar_movableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_connect_movableChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged), self, [=](bool movable) {
		bool sigval1 = movable;
		miqt_exec_callback_QToolBar_movableChanged(slot, sigval1);
	});
}

void QToolBar_allowedAreasChanged(QToolBar* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_connect_allowedAreasChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolBarAreas)>(&QToolBar::allowedAreasChanged), self, [=](Qt::ToolBarAreas allowedAreas) {
		Qt::ToolBarAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QToolBar_allowedAreasChanged(slot, sigval1);
	});
}

void QToolBar_orientationChanged(QToolBar* self, int orientation) {
	self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_connect_orientationChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::Orientation)>(&QToolBar::orientationChanged), self, [=](Qt::Orientation orientation) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QToolBar_orientationChanged(slot, sigval1);
	});
}

void QToolBar_iconSizeChanged(QToolBar* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_connect_iconSizeChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged), self, [=](const QSize& iconSize) {
		const QSize& iconSize_ret = iconSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
		miqt_exec_callback_QToolBar_iconSizeChanged(slot, sigval1);
	});
}

void QToolBar_toolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_connect_toolButtonStyleChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolButtonStyle)>(&QToolBar::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		Qt::ToolButtonStyle toolButtonStyle_ret = toolButtonStyle;
		int sigval1 = static_cast<int>(toolButtonStyle_ret);
		miqt_exec_callback_QToolBar_toolButtonStyleChanged(slot, sigval1);
	});
}

void QToolBar_topLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_connect_topLevelChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QToolBar_topLevelChanged(slot, sigval1);
	});
}

void QToolBar_visibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_connect_visibilityChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QToolBar_visibilityChanged(slot, sigval1);
	});
}

struct miqt_string QToolBar_tr2(const char* s, const char* c) {
	QString _ret = QToolBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_trUtf82(const char* s, const char* c) {
	QString _ret = QToolBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QToolBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QToolBar_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::actionEvent(event);

}

bool QToolBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QToolBar_virtualbase_changeEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::changeEvent(event);

}

bool QToolBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QToolBar_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::paintEvent(event);

}

bool QToolBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QToolBar_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQToolBar*)(self) )->QToolBar::event(event);

}

bool QToolBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QToolBar_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::devType();

}

bool QToolBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QToolBar_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::setVisible(visible);

}

bool QToolBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QToolBar_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQToolBar*)(self) )->QToolBar::sizeHint());

}

bool QToolBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QToolBar_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQToolBar*)(self) )->QToolBar::minimumSizeHint());

}

bool QToolBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QToolBar_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::heightForWidth(static_cast<int>(param1));

}

bool QToolBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QToolBar_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::hasHeightForWidth();

}

bool QToolBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QToolBar_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::paintEngine();

}

bool QToolBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QToolBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::mousePressEvent(event);

}

bool QToolBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QToolBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::mouseReleaseEvent(event);

}

bool QToolBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QToolBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::mouseDoubleClickEvent(event);

}

bool QToolBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QToolBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::mouseMoveEvent(event);

}

bool QToolBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QToolBar_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::wheelEvent(event);

}

bool QToolBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QToolBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::keyPressEvent(event);

}

bool QToolBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QToolBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::keyReleaseEvent(event);

}

bool QToolBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QToolBar_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::focusInEvent(event);

}

bool QToolBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QToolBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::focusOutEvent(event);

}

bool QToolBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QToolBar_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::enterEvent(event);

}

bool QToolBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QToolBar_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::leaveEvent(event);

}

bool QToolBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QToolBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::moveEvent(event);

}

bool QToolBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QToolBar_virtualbase_resizeEvent(void* self, QResizeEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::resizeEvent(event);

}

bool QToolBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QToolBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::closeEvent(event);

}

bool QToolBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QToolBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::contextMenuEvent(event);

}

bool QToolBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QToolBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::tabletEvent(event);

}

bool QToolBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QToolBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::dragEnterEvent(event);

}

bool QToolBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QToolBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::dragMoveEvent(event);

}

bool QToolBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QToolBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::dragLeaveEvent(event);

}

bool QToolBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QToolBar_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::dropEvent(event);

}

bool QToolBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QToolBar_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::showEvent(event);

}

bool QToolBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QToolBar_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::hideEvent(event);

}

bool QToolBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QToolBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQToolBar*)(self) )->QToolBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool QToolBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QToolBar_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::metric(static_cast<MiqtVirtualQToolBar::PaintDeviceMetric>(param1));

}

bool QToolBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QToolBar_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQToolBar*)(self) )->QToolBar::initPainter(painter);

}

bool QToolBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QToolBar_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::redirected(offset);

}

bool QToolBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QToolBar_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQToolBar*)(self) )->QToolBar::sharedPainter();

}

bool QToolBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QToolBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::inputMethodEvent(param1);

}

bool QToolBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QToolBar_virtualbase_inputMethodQuery(const void* self, int param1) {

	return new QVariant(( (const MiqtVirtualQToolBar*)(self) )->QToolBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

}

bool QToolBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QToolBar_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQToolBar*)(self) )->QToolBar::focusNextPrevChild(next);

}

bool QToolBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QToolBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQToolBar*)(self) )->QToolBar::eventFilter(watched, event);

}

bool QToolBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QToolBar_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::timerEvent(event);

}

bool QToolBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QToolBar_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::childEvent(event);

}

bool QToolBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QToolBar_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::customEvent(event);

}

bool QToolBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QToolBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::connectNotify(*signal);

}

bool QToolBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QToolBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQToolBar*)(self) )->QToolBar::disconnectNotify(*signal);

}

void QToolBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionToolBar* option) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QToolBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QToolBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QToolBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QToolBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QToolBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QToolBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QToolBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QToolBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QToolBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QToolBar_delete(QToolBar* self) {
	delete self;
}

