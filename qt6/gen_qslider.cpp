#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
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
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qslider.h>
#include "gen_qslider.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSlider_sizeHint(const QSlider*, intptr_t);
QSize* miqt_exec_callback_QSlider_minimumSizeHint(const QSlider*, intptr_t);
bool miqt_exec_callback_QSlider_event(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_paintEvent(QSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSlider_mousePressEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_mouseReleaseEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_mouseMoveEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_initStyleOption(const QSlider*, intptr_t, QStyleOptionSlider*);
void miqt_exec_callback_QSlider_sliderChange(QSlider*, intptr_t, int);
void miqt_exec_callback_QSlider_keyPressEvent(QSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSlider_timerEvent(QSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSlider_wheelEvent(QSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSlider_changeEvent(QSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QSlider_devType(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_setVisible(QSlider*, intptr_t, bool);
int miqt_exec_callback_QSlider_heightForWidth(const QSlider*, intptr_t, int);
bool miqt_exec_callback_QSlider_hasHeightForWidth(const QSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QSlider_paintEngine(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_mouseDoubleClickEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_keyReleaseEvent(QSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSlider_focusInEvent(QSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSlider_focusOutEvent(QSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSlider_enterEvent(QSlider*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QSlider_leaveEvent(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_moveEvent(QSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSlider_resizeEvent(QSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSlider_closeEvent(QSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSlider_contextMenuEvent(QSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSlider_tabletEvent(QSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSlider_actionEvent(QSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSlider_dragEnterEvent(QSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSlider_dragMoveEvent(QSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSlider_dragLeaveEvent(QSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSlider_dropEvent(QSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSlider_showEvent(QSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSlider_hideEvent(QSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSlider_nativeEvent(QSlider*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QSlider_metric(const QSlider*, intptr_t, int);
void miqt_exec_callback_QSlider_initPainter(const QSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSlider_redirected(const QSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSlider_sharedPainter(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_inputMethodEvent(QSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSlider_inputMethodQuery(const QSlider*, intptr_t, int);
bool miqt_exec_callback_QSlider_focusNextPrevChild(QSlider*, intptr_t, bool);
bool miqt_exec_callback_QSlider_eventFilter(QSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSlider_childEvent(QSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSlider_customEvent(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_connectNotify(QSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSlider_disconnectNotify(QSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSlider final : public QSlider {
public:

	MiqtVirtualQSlider(QWidget* parent): QSlider(parent) {}
	MiqtVirtualQSlider(): QSlider() {}
	MiqtVirtualQSlider(Qt::Orientation orientation): QSlider(orientation) {}
	MiqtVirtualQSlider(Qt::Orientation orientation, QWidget* parent): QSlider(orientation, parent) {}

	virtual ~MiqtVirtualQSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSlider::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSlider_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSlider_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSlider::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSlider_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSlider_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSlider::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSlider_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSlider_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* ev) override {
		if (handle__paintEvent == 0) {
			QSlider::paintEvent(ev);
			return;
		}

		QPaintEvent* sigval1 = ev;
		miqt_exec_callback_QSlider_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSlider_virtualbase_paintEvent(void* self, QPaintEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__mousePressEvent == 0) {
			QSlider::mousePressEvent(ev);
			return;
		}

		QMouseEvent* sigval1 = ev;
		miqt_exec_callback_QSlider_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__mouseReleaseEvent == 0) {
			QSlider::mouseReleaseEvent(ev);
			return;
		}

		QMouseEvent* sigval1 = ev;
		miqt_exec_callback_QSlider_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__mouseMoveEvent == 0) {
			QSlider::mouseMoveEvent(ev);
			return;
		}

		QMouseEvent* sigval1 = ev;
		miqt_exec_callback_QSlider_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__initStyleOption == 0) {
			QSlider::initStyleOption(option);
			return;
		}

		QStyleOptionSlider* sigval1 = option;
		miqt_exec_callback_QSlider_initStyleOption(this, handle__initStyleOption, sigval1);

	}

	friend void QSlider_virtualbase_initStyleOption(const void* self, QStyleOptionSlider* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__sliderChange == 0) {
			QSlider::sliderChange(change);
			return;
		}

		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		miqt_exec_callback_QSlider_sliderChange(this, handle__sliderChange, sigval1);

	}

	friend void QSlider_virtualbase_sliderChange(void* self, int change);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QSlider::keyPressEvent(ev);
			return;
		}

		QKeyEvent* sigval1 = ev;
		miqt_exec_callback_QSlider_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QSlider::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QSlider_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QSlider::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QSlider_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QSlider::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QSlider_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSlider_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSlider::devType();
		}

		int callback_return_value = miqt_exec_callback_QSlider_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSlider_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSlider::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSlider_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSlider_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSlider::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSlider_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSlider_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSlider::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSlider_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSlider_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSlider::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSlider_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSlider_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSlider::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSlider_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSlider::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSlider_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSlider::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSlider_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSlider::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSlider_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QSlider::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QSlider_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSlider_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSlider::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSlider_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSlider_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSlider::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QSlider_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QSlider::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QSlider_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSlider::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSlider_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSlider::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSlider_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSlider::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSlider_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSlider::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSlider_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSlider_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSlider::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSlider_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSlider::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSlider_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSlider::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSlider_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSlider::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSlider_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSlider_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSlider::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QSlider_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSlider_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSlider::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QSlider_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSlider_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QSlider::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);
		bool callback_return_value = miqt_exec_callback_QSlider_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSlider::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSlider_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSlider_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSlider::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSlider_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSlider_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSlider::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSlider_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSlider_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSlider::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSlider_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSlider_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSlider::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSlider_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSlider::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSlider_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSlider_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSlider::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSlider_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSlider_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSlider::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSlider_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSlider::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSlider_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSlider_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSlider::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSlider_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSlider_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSlider::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSlider_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSlider::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSlider_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
	friend int QSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
	friend void QSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSlider* QSlider_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSlider(parent);
}

QSlider* QSlider_new2() {
	return new (std::nothrow) MiqtVirtualQSlider();
}

QSlider* QSlider_new3(int orientation) {
	return new (std::nothrow) MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation), parent);
}

void QSlider_virtbase(QSlider* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QSlider_metaObject(const QSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSlider_metacast(QSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSlider_tr(const char* s) {
	QString _ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSlider_sizeHint(const QSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QSlider_minimumSizeHint(const QSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QSlider_setTickPosition(QSlider* self, int position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_tickPosition(const QSlider* self) {
	QSlider::TickPosition _ret = self->tickPosition();
	return static_cast<int>(_ret);
}

void QSlider_setTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_tickInterval(const QSlider* self) {
	return self->tickInterval();
}

bool QSlider_event(QSlider* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QSlider_tr2(const char* s, const char* c) {
	QString _ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_tr3(const char* s, const char* c, int n) {
	QString _ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSlider_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSlider_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSlider*>(self)->QSlider::sizeHint());
}

bool QSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSlider_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSlider*>(self)->QSlider::minimumSizeHint());
}

bool QSlider_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSlider_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSlider*>(self)->QSlider::event(event);
}

bool QSlider_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSlider_virtualbase_paintEvent(void* self, QPaintEvent* ev) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::paintEvent(ev);
}

bool QSlider_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* ev) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::mousePressEvent(ev);
}

bool QSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::mouseReleaseEvent(ev);
}

bool QSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::mouseMoveEvent(ev);
}

bool QSlider_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = slot;
	return true;
}

void QSlider_virtualbase_initStyleOption(const void* self, QStyleOptionSlider* option) {
	static_cast<const MiqtVirtualQSlider*>(self)->QSlider::initStyleOption(option);
}

bool QSlider_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = slot;
	return true;
}

void QSlider_virtualbase_sliderChange(void* self, int change) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::sliderChange(static_cast<MiqtVirtualQSlider::SliderChange>(change));
}

bool QSlider_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::keyPressEvent(ev);
}

bool QSlider_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::timerEvent(param1);
}

bool QSlider_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::wheelEvent(e);
}

bool QSlider_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSlider_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::changeEvent(e);
}

bool QSlider_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSlider_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::devType();
}

bool QSlider_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSlider_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::setVisible(visible);
}

bool QSlider_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSlider_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::heightForWidth(static_cast<int>(param1));
}

bool QSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSlider_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::hasHeightForWidth();
}

bool QSlider_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSlider_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::paintEngine();
}

bool QSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::mouseDoubleClickEvent(event);
}

bool QSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::keyReleaseEvent(event);
}

bool QSlider_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::focusInEvent(event);
}

bool QSlider_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::focusOutEvent(event);
}

bool QSlider_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSlider_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::enterEvent(event);
}

bool QSlider_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSlider_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::leaveEvent(event);
}

bool QSlider_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSlider_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::moveEvent(event);
}

bool QSlider_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::resizeEvent(event);
}

bool QSlider_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSlider_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::closeEvent(event);
}

bool QSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::contextMenuEvent(event);
}

bool QSlider_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::tabletEvent(event);
}

bool QSlider_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSlider_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::actionEvent(event);
}

bool QSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::dragEnterEvent(event);
}

bool QSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::dragMoveEvent(event);
}

bool QSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::dragLeaveEvent(event);
}

bool QSlider_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSlider_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::dropEvent(event);
}

bool QSlider_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSlider_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::showEvent(event);
}

bool QSlider_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSlider_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::hideEvent(event);
}

bool QSlider_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSlider*>(self)->QSlider::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QSlider_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSlider_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::metric(static_cast<MiqtVirtualQSlider::PaintDeviceMetric>(param1));
}

bool QSlider_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSlider_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSlider*>(self)->QSlider::initPainter(painter);
}

bool QSlider_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSlider_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::redirected(offset);
}

bool QSlider_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSlider_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSlider*>(self)->QSlider::sharedPainter();
}

bool QSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::inputMethodEvent(param1);
}

bool QSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSlider_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSlider*>(self)->QSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSlider_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSlider*>(self)->QSlider::focusNextPrevChild(next);
}

bool QSlider_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSlider*>(self)->QSlider::eventFilter(watched, event);
}

bool QSlider_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSlider_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::childEvent(event);
}

bool QSlider_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSlider_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::customEvent(event);
}

bool QSlider_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::connectNotify(*signal);
}

bool QSlider_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSlider*>(self)->QSlider::disconnectNotify(*signal);
}

void QSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setRepeatAction(static_cast<MiqtVirtualQSlider::SliderAction>(action));
}

int QSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQSlider::SliderAction _ret = self_cast->repeatAction();
	return static_cast<int>(_ret);
}

void QSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSlider_delete(QSlider* self) {
	delete self;
}

