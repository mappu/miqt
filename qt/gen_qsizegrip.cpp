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
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsizegrip.h>
#include "gen_qsizegrip.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSizeGrip_sizeHint(const QSizeGrip*, intptr_t);
void miqt_exec_callback_QSizeGrip_setVisible(QSizeGrip*, intptr_t, bool);
void miqt_exec_callback_QSizeGrip_paintEvent(QSizeGrip*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSizeGrip_mousePressEvent(QSizeGrip*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_mouseMoveEvent(QSizeGrip*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_mouseReleaseEvent(QSizeGrip*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_moveEvent(QSizeGrip*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSizeGrip_showEvent(QSizeGrip*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSizeGrip_hideEvent(QSizeGrip*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSizeGrip_eventFilter(QSizeGrip*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QSizeGrip_event(QSizeGrip*, intptr_t, QEvent*);
int miqt_exec_callback_QSizeGrip_devType(const QSizeGrip*, intptr_t);
QSize* miqt_exec_callback_QSizeGrip_minimumSizeHint(const QSizeGrip*, intptr_t);
int miqt_exec_callback_QSizeGrip_heightForWidth(const QSizeGrip*, intptr_t, int);
bool miqt_exec_callback_QSizeGrip_hasHeightForWidth(const QSizeGrip*, intptr_t);
QPaintEngine* miqt_exec_callback_QSizeGrip_paintEngine(const QSizeGrip*, intptr_t);
void miqt_exec_callback_QSizeGrip_mouseDoubleClickEvent(QSizeGrip*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_wheelEvent(QSizeGrip*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSizeGrip_keyPressEvent(QSizeGrip*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSizeGrip_keyReleaseEvent(QSizeGrip*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSizeGrip_focusInEvent(QSizeGrip*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSizeGrip_focusOutEvent(QSizeGrip*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSizeGrip_enterEvent(QSizeGrip*, intptr_t, QEvent*);
void miqt_exec_callback_QSizeGrip_leaveEvent(QSizeGrip*, intptr_t, QEvent*);
void miqt_exec_callback_QSizeGrip_resizeEvent(QSizeGrip*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSizeGrip_closeEvent(QSizeGrip*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSizeGrip_contextMenuEvent(QSizeGrip*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSizeGrip_tabletEvent(QSizeGrip*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSizeGrip_actionEvent(QSizeGrip*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSizeGrip_dragEnterEvent(QSizeGrip*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSizeGrip_dragMoveEvent(QSizeGrip*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSizeGrip_dragLeaveEvent(QSizeGrip*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSizeGrip_dropEvent(QSizeGrip*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QSizeGrip_nativeEvent(QSizeGrip*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSizeGrip_changeEvent(QSizeGrip*, intptr_t, QEvent*);
int miqt_exec_callback_QSizeGrip_metric(const QSizeGrip*, intptr_t, int);
void miqt_exec_callback_QSizeGrip_initPainter(const QSizeGrip*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSizeGrip_redirected(const QSizeGrip*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSizeGrip_sharedPainter(const QSizeGrip*, intptr_t);
void miqt_exec_callback_QSizeGrip_inputMethodEvent(QSizeGrip*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSizeGrip_inputMethodQuery(const QSizeGrip*, intptr_t, int);
bool miqt_exec_callback_QSizeGrip_focusNextPrevChild(QSizeGrip*, intptr_t, bool);
void miqt_exec_callback_QSizeGrip_timerEvent(QSizeGrip*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSizeGrip_childEvent(QSizeGrip*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSizeGrip_customEvent(QSizeGrip*, intptr_t, QEvent*);
void miqt_exec_callback_QSizeGrip_connectNotify(QSizeGrip*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSizeGrip_disconnectNotify(QSizeGrip*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSizeGrip final : public QSizeGrip {
public:

	MiqtVirtualQSizeGrip(QWidget* parent): QSizeGrip(parent) {}

	virtual ~MiqtVirtualQSizeGrip() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSizeGrip::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSizeGrip_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSizeGrip_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSizeGrip::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSizeGrip_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSizeGrip_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QSizeGrip::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QSizeGrip_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QSizeGrip::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSizeGrip_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QSizeGrip::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSizeGrip_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (handle__mouseReleaseEvent == 0) {
			QSizeGrip::mouseReleaseEvent(mouseEvent);
			return;
		}

		QMouseEvent* sigval1 = mouseEvent;
		miqt_exec_callback_QSizeGrip_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (handle__moveEvent == 0) {
			QSizeGrip::moveEvent(moveEvent);
			return;
		}

		QMoveEvent* sigval1 = moveEvent;
		miqt_exec_callback_QSizeGrip_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__showEvent == 0) {
			QSizeGrip::showEvent(showEvent);
			return;
		}

		QShowEvent* sigval1 = showEvent;
		miqt_exec_callback_QSizeGrip_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_showEvent(void* self, QShowEvent* showEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (handle__hideEvent == 0) {
			QSizeGrip::hideEvent(hideEvent);
			return;
		}

		QHideEvent* sigval1 = hideEvent;
		miqt_exec_callback_QSizeGrip_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_hideEvent(void* self, QHideEvent* hideEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QSizeGrip::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QSizeGrip_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSizeGrip_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QSizeGrip::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QSizeGrip_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSizeGrip_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSizeGrip::devType();
		}

		int callback_return_value = miqt_exec_callback_QSizeGrip_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSizeGrip_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSizeGrip::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSizeGrip_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSizeGrip_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSizeGrip::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSizeGrip_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSizeGrip_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSizeGrip::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSizeGrip_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSizeGrip_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSizeGrip::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSizeGrip_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSizeGrip_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSizeGrip::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSizeGrip::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSizeGrip::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSizeGrip::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSizeGrip::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSizeGrip::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSizeGrip::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSizeGrip::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QSizeGrip::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSizeGrip::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSizeGrip::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSizeGrip::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSizeGrip::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSizeGrip::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSizeGrip::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSizeGrip::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSizeGrip::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QSizeGrip::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QSizeGrip_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSizeGrip_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QSizeGrip::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QSizeGrip_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSizeGrip::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSizeGrip_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSizeGrip_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSizeGrip::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSizeGrip_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSizeGrip_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSizeGrip::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSizeGrip_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSizeGrip_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSizeGrip::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSizeGrip_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSizeGrip_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSizeGrip::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSizeGrip_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSizeGrip::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSizeGrip_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSizeGrip_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSizeGrip::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSizeGrip_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSizeGrip_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSizeGrip::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSizeGrip::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSizeGrip::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSizeGrip_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSizeGrip_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSizeGrip::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSizeGrip_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSizeGrip_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSizeGrip::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSizeGrip_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSizeGrip_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSizeGrip_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSizeGrip_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSizeGrip_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSizeGrip_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSizeGrip_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSizeGrip_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSizeGrip_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSizeGrip_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSizeGrip_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSizeGrip(parent);
}

void QSizeGrip_virtbase(QSizeGrip* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSizeGrip_metaObject(const QSizeGrip* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSizeGrip_metacast(QSizeGrip* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSizeGrip_tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_trUtf8(const char* s) {
	QString _ret = QSizeGrip::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSizeGrip_sizeHint(const QSizeGrip* self) {
	return new QSize(self->sizeHint());
}

void QSizeGrip_setVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string QSizeGrip_tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_trUtf82(const char* s, const char* c) {
	QString _ret = QSizeGrip::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSizeGrip_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSizeGrip_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::sizeHint());
}

bool QSizeGrip_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSizeGrip_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::setVisible(visible);
}

bool QSizeGrip_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::paintEvent(param1);
}

bool QSizeGrip_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::mousePressEvent(param1);
}

bool QSizeGrip_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::mouseMoveEvent(param1);
}

bool QSizeGrip_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::mouseReleaseEvent(mouseEvent);
}

bool QSizeGrip_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::moveEvent(moveEvent);
}

bool QSizeGrip_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_showEvent(void* self, QShowEvent* showEvent) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::showEvent(showEvent);
}

bool QSizeGrip_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_hideEvent(void* self, QHideEvent* hideEvent) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::hideEvent(hideEvent);
}

bool QSizeGrip_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSizeGrip_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::eventFilter(param1, param2);
}

bool QSizeGrip_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSizeGrip_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::event(param1);
}

bool QSizeGrip_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSizeGrip_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::devType();
}

bool QSizeGrip_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSizeGrip_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::minimumSizeHint());
}

bool QSizeGrip_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSizeGrip_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::heightForWidth(static_cast<int>(param1));
}

bool QSizeGrip_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSizeGrip_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::hasHeightForWidth();
}

bool QSizeGrip_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSizeGrip_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::paintEngine();
}

bool QSizeGrip_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::mouseDoubleClickEvent(event);
}

bool QSizeGrip_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::wheelEvent(event);
}

bool QSizeGrip_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::keyPressEvent(event);
}

bool QSizeGrip_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::keyReleaseEvent(event);
}

bool QSizeGrip_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::focusInEvent(event);
}

bool QSizeGrip_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::focusOutEvent(event);
}

bool QSizeGrip_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::enterEvent(event);
}

bool QSizeGrip_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::leaveEvent(event);
}

bool QSizeGrip_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::resizeEvent(event);
}

bool QSizeGrip_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::closeEvent(event);
}

bool QSizeGrip_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::contextMenuEvent(event);
}

bool QSizeGrip_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::tabletEvent(event);
}

bool QSizeGrip_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::actionEvent(event);
}

bool QSizeGrip_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::dragEnterEvent(event);
}

bool QSizeGrip_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::dragMoveEvent(event);
}

bool QSizeGrip_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::dragLeaveEvent(event);
}

bool QSizeGrip_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::dropEvent(event);
}

bool QSizeGrip_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSizeGrip_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QSizeGrip_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::changeEvent(param1);
}

bool QSizeGrip_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSizeGrip_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::metric(static_cast<MiqtVirtualQSizeGrip::PaintDeviceMetric>(param1));
}

bool QSizeGrip_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSizeGrip_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::initPainter(painter);
}

bool QSizeGrip_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSizeGrip_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::redirected(offset);
}

bool QSizeGrip_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSizeGrip_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::sharedPainter();
}

bool QSizeGrip_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::inputMethodEvent(param1);
}

bool QSizeGrip_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSizeGrip_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSizeGrip*>(self)->QSizeGrip::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSizeGrip_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSizeGrip_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::focusNextPrevChild(next);
}

bool QSizeGrip_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::timerEvent(event);
}

bool QSizeGrip_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::childEvent(event);
}

bool QSizeGrip_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::customEvent(event);
}

bool QSizeGrip_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSizeGrip_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::connectNotify(*signal);
}

bool QSizeGrip_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSizeGrip_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSizeGrip*>(self)->QSizeGrip::disconnectNotify(*signal);
}

void QSizeGrip_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSizeGrip_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSizeGrip_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSizeGrip_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSizeGrip_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSizeGrip_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSizeGrip_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSizeGrip_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSizeGrip_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSizeGrip_delete(QSizeGrip* self) {
	delete self;
}

