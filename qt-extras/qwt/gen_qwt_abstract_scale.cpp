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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_abstract_scale.h>
#include "gen_qwt_abstract_scale.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtAbstractScale_scaleChange(QwtAbstractScale*, intptr_t);
int miqt_exec_callback_QwtAbstractScale_devType(const QwtAbstractScale*, intptr_t);
void miqt_exec_callback_QwtAbstractScale_setVisible(QwtAbstractScale*, intptr_t, bool);
QSize* miqt_exec_callback_QwtAbstractScale_sizeHint(const QwtAbstractScale*, intptr_t);
QSize* miqt_exec_callback_QwtAbstractScale_minimumSizeHint(const QwtAbstractScale*, intptr_t);
int miqt_exec_callback_QwtAbstractScale_heightForWidth(const QwtAbstractScale*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractScale_hasHeightForWidth(const QwtAbstractScale*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtAbstractScale_paintEngine(const QwtAbstractScale*, intptr_t);
bool miqt_exec_callback_QwtAbstractScale_event(QwtAbstractScale*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractScale_mousePressEvent(QwtAbstractScale*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractScale_mouseReleaseEvent(QwtAbstractScale*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractScale_mouseDoubleClickEvent(QwtAbstractScale*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractScale_mouseMoveEvent(QwtAbstractScale*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractScale_wheelEvent(QwtAbstractScale*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtAbstractScale_keyPressEvent(QwtAbstractScale*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractScale_keyReleaseEvent(QwtAbstractScale*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractScale_focusInEvent(QwtAbstractScale*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractScale_focusOutEvent(QwtAbstractScale*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractScale_enterEvent(QwtAbstractScale*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractScale_leaveEvent(QwtAbstractScale*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractScale_paintEvent(QwtAbstractScale*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtAbstractScale_moveEvent(QwtAbstractScale*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtAbstractScale_resizeEvent(QwtAbstractScale*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtAbstractScale_closeEvent(QwtAbstractScale*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtAbstractScale_contextMenuEvent(QwtAbstractScale*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtAbstractScale_tabletEvent(QwtAbstractScale*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtAbstractScale_actionEvent(QwtAbstractScale*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtAbstractScale_dragEnterEvent(QwtAbstractScale*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtAbstractScale_dragMoveEvent(QwtAbstractScale*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtAbstractScale_dragLeaveEvent(QwtAbstractScale*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtAbstractScale_dropEvent(QwtAbstractScale*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtAbstractScale_showEvent(QwtAbstractScale*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtAbstractScale_hideEvent(QwtAbstractScale*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtAbstractScale_nativeEvent(QwtAbstractScale*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtAbstractScale_changeEvent(QwtAbstractScale*, intptr_t, QEvent*);
int miqt_exec_callback_QwtAbstractScale_metric(const QwtAbstractScale*, intptr_t, int);
void miqt_exec_callback_QwtAbstractScale_initPainter(const QwtAbstractScale*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtAbstractScale_redirected(const QwtAbstractScale*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtAbstractScale_sharedPainter(const QwtAbstractScale*, intptr_t);
void miqt_exec_callback_QwtAbstractScale_inputMethodEvent(QwtAbstractScale*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtAbstractScale_inputMethodQuery(const QwtAbstractScale*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractScale_focusNextPrevChild(QwtAbstractScale*, intptr_t, bool);
bool miqt_exec_callback_QwtAbstractScale_eventFilter(QwtAbstractScale*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtAbstractScale_timerEvent(QwtAbstractScale*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtAbstractScale_childEvent(QwtAbstractScale*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtAbstractScale_customEvent(QwtAbstractScale*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractScale_connectNotify(QwtAbstractScale*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtAbstractScale_disconnectNotify(QwtAbstractScale*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtAbstractScale final : public QwtAbstractScale {
public:

	MiqtVirtualQwtAbstractScale(QWidget* parent): QwtAbstractScale(parent) {}
	MiqtVirtualQwtAbstractScale(): QwtAbstractScale() {}

	virtual ~MiqtVirtualQwtAbstractScale() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (handle__scaleChange == 0) {
			QwtAbstractScale::scaleChange();
			return;
		}

		miqt_exec_callback_QwtAbstractScale_scaleChange(this, handle__scaleChange);

	}

	friend void QwtAbstractScale_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtAbstractScale::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtAbstractScale_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractScale_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtAbstractScale::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtAbstractScale_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtAbstractScale::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractScale_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtAbstractScale_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtAbstractScale::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractScale_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtAbstractScale_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtAbstractScale::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtAbstractScale_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractScale_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtAbstractScale::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtAbstractScale_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtAbstractScale_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtAbstractScale::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtAbstractScale_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtAbstractScale_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtAbstractScale::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtAbstractScale_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractScale_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtAbstractScale::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtAbstractScale::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtAbstractScale::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtAbstractScale::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtAbstractScale::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtAbstractScale::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtAbstractScale::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtAbstractScale::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtAbstractScale::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtAbstractScale::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtAbstractScale::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QwtAbstractScale::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtAbstractScale::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtAbstractScale::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtAbstractScale::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtAbstractScale::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtAbstractScale::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtAbstractScale::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtAbstractScale::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtAbstractScale::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtAbstractScale::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtAbstractScale::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtAbstractScale::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtAbstractScale::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtAbstractScale::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtAbstractScale_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtAbstractScale_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtAbstractScale::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractScale_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtAbstractScale::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtAbstractScale_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractScale_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtAbstractScale::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtAbstractScale_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtAbstractScale::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtAbstractScale_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtAbstractScale_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtAbstractScale::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtAbstractScale_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtAbstractScale_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtAbstractScale::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractScale_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtAbstractScale::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtAbstractScale_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtAbstractScale_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtAbstractScale::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtAbstractScale_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractScale_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtAbstractScale::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtAbstractScale_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtAbstractScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtAbstractScale::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtAbstractScale::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtAbstractScale::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractScale_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtAbstractScale::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractScale_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtAbstractScale::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractScale_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtAbstractScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtAbstractScale_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtAbstractScale_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw2(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractScale_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractScale_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractScale_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractScale_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractScale_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtAbstractScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtAbstractScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtAbstractScale* QwtAbstractScale_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtAbstractScale(parent);
}

QwtAbstractScale* QwtAbstractScale_new2() {
	return new (std::nothrow) MiqtVirtualQwtAbstractScale();
}

void QwtAbstractScale_virtbase(QwtAbstractScale* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QwtAbstractScale_metaObject(const QwtAbstractScale* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtAbstractScale_metacast(QwtAbstractScale* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtAbstractScale_tr(const char* s) {
	QString _ret = QwtAbstractScale::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractScale_trUtf8(const char* s) {
	QString _ret = QwtAbstractScale::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtAbstractScale_setScale(QwtAbstractScale* self, double lowerBound, double upperBound) {
	self->setScale(static_cast<double>(lowerBound), static_cast<double>(upperBound));
}

void QwtAbstractScale_setScaleWithScale(QwtAbstractScale* self, QwtInterval* scale) {
	self->setScale(*scale);
}

void QwtAbstractScale_setScale2(QwtAbstractScale* self, QwtScaleDiv* scale) {
	self->setScale(*scale);
}

QwtScaleDiv* QwtAbstractScale_scaleDiv(const QwtAbstractScale* self) {
	const QwtScaleDiv& _ret = self->scaleDiv();
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

void QwtAbstractScale_setLowerBound(QwtAbstractScale* self, double value) {
	self->setLowerBound(static_cast<double>(value));
}

double QwtAbstractScale_lowerBound(const QwtAbstractScale* self) {
	return self->lowerBound();
}

void QwtAbstractScale_setUpperBound(QwtAbstractScale* self, double value) {
	self->setUpperBound(static_cast<double>(value));
}

double QwtAbstractScale_upperBound(const QwtAbstractScale* self) {
	return self->upperBound();
}

void QwtAbstractScale_setScaleStepSize(QwtAbstractScale* self, double stepSize) {
	self->setScaleStepSize(static_cast<double>(stepSize));
}

double QwtAbstractScale_scaleStepSize(const QwtAbstractScale* self) {
	return self->scaleStepSize();
}

void QwtAbstractScale_setScaleMaxMajor(QwtAbstractScale* self, int ticks) {
	self->setScaleMaxMajor(static_cast<int>(ticks));
}

int QwtAbstractScale_scaleMaxMinor(const QwtAbstractScale* self) {
	return self->scaleMaxMinor();
}

void QwtAbstractScale_setScaleMaxMinor(QwtAbstractScale* self, int ticks) {
	self->setScaleMaxMinor(static_cast<int>(ticks));
}

int QwtAbstractScale_scaleMaxMajor(const QwtAbstractScale* self) {
	return self->scaleMaxMajor();
}

void QwtAbstractScale_setScaleEngine(QwtAbstractScale* self, QwtScaleEngine* scaleEngine) {
	self->setScaleEngine(scaleEngine);
}

QwtScaleEngine* QwtAbstractScale_scaleEngine(const QwtAbstractScale* self) {
	return (QwtScaleEngine*) self->scaleEngine();
}

QwtScaleEngine* QwtAbstractScale_scaleEngine2(QwtAbstractScale* self) {
	return self->scaleEngine();
}

int QwtAbstractScale_transform(const QwtAbstractScale* self, double param1) {
	return self->transform(static_cast<double>(param1));
}

double QwtAbstractScale_invTransform(const QwtAbstractScale* self, int param1) {
	return self->invTransform(static_cast<int>(param1));
}

bool QwtAbstractScale_isInverted(const QwtAbstractScale* self) {
	return self->isInverted();
}

double QwtAbstractScale_minimum(const QwtAbstractScale* self) {
	return self->minimum();
}

double QwtAbstractScale_maximum(const QwtAbstractScale* self) {
	return self->maximum();
}

struct miqt_string QwtAbstractScale_tr2(const char* s, const char* c) {
	QString _ret = QwtAbstractScale::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractScale_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractScale::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractScale_trUtf82(const char* s, const char* c) {
	QString _ret = QwtAbstractScale::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractScale_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractScale::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtAbstractScale_override_virtual_scaleChange(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = slot;
	return true;
}

void QwtAbstractScale_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::scaleChange();
}

bool QwtAbstractScale_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtAbstractScale_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::devType();
}

bool QwtAbstractScale_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtAbstractScale_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::setVisible(visible);
}

bool QwtAbstractScale_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtAbstractScale_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::sizeHint());
}

bool QwtAbstractScale_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtAbstractScale_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::minimumSizeHint());
}

bool QwtAbstractScale_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtAbstractScale_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::heightForWidth(static_cast<int>(param1));
}

bool QwtAbstractScale_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtAbstractScale_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::hasHeightForWidth();
}

bool QwtAbstractScale_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtAbstractScale_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::paintEngine();
}

bool QwtAbstractScale_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtAbstractScale_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::event(event);
}

bool QwtAbstractScale_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::mousePressEvent(event);
}

bool QwtAbstractScale_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::mouseReleaseEvent(event);
}

bool QwtAbstractScale_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::mouseDoubleClickEvent(event);
}

bool QwtAbstractScale_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::mouseMoveEvent(event);
}

bool QwtAbstractScale_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::wheelEvent(event);
}

bool QwtAbstractScale_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::keyPressEvent(event);
}

bool QwtAbstractScale_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::keyReleaseEvent(event);
}

bool QwtAbstractScale_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::focusInEvent(event);
}

bool QwtAbstractScale_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::focusOutEvent(event);
}

bool QwtAbstractScale_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::enterEvent(event);
}

bool QwtAbstractScale_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::leaveEvent(event);
}

bool QwtAbstractScale_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::paintEvent(event);
}

bool QwtAbstractScale_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::moveEvent(event);
}

bool QwtAbstractScale_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::resizeEvent(event);
}

bool QwtAbstractScale_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::closeEvent(event);
}

bool QwtAbstractScale_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::contextMenuEvent(event);
}

bool QwtAbstractScale_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::tabletEvent(event);
}

bool QwtAbstractScale_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::actionEvent(event);
}

bool QwtAbstractScale_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::dragEnterEvent(event);
}

bool QwtAbstractScale_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::dragMoveEvent(event);
}

bool QwtAbstractScale_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::dragLeaveEvent(event);
}

bool QwtAbstractScale_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::dropEvent(event);
}

bool QwtAbstractScale_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::showEvent(event);
}

bool QwtAbstractScale_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::hideEvent(event);
}

bool QwtAbstractScale_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtAbstractScale_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtAbstractScale_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::changeEvent(param1);
}

bool QwtAbstractScale_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtAbstractScale_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::metric(static_cast<MiqtVirtualQwtAbstractScale::PaintDeviceMetric>(param1));
}

bool QwtAbstractScale_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtAbstractScale_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::initPainter(painter);
}

bool QwtAbstractScale_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtAbstractScale_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::redirected(offset);
}

bool QwtAbstractScale_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtAbstractScale_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::sharedPainter();
}

bool QwtAbstractScale_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::inputMethodEvent(param1);
}

bool QwtAbstractScale_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtAbstractScale_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtAbstractScale_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtAbstractScale_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::focusNextPrevChild(next);
}

bool QwtAbstractScale_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtAbstractScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::eventFilter(watched, event);
}

bool QwtAbstractScale_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::timerEvent(event);
}

bool QwtAbstractScale_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::childEvent(event);
}

bool QwtAbstractScale_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtAbstractScale_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::customEvent(event);
}

bool QwtAbstractScale_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtAbstractScale_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::connectNotify(*signal);
}

bool QwtAbstractScale_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtAbstractScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractScale*>(self)->QwtAbstractScale::disconnectNotify(*signal);
}

void QwtAbstractScale_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtAbstractScale_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

QwtAbstractScaleDraw* QwtAbstractScale_protectedbase_abstractScaleDraw2(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->abstractScaleDraw();
}

void QwtAbstractScale_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtAbstractScale_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtAbstractScale_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtAbstractScale_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtAbstractScale_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtAbstractScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtAbstractScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtAbstractScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtAbstractScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtAbstractScale* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScale*>( (QwtAbstractScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtAbstractScale_delete(QwtAbstractScale* self) {
	delete self;
}

