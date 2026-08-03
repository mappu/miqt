#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerObjectInspectorInterface>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <abstractobjectinspector.h>
#include "gen_abstractobjectinspector.h"

#ifdef __cplusplus
extern "C" {
#endif

QDesignerFormEditorInterface* miqt_exec_callback_QDesignerObjectInspectorInterface_core(const QDesignerObjectInspectorInterface*, intptr_t);
void miqt_exec_callback_QDesignerObjectInspectorInterface_setFormWindow(QDesignerObjectInspectorInterface*, intptr_t, QDesignerFormWindowInterface*);
int miqt_exec_callback_QDesignerObjectInspectorInterface_devType(const QDesignerObjectInspectorInterface*, intptr_t);
void miqt_exec_callback_QDesignerObjectInspectorInterface_setVisible(QDesignerObjectInspectorInterface*, intptr_t, bool);
QSize* miqt_exec_callback_QDesignerObjectInspectorInterface_sizeHint(const QDesignerObjectInspectorInterface*, intptr_t);
QSize* miqt_exec_callback_QDesignerObjectInspectorInterface_minimumSizeHint(const QDesignerObjectInspectorInterface*, intptr_t);
int miqt_exec_callback_QDesignerObjectInspectorInterface_heightForWidth(const QDesignerObjectInspectorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerObjectInspectorInterface_hasHeightForWidth(const QDesignerObjectInspectorInterface*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesignerObjectInspectorInterface_paintEngine(const QDesignerObjectInspectorInterface*, intptr_t);
bool miqt_exec_callback_QDesignerObjectInspectorInterface_event(QDesignerObjectInspectorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_mousePressEvent(QDesignerObjectInspectorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_mouseReleaseEvent(QDesignerObjectInspectorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_mouseDoubleClickEvent(QDesignerObjectInspectorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_mouseMoveEvent(QDesignerObjectInspectorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_wheelEvent(QDesignerObjectInspectorInterface*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_keyPressEvent(QDesignerObjectInspectorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_keyReleaseEvent(QDesignerObjectInspectorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_focusInEvent(QDesignerObjectInspectorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_focusOutEvent(QDesignerObjectInspectorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_enterEvent(QDesignerObjectInspectorInterface*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_leaveEvent(QDesignerObjectInspectorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_paintEvent(QDesignerObjectInspectorInterface*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_moveEvent(QDesignerObjectInspectorInterface*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_resizeEvent(QDesignerObjectInspectorInterface*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_closeEvent(QDesignerObjectInspectorInterface*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_contextMenuEvent(QDesignerObjectInspectorInterface*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_tabletEvent(QDesignerObjectInspectorInterface*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_actionEvent(QDesignerObjectInspectorInterface*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_dragEnterEvent(QDesignerObjectInspectorInterface*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_dragMoveEvent(QDesignerObjectInspectorInterface*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_dragLeaveEvent(QDesignerObjectInspectorInterface*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_dropEvent(QDesignerObjectInspectorInterface*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_showEvent(QDesignerObjectInspectorInterface*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_hideEvent(QDesignerObjectInspectorInterface*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesignerObjectInspectorInterface_nativeEvent(QDesignerObjectInspectorInterface*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_changeEvent(QDesignerObjectInspectorInterface*, intptr_t, QEvent*);
int miqt_exec_callback_QDesignerObjectInspectorInterface_metric(const QDesignerObjectInspectorInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerObjectInspectorInterface_initPainter(const QDesignerObjectInspectorInterface*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesignerObjectInspectorInterface_redirected(const QDesignerObjectInspectorInterface*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesignerObjectInspectorInterface_sharedPainter(const QDesignerObjectInspectorInterface*, intptr_t);
void miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodEvent(QDesignerObjectInspectorInterface*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodQuery(const QDesignerObjectInspectorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerObjectInspectorInterface_focusNextPrevChild(QDesignerObjectInspectorInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerObjectInspectorInterface_eventFilter(QDesignerObjectInspectorInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_timerEvent(QDesignerObjectInspectorInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_childEvent(QDesignerObjectInspectorInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_customEvent(QDesignerObjectInspectorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_connectNotify(QDesignerObjectInspectorInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerObjectInspectorInterface_disconnectNotify(QDesignerObjectInspectorInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerObjectInspectorInterface final : public QDesignerObjectInspectorInterface {
public:

	MiqtVirtualQDesignerObjectInspectorInterface(QWidget* parent): QDesignerObjectInspectorInterface(parent) {}
	MiqtVirtualQDesignerObjectInspectorInterface(QWidget* parent, Qt::WindowFlags flags): QDesignerObjectInspectorInterface(parent, flags) {}

	virtual ~MiqtVirtualQDesignerObjectInspectorInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__core = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (handle__core == 0) {
			return QDesignerObjectInspectorInterface::core();
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_core(this, handle__core);
		return callback_return_value;
	}

	friend QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_virtualbase_core(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFormWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (handle__setFormWindow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerObjectInspectorInterface_setFormWindow(this, handle__setFormWindow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDesignerObjectInspectorInterface::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerObjectInspectorInterface_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDesignerObjectInspectorInterface::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesignerObjectInspectorInterface_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDesignerObjectInspectorInterface::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerObjectInspectorInterface_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDesignerObjectInspectorInterface::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerObjectInspectorInterface_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDesignerObjectInspectorInterface::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerObjectInspectorInterface_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDesignerObjectInspectorInterface::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QDesignerObjectInspectorInterface_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDesignerObjectInspectorInterface::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QDesignerObjectInspectorInterface_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerObjectInspectorInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerObjectInspectorInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDesignerObjectInspectorInterface::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDesignerObjectInspectorInterface::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDesignerObjectInspectorInterface::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDesignerObjectInspectorInterface::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDesignerObjectInspectorInterface::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDesignerObjectInspectorInterface::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDesignerObjectInspectorInterface::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDesignerObjectInspectorInterface::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDesignerObjectInspectorInterface::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDesignerObjectInspectorInterface::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDesignerObjectInspectorInterface::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDesignerObjectInspectorInterface::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDesignerObjectInspectorInterface::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDesignerObjectInspectorInterface::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDesignerObjectInspectorInterface::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDesignerObjectInspectorInterface::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDesignerObjectInspectorInterface::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDesignerObjectInspectorInterface::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDesignerObjectInspectorInterface::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDesignerObjectInspectorInterface::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDesignerObjectInspectorInterface::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDesignerObjectInspectorInterface::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDesignerObjectInspectorInterface::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesignerObjectInspectorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QDesignerObjectInspectorInterface::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerObjectInspectorInterface_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDesignerObjectInspectorInterface::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerObjectInspectorInterface_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDesignerObjectInspectorInterface::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesignerObjectInspectorInterface_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDesignerObjectInspectorInterface::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesignerObjectInspectorInterface_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDesignerObjectInspectorInterface::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QDesignerObjectInspectorInterface_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDesignerObjectInspectorInterface::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDesignerObjectInspectorInterface::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDesignerObjectInspectorInterface_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDesignerObjectInspectorInterface::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerObjectInspectorInterface_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerObjectInspectorInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerObjectInspectorInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerObjectInspectorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerObjectInspectorInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerObjectInspectorInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerObjectInspectorInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerObjectInspectorInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerObjectInspectorInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerObjectInspectorInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerObjectInspectorInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerObjectInspectorInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerObjectInspectorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerObjectInspectorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerObjectInspectorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerObjectInspectorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerObjectInspectorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerObjectInspectorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesignerObjectInspectorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerObjectInspectorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerObjectInspectorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerObjectInspectorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerObjectInspectorInterface* QDesignerObjectInspectorInterface_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerObjectInspectorInterface(parent);
}

QDesignerObjectInspectorInterface* QDesignerObjectInspectorInterface_new2(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQDesignerObjectInspectorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDesignerObjectInspectorInterface_virtbase(QDesignerObjectInspectorInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerObjectInspectorInterface_metaObject(const QDesignerObjectInspectorInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerObjectInspectorInterface_metacast(QDesignerObjectInspectorInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerObjectInspectorInterface_tr(const char* s) {
	QString _ret = QDesignerObjectInspectorInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_core(const QDesignerObjectInspectorInterface* self) {
	return self->core();
}

void QDesignerObjectInspectorInterface_setFormWindow(QDesignerObjectInspectorInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->setFormWindow(formWindow);
}

struct miqt_string QDesignerObjectInspectorInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerObjectInspectorInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerObjectInspectorInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerObjectInspectorInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerObjectInspectorInterface_override_virtual_core(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = slot;
	return true;
}

QDesignerFormEditorInterface* QDesignerObjectInspectorInterface_virtualbase_core(const void* self) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::core();
}

bool QDesignerObjectInspectorInterface_override_virtual_setFormWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFormWindow = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QDesignerObjectInspectorInterface_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::devType();
}

bool QDesignerObjectInspectorInterface_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::setVisible(visible);
}

bool QDesignerObjectInspectorInterface_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDesignerObjectInspectorInterface_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::sizeHint());
}

bool QDesignerObjectInspectorInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDesignerObjectInspectorInterface_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::minimumSizeHint());
}

bool QDesignerObjectInspectorInterface_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDesignerObjectInspectorInterface_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::heightForWidth(static_cast<int>(param1));
}

bool QDesignerObjectInspectorInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::hasHeightForWidth();
}

bool QDesignerObjectInspectorInterface_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDesignerObjectInspectorInterface_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::paintEngine();
}

bool QDesignerObjectInspectorInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::event(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::mousePressEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::mouseMoveEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::wheelEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::keyPressEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::keyReleaseEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::focusInEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::focusOutEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::enterEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::leaveEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::paintEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::moveEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::resizeEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::closeEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::contextMenuEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::tabletEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::actionEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::dragEnterEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::dragMoveEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::dragLeaveEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::dropEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::showEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::hideEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QDesignerObjectInspectorInterface_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::changeEvent(param1);
}

bool QDesignerObjectInspectorInterface_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QDesignerObjectInspectorInterface_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::metric(static_cast<MiqtVirtualQDesignerObjectInspectorInterface::PaintDeviceMetric>(param1));
}

bool QDesignerObjectInspectorInterface_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::initPainter(painter);
}

bool QDesignerObjectInspectorInterface_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDesignerObjectInspectorInterface_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::redirected(offset);
}

bool QDesignerObjectInspectorInterface_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDesignerObjectInspectorInterface_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::sharedPainter();
}

bool QDesignerObjectInspectorInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::inputMethodEvent(param1);
}

bool QDesignerObjectInspectorInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDesignerObjectInspectorInterface_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesignerObjectInspectorInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::focusNextPrevChild(next);
}

bool QDesignerObjectInspectorInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerObjectInspectorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::eventFilter(watched, event);
}

bool QDesignerObjectInspectorInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::timerEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::childEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::customEvent(event);
}

bool QDesignerObjectInspectorInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::connectNotify(*signal);
}

bool QDesignerObjectInspectorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerObjectInspectorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerObjectInspectorInterface*>(self)->QDesignerObjectInspectorInterface::disconnectNotify(*signal);
}

void QDesignerObjectInspectorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesignerObjectInspectorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesignerObjectInspectorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesignerObjectInspectorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesignerObjectInspectorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesignerObjectInspectorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerObjectInspectorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerObjectInspectorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerObjectInspectorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerObjectInspectorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerObjectInspectorInterface*>( (QDesignerObjectInspectorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerObjectInspectorInterface_delete(QDesignerObjectInspectorInterface* self) {
	delete self;
}

