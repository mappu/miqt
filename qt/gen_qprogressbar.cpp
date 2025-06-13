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
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionProgressBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressbar.h>
#include "gen_qprogressbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressBar_valueChanged(intptr_t, int);
struct miqt_string miqt_exec_callback_QProgressBar_text(const QProgressBar*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_sizeHint(const QProgressBar*, intptr_t);
QSize* miqt_exec_callback_QProgressBar_minimumSizeHint(const QProgressBar*, intptr_t);
bool miqt_exec_callback_QProgressBar_event(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_paintEvent(QProgressBar*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QProgressBar_devType(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_setVisible(QProgressBar*, intptr_t, bool);
int miqt_exec_callback_QProgressBar_heightForWidth(const QProgressBar*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_hasHeightForWidth(const QProgressBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QProgressBar_paintEngine(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_mousePressEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_mouseReleaseEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_mouseDoubleClickEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_mouseMoveEvent(QProgressBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressBar_wheelEvent(QProgressBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QProgressBar_keyPressEvent(QProgressBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_keyReleaseEvent(QProgressBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressBar_focusInEvent(QProgressBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_focusOutEvent(QProgressBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressBar_enterEvent(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_leaveEvent(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_moveEvent(QProgressBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QProgressBar_resizeEvent(QProgressBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressBar_closeEvent(QProgressBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressBar_contextMenuEvent(QProgressBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QProgressBar_tabletEvent(QProgressBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QProgressBar_actionEvent(QProgressBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QProgressBar_dragEnterEvent(QProgressBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QProgressBar_dragMoveEvent(QProgressBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QProgressBar_dragLeaveEvent(QProgressBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QProgressBar_dropEvent(QProgressBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QProgressBar_showEvent(QProgressBar*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressBar_hideEvent(QProgressBar*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QProgressBar_nativeEvent(QProgressBar*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QProgressBar_changeEvent(QProgressBar*, intptr_t, QEvent*);
int miqt_exec_callback_QProgressBar_metric(const QProgressBar*, intptr_t, int);
void miqt_exec_callback_QProgressBar_initPainter(const QProgressBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QProgressBar_redirected(const QProgressBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QProgressBar_sharedPainter(const QProgressBar*, intptr_t);
void miqt_exec_callback_QProgressBar_inputMethodEvent(QProgressBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QProgressBar_inputMethodQuery(const QProgressBar*, intptr_t, int);
bool miqt_exec_callback_QProgressBar_focusNextPrevChild(QProgressBar*, intptr_t, bool);
bool miqt_exec_callback_QProgressBar_eventFilter(QProgressBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QProgressBar_timerEvent(QProgressBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProgressBar_childEvent(QProgressBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProgressBar_customEvent(QProgressBar*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressBar_connectNotify(QProgressBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProgressBar_disconnectNotify(QProgressBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProgressBar final : public QProgressBar {
public:

	MiqtVirtualQProgressBar(QWidget* parent): QProgressBar(parent) {}
	MiqtVirtualQProgressBar(): QProgressBar() {}

	virtual ~MiqtVirtualQProgressBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__text = 0;

	// Subclass to allow providing a Go implementation
	virtual QString text() const override {
		if (handle__text == 0) {
			return QProgressBar::text();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QProgressBar_text(this, handle__text);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QProgressBar_virtualbase_text(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QProgressBar::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QProgressBar_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QProgressBar::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QProgressBar_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QProgressBar_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QProgressBar::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QProgressBar_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QProgressBar_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QProgressBar::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QProgressBar_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QProgressBar::devType();
		}

		int callback_return_value = miqt_exec_callback_QProgressBar_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QProgressBar_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QProgressBar::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QProgressBar_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QProgressBar_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QProgressBar::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QProgressBar_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QProgressBar_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QProgressBar::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QProgressBar_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QProgressBar_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QProgressBar::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QProgressBar_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QProgressBar_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QProgressBar::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QProgressBar::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QProgressBar::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QProgressBar::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QProgressBar::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QProgressBar::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QProgressBar::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QProgressBar::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QProgressBar::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QProgressBar::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QProgressBar::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QProgressBar::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QProgressBar::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QProgressBar::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QProgressBar::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QProgressBar::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QProgressBar::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QProgressBar::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QProgressBar::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QProgressBar::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QProgressBar::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QProgressBar::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QProgressBar::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QProgressBar::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QProgressBar_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QProgressBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QProgressBar::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QProgressBar_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QProgressBar::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QProgressBar_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QProgressBar_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QProgressBar::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QProgressBar_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QProgressBar_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QProgressBar::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QProgressBar_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QProgressBar_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QProgressBar::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QProgressBar_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QProgressBar_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QProgressBar::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QProgressBar_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QProgressBar::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QProgressBar_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QProgressBar_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QProgressBar::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QProgressBar_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QProgressBar_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QProgressBar::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QProgressBar_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QProgressBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QProgressBar::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QProgressBar::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QProgressBar::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QProgressBar_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QProgressBar_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QProgressBar::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProgressBar_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QProgressBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QProgressBar::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProgressBar_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QProgressBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QProgressBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionProgressBar* option);
	friend void QProgressBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QProgressBar_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QProgressBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QProgressBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QProgressBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QProgressBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QProgressBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QProgressBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QProgressBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QProgressBar* QProgressBar_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQProgressBar(parent);
}

QProgressBar* QProgressBar_new2() {
	return new (std::nothrow) MiqtVirtualQProgressBar();
}

void QProgressBar_virtbase(QProgressBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QProgressBar_metaObject(const QProgressBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressBar_metacast(QProgressBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProgressBar_tr(const char* s) {
	QString _ret = QProgressBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_trUtf8(const char* s) {
	QString _ret = QProgressBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QProgressBar_minimum(const QProgressBar* self) {
	return self->minimum();
}

int QProgressBar_maximum(const QProgressBar* self) {
	return self->maximum();
}

int QProgressBar_value(const QProgressBar* self) {
	return self->value();
}

struct miqt_string QProgressBar_text(const QProgressBar* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressBar_setTextVisible(QProgressBar* self, bool visible) {
	self->setTextVisible(visible);
}

bool QProgressBar_isTextVisible(const QProgressBar* self) {
	return self->isTextVisible();
}

int QProgressBar_alignment(const QProgressBar* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QProgressBar_setAlignment(QProgressBar* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

QSize* QProgressBar_sizeHint(const QProgressBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QProgressBar_minimumSizeHint(const QProgressBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QProgressBar_orientation(const QProgressBar* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QProgressBar_setInvertedAppearance(QProgressBar* self, bool invert) {
	self->setInvertedAppearance(invert);
}

bool QProgressBar_invertedAppearance(const QProgressBar* self) {
	return self->invertedAppearance();
}

void QProgressBar_setTextDirection(QProgressBar* self, int textDirection) {
	self->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

int QProgressBar_textDirection(const QProgressBar* self) {
	QProgressBar::Direction _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QProgressBar_setFormat(QProgressBar* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setFormat(format_QString);
}

void QProgressBar_resetFormat(QProgressBar* self) {
	self->resetFormat();
}

struct miqt_string QProgressBar_format(const QProgressBar* self) {
	QString _ret = self->format();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressBar_reset(QProgressBar* self) {
	self->reset();
}

void QProgressBar_setRange(QProgressBar* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressBar_setMinimum(QProgressBar* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressBar_setMaximum(QProgressBar* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressBar_setValue(QProgressBar* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QProgressBar_setOrientation(QProgressBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QProgressBar_valueChanged(QProgressBar* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QProgressBar_connect_valueChanged(QProgressBar* self, intptr_t slot) {
	QProgressBar::connect(self, static_cast<void (QProgressBar::*)(int)>(&QProgressBar::valueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QProgressBar_valueChanged(slot, sigval1);
	});
}

struct miqt_string QProgressBar_tr2(const char* s, const char* c) {
	QString _ret = QProgressBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_trUtf82(const char* s, const char* c) {
	QString _ret = QProgressBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressBar_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QProgressBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QProgressBar_override_virtual_text(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__text = slot;
	return true;
}

struct miqt_string QProgressBar_virtualbase_text(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QProgressBar_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QProgressBar_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::sizeHint());
}

bool QProgressBar_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QProgressBar_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::minimumSizeHint());
}

bool QProgressBar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QProgressBar_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::event(e);
}

bool QProgressBar_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QProgressBar_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::paintEvent(param1);
}

bool QProgressBar_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QProgressBar_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::devType();
}

bool QProgressBar_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QProgressBar_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::setVisible(visible);
}

bool QProgressBar_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QProgressBar_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::heightForWidth(static_cast<int>(param1));
}

bool QProgressBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QProgressBar_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::hasHeightForWidth();
}

bool QProgressBar_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QProgressBar_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::paintEngine();
}

bool QProgressBar_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QProgressBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::mousePressEvent(event);
}

bool QProgressBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QProgressBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::mouseReleaseEvent(event);
}

bool QProgressBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QProgressBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::mouseDoubleClickEvent(event);
}

bool QProgressBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::mouseMoveEvent(event);
}

bool QProgressBar_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QProgressBar_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::wheelEvent(event);
}

bool QProgressBar_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QProgressBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::keyPressEvent(event);
}

bool QProgressBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QProgressBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::keyReleaseEvent(event);
}

bool QProgressBar_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QProgressBar_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::focusInEvent(event);
}

bool QProgressBar_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QProgressBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::focusOutEvent(event);
}

bool QProgressBar_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QProgressBar_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::enterEvent(event);
}

bool QProgressBar_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::leaveEvent(event);
}

bool QProgressBar_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::moveEvent(event);
}

bool QProgressBar_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QProgressBar_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::resizeEvent(event);
}

bool QProgressBar_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QProgressBar_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::closeEvent(event);
}

bool QProgressBar_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QProgressBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::contextMenuEvent(event);
}

bool QProgressBar_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QProgressBar_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::tabletEvent(event);
}

bool QProgressBar_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QProgressBar_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::actionEvent(event);
}

bool QProgressBar_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QProgressBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::dragEnterEvent(event);
}

bool QProgressBar_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::dragMoveEvent(event);
}

bool QProgressBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QProgressBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::dragLeaveEvent(event);
}

bool QProgressBar_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QProgressBar_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::dropEvent(event);
}

bool QProgressBar_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QProgressBar_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::showEvent(event);
}

bool QProgressBar_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QProgressBar_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::hideEvent(event);
}

bool QProgressBar_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QProgressBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QProgressBar_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QProgressBar_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::changeEvent(param1);
}

bool QProgressBar_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QProgressBar_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::metric(static_cast<MiqtVirtualQProgressBar::PaintDeviceMetric>(param1));
}

bool QProgressBar_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QProgressBar_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::initPainter(painter);
}

bool QProgressBar_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QProgressBar_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::redirected(offset);
}

bool QProgressBar_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QProgressBar_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::sharedPainter();
}

bool QProgressBar_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QProgressBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::inputMethodEvent(param1);
}

bool QProgressBar_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QProgressBar_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQProgressBar*>(self)->QProgressBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QProgressBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QProgressBar_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::focusNextPrevChild(next);
}

bool QProgressBar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QProgressBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::eventFilter(watched, event);
}

bool QProgressBar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QProgressBar_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::timerEvent(event);
}

bool QProgressBar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QProgressBar_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::childEvent(event);
}

bool QProgressBar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QProgressBar_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::customEvent(event);
}

bool QProgressBar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QProgressBar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::connectNotify(*signal);
}

bool QProgressBar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QProgressBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProgressBar*>(self)->QProgressBar::disconnectNotify(*signal);
}

void QProgressBar_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionProgressBar* option) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QProgressBar_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QProgressBar_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QProgressBar_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QProgressBar_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QProgressBar_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QProgressBar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QProgressBar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QProgressBar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QProgressBar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQProgressBar* self_cast = dynamic_cast<MiqtVirtualQProgressBar*>( (QProgressBar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QProgressBar_delete(QProgressBar* self) {
	delete self;
}

