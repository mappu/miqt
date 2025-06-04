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
#include <QLCDNumber>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlcdnumber.h>
#include "gen_qlcdnumber.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLCDNumber_overflow(intptr_t);
QSize* miqt_exec_callback_QLCDNumber_sizeHint(const QLCDNumber*, intptr_t);
bool miqt_exec_callback_QLCDNumber_event(QLCDNumber*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_paintEvent(QLCDNumber*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLCDNumber_changeEvent(QLCDNumber*, intptr_t, QEvent*);
int miqt_exec_callback_QLCDNumber_devType(const QLCDNumber*, intptr_t);
void miqt_exec_callback_QLCDNumber_setVisible(QLCDNumber*, intptr_t, bool);
QSize* miqt_exec_callback_QLCDNumber_minimumSizeHint(const QLCDNumber*, intptr_t);
int miqt_exec_callback_QLCDNumber_heightForWidth(const QLCDNumber*, intptr_t, int);
bool miqt_exec_callback_QLCDNumber_hasHeightForWidth(const QLCDNumber*, intptr_t);
QPaintEngine* miqt_exec_callback_QLCDNumber_paintEngine(const QLCDNumber*, intptr_t);
void miqt_exec_callback_QLCDNumber_mousePressEvent(QLCDNumber*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_mouseReleaseEvent(QLCDNumber*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_mouseDoubleClickEvent(QLCDNumber*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_mouseMoveEvent(QLCDNumber*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_wheelEvent(QLCDNumber*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLCDNumber_keyPressEvent(QLCDNumber*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLCDNumber_keyReleaseEvent(QLCDNumber*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLCDNumber_focusInEvent(QLCDNumber*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLCDNumber_focusOutEvent(QLCDNumber*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLCDNumber_enterEvent(QLCDNumber*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_leaveEvent(QLCDNumber*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_moveEvent(QLCDNumber*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLCDNumber_resizeEvent(QLCDNumber*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLCDNumber_closeEvent(QLCDNumber*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLCDNumber_contextMenuEvent(QLCDNumber*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLCDNumber_tabletEvent(QLCDNumber*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLCDNumber_actionEvent(QLCDNumber*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLCDNumber_dragEnterEvent(QLCDNumber*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLCDNumber_dragMoveEvent(QLCDNumber*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLCDNumber_dragLeaveEvent(QLCDNumber*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLCDNumber_dropEvent(QLCDNumber*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLCDNumber_showEvent(QLCDNumber*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLCDNumber_hideEvent(QLCDNumber*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLCDNumber_nativeEvent(QLCDNumber*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QLCDNumber_metric(const QLCDNumber*, intptr_t, int);
void miqt_exec_callback_QLCDNumber_initPainter(const QLCDNumber*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLCDNumber_redirected(const QLCDNumber*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLCDNumber_sharedPainter(const QLCDNumber*, intptr_t);
void miqt_exec_callback_QLCDNumber_inputMethodEvent(QLCDNumber*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QLCDNumber_inputMethodQuery(const QLCDNumber*, intptr_t, int);
bool miqt_exec_callback_QLCDNumber_focusNextPrevChild(QLCDNumber*, intptr_t, bool);
bool miqt_exec_callback_QLCDNumber_eventFilter(QLCDNumber*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLCDNumber_timerEvent(QLCDNumber*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLCDNumber_childEvent(QLCDNumber*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLCDNumber_customEvent(QLCDNumber*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_connectNotify(QLCDNumber*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLCDNumber_disconnectNotify(QLCDNumber*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLCDNumber final : public QLCDNumber {
public:

	MiqtVirtualQLCDNumber(QWidget* parent): QLCDNumber(parent) {}
	MiqtVirtualQLCDNumber(): QLCDNumber() {}
	MiqtVirtualQLCDNumber(uint numDigits): QLCDNumber(numDigits) {}
	MiqtVirtualQLCDNumber(uint numDigits, QWidget* parent): QLCDNumber(numDigits, parent) {}

	virtual ~MiqtVirtualQLCDNumber() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QLCDNumber::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QLCDNumber_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QLCDNumber_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QLCDNumber::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QLCDNumber_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QLCDNumber_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QLCDNumber::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QLCDNumber_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QLCDNumber::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QLCDNumber_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QLCDNumber::devType();
		}

		int callback_return_value = miqt_exec_callback_QLCDNumber_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QLCDNumber_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QLCDNumber::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QLCDNumber_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QLCDNumber_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QLCDNumber::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QLCDNumber_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QLCDNumber_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QLCDNumber::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QLCDNumber_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLCDNumber_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QLCDNumber::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QLCDNumber_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QLCDNumber_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QLCDNumber::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QLCDNumber_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QLCDNumber_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QLCDNumber::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QLCDNumber::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QLCDNumber::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QLCDNumber::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QLCDNumber::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QLCDNumber::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QLCDNumber::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QLCDNumber::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QLCDNumber::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QLCDNumber::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QLCDNumber::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QLCDNumber::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QLCDNumber::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QLCDNumber::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QLCDNumber::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QLCDNumber::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QLCDNumber::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QLCDNumber::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QLCDNumber::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QLCDNumber::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QLCDNumber::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QLCDNumber::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QLCDNumber::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QLCDNumber::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QLCDNumber_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QLCDNumber_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QLCDNumber::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QLCDNumber_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLCDNumber_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QLCDNumber::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QLCDNumber_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QLCDNumber_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QLCDNumber::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QLCDNumber_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QLCDNumber_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QLCDNumber::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QLCDNumber_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QLCDNumber_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QLCDNumber::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QLCDNumber_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QLCDNumber::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QLCDNumber_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QLCDNumber_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QLCDNumber::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QLCDNumber_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QLCDNumber_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLCDNumber::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QLCDNumber_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QLCDNumber_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLCDNumber::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLCDNumber::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLCDNumber::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QLCDNumber_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QLCDNumber_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLCDNumber::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QLCDNumber_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QLCDNumber_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLCDNumber::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QLCDNumber_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QLCDNumber_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QLCDNumber_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QLCDNumber_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QLCDNumber_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QLCDNumber_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QLCDNumber_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QLCDNumber_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QLCDNumber_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QLCDNumber_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLCDNumber_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLCDNumber_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLCDNumber_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLCDNumber* QLCDNumber_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
	return new (std::nothrow) MiqtVirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
	return new (std::nothrow) MiqtVirtualQLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQLCDNumber(static_cast<uint>(numDigits), parent);
}

void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLCDNumber_metaObject(const QLCDNumber* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLCDNumber_metacast(QLCDNumber* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLCDNumber_tr(const char* s) {
	QString _ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_trUtf8(const char* s) {
	QString _ret = QLCDNumber::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLCDNumber_smallDecimalPoint(const QLCDNumber* self) {
	return self->smallDecimalPoint();
}

int QLCDNumber_digitCount(const QLCDNumber* self) {
	return self->digitCount();
}

void QLCDNumber_setDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_checkOverflow(const QLCDNumber* self, double num) {
	return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_checkOverflowWithNum(const QLCDNumber* self, int num) {
	return self->checkOverflow(static_cast<int>(num));
}

int QLCDNumber_mode(const QLCDNumber* self) {
	QLCDNumber::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QLCDNumber_setMode(QLCDNumber* self, int mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_segmentStyle(const QLCDNumber* self) {
	QLCDNumber::SegmentStyle _ret = self->segmentStyle();
	return static_cast<int>(_ret);
}

void QLCDNumber_setSegmentStyle(QLCDNumber* self, int segmentStyle) {
	self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_value(const QLCDNumber* self) {
	return self->value();
}

int QLCDNumber_intValue(const QLCDNumber* self) {
	return self->intValue();
}

QSize* QLCDNumber_sizeHint(const QLCDNumber* self) {
	return new QSize(self->sizeHint());
}

void QLCDNumber_display(QLCDNumber* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->display(str_QString);
}

void QLCDNumber_displayWithNum(QLCDNumber* self, int num) {
	self->display(static_cast<int>(num));
}

void QLCDNumber_display2(QLCDNumber* self, double num) {
	self->display(static_cast<double>(num));
}

void QLCDNumber_setHexMode(QLCDNumber* self) {
	self->setHexMode();
}

void QLCDNumber_setDecMode(QLCDNumber* self) {
	self->setDecMode();
}

void QLCDNumber_setOctMode(QLCDNumber* self) {
	self->setOctMode();
}

void QLCDNumber_setBinMode(QLCDNumber* self) {
	self->setBinMode();
}

void QLCDNumber_setSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
	self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_overflow(QLCDNumber* self) {
	self->overflow();
}

void QLCDNumber_connect_overflow(QLCDNumber* self, intptr_t slot) {
	QLCDNumber::connect(self, static_cast<void (QLCDNumber::*)()>(&QLCDNumber::overflow), self, [=]() {
		miqt_exec_callback_QLCDNumber_overflow(slot);
	});
}

struct miqt_string QLCDNumber_tr2(const char* s, const char* c) {
	QString _ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_tr3(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_trUtf82(const char* s, const char* c) {
	QString _ret = QLCDNumber::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLCDNumber_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QLCDNumber_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::sizeHint());
}

bool QLCDNumber_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QLCDNumber_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::event(e);
}

bool QLCDNumber_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::paintEvent(param1);
}

bool QLCDNumber_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::changeEvent(param1);
}

bool QLCDNumber_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QLCDNumber_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::devType();
}

bool QLCDNumber_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QLCDNumber_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::setVisible(visible);
}

bool QLCDNumber_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QLCDNumber_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::minimumSizeHint());
}

bool QLCDNumber_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QLCDNumber_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::heightForWidth(static_cast<int>(param1));
}

bool QLCDNumber_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QLCDNumber_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::hasHeightForWidth();
}

bool QLCDNumber_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QLCDNumber_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::paintEngine();
}

bool QLCDNumber_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::mousePressEvent(event);
}

bool QLCDNumber_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::mouseReleaseEvent(event);
}

bool QLCDNumber_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::mouseDoubleClickEvent(event);
}

bool QLCDNumber_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::mouseMoveEvent(event);
}

bool QLCDNumber_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::wheelEvent(event);
}

bool QLCDNumber_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::keyPressEvent(event);
}

bool QLCDNumber_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::keyReleaseEvent(event);
}

bool QLCDNumber_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::focusInEvent(event);
}

bool QLCDNumber_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::focusOutEvent(event);
}

bool QLCDNumber_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::enterEvent(event);
}

bool QLCDNumber_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::leaveEvent(event);
}

bool QLCDNumber_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::moveEvent(event);
}

bool QLCDNumber_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::resizeEvent(event);
}

bool QLCDNumber_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::closeEvent(event);
}

bool QLCDNumber_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::contextMenuEvent(event);
}

bool QLCDNumber_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::tabletEvent(event);
}

bool QLCDNumber_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::actionEvent(event);
}

bool QLCDNumber_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::dragEnterEvent(event);
}

bool QLCDNumber_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::dragMoveEvent(event);
}

bool QLCDNumber_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::dragLeaveEvent(event);
}

bool QLCDNumber_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::dropEvent(event);
}

bool QLCDNumber_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::showEvent(event);
}

bool QLCDNumber_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::hideEvent(event);
}

bool QLCDNumber_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QLCDNumber_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QLCDNumber_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QLCDNumber_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::metric(static_cast<MiqtVirtualQLCDNumber::PaintDeviceMetric>(param1));
}

bool QLCDNumber_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QLCDNumber_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::initPainter(painter);
}

bool QLCDNumber_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QLCDNumber_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::redirected(offset);
}

bool QLCDNumber_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QLCDNumber_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::sharedPainter();
}

bool QLCDNumber_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::inputMethodEvent(param1);
}

bool QLCDNumber_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QLCDNumber_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQLCDNumber*>(self)->QLCDNumber::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QLCDNumber_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QLCDNumber_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::focusNextPrevChild(next);
}

bool QLCDNumber_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLCDNumber_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::eventFilter(watched, event);
}

bool QLCDNumber_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::timerEvent(event);
}

bool QLCDNumber_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::childEvent(event);
}

bool QLCDNumber_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::customEvent(event);
}

bool QLCDNumber_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QLCDNumber_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::connectNotify(*signal);
}

bool QLCDNumber_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLCDNumber_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQLCDNumber*>(self)->QLCDNumber::disconnectNotify(*signal);
}

void QLCDNumber_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QLCDNumber_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QLCDNumber_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QLCDNumber_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QLCDNumber_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QLCDNumber_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QLCDNumber_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QLCDNumber_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QLCDNumber_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QLCDNumber_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QLCDNumber_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QLCDNumber_delete(QLCDNumber* self) {
	delete self;
}

