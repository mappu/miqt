#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSplashScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplashscreen.h>
#include "gen_qsplashscreen.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSplashScreen_messageChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QSplashScreen_event(QSplashScreen*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_drawContents(QSplashScreen*, intptr_t, QPainter*);
void miqt_exec_callback_QSplashScreen_mousePressEvent(QSplashScreen*, intptr_t, QMouseEvent*);
int miqt_exec_callback_QSplashScreen_devType(const QSplashScreen*, intptr_t);
void miqt_exec_callback_QSplashScreen_setVisible(QSplashScreen*, intptr_t, bool);
QSize* miqt_exec_callback_QSplashScreen_sizeHint(const QSplashScreen*, intptr_t);
QSize* miqt_exec_callback_QSplashScreen_minimumSizeHint(const QSplashScreen*, intptr_t);
int miqt_exec_callback_QSplashScreen_heightForWidth(const QSplashScreen*, intptr_t, int);
bool miqt_exec_callback_QSplashScreen_hasHeightForWidth(const QSplashScreen*, intptr_t);
QPaintEngine* miqt_exec_callback_QSplashScreen_paintEngine(const QSplashScreen*, intptr_t);
void miqt_exec_callback_QSplashScreen_mouseReleaseEvent(QSplashScreen*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_mouseDoubleClickEvent(QSplashScreen*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_mouseMoveEvent(QSplashScreen*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSplashScreen_wheelEvent(QSplashScreen*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSplashScreen_keyPressEvent(QSplashScreen*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplashScreen_keyReleaseEvent(QSplashScreen*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSplashScreen_focusInEvent(QSplashScreen*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplashScreen_focusOutEvent(QSplashScreen*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSplashScreen_enterEvent(QSplashScreen*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_leaveEvent(QSplashScreen*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_paintEvent(QSplashScreen*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSplashScreen_moveEvent(QSplashScreen*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSplashScreen_resizeEvent(QSplashScreen*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSplashScreen_closeEvent(QSplashScreen*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSplashScreen_contextMenuEvent(QSplashScreen*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSplashScreen_tabletEvent(QSplashScreen*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSplashScreen_actionEvent(QSplashScreen*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSplashScreen_dragEnterEvent(QSplashScreen*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSplashScreen_dragMoveEvent(QSplashScreen*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSplashScreen_dragLeaveEvent(QSplashScreen*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSplashScreen_dropEvent(QSplashScreen*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSplashScreen_showEvent(QSplashScreen*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSplashScreen_hideEvent(QSplashScreen*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSplashScreen_nativeEvent(QSplashScreen*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSplashScreen_changeEvent(QSplashScreen*, intptr_t, QEvent*);
int miqt_exec_callback_QSplashScreen_metric(const QSplashScreen*, intptr_t, int);
void miqt_exec_callback_QSplashScreen_initPainter(const QSplashScreen*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSplashScreen_redirected(const QSplashScreen*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSplashScreen_sharedPainter(const QSplashScreen*, intptr_t);
void miqt_exec_callback_QSplashScreen_inputMethodEvent(QSplashScreen*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSplashScreen_inputMethodQuery(const QSplashScreen*, intptr_t, int);
bool miqt_exec_callback_QSplashScreen_focusNextPrevChild(QSplashScreen*, intptr_t, bool);
bool miqt_exec_callback_QSplashScreen_eventFilter(QSplashScreen*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSplashScreen_timerEvent(QSplashScreen*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSplashScreen_childEvent(QSplashScreen*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSplashScreen_customEvent(QSplashScreen*, intptr_t, QEvent*);
void miqt_exec_callback_QSplashScreen_connectNotify(QSplashScreen*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSplashScreen_disconnectNotify(QSplashScreen*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSplashScreen final : public QSplashScreen {
public:

	MiqtVirtualQSplashScreen(QWidget* parent): QSplashScreen(parent) {}
	MiqtVirtualQSplashScreen(): QSplashScreen() {}
	MiqtVirtualQSplashScreen(QScreen* screen): QSplashScreen(screen) {}
	MiqtVirtualQSplashScreen(const QPixmap& pixmap): QSplashScreen(pixmap) {}
	MiqtVirtualQSplashScreen(const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(pixmap, f) {}
	MiqtVirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap): QSplashScreen(screen, pixmap) {}
	MiqtVirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(screen, pixmap, f) {}
	MiqtVirtualQSplashScreen(QWidget* parent, const QPixmap& pixmap): QSplashScreen(parent, pixmap) {}
	MiqtVirtualQSplashScreen(QWidget* parent, const QPixmap& pixmap, Qt::WindowFlags f): QSplashScreen(parent, pixmap, f) {}

	virtual ~MiqtVirtualQSplashScreen() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QSplashScreen::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QSplashScreen_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSplashScreen_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* painter) override {
		if (handle__drawContents == 0) {
			QSplashScreen::drawContents(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSplashScreen_drawContents(this, handle__drawContents, sigval1);

	}

	friend void QSplashScreen_virtualbase_drawContents(void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QSplashScreen::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QSplashScreen_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSplashScreen::devType();
		}

		int callback_return_value = miqt_exec_callback_QSplashScreen_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplashScreen_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSplashScreen::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSplashScreen_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSplashScreen_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSplashScreen::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplashScreen_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplashScreen_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSplashScreen::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSplashScreen_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSplashScreen_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSplashScreen::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSplashScreen_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplashScreen_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSplashScreen::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSplashScreen_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSplashScreen_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSplashScreen::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplashScreen_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSplashScreen_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QSplashScreen::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSplashScreen::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QSplashScreen::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSplashScreen::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSplashScreen::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSplashScreen::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSplashScreen::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSplashScreen::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSplashScreen::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSplashScreen::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QSplashScreen::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSplashScreen::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QSplashScreen::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSplashScreen::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSplashScreen::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSplashScreen::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSplashScreen::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSplashScreen::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSplashScreen::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSplashScreen::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSplashScreen::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSplashScreen::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSplashScreen::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QSplashScreen::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QSplashScreen_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSplashScreen_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QSplashScreen::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QSplashScreen_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSplashScreen::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSplashScreen_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSplashScreen_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSplashScreen::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSplashScreen_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSplashScreen_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSplashScreen::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSplashScreen_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSplashScreen_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSplashScreen::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSplashScreen_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSplashScreen_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSplashScreen::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSplashScreen_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSplashScreen::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSplashScreen_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSplashScreen_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSplashScreen::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSplashScreen_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSplashScreen_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSplashScreen::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSplashScreen_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSplashScreen_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSplashScreen::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSplashScreen::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSplashScreen::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSplashScreen_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSplashScreen_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSplashScreen::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplashScreen_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSplashScreen_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSplashScreen::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSplashScreen_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSplashScreen_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSplashScreen_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSplashScreen_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSplashScreen_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSplashScreen_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSplashScreen_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSplashScreen_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSplashScreen_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSplashScreen_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSplashScreen_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSplashScreen* QSplashScreen_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(parent);
}

QSplashScreen* QSplashScreen_new2() {
	return new (std::nothrow) MiqtVirtualQSplashScreen();
}

QSplashScreen* QSplashScreen_new3(QScreen* screen) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new4(QPixmap* pixmap) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new5(QPixmap* pixmap, int f) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(*pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new7(QScreen* screen, QPixmap* pixmap, int f) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(screen, *pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new8(QWidget* parent, QPixmap* pixmap) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(parent, *pixmap);
}

QSplashScreen* QSplashScreen_new9(QWidget* parent, QPixmap* pixmap, int f) {
	return new (std::nothrow) MiqtVirtualQSplashScreen(parent, *pixmap, static_cast<Qt::WindowFlags>(f));
}

void QSplashScreen_virtbase(QSplashScreen* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSplashScreen_metaObject(const QSplashScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplashScreen_metacast(QSplashScreen* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplashScreen_tr(const char* s) {
	QString _ret = QSplashScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplashScreen_trUtf8(const char* s) {
	QString _ret = QSplashScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_setPixmap(QSplashScreen* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_pixmap(const QSplashScreen* self) {
	return new QPixmap(self->pixmap());
}

void QSplashScreen_finish(QSplashScreen* self, QWidget* w) {
	self->finish(w);
}

void QSplashScreen_repaint(QSplashScreen* self) {
	self->repaint();
}

struct miqt_string QSplashScreen_message(const QSplashScreen* self) {
	QString _ret = self->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_showMessage(QSplashScreen* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString);
}

void QSplashScreen_clearMessage(QSplashScreen* self) {
	self->clearMessage();
}

void QSplashScreen_messageChanged(QSplashScreen* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->messageChanged(message_QString);
}

void QSplashScreen_connect_messageChanged(QSplashScreen* self, intptr_t slot) {
	QSplashScreen::connect(self, static_cast<void (QSplashScreen::*)(const QString&)>(&QSplashScreen::messageChanged), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QSplashScreen_messageChanged(slot, sigval1);
	});
}

struct miqt_string QSplashScreen_tr2(const char* s, const char* c) {
	QString _ret = QSplashScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplashScreen_tr3(const char* s, const char* c, int n) {
	QString _ret = QSplashScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplashScreen_trUtf82(const char* s, const char* c) {
	QString _ret = QSplashScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplashScreen_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSplashScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplashScreen_showMessage2(QSplashScreen* self, struct miqt_string message, int alignment) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString, static_cast<int>(alignment));
}

void QSplashScreen_showMessage3(QSplashScreen* self, struct miqt_string message, int alignment, QColor* color) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString, static_cast<int>(alignment), *color);
}

bool QSplashScreen_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSplashScreen_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::event(e);
}

bool QSplashScreen_override_virtual_drawContents(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = slot;
	return true;
}

void QSplashScreen_virtualbase_drawContents(void* self, QPainter* painter) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::drawContents(painter);
}

bool QSplashScreen_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::mousePressEvent(param1);
}

bool QSplashScreen_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSplashScreen_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::devType();
}

bool QSplashScreen_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSplashScreen_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::setVisible(visible);
}

bool QSplashScreen_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSplashScreen_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::sizeHint());
}

bool QSplashScreen_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSplashScreen_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::minimumSizeHint());
}

bool QSplashScreen_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSplashScreen_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::heightForWidth(static_cast<int>(param1));
}

bool QSplashScreen_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSplashScreen_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::hasHeightForWidth();
}

bool QSplashScreen_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSplashScreen_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::paintEngine();
}

bool QSplashScreen_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::mouseReleaseEvent(event);
}

bool QSplashScreen_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::mouseDoubleClickEvent(event);
}

bool QSplashScreen_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::mouseMoveEvent(event);
}

bool QSplashScreen_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::wheelEvent(event);
}

bool QSplashScreen_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::keyPressEvent(event);
}

bool QSplashScreen_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::keyReleaseEvent(event);
}

bool QSplashScreen_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::focusInEvent(event);
}

bool QSplashScreen_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::focusOutEvent(event);
}

bool QSplashScreen_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::enterEvent(event);
}

bool QSplashScreen_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::leaveEvent(event);
}

bool QSplashScreen_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::paintEvent(event);
}

bool QSplashScreen_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::moveEvent(event);
}

bool QSplashScreen_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::resizeEvent(event);
}

bool QSplashScreen_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::closeEvent(event);
}

bool QSplashScreen_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::contextMenuEvent(event);
}

bool QSplashScreen_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::tabletEvent(event);
}

bool QSplashScreen_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::actionEvent(event);
}

bool QSplashScreen_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::dragEnterEvent(event);
}

bool QSplashScreen_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::dragMoveEvent(event);
}

bool QSplashScreen_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::dragLeaveEvent(event);
}

bool QSplashScreen_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::dropEvent(event);
}

bool QSplashScreen_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::showEvent(event);
}

bool QSplashScreen_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::hideEvent(event);
}

bool QSplashScreen_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSplashScreen_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QSplashScreen_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::changeEvent(param1);
}

bool QSplashScreen_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSplashScreen_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::metric(static_cast<MiqtVirtualQSplashScreen::PaintDeviceMetric>(param1));
}

bool QSplashScreen_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSplashScreen_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::initPainter(painter);
}

bool QSplashScreen_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSplashScreen_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::redirected(offset);
}

bool QSplashScreen_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSplashScreen_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::sharedPainter();
}

bool QSplashScreen_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::inputMethodEvent(param1);
}

bool QSplashScreen_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSplashScreen_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSplashScreen*>(self)->QSplashScreen::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSplashScreen_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSplashScreen_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::focusNextPrevChild(next);
}

bool QSplashScreen_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSplashScreen_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::eventFilter(watched, event);
}

bool QSplashScreen_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::timerEvent(event);
}

bool QSplashScreen_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::childEvent(event);
}

bool QSplashScreen_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSplashScreen_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::customEvent(event);
}

bool QSplashScreen_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSplashScreen_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::connectNotify(*signal);
}

bool QSplashScreen_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSplashScreen_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSplashScreen*>(self)->QSplashScreen::disconnectNotify(*signal);
}

void QSplashScreen_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSplashScreen_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSplashScreen_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSplashScreen_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSplashScreen_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSplashScreen_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSplashScreen_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSplashScreen_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSplashScreen_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSplashScreen* self_cast = dynamic_cast<MiqtVirtualQSplashScreen*>( (QSplashScreen*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSplashScreen_delete(QSplashScreen* self) {
	delete self;
}

