#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDockWidget>
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
#include <QStyleOptionDockWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdockwidget.h>
#include "gen_qdockwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDockWidget_featuresChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_topLevelChanged(intptr_t, bool);
void miqt_exec_callback_QDockWidget_allowedAreasChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_visibilityChanged(intptr_t, bool);
void miqt_exec_callback_QDockWidget_dockLocationChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_changeEvent(QDockWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_closeEvent(QDockWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDockWidget_paintEvent(QDockWidget*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QDockWidget_event(QDockWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QDockWidget_devType(const QDockWidget*, intptr_t);
void miqt_exec_callback_QDockWidget_setVisible(QDockWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QDockWidget_sizeHint(const QDockWidget*, intptr_t);
QSize* miqt_exec_callback_QDockWidget_minimumSizeHint(const QDockWidget*, intptr_t);
int miqt_exec_callback_QDockWidget_heightForWidth(const QDockWidget*, intptr_t, int);
bool miqt_exec_callback_QDockWidget_hasHeightForWidth(const QDockWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QDockWidget_paintEngine(const QDockWidget*, intptr_t);
void miqt_exec_callback_QDockWidget_mousePressEvent(QDockWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_mouseReleaseEvent(QDockWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_mouseDoubleClickEvent(QDockWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_mouseMoveEvent(QDockWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_wheelEvent(QDockWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDockWidget_keyPressEvent(QDockWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDockWidget_keyReleaseEvent(QDockWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDockWidget_focusInEvent(QDockWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDockWidget_focusOutEvent(QDockWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDockWidget_enterEvent(QDockWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_leaveEvent(QDockWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_moveEvent(QDockWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDockWidget_resizeEvent(QDockWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDockWidget_contextMenuEvent(QDockWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDockWidget_tabletEvent(QDockWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDockWidget_actionEvent(QDockWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDockWidget_dragEnterEvent(QDockWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDockWidget_dragMoveEvent(QDockWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDockWidget_dragLeaveEvent(QDockWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDockWidget_dropEvent(QDockWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDockWidget_showEvent(QDockWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDockWidget_hideEvent(QDockWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDockWidget_nativeEvent(QDockWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDockWidget_metric(const QDockWidget*, intptr_t, int);
void miqt_exec_callback_QDockWidget_initPainter(const QDockWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDockWidget_redirected(const QDockWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDockWidget_sharedPainter(const QDockWidget*, intptr_t);
void miqt_exec_callback_QDockWidget_inputMethodEvent(QDockWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDockWidget_inputMethodQuery(const QDockWidget*, intptr_t, int);
bool miqt_exec_callback_QDockWidget_focusNextPrevChild(QDockWidget*, intptr_t, bool);
bool miqt_exec_callback_QDockWidget_eventFilter(QDockWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDockWidget_timerEvent(QDockWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDockWidget_childEvent(QDockWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDockWidget_customEvent(QDockWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_connectNotify(QDockWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDockWidget_disconnectNotify(QDockWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDockWidget final : public QDockWidget {
public:

	MiqtVirtualQDockWidget(QWidget* parent): QDockWidget(parent) {}
	MiqtVirtualQDockWidget(const QString& title): QDockWidget(title) {}
	MiqtVirtualQDockWidget(): QDockWidget() {}
	MiqtVirtualQDockWidget(const QString& title, QWidget* parent): QDockWidget(title, parent) {}
	MiqtVirtualQDockWidget(const QString& title, QWidget* parent, Qt::WindowFlags flags): QDockWidget(title, parent, flags) {}
	MiqtVirtualQDockWidget(QWidget* parent, Qt::WindowFlags flags): QDockWidget(parent, flags) {}

	virtual ~MiqtVirtualQDockWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QDockWidget::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDockWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDockWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDockWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDockWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDockWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDockWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QDockWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QDockWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDockWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDockWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QDockWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDockWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDockWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QDockWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDockWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDockWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QDockWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDockWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDockWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDockWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDockWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDockWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QDockWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDockWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDockWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QDockWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDockWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDockWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDockWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDockWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDockWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDockWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDockWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDockWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDockWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QDockWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDockWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDockWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDockWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDockWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDockWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDockWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDockWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDockWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDockWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDockWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDockWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDockWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QDockWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QDockWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDockWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDockWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDockWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDockWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDockWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDockWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QDockWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDockWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDockWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDockWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDockWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDockWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QDockWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDockWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDockWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDockWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDockWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDockWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDockWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDockWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QDockWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDockWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDockWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDockWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDockWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDockWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDockWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDockWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDockWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDockWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDockWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDockWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDockWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDockWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDockWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDockWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionDockWidget* option);
	friend void QDockWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDockWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDockWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDockWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDockWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDockWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDockWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDockWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDockWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDockWidget* QDockWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDockWidget(parent);
}

QDockWidget* QDockWidget_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) MiqtVirtualQDockWidget(title_QString);
}

QDockWidget* QDockWidget_new3() {
	return new (std::nothrow) MiqtVirtualQDockWidget();
}

QDockWidget* QDockWidget_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) MiqtVirtualQDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new5(struct miqt_string title, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) MiqtVirtualQDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDockWidget_virtbase(QDockWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDockWidget_metaObject(const QDockWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDockWidget_metacast(QDockWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDockWidget_tr(const char* s) {
	QString _ret = QDockWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_trUtf8(const char* s) {
	QString _ret = QDockWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QDockWidget_widget(const QDockWidget* self) {
	return self->widget();
}

void QDockWidget_setWidget(QDockWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

void QDockWidget_setFeatures(QDockWidget* self, int features) {
	self->setFeatures(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

int QDockWidget_features(const QDockWidget* self) {
	QDockWidget::DockWidgetFeatures _ret = self->features();
	return static_cast<int>(_ret);
}

void QDockWidget_setFloating(QDockWidget* self, bool floating) {
	self->setFloating(floating);
}

bool QDockWidget_isFloating(const QDockWidget* self) {
	return self->isFloating();
}

void QDockWidget_setAllowedAreas(QDockWidget* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::DockWidgetAreas>(areas));
}

int QDockWidget_allowedAreas(const QDockWidget* self) {
	Qt::DockWidgetAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

void QDockWidget_setTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_titleBarWidget(const QDockWidget* self) {
	return self->titleBarWidget();
}

bool QDockWidget_isAreaAllowed(const QDockWidget* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_toggleViewAction(const QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_featuresChanged(QDockWidget* self, int features) {
	self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_connect_featuresChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(QDockWidget::DockWidgetFeatures)>(&QDockWidget::featuresChanged), self, [=](QDockWidget::DockWidgetFeatures features) {
		QDockWidget::DockWidgetFeatures features_ret = features;
		int sigval1 = static_cast<int>(features_ret);
		miqt_exec_callback_QDockWidget_featuresChanged(slot, sigval1);
	});
}

void QDockWidget_topLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_connect_topLevelChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QDockWidget_topLevelChanged(slot, sigval1);
	});
}

void QDockWidget_allowedAreasChanged(QDockWidget* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_connect_allowedAreasChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetAreas)>(&QDockWidget::allowedAreasChanged), self, [=](Qt::DockWidgetAreas allowedAreas) {
		Qt::DockWidgetAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QDockWidget_allowedAreasChanged(slot, sigval1);
	});
}

void QDockWidget_visibilityChanged(QDockWidget* self, bool visible) {
	self->visibilityChanged(visible);
}

void QDockWidget_connect_visibilityChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QDockWidget_visibilityChanged(slot, sigval1);
	});
}

void QDockWidget_dockLocationChanged(QDockWidget* self, int area) {
	self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_connect_dockLocationChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetArea)>(&QDockWidget::dockLocationChanged), self, [=](Qt::DockWidgetArea area) {
		Qt::DockWidgetArea area_ret = area;
		int sigval1 = static_cast<int>(area_ret);
		miqt_exec_callback_QDockWidget_dockLocationChanged(slot, sigval1);
	});
}

struct miqt_string QDockWidget_tr2(const char* s, const char* c) {
	QString _ret = QDockWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QDockWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDockWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QDockWidget_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::changeEvent(event);
}

bool QDockWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QDockWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::closeEvent(event);
}

bool QDockWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QDockWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::paintEvent(event);
}

bool QDockWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDockWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::event(event);
}

bool QDockWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QDockWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::devType();
}

bool QDockWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QDockWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::setVisible(visible);
}

bool QDockWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDockWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::sizeHint());
}

bool QDockWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDockWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::minimumSizeHint());
}

bool QDockWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDockWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::heightForWidth(static_cast<int>(param1));
}

bool QDockWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDockWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::hasHeightForWidth();
}

bool QDockWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDockWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::paintEngine();
}

bool QDockWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDockWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::mousePressEvent(event);
}

bool QDockWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDockWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::mouseReleaseEvent(event);
}

bool QDockWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDockWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::mouseDoubleClickEvent(event);
}

bool QDockWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::mouseMoveEvent(event);
}

bool QDockWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDockWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::wheelEvent(event);
}

bool QDockWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDockWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::keyPressEvent(event);
}

bool QDockWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDockWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::keyReleaseEvent(event);
}

bool QDockWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDockWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::focusInEvent(event);
}

bool QDockWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDockWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::focusOutEvent(event);
}

bool QDockWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QDockWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::enterEvent(event);
}

bool QDockWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::leaveEvent(event);
}

bool QDockWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::moveEvent(event);
}

bool QDockWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDockWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::resizeEvent(event);
}

bool QDockWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDockWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::contextMenuEvent(event);
}

bool QDockWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDockWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::tabletEvent(event);
}

bool QDockWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QDockWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::actionEvent(event);
}

bool QDockWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDockWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::dragEnterEvent(event);
}

bool QDockWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::dragMoveEvent(event);
}

bool QDockWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::dragLeaveEvent(event);
}

bool QDockWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QDockWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::dropEvent(event);
}

bool QDockWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QDockWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::showEvent(event);
}

bool QDockWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QDockWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::hideEvent(event);
}

bool QDockWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDockWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QDockWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QDockWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::metric(static_cast<MiqtVirtualQDockWidget::PaintDeviceMetric>(param1));
}

bool QDockWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QDockWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::initPainter(painter);
}

bool QDockWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDockWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::redirected(offset);
}

bool QDockWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDockWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::sharedPainter();
}

bool QDockWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDockWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::inputMethodEvent(param1);
}

bool QDockWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDockWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDockWidget*>(self)->QDockWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDockWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDockWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::focusNextPrevChild(next);
}

bool QDockWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDockWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::eventFilter(watched, event);
}

bool QDockWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDockWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::timerEvent(event);
}

bool QDockWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDockWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::childEvent(event);
}

bool QDockWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDockWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::customEvent(event);
}

bool QDockWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDockWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::connectNotify(*signal);
}

bool QDockWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDockWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDockWidget*>(self)->QDockWidget::disconnectNotify(*signal);
}

void QDockWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionDockWidget* option) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QDockWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDockWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDockWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDockWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDockWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDockWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDockWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDockWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDockWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDockWidget_delete(QDockWidget* self) {
	delete self;
}

