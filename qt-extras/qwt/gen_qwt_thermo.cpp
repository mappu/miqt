#include <QActionEvent>
#include <QBrush>
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
#include <qwt_thermo.h>
#include "gen_qwt_thermo.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QwtThermo_sizeHint(const QwtThermo*, intptr_t);
QSize* miqt_exec_callback_QwtThermo_minimumSizeHint(const QwtThermo*, intptr_t);
void miqt_exec_callback_QwtThermo_setValue(QwtThermo*, intptr_t, double);
void miqt_exec_callback_QwtThermo_drawLiquid(const QwtThermo*, intptr_t, QPainter*, QRect*);
void miqt_exec_callback_QwtThermo_scaleChange(QwtThermo*, intptr_t);
void miqt_exec_callback_QwtThermo_paintEvent(QwtThermo*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtThermo_resizeEvent(QwtThermo*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtThermo_changeEvent(QwtThermo*, intptr_t, QEvent*);
int miqt_exec_callback_QwtThermo_devType(const QwtThermo*, intptr_t);
void miqt_exec_callback_QwtThermo_setVisible(QwtThermo*, intptr_t, bool);
int miqt_exec_callback_QwtThermo_heightForWidth(const QwtThermo*, intptr_t, int);
bool miqt_exec_callback_QwtThermo_hasHeightForWidth(const QwtThermo*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtThermo_paintEngine(const QwtThermo*, intptr_t);
bool miqt_exec_callback_QwtThermo_event(QwtThermo*, intptr_t, QEvent*);
void miqt_exec_callback_QwtThermo_mousePressEvent(QwtThermo*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtThermo_mouseReleaseEvent(QwtThermo*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtThermo_mouseDoubleClickEvent(QwtThermo*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtThermo_mouseMoveEvent(QwtThermo*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtThermo_wheelEvent(QwtThermo*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtThermo_keyPressEvent(QwtThermo*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtThermo_keyReleaseEvent(QwtThermo*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtThermo_focusInEvent(QwtThermo*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtThermo_focusOutEvent(QwtThermo*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtThermo_enterEvent(QwtThermo*, intptr_t, QEvent*);
void miqt_exec_callback_QwtThermo_leaveEvent(QwtThermo*, intptr_t, QEvent*);
void miqt_exec_callback_QwtThermo_moveEvent(QwtThermo*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtThermo_closeEvent(QwtThermo*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtThermo_contextMenuEvent(QwtThermo*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtThermo_tabletEvent(QwtThermo*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtThermo_actionEvent(QwtThermo*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtThermo_dragEnterEvent(QwtThermo*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtThermo_dragMoveEvent(QwtThermo*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtThermo_dragLeaveEvent(QwtThermo*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtThermo_dropEvent(QwtThermo*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtThermo_showEvent(QwtThermo*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtThermo_hideEvent(QwtThermo*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtThermo_nativeEvent(QwtThermo*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtThermo_metric(const QwtThermo*, intptr_t, int);
void miqt_exec_callback_QwtThermo_initPainter(const QwtThermo*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtThermo_redirected(const QwtThermo*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtThermo_sharedPainter(const QwtThermo*, intptr_t);
void miqt_exec_callback_QwtThermo_inputMethodEvent(QwtThermo*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtThermo_inputMethodQuery(const QwtThermo*, intptr_t, int);
bool miqt_exec_callback_QwtThermo_focusNextPrevChild(QwtThermo*, intptr_t, bool);
bool miqt_exec_callback_QwtThermo_eventFilter(QwtThermo*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtThermo_timerEvent(QwtThermo*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtThermo_childEvent(QwtThermo*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtThermo_customEvent(QwtThermo*, intptr_t, QEvent*);
void miqt_exec_callback_QwtThermo_connectNotify(QwtThermo*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtThermo_disconnectNotify(QwtThermo*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtThermo final : public QwtThermo {
public:

	MiqtVirtualQwtThermo(QWidget* parent): QwtThermo(parent) {}
	MiqtVirtualQwtThermo(): QwtThermo() {}

	virtual ~MiqtVirtualQwtThermo() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtThermo::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtThermo_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtThermo_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtThermo::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtThermo_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtThermo_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void setValue(double value) override {
		if (handle__setValue == 0) {
			QwtThermo::setValue(value);
			return;
		}

		double sigval1 = value;
		miqt_exec_callback_QwtThermo_setValue(this, handle__setValue, sigval1);

	}

	friend void QwtThermo_virtualbase_setValue(void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLiquid = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLiquid(QPainter* param1, const QRect& param2) const override {
		if (handle__drawLiquid == 0) {
			QwtThermo::drawLiquid(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRect& param2_ret = param2;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&param2_ret);
		miqt_exec_callback_QwtThermo_drawLiquid(this, handle__drawLiquid, sigval1, sigval2);

	}

	friend void QwtThermo_virtualbase_drawLiquid(const void* self, QPainter* param1, QRect* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (handle__scaleChange == 0) {
			QwtThermo::scaleChange();
			return;
		}

		miqt_exec_callback_QwtThermo_scaleChange(this, handle__scaleChange);

	}

	friend void QwtThermo_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtThermo::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtThermo_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QwtThermo::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtThermo_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtThermo::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtThermo_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtThermo::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtThermo_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtThermo_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtThermo::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtThermo_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtThermo_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtThermo::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtThermo_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtThermo_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtThermo::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtThermo_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtThermo_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtThermo::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtThermo_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtThermo_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtThermo::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtThermo_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtThermo_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtThermo::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtThermo::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtThermo::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtThermo::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtThermo::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtThermo::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtThermo::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtThermo::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtThermo::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtThermo::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtThermo::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtThermo::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtThermo::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtThermo::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtThermo::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtThermo::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtThermo::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtThermo::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtThermo::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtThermo::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtThermo::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtThermo::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtThermo::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtThermo_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtThermo_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtThermo::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtThermo_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtThermo_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtThermo::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtThermo_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtThermo_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtThermo::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtThermo_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtThermo_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtThermo::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtThermo_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtThermo_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtThermo::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtThermo_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtThermo::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtThermo_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtThermo_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtThermo::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtThermo_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtThermo_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtThermo::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtThermo_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtThermo_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtThermo::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtThermo::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtThermo::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtThermo_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtThermo_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtThermo::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtThermo_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtThermo_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtThermo::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtThermo_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtThermo_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QwtScaleDraw* QwtThermo_protectedbase_scaleDraw2(bool* _dynamic_cast_ok, void* self);
	friend QRect* QwtThermo_protectedbase_pipeRect(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QwtThermo_protectedbase_fillRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QRect* QwtThermo_protectedbase_alarmRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend void QwtThermo_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtThermo_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtThermo_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtThermo_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtThermo_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtThermo_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtThermo_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtThermo_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtThermo_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtThermo_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtThermo_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtThermo_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtThermo* QwtThermo_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtThermo(parent);
}

QwtThermo* QwtThermo_new2() {
	return new (std::nothrow) MiqtVirtualQwtThermo();
}

void QwtThermo_virtbase(QwtThermo* src, QwtAbstractScale** outptr_QwtAbstractScale) {
	*outptr_QwtAbstractScale = static_cast<QwtAbstractScale*>(src);
}

QMetaObject* QwtThermo_metaObject(const QwtThermo* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtThermo_metacast(QwtThermo* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtThermo_tr(const char* s) {
	QString _ret = QwtThermo::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtThermo_trUtf8(const char* s) {
	QString _ret = QwtThermo::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtThermo_setOrientation(QwtThermo* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QwtThermo_orientation(const QwtThermo* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QwtThermo_setScalePosition(QwtThermo* self, int scalePosition) {
	self->setScalePosition(static_cast<QwtThermo::ScalePosition>(scalePosition));
}

int QwtThermo_scalePosition(const QwtThermo* self) {
	QwtThermo::ScalePosition _ret = self->scalePosition();
	return static_cast<int>(_ret);
}

void QwtThermo_setSpacing(QwtThermo* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtThermo_spacing(const QwtThermo* self) {
	return self->spacing();
}

void QwtThermo_setBorderWidth(QwtThermo* self, int borderWidth) {
	self->setBorderWidth(static_cast<int>(borderWidth));
}

int QwtThermo_borderWidth(const QwtThermo* self) {
	return self->borderWidth();
}

void QwtThermo_setOriginMode(QwtThermo* self, int originMode) {
	self->setOriginMode(static_cast<QwtThermo::OriginMode>(originMode));
}

int QwtThermo_originMode(const QwtThermo* self) {
	QwtThermo::OriginMode _ret = self->originMode();
	return static_cast<int>(_ret);
}

void QwtThermo_setOrigin(QwtThermo* self, double origin) {
	self->setOrigin(static_cast<double>(origin));
}

double QwtThermo_origin(const QwtThermo* self) {
	return self->origin();
}

void QwtThermo_setFillBrush(QwtThermo* self, QBrush* fillBrush) {
	self->setFillBrush(*fillBrush);
}

QBrush* QwtThermo_fillBrush(const QwtThermo* self) {
	return new QBrush(self->fillBrush());
}

void QwtThermo_setAlarmBrush(QwtThermo* self, QBrush* alarmBrush) {
	self->setAlarmBrush(*alarmBrush);
}

QBrush* QwtThermo_alarmBrush(const QwtThermo* self) {
	return new QBrush(self->alarmBrush());
}

void QwtThermo_setAlarmLevel(QwtThermo* self, double alarmLevel) {
	self->setAlarmLevel(static_cast<double>(alarmLevel));
}

double QwtThermo_alarmLevel(const QwtThermo* self) {
	return self->alarmLevel();
}

void QwtThermo_setAlarmEnabled(QwtThermo* self, bool alarmEnabled) {
	self->setAlarmEnabled(alarmEnabled);
}

bool QwtThermo_alarmEnabled(const QwtThermo* self) {
	return self->alarmEnabled();
}

void QwtThermo_setColorMap(QwtThermo* self, QwtColorMap* colorMap) {
	self->setColorMap(colorMap);
}

QwtColorMap* QwtThermo_colorMap(QwtThermo* self) {
	return self->colorMap();
}

QwtColorMap* QwtThermo_colorMap2(const QwtThermo* self) {
	return (QwtColorMap*) self->colorMap();
}

void QwtThermo_setPipeWidth(QwtThermo* self, int pipeWidth) {
	self->setPipeWidth(static_cast<int>(pipeWidth));
}

int QwtThermo_pipeWidth(const QwtThermo* self) {
	return self->pipeWidth();
}

void QwtThermo_setRangeFlags(QwtThermo* self, int rangeFlags) {
	self->setRangeFlags(static_cast<QwtInterval::BorderFlags>(rangeFlags));
}

int QwtThermo_rangeFlags(const QwtThermo* self) {
	QwtInterval::BorderFlags _ret = self->rangeFlags();
	return static_cast<int>(_ret);
}

double QwtThermo_value(const QwtThermo* self) {
	return self->value();
}

QSize* QwtThermo_sizeHint(const QwtThermo* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtThermo_minimumSizeHint(const QwtThermo* self) {
	return new QSize(self->minimumSizeHint());
}

void QwtThermo_setScaleDraw(QwtThermo* self, QwtScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtScaleDraw* QwtThermo_scaleDraw(const QwtThermo* self) {
	return (QwtScaleDraw*) self->scaleDraw();
}

void QwtThermo_setValue(QwtThermo* self, double value) {
	self->setValue(static_cast<double>(value));
}

struct miqt_string QwtThermo_tr2(const char* s, const char* c) {
	QString _ret = QwtThermo::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtThermo_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtThermo::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtThermo_trUtf82(const char* s, const char* c) {
	QString _ret = QwtThermo::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtThermo_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtThermo::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtThermo_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtThermo_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::sizeHint());
}

bool QwtThermo_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtThermo_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::minimumSizeHint());
}

bool QwtThermo_override_virtual_setValue(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setValue = slot;
	return true;
}

void QwtThermo_virtualbase_setValue(void* self, double value) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::setValue(static_cast<double>(value));
}

bool QwtThermo_override_virtual_drawLiquid(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLiquid = slot;
	return true;
}

void QwtThermo_virtualbase_drawLiquid(const void* self, QPainter* param1, QRect* param2) {
	static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::drawLiquid(param1, *param2);
}

bool QwtThermo_override_virtual_scaleChange(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = slot;
	return true;
}

void QwtThermo_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::scaleChange();
}

bool QwtThermo_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtThermo_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::paintEvent(param1);
}

bool QwtThermo_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtThermo_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::resizeEvent(param1);
}

bool QwtThermo_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtThermo_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::changeEvent(param1);
}

bool QwtThermo_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtThermo_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::devType();
}

bool QwtThermo_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtThermo_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::setVisible(visible);
}

bool QwtThermo_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtThermo_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::heightForWidth(static_cast<int>(param1));
}

bool QwtThermo_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtThermo_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::hasHeightForWidth();
}

bool QwtThermo_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtThermo_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::paintEngine();
}

bool QwtThermo_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtThermo_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::event(event);
}

bool QwtThermo_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtThermo_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::mousePressEvent(event);
}

bool QwtThermo_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtThermo_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::mouseReleaseEvent(event);
}

bool QwtThermo_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtThermo_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::mouseDoubleClickEvent(event);
}

bool QwtThermo_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtThermo_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::mouseMoveEvent(event);
}

bool QwtThermo_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtThermo_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::wheelEvent(event);
}

bool QwtThermo_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtThermo_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::keyPressEvent(event);
}

bool QwtThermo_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtThermo_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::keyReleaseEvent(event);
}

bool QwtThermo_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtThermo_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::focusInEvent(event);
}

bool QwtThermo_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtThermo_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::focusOutEvent(event);
}

bool QwtThermo_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtThermo_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::enterEvent(event);
}

bool QwtThermo_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtThermo_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::leaveEvent(event);
}

bool QwtThermo_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtThermo_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::moveEvent(event);
}

bool QwtThermo_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtThermo_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::closeEvent(event);
}

bool QwtThermo_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtThermo_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::contextMenuEvent(event);
}

bool QwtThermo_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtThermo_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::tabletEvent(event);
}

bool QwtThermo_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtThermo_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::actionEvent(event);
}

bool QwtThermo_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtThermo_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::dragEnterEvent(event);
}

bool QwtThermo_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtThermo_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::dragMoveEvent(event);
}

bool QwtThermo_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtThermo_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::dragLeaveEvent(event);
}

bool QwtThermo_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtThermo_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::dropEvent(event);
}

bool QwtThermo_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtThermo_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::showEvent(event);
}

bool QwtThermo_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtThermo_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::hideEvent(event);
}

bool QwtThermo_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtThermo_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtThermo_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtThermo_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::metric(static_cast<MiqtVirtualQwtThermo::PaintDeviceMetric>(param1));
}

bool QwtThermo_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtThermo_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::initPainter(painter);
}

bool QwtThermo_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtThermo_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::redirected(offset);
}

bool QwtThermo_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtThermo_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::sharedPainter();
}

bool QwtThermo_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtThermo_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::inputMethodEvent(param1);
}

bool QwtThermo_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtThermo_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtThermo*>(self)->QwtThermo::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtThermo_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtThermo_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::focusNextPrevChild(next);
}

bool QwtThermo_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtThermo_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::eventFilter(watched, event);
}

bool QwtThermo_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtThermo_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::timerEvent(event);
}

bool QwtThermo_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtThermo_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::childEvent(event);
}

bool QwtThermo_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtThermo_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::customEvent(event);
}

bool QwtThermo_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtThermo_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::connectNotify(*signal);
}

bool QwtThermo_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtThermo_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtThermo*>(self)->QwtThermo::disconnectNotify(*signal);
}

QwtScaleDraw* QwtThermo_protectedbase_scaleDraw2(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->scaleDraw();
}

QRect* QwtThermo_protectedbase_pipeRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->pipeRect());
}

QRect* QwtThermo_protectedbase_fillRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->fillRect(*param1));
}

QRect* QwtThermo_protectedbase_alarmRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->alarmRect(*param1));
}

void QwtThermo_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtThermo_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtThermo_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtThermo_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtThermo_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtThermo_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtThermo_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtThermo_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtThermo_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtThermo_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtThermo_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtThermo_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtThermo* self_cast = dynamic_cast<MiqtVirtualQwtThermo*>( (QwtThermo*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtThermo_delete(QwtThermo* self) {
	delete self;
}

