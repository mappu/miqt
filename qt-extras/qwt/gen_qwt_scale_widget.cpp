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
#include <QFont>
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
#include <qwt_scale_widget.h>
#include "gen_qwt_scale_widget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtScaleWidget_scaleDivChanged(intptr_t);
QSize* miqt_exec_callback_QwtScaleWidget_sizeHint(const QwtScaleWidget*, intptr_t);
QSize* miqt_exec_callback_QwtScaleWidget_minimumSizeHint(const QwtScaleWidget*, intptr_t);
void miqt_exec_callback_QwtScaleWidget_paintEvent(QwtScaleWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtScaleWidget_resizeEvent(QwtScaleWidget*, intptr_t, QResizeEvent*);
int miqt_exec_callback_QwtScaleWidget_devType(const QwtScaleWidget*, intptr_t);
void miqt_exec_callback_QwtScaleWidget_setVisible(QwtScaleWidget*, intptr_t, bool);
int miqt_exec_callback_QwtScaleWidget_heightForWidth(const QwtScaleWidget*, intptr_t, int);
bool miqt_exec_callback_QwtScaleWidget_hasHeightForWidth(const QwtScaleWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtScaleWidget_paintEngine(const QwtScaleWidget*, intptr_t);
bool miqt_exec_callback_QwtScaleWidget_event(QwtScaleWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QwtScaleWidget_mousePressEvent(QwtScaleWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtScaleWidget_mouseReleaseEvent(QwtScaleWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtScaleWidget_mouseDoubleClickEvent(QwtScaleWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtScaleWidget_mouseMoveEvent(QwtScaleWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtScaleWidget_wheelEvent(QwtScaleWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtScaleWidget_keyPressEvent(QwtScaleWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtScaleWidget_keyReleaseEvent(QwtScaleWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtScaleWidget_focusInEvent(QwtScaleWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtScaleWidget_focusOutEvent(QwtScaleWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtScaleWidget_enterEvent(QwtScaleWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QwtScaleWidget_leaveEvent(QwtScaleWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QwtScaleWidget_moveEvent(QwtScaleWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtScaleWidget_closeEvent(QwtScaleWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtScaleWidget_contextMenuEvent(QwtScaleWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtScaleWidget_tabletEvent(QwtScaleWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtScaleWidget_actionEvent(QwtScaleWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtScaleWidget_dragEnterEvent(QwtScaleWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtScaleWidget_dragMoveEvent(QwtScaleWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtScaleWidget_dragLeaveEvent(QwtScaleWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtScaleWidget_dropEvent(QwtScaleWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtScaleWidget_showEvent(QwtScaleWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtScaleWidget_hideEvent(QwtScaleWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtScaleWidget_nativeEvent(QwtScaleWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtScaleWidget_changeEvent(QwtScaleWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QwtScaleWidget_metric(const QwtScaleWidget*, intptr_t, int);
void miqt_exec_callback_QwtScaleWidget_initPainter(const QwtScaleWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtScaleWidget_redirected(const QwtScaleWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtScaleWidget_sharedPainter(const QwtScaleWidget*, intptr_t);
void miqt_exec_callback_QwtScaleWidget_inputMethodEvent(QwtScaleWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtScaleWidget_inputMethodQuery(const QwtScaleWidget*, intptr_t, int);
bool miqt_exec_callback_QwtScaleWidget_focusNextPrevChild(QwtScaleWidget*, intptr_t, bool);
bool miqt_exec_callback_QwtScaleWidget_eventFilter(QwtScaleWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtScaleWidget_timerEvent(QwtScaleWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtScaleWidget_childEvent(QwtScaleWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtScaleWidget_customEvent(QwtScaleWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QwtScaleWidget_connectNotify(QwtScaleWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtScaleWidget_disconnectNotify(QwtScaleWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtScaleWidget final : public QwtScaleWidget {
public:

	MiqtVirtualQwtScaleWidget(QWidget* parent): QwtScaleWidget(parent) {}
	MiqtVirtualQwtScaleWidget(): QwtScaleWidget() {}
	MiqtVirtualQwtScaleWidget(QwtScaleDraw::Alignment param1): QwtScaleWidget(param1) {}
	MiqtVirtualQwtScaleWidget(QwtScaleDraw::Alignment param1, QWidget* parent): QwtScaleWidget(param1, parent) {}

	virtual ~MiqtVirtualQwtScaleWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtScaleWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtScaleWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtScaleWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtScaleWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtScaleWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtScaleWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtScaleWidget::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtScaleWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QwtScaleWidget::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtScaleWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtScaleWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtScaleWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtScaleWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtScaleWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtScaleWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtScaleWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtScaleWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtScaleWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtScaleWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtScaleWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtScaleWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtScaleWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtScaleWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtScaleWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtScaleWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtScaleWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtScaleWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtScaleWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtScaleWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtScaleWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtScaleWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtScaleWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtScaleWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtScaleWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtScaleWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtScaleWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtScaleWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtScaleWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtScaleWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtScaleWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtScaleWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtScaleWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtScaleWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtScaleWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtScaleWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtScaleWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtScaleWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtScaleWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtScaleWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtScaleWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtScaleWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtScaleWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtScaleWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtScaleWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtScaleWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtScaleWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtScaleWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtScaleWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtScaleWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtScaleWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtScaleWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtScaleWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtScaleWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtScaleWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtScaleWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtScaleWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtScaleWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtScaleWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtScaleWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtScaleWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtScaleWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtScaleWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtScaleWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtScaleWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtScaleWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtScaleWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtScaleWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtScaleWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtScaleWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtScaleWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtScaleWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtScaleWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtScaleWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtScaleWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtScaleWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtScaleWidget_protectedbase_draw(bool* _dynamic_cast_ok, const void* self, QPainter* param1);
	friend void QwtScaleWidget_protectedbase_scaleChange(bool* _dynamic_cast_ok, void* self);
	friend void QwtScaleWidget_protectedbase_layoutScale(bool* _dynamic_cast_ok, void* self);
	friend void QwtScaleWidget_protectedbase_layoutScaleWithUpdateGeometry(bool* _dynamic_cast_ok, void* self, bool update_geometry);
	friend void QwtScaleWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtScaleWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtScaleWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtScaleWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtScaleWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtScaleWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtScaleWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtScaleWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtScaleWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtScaleWidget* QwtScaleWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtScaleWidget(parent);
}

QwtScaleWidget* QwtScaleWidget_new2() {
	return new (std::nothrow) MiqtVirtualQwtScaleWidget();
}

QwtScaleWidget* QwtScaleWidget_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtScaleWidget(static_cast<QwtScaleDraw::Alignment>(param1));
}

QwtScaleWidget* QwtScaleWidget_new4(int param1, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtScaleWidget(static_cast<QwtScaleDraw::Alignment>(param1), parent);
}

void QwtScaleWidget_virtbase(QwtScaleWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QwtScaleWidget_metaObject(const QwtScaleWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtScaleWidget_metacast(QwtScaleWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtScaleWidget_tr(const char* s) {
	QString _ret = QwtScaleWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtScaleWidget_trUtf8(const char* s) {
	QString _ret = QwtScaleWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtScaleWidget_scaleDivChanged(QwtScaleWidget* self) {
	self->scaleDivChanged();
}

void QwtScaleWidget_connect_scaleDivChanged(QwtScaleWidget* self, intptr_t slot) {
	QwtScaleWidget::connect(self, static_cast<void (QwtScaleWidget::*)()>(&QwtScaleWidget::scaleDivChanged), self, [=]() {
		miqt_exec_callback_QwtScaleWidget_scaleDivChanged(slot);
	});
}

void QwtScaleWidget_setTitle(QwtScaleWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QwtScaleWidget_setTitleWithTitle(QwtScaleWidget* self, QwtText* title) {
	self->setTitle(*title);
}

QwtText* QwtScaleWidget_title(const QwtScaleWidget* self) {
	return new QwtText(self->title());
}

void QwtScaleWidget_setLayoutFlag(QwtScaleWidget* self, int param1, bool on) {
	self->setLayoutFlag(static_cast<QwtScaleWidget::LayoutFlag>(param1), on);
}

bool QwtScaleWidget_testLayoutFlag(const QwtScaleWidget* self, int param1) {
	return self->testLayoutFlag(static_cast<QwtScaleWidget::LayoutFlag>(param1));
}

void QwtScaleWidget_setBorderDist(QwtScaleWidget* self, int dist1, int dist2) {
	self->setBorderDist(static_cast<int>(dist1), static_cast<int>(dist2));
}

int QwtScaleWidget_startBorderDist(const QwtScaleWidget* self) {
	return self->startBorderDist();
}

int QwtScaleWidget_endBorderDist(const QwtScaleWidget* self) {
	return self->endBorderDist();
}

void QwtScaleWidget_getBorderDistHint(const QwtScaleWidget* self, int* start, int* end) {
	self->getBorderDistHint(static_cast<int&>(*start), static_cast<int&>(*end));
}

void QwtScaleWidget_getMinBorderDist(const QwtScaleWidget* self, int* start, int* end) {
	self->getMinBorderDist(static_cast<int&>(*start), static_cast<int&>(*end));
}

void QwtScaleWidget_setMinBorderDist(QwtScaleWidget* self, int start, int end) {
	self->setMinBorderDist(static_cast<int>(start), static_cast<int>(end));
}

void QwtScaleWidget_setMargin(QwtScaleWidget* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QwtScaleWidget_margin(const QwtScaleWidget* self) {
	return self->margin();
}

void QwtScaleWidget_setSpacing(QwtScaleWidget* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtScaleWidget_spacing(const QwtScaleWidget* self) {
	return self->spacing();
}

void QwtScaleWidget_setScaleDiv(QwtScaleWidget* self, QwtScaleDiv* scaleDiv) {
	self->setScaleDiv(*scaleDiv);
}

void QwtScaleWidget_setTransformation(QwtScaleWidget* self, QwtTransform* transformation) {
	self->setTransformation(transformation);
}

void QwtScaleWidget_setScaleDraw(QwtScaleWidget* self, QwtScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtScaleDraw* QwtScaleWidget_scaleDraw(const QwtScaleWidget* self) {
	return (QwtScaleDraw*) self->scaleDraw();
}

QwtScaleDraw* QwtScaleWidget_scaleDraw2(QwtScaleWidget* self) {
	return self->scaleDraw();
}

void QwtScaleWidget_setLabelAlignment(QwtScaleWidget* self, int labelAlignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(labelAlignment));
}

void QwtScaleWidget_setLabelRotation(QwtScaleWidget* self, double rotation) {
	self->setLabelRotation(static_cast<double>(rotation));
}

void QwtScaleWidget_setColorBarEnabled(QwtScaleWidget* self, bool colorBarEnabled) {
	self->setColorBarEnabled(colorBarEnabled);
}

bool QwtScaleWidget_isColorBarEnabled(const QwtScaleWidget* self) {
	return self->isColorBarEnabled();
}

void QwtScaleWidget_setColorBarWidth(QwtScaleWidget* self, int colorBarWidth) {
	self->setColorBarWidth(static_cast<int>(colorBarWidth));
}

int QwtScaleWidget_colorBarWidth(const QwtScaleWidget* self) {
	return self->colorBarWidth();
}

void QwtScaleWidget_setColorMap(QwtScaleWidget* self, QwtInterval* param1, QwtColorMap* param2) {
	self->setColorMap(*param1, param2);
}

QwtInterval* QwtScaleWidget_colorBarInterval(const QwtScaleWidget* self) {
	return new QwtInterval(self->colorBarInterval());
}

QwtColorMap* QwtScaleWidget_colorMap(const QwtScaleWidget* self) {
	return (QwtColorMap*) self->colorMap();
}

QSize* QwtScaleWidget_sizeHint(const QwtScaleWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtScaleWidget_minimumSizeHint(const QwtScaleWidget* self) {
	return new QSize(self->minimumSizeHint());
}

int QwtScaleWidget_titleHeightForWidth(const QwtScaleWidget* self, int width) {
	return self->titleHeightForWidth(static_cast<int>(width));
}

int QwtScaleWidget_dimForLength(const QwtScaleWidget* self, int length, QFont* scaleFont) {
	return self->dimForLength(static_cast<int>(length), *scaleFont);
}

void QwtScaleWidget_drawColorBar(const QwtScaleWidget* self, QPainter* painter, QRectF* param2) {
	self->drawColorBar(painter, *param2);
}

void QwtScaleWidget_drawTitle(const QwtScaleWidget* self, QPainter* painter, int param2, QRectF* rect) {
	self->drawTitle(painter, static_cast<QwtScaleDraw::Alignment>(param2), *rect);
}

void QwtScaleWidget_setAlignment(QwtScaleWidget* self, int alignment) {
	self->setAlignment(static_cast<QwtScaleDraw::Alignment>(alignment));
}

int QwtScaleWidget_alignment(const QwtScaleWidget* self) {
	QwtScaleDraw::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

QRectF* QwtScaleWidget_colorBarRect(const QwtScaleWidget* self, QRectF* param1) {
	return new QRectF(self->colorBarRect(*param1));
}

struct miqt_string QwtScaleWidget_tr2(const char* s, const char* c) {
	QString _ret = QwtScaleWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtScaleWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtScaleWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtScaleWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QwtScaleWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtScaleWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtScaleWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtScaleWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtScaleWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::sizeHint());
}

bool QwtScaleWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtScaleWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::minimumSizeHint());
}

bool QwtScaleWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::paintEvent(param1);
}

bool QwtScaleWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::resizeEvent(param1);
}

bool QwtScaleWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtScaleWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::devType();
}

bool QwtScaleWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtScaleWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::setVisible(visible);
}

bool QwtScaleWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtScaleWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::heightForWidth(static_cast<int>(param1));
}

bool QwtScaleWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtScaleWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::hasHeightForWidth();
}

bool QwtScaleWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtScaleWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::paintEngine();
}

bool QwtScaleWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtScaleWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::event(event);
}

bool QwtScaleWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::mousePressEvent(event);
}

bool QwtScaleWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::mouseReleaseEvent(event);
}

bool QwtScaleWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::mouseDoubleClickEvent(event);
}

bool QwtScaleWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::mouseMoveEvent(event);
}

bool QwtScaleWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::wheelEvent(event);
}

bool QwtScaleWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::keyPressEvent(event);
}

bool QwtScaleWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::keyReleaseEvent(event);
}

bool QwtScaleWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::focusInEvent(event);
}

bool QwtScaleWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::focusOutEvent(event);
}

bool QwtScaleWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::enterEvent(event);
}

bool QwtScaleWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::leaveEvent(event);
}

bool QwtScaleWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::moveEvent(event);
}

bool QwtScaleWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::closeEvent(event);
}

bool QwtScaleWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::contextMenuEvent(event);
}

bool QwtScaleWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::tabletEvent(event);
}

bool QwtScaleWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::actionEvent(event);
}

bool QwtScaleWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::dragEnterEvent(event);
}

bool QwtScaleWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::dragMoveEvent(event);
}

bool QwtScaleWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::dragLeaveEvent(event);
}

bool QwtScaleWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::dropEvent(event);
}

bool QwtScaleWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::showEvent(event);
}

bool QwtScaleWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::hideEvent(event);
}

bool QwtScaleWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtScaleWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtScaleWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::changeEvent(param1);
}

bool QwtScaleWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtScaleWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::metric(static_cast<MiqtVirtualQwtScaleWidget::PaintDeviceMetric>(param1));
}

bool QwtScaleWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtScaleWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::initPainter(painter);
}

bool QwtScaleWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtScaleWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::redirected(offset);
}

bool QwtScaleWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtScaleWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::sharedPainter();
}

bool QwtScaleWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::inputMethodEvent(param1);
}

bool QwtScaleWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtScaleWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtScaleWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtScaleWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::focusNextPrevChild(next);
}

bool QwtScaleWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtScaleWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::eventFilter(watched, event);
}

bool QwtScaleWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::timerEvent(event);
}

bool QwtScaleWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::childEvent(event);
}

bool QwtScaleWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtScaleWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::customEvent(event);
}

bool QwtScaleWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtScaleWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::connectNotify(*signal);
}

bool QwtScaleWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtScaleWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtScaleWidget*>(self)->QwtScaleWidget::disconnectNotify(*signal);
}

void QwtScaleWidget_protectedbase_draw(bool* _dynamic_cast_ok, const void* self, QPainter* param1) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->draw(param1);
}

void QwtScaleWidget_protectedbase_scaleChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scaleChange();
}

void QwtScaleWidget_protectedbase_layoutScale(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->layoutScale();
}

void QwtScaleWidget_protectedbase_layoutScaleWithUpdateGeometry(bool* _dynamic_cast_ok, void* self, bool update_geometry) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->layoutScale(update_geometry);
}

void QwtScaleWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtScaleWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtScaleWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtScaleWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtScaleWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtScaleWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtScaleWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtScaleWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtScaleWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtScaleWidget* self_cast = dynamic_cast<MiqtVirtualQwtScaleWidget*>( (QwtScaleWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtScaleWidget_delete(QwtScaleWidget* self) {
	delete self;
}

