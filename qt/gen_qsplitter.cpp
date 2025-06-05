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
#include <QList>
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
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplitter.h>
#include "gen_qsplitter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSplitter_splitterMoved(intptr_t, int, int);
QSize* miqt_exec_callback_QSplitter_sizeHint(const QSplitter*, intptr_t);
QSize* miqt_exec_callback_QSplitter_minimumSizeHint(const QSplitter*, intptr_t);
QSplitterHandle* miqt_exec_callback_QSplitter_createHandle(QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_childEvent(QSplitter*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QSplitter_event(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_resizeEvent(QSplitter*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSplitter_changeEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_paintEvent(QSplitter*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QSplitter_devType(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_setVisible(QSplitter*, intptr_t, bool);
int miqt_exec_callback_QSplitter_heightForWidth(const QSplitter*, intptr_t, int);
bool miqt_exec_callback_QSplitter_hasHeightForWidth(const QSplitter*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplitter_paintEngine(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_mousePressEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_mouseReleaseEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_mouseDoubleClickEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_mouseMoveEvent(QSplitter*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitter_wheelEvent(QSplitter*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplitter_keyPressEvent(QSplitter*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitter_keyReleaseEvent(QSplitter*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitter_focusInEvent(QSplitter*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitter_focusOutEvent(QSplitter*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitter_enterEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_leaveEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_moveEvent(QSplitter*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplitter_closeEvent(QSplitter*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplitter_contextMenuEvent(QSplitter*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplitter_tabletEvent(QSplitter*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplitter_actionEvent(QSplitter*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplitter_dragEnterEvent(QSplitter*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplitter_dragMoveEvent(QSplitter*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplitter_dragLeaveEvent(QSplitter*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplitter_dropEvent(QSplitter*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplitter_showEvent(QSplitter*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplitter_hideEvent(QSplitter*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplitter_nativeEvent(QSplitter*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QSplitter_metric(const QSplitter*, intptr_t, int);
void miqt_exec_callback_QSplitter_initPainter(const QSplitter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplitter_redirected(const QSplitter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplitter_sharedPainter(const QSplitter*, intptr_t);
void miqt_exec_callback_QSplitter_inputMethodEvent(QSplitter*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplitter_inputMethodQuery(const QSplitter*, intptr_t, int);
bool miqt_exec_callback_QSplitter_focusNextPrevChild(QSplitter*, intptr_t, bool);
bool miqt_exec_callback_QSplitter_eventFilter(QSplitter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplitter_timerEvent(QSplitter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplitter_customEvent(QSplitter*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitter_connectNotify(QSplitter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplitter_disconnectNotify(QSplitter*, intptr_t, QMetaMethod*);
QSize* miqt_exec_callback_QSplitterHandle_sizeHint(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_paintEvent(QSplitterHandle*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSplitterHandle_mouseMoveEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_mousePressEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_mouseReleaseEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_resizeEvent(QSplitterHandle*, intptr_t, QResizeEvent*);
bool miqt_exec_callback_QSplitterHandle_event(QSplitterHandle*, intptr_t, QEvent*);
int miqt_exec_callback_QSplitterHandle_devType(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_setVisible(QSplitterHandle*, intptr_t, bool);
QSize* miqt_exec_callback_QSplitterHandle_minimumSizeHint(const QSplitterHandle*, intptr_t);
int miqt_exec_callback_QSplitterHandle_heightForWidth(const QSplitterHandle*, intptr_t, int);
bool miqt_exec_callback_QSplitterHandle_hasHeightForWidth(const QSplitterHandle*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplitterHandle_paintEngine(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_mouseDoubleClickEvent(QSplitterHandle*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplitterHandle_wheelEvent(QSplitterHandle*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplitterHandle_keyPressEvent(QSplitterHandle*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitterHandle_keyReleaseEvent(QSplitterHandle*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplitterHandle_focusInEvent(QSplitterHandle*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitterHandle_focusOutEvent(QSplitterHandle*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplitterHandle_enterEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_leaveEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_moveEvent(QSplitterHandle*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplitterHandle_closeEvent(QSplitterHandle*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplitterHandle_contextMenuEvent(QSplitterHandle*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplitterHandle_tabletEvent(QSplitterHandle*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplitterHandle_actionEvent(QSplitterHandle*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplitterHandle_dragEnterEvent(QSplitterHandle*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplitterHandle_dragMoveEvent(QSplitterHandle*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplitterHandle_dragLeaveEvent(QSplitterHandle*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplitterHandle_dropEvent(QSplitterHandle*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplitterHandle_showEvent(QSplitterHandle*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplitterHandle_hideEvent(QSplitterHandle*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplitterHandle_nativeEvent(QSplitterHandle*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSplitterHandle_changeEvent(QSplitterHandle*, intptr_t, QEvent*);
int miqt_exec_callback_QSplitterHandle_metric(const QSplitterHandle*, intptr_t, int);
void miqt_exec_callback_QSplitterHandle_initPainter(const QSplitterHandle*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplitterHandle_redirected(const QSplitterHandle*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplitterHandle_sharedPainter(const QSplitterHandle*, intptr_t);
void miqt_exec_callback_QSplitterHandle_inputMethodEvent(QSplitterHandle*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplitterHandle_inputMethodQuery(const QSplitterHandle*, intptr_t, int);
bool miqt_exec_callback_QSplitterHandle_focusNextPrevChild(QSplitterHandle*, intptr_t, bool);
bool miqt_exec_callback_QSplitterHandle_eventFilter(QSplitterHandle*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplitterHandle_timerEvent(QSplitterHandle*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplitterHandle_childEvent(QSplitterHandle*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSplitterHandle_customEvent(QSplitterHandle*, intptr_t, QEvent*);
void miqt_exec_callback_QSplitterHandle_connectNotify(QSplitterHandle*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplitterHandle_disconnectNotify(QSplitterHandle*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSplitter final : public QSplitter {
public:

	MiqtVirtualQSplitter(QWidget* parent): QSplitter(parent) {}
	MiqtVirtualQSplitter(): QSplitter() {}
	MiqtVirtualQSplitter(Qt::Orientation param1): QSplitter(param1) {}
	MiqtVirtualQSplitter(Qt::Orientation param1, QWidget* parent): QSplitter(param1, parent) {}

	virtual ~MiqtVirtualQSplitter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSplitter::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplitter_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplitter_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSplitter::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplitter_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplitter_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createHandle = 0;

	// Subclass to allow providing a Go implementation
	virtual QSplitterHandle* createHandle() override {
		if (handle__createHandle == 0) {
			return QSplitter::createHandle();
		}

		QSplitterHandle* callback_return_value = miqt_exec_callback_QSplitter_createHandle(this, handle__createHandle);
		return callback_return_value;
	}

	friend QSplitterHandle* QSplitter_virtualbase_createHandle(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* param1) override {
		if (handle__childEvent == 0) {
			QSplitter::childEvent(param1);
			return;
		}

		QChildEvent* sigval1 = param1;
		miqt_exec_callback_QSplitter_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSplitter_virtualbase_childEvent(void* self, QChildEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QSplitter::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QSplitter_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSplitter_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QSplitter::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QSplitter_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSplitter_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QSplitter::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QSplitter_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSplitter_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QSplitter::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QSplitter_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSplitter_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSplitter::devType();
		}

		int callback_return_value = miqt_exec_callback_QSplitter_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitter_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSplitter::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSplitter_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSplitter_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSplitter::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSplitter_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitter_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSplitter::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSplitter_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSplitter_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSplitter::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplitter_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSplitter_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QSplitter::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSplitter_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QSplitter::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSplitter_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSplitter::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSplitter_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QSplitter::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSplitter_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSplitter::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSplitter_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSplitter::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSplitter_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSplitter::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSplitter_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSplitter::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSplitter_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSplitter::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSplitter_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSplitter::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSplitter_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSplitter::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSplitter_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSplitter::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSplitter_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSplitter::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSplitter_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSplitter::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSplitter_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSplitter::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSplitter_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSplitter::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSplitter_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSplitter::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSplitter_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSplitter::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSplitter_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSplitter::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSplitter_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSplitter::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSplitter_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSplitter::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSplitter_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSplitter::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSplitter_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QSplitter::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QSplitter_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSplitter_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSplitter::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSplitter_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitter_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSplitter::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSplitter_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSplitter_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSplitter::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSplitter_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSplitter_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSplitter::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSplitter_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSplitter_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSplitter::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSplitter_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSplitter_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSplitter::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSplitter_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSplitter_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSplitter::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSplitter_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSplitter_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSplitter::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSplitter_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSplitter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSplitter::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSplitter_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSplitter::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitter_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSplitter_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSplitter::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplitter_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSplitter_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSplitter::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplitter_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSplitter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSplitter_protectedbase_moveSplitter(bool* _dynamic_cast_ok, void* self, int pos, int index);
	friend void QSplitter_protectedbase_setRubberBand(bool* _dynamic_cast_ok, void* self, int position);
	friend int QSplitter_protectedbase_closestLegalPosition(bool* _dynamic_cast_ok, void* self, int param1, int param2);
	friend void QSplitter_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QSplitter_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QSplitter_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSplitter_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSplitter_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSplitter_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSplitter_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSplitter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSplitter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSplitter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSplitter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSplitter* QSplitter_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSplitter(parent);
}

QSplitter* QSplitter_new2() {
	return new (std::nothrow) MiqtVirtualQSplitter();
}

QSplitter* QSplitter_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1));
}

QSplitter* QSplitter_new4(int param1, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
}

void QSplitter_virtbase(QSplitter* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QSplitter_metaObject(const QSplitter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitter_metacast(QSplitter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitter_tr(const char* s) {
	QString _ret = QSplitter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_trUtf8(const char* s) {
	QString _ret = QSplitter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_addWidget(QSplitter* self, QWidget* widget) {
	self->addWidget(widget);
}

void QSplitter_insertWidget(QSplitter* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

QWidget* QSplitter_replaceWidget(QSplitter* self, int index, QWidget* widget) {
	return self->replaceWidget(static_cast<int>(index), widget);
}

void QSplitter_setOrientation(QSplitter* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_orientation(const QSplitter* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QSplitter_setChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
	self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_childrenCollapsible(const QSplitter* self) {
	return self->childrenCollapsible();
}

void QSplitter_setCollapsible(QSplitter* self, int index, bool param2) {
	self->setCollapsible(static_cast<int>(index), param2);
}

bool QSplitter_isCollapsible(const QSplitter* self, int index) {
	return self->isCollapsible(static_cast<int>(index));
}

void QSplitter_setOpaqueResize(QSplitter* self) {
	self->setOpaqueResize();
}

bool QSplitter_opaqueResize(const QSplitter* self) {
	return self->opaqueResize();
}

void QSplitter_refresh(QSplitter* self) {
	self->refresh();
}

QSize* QSplitter_sizeHint(const QSplitter* self) {
	return new QSize(self->sizeHint());
}

QSize* QSplitter_minimumSizeHint(const QSplitter* self) {
	return new QSize(self->minimumSizeHint());
}

struct miqt_array /* of int */  QSplitter_sizes(const QSplitter* self) {
	QList<int> _ret = self->sizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSplitter_setSizes(QSplitter* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setSizes(list_QList);
}

struct miqt_string QSplitter_saveState(const QSplitter* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QSplitter_restoreState(QSplitter* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

int QSplitter_handleWidth(const QSplitter* self) {
	return self->handleWidth();
}

void QSplitter_setHandleWidth(QSplitter* self, int handleWidth) {
	self->setHandleWidth(static_cast<int>(handleWidth));
}

int QSplitter_indexOf(const QSplitter* self, QWidget* w) {
	return self->indexOf(w);
}

QWidget* QSplitter_widget(const QSplitter* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QSplitter_count(const QSplitter* self) {
	return self->count();
}

void QSplitter_getRange(const QSplitter* self, int index, int* param2, int* param3) {
	self->getRange(static_cast<int>(index), static_cast<int*>(param2), static_cast<int*>(param3));
}

QSplitterHandle* QSplitter_handle(const QSplitter* self, int index) {
	return self->handle(static_cast<int>(index));
}

void QSplitter_setStretchFactor(QSplitter* self, int index, int stretch) {
	self->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

void QSplitter_splitterMoved(QSplitter* self, int pos, int index) {
	self->splitterMoved(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_connect_splitterMoved(QSplitter* self, intptr_t slot) {
	QSplitter::connect(self, static_cast<void (QSplitter::*)(int, int)>(&QSplitter::splitterMoved), self, [=](int pos, int index) {
		int sigval1 = pos;
		int sigval2 = index;
		miqt_exec_callback_QSplitter_splitterMoved(slot, sigval1, sigval2);
	});
}

struct miqt_string QSplitter_tr2(const char* s, const char* c) {
	QString _ret = QSplitter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_trUtf82(const char* s, const char* c) {
	QString _ret = QSplitter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSplitter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_setOpaqueResizeWithOpaque(QSplitter* self, bool opaque) {
	self->setOpaqueResize(opaque);
}

bool QSplitter_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSplitter_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::sizeHint());
}

bool QSplitter_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSplitter_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::minimumSizeHint());
}

bool QSplitter_override_virtual_createHandle(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createHandle = slot;
	return true;
}

QSplitterHandle* QSplitter_virtualbase_createHandle(void* self) {
	return static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::createHandle();
}

bool QSplitter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSplitter_virtualbase_childEvent(void* self, QChildEvent* param1) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::childEvent(param1);
}

bool QSplitter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSplitter_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::event(param1);
}

bool QSplitter_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSplitter_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::resizeEvent(param1);
}

bool QSplitter_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSplitter_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::changeEvent(param1);
}

bool QSplitter_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSplitter_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::paintEvent(param1);
}

bool QSplitter_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSplitter_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::devType();
}

bool QSplitter_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSplitter_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::setVisible(visible);
}

bool QSplitter_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSplitter_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::heightForWidth(static_cast<int>(param1));
}

bool QSplitter_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSplitter_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::hasHeightForWidth();
}

bool QSplitter_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSplitter_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::paintEngine();
}

bool QSplitter_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSplitter_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::mousePressEvent(event);
}

bool QSplitter_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSplitter_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::mouseReleaseEvent(event);
}

bool QSplitter_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSplitter_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::mouseDoubleClickEvent(event);
}

bool QSplitter_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSplitter_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::mouseMoveEvent(event);
}

bool QSplitter_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSplitter_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::wheelEvent(event);
}

bool QSplitter_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSplitter_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::keyPressEvent(event);
}

bool QSplitter_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSplitter_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::keyReleaseEvent(event);
}

bool QSplitter_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSplitter_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::focusInEvent(event);
}

bool QSplitter_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSplitter_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::focusOutEvent(event);
}

bool QSplitter_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSplitter_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::enterEvent(event);
}

bool QSplitter_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSplitter_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::leaveEvent(event);
}

bool QSplitter_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSplitter_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::moveEvent(event);
}

bool QSplitter_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSplitter_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::closeEvent(event);
}

bool QSplitter_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSplitter_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::contextMenuEvent(event);
}

bool QSplitter_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSplitter_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::tabletEvent(event);
}

bool QSplitter_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSplitter_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::actionEvent(event);
}

bool QSplitter_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSplitter_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::dragEnterEvent(event);
}

bool QSplitter_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSplitter_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::dragMoveEvent(event);
}

bool QSplitter_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSplitter_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::dragLeaveEvent(event);
}

bool QSplitter_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSplitter_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::dropEvent(event);
}

bool QSplitter_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSplitter_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::showEvent(event);
}

bool QSplitter_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSplitter_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::hideEvent(event);
}

bool QSplitter_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSplitter_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QSplitter_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSplitter_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::metric(static_cast<MiqtVirtualQSplitter::PaintDeviceMetric>(param1));
}

bool QSplitter_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSplitter_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::initPainter(painter);
}

bool QSplitter_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSplitter_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::redirected(offset);
}

bool QSplitter_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSplitter_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::sharedPainter();
}

bool QSplitter_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSplitter_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::inputMethodEvent(param1);
}

bool QSplitter_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSplitter_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSplitter*>(self)->QSplitter::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSplitter_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSplitter_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::focusNextPrevChild(next);
}

bool QSplitter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSplitter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::eventFilter(watched, event);
}

bool QSplitter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSplitter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::timerEvent(event);
}

bool QSplitter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSplitter_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::customEvent(event);
}

bool QSplitter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSplitter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::connectNotify(*signal);
}

bool QSplitter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSplitter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplitter*>(self)->QSplitter::disconnectNotify(*signal);
}

void QSplitter_protectedbase_moveSplitter(bool* _dynamic_cast_ok, void* self, int pos, int index) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_protectedbase_setRubberBand(bool* _dynamic_cast_ok, void* self, int position) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setRubberBand(static_cast<int>(position));
}

int QSplitter_protectedbase_closestLegalPosition(bool* _dynamic_cast_ok, void* self, int param1, int param2) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
}

void QSplitter_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QSplitter_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QSplitter_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSplitter_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSplitter_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSplitter_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSplitter_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSplitter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSplitter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSplitter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSplitter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSplitter* self_cast = dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSplitter_delete(QSplitter* self) {
	delete self;
}

class MiqtVirtualQSplitterHandle final : public QSplitterHandle {
public:

	MiqtVirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent): QSplitterHandle(o, parent) {}

	virtual ~MiqtVirtualQSplitterHandle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSplitterHandle::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplitterHandle_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QSplitterHandle::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QSplitterHandle::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QSplitterHandle::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QSplitterHandle::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QSplitterHandle::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QSplitterHandle::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QSplitterHandle_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSplitterHandle_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSplitterHandle::devType();
		}

		int callback_return_value = miqt_exec_callback_QSplitterHandle_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitterHandle_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSplitterHandle::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSplitterHandle_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSplitterHandle_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSplitterHandle::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplitterHandle_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSplitterHandle::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSplitterHandle_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitterHandle_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSplitterHandle::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSplitterHandle_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSplitterHandle::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplitterHandle_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSplitterHandle_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSplitterHandle::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSplitterHandle::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSplitterHandle::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSplitterHandle::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSplitterHandle::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSplitterHandle::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSplitterHandle::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSplitterHandle::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSplitterHandle::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSplitterHandle::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSplitterHandle::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSplitterHandle::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSplitterHandle::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSplitterHandle::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSplitterHandle::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSplitterHandle::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSplitterHandle::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSplitterHandle::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSplitterHandle::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QSplitterHandle::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QSplitterHandle_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSplitterHandle_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QSplitterHandle::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSplitterHandle::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSplitterHandle_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplitterHandle_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSplitterHandle::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSplitterHandle_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSplitterHandle_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSplitterHandle::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSplitterHandle_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSplitterHandle_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSplitterHandle::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSplitterHandle_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSplitterHandle_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSplitterHandle::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSplitterHandle_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSplitterHandle::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSplitterHandle_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSplitterHandle_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSplitterHandle::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSplitterHandle_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSplitterHandle_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSplitterHandle::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSplitterHandle_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSplitterHandle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSplitterHandle::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSplitterHandle::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSplitterHandle::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplitterHandle_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSplitterHandle_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSplitterHandle::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplitterHandle_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSplitterHandle_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSplitterHandle::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplitterHandle_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSplitterHandle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSplitterHandle_protectedbase_moveSplitter(bool* _dynamic_cast_ok, void* self, int p);
	friend int QSplitterHandle_protectedbase_closestLegalPosition(bool* _dynamic_cast_ok, void* self, int p);
	friend void QSplitterHandle_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSplitterHandle_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSplitterHandle_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSplitterHandle_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSplitterHandle_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSplitterHandle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSplitterHandle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSplitterHandle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSplitterHandle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent) {
	return new (std::nothrow) MiqtVirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
}

void QSplitterHandle_virtbase(QSplitterHandle* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSplitterHandle_metaObject(const QSplitterHandle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitterHandle_metacast(QSplitterHandle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitterHandle_tr(const char* s) {
	QString _ret = QSplitterHandle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_trUtf8(const char* s) {
	QString _ret = QSplitterHandle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitterHandle_setOrientation(QSplitterHandle* self, int o) {
	self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_orientation(const QSplitterHandle* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

bool QSplitterHandle_opaqueResize(const QSplitterHandle* self) {
	return self->opaqueResize();
}

QSplitter* QSplitterHandle_splitter(const QSplitterHandle* self) {
	return self->splitter();
}

QSize* QSplitterHandle_sizeHint(const QSplitterHandle* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QSplitterHandle_tr2(const char* s, const char* c) {
	QString _ret = QSplitterHandle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_trUtf82(const char* s, const char* c) {
	QString _ret = QSplitterHandle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSplitterHandle_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSplitterHandle_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::sizeHint());
}

bool QSplitterHandle_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::paintEvent(param1);
}

bool QSplitterHandle_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::mouseMoveEvent(param1);
}

bool QSplitterHandle_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::mousePressEvent(param1);
}

bool QSplitterHandle_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::mouseReleaseEvent(param1);
}

bool QSplitterHandle_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::resizeEvent(param1);
}

bool QSplitterHandle_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSplitterHandle_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::event(param1);
}

bool QSplitterHandle_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSplitterHandle_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::devType();
}

bool QSplitterHandle_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSplitterHandle_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::setVisible(visible);
}

bool QSplitterHandle_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSplitterHandle_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::minimumSizeHint());
}

bool QSplitterHandle_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSplitterHandle_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::heightForWidth(static_cast<int>(param1));
}

bool QSplitterHandle_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSplitterHandle_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::hasHeightForWidth();
}

bool QSplitterHandle_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSplitterHandle_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::paintEngine();
}

bool QSplitterHandle_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::mouseDoubleClickEvent(event);
}

bool QSplitterHandle_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::wheelEvent(event);
}

bool QSplitterHandle_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::keyPressEvent(event);
}

bool QSplitterHandle_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::keyReleaseEvent(event);
}

bool QSplitterHandle_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::focusInEvent(event);
}

bool QSplitterHandle_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::focusOutEvent(event);
}

bool QSplitterHandle_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::enterEvent(event);
}

bool QSplitterHandle_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::leaveEvent(event);
}

bool QSplitterHandle_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::moveEvent(event);
}

bool QSplitterHandle_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::closeEvent(event);
}

bool QSplitterHandle_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::contextMenuEvent(event);
}

bool QSplitterHandle_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::tabletEvent(event);
}

bool QSplitterHandle_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::actionEvent(event);
}

bool QSplitterHandle_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::dragEnterEvent(event);
}

bool QSplitterHandle_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::dragMoveEvent(event);
}

bool QSplitterHandle_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::dragLeaveEvent(event);
}

bool QSplitterHandle_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::dropEvent(event);
}

bool QSplitterHandle_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::showEvent(event);
}

bool QSplitterHandle_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::hideEvent(event);
}

bool QSplitterHandle_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSplitterHandle_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QSplitterHandle_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::changeEvent(param1);
}

bool QSplitterHandle_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSplitterHandle_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::metric(static_cast<MiqtVirtualQSplitterHandle::PaintDeviceMetric>(param1));
}

bool QSplitterHandle_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSplitterHandle_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::initPainter(painter);
}

bool QSplitterHandle_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSplitterHandle_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::redirected(offset);
}

bool QSplitterHandle_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSplitterHandle_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::sharedPainter();
}

bool QSplitterHandle_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::inputMethodEvent(param1);
}

bool QSplitterHandle_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSplitterHandle_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSplitterHandle_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSplitterHandle_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::focusNextPrevChild(next);
}

bool QSplitterHandle_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSplitterHandle_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::eventFilter(watched, event);
}

bool QSplitterHandle_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::timerEvent(event);
}

bool QSplitterHandle_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::childEvent(event);
}

bool QSplitterHandle_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSplitterHandle_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::customEvent(event);
}

bool QSplitterHandle_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSplitterHandle_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::connectNotify(*signal);
}

bool QSplitterHandle_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSplitterHandle_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplitterHandle*>(self)->QSplitterHandle::disconnectNotify(*signal);
}

void QSplitterHandle_protectedbase_moveSplitter(bool* _dynamic_cast_ok, void* self, int p) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->moveSplitter(static_cast<int>(p));
}

int QSplitterHandle_protectedbase_closestLegalPosition(bool* _dynamic_cast_ok, void* self, int p) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->closestLegalPosition(static_cast<int>(p));
}

void QSplitterHandle_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSplitterHandle_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSplitterHandle_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSplitterHandle_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSplitterHandle_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSplitterHandle_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSplitterHandle_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSplitterHandle_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSplitterHandle_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSplitterHandle* self_cast = dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSplitterHandle_delete(QSplitterHandle* self) {
	delete self;
}

