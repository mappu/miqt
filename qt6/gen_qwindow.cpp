#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCursor>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qwindow.h>
#include "gen_qwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWindow_screenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QWindow_modalityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_windowStateChanged(intptr_t, int);
void miqt_exec_callback_QWindow_windowTitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWindow_xChanged(intptr_t, int);
void miqt_exec_callback_QWindow_yChanged(intptr_t, int);
void miqt_exec_callback_QWindow_widthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_heightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_minimumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_minimumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_maximumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_maximumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_visibleChanged(intptr_t, bool);
void miqt_exec_callback_QWindow_visibilityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_activeChanged(intptr_t);
void miqt_exec_callback_QWindow_contentOrientationChanged(intptr_t, int);
void miqt_exec_callback_QWindow_focusObjectChanged(intptr_t, QObject*);
void miqt_exec_callback_QWindow_opacityChanged(intptr_t, double);
void miqt_exec_callback_QWindow_transientParentChanged(intptr_t, QWindow*);
int miqt_exec_callback_QWindow_surfaceType(const QWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QWindow_format(const QWindow*, intptr_t);
QSize* miqt_exec_callback_QWindow_size(const QWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QWindow_accessibleRoot(const QWindow*, intptr_t);
QObject* miqt_exec_callback_QWindow_focusObject(const QWindow*, intptr_t);
void miqt_exec_callback_QWindow_exposeEvent(QWindow*, intptr_t, QExposeEvent*);
void miqt_exec_callback_QWindow_resizeEvent(QWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWindow_paintEvent(QWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWindow_moveEvent(QWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWindow_focusInEvent(QWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWindow_focusOutEvent(QWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWindow_showEvent(QWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWindow_hideEvent(QWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWindow_closeEvent(QWindow*, intptr_t, QCloseEvent*);
bool miqt_exec_callback_QWindow_event(QWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QWindow_keyPressEvent(QWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWindow_keyReleaseEvent(QWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWindow_mousePressEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_mouseReleaseEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_mouseDoubleClickEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_mouseMoveEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_wheelEvent(QWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWindow_touchEvent(QWindow*, intptr_t, QTouchEvent*);
void miqt_exec_callback_QWindow_tabletEvent(QWindow*, intptr_t, QTabletEvent*);
bool miqt_exec_callback_QWindow_nativeEvent(QWindow*, intptr_t, struct miqt_string, void*, intptr_t*);
bool miqt_exec_callback_QWindow_eventFilter(QWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWindow_timerEvent(QWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWindow_childEvent(QWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWindow_customEvent(QWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QWindow_connectNotify(QWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWindow_disconnectNotify(QWindow*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWindow final : public QWindow {
public:

	MiqtVirtualQWindow(): QWindow() {};
	MiqtVirtualQWindow(QWindow* parent): QWindow(parent) {};
	MiqtVirtualQWindow(QScreen* screen): QWindow(screen) {};

	virtual ~MiqtVirtualQWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__surfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__surfaceType == 0) {
			return QWindow::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QWindow_surfaceType(this, handle__surfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_surfaceType() const {

		QSurface::SurfaceType _ret = QWindow::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__format == 0) {
			return QWindow::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QWindow_format(this, handle__format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_format() const {

		return new QSurfaceFormat(QWindow::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__size == 0) {
			return QWindow::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWindow_size(this, handle__size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_size() const {

		return new QSize(QWindow::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accessibleRoot = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (handle__accessibleRoot == 0) {
			return QWindow::accessibleRoot();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QWindow_accessibleRoot(this, handle__accessibleRoot);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_accessibleRoot() const {

		return QWindow::accessibleRoot();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (handle__focusObject == 0) {
			return QWindow::focusObject();
		}
		

		QObject* callback_return_value = miqt_exec_callback_QWindow_focusObject(this, handle__focusObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_focusObject() const {

		return QWindow::focusObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exposeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (handle__exposeEvent == 0) {
			QWindow::exposeEvent(param1);
			return;
		}
		
		QExposeEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_exposeEvent(this, handle__exposeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_exposeEvent(QExposeEvent* param1) {

		QWindow::exposeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QWindow::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QWindow::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QWindow::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QWindow::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__moveEvent == 0) {
			QWindow::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* param1) {

		QWindow::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QWindow::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QWindow::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QWindow::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QWindow::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QWindow::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QWindow::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__hideEvent == 0) {
			QWindow::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* param1) {

		QWindow::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QWindow::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QWindow::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWindow::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWindow_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWindow::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QWindow::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QWindow::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QWindow::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* param1) {

		QWindow::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QWindow::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QWindow::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QWindow::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QWindow::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWindow::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* param1) {

		QWindow::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QWindow::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QWindow::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QWindow::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QWindow::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__touchEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void touchEvent(QTouchEvent* param1) override {
		if (handle__touchEvent == 0) {
			QWindow::touchEvent(param1);
			return;
		}
		
		QTouchEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_touchEvent(this, handle__touchEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_touchEvent(QTouchEvent* param1) {

		QWindow::touchEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (handle__tabletEvent == 0) {
			QWindow::tabletEvent(param1);
			return;
		}
		
		QTabletEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* param1) {

		QWindow::tabletEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QWindow::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QWindow_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWindow::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWindow_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWindow::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWindow::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWindow_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWindow::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWindow::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWindow_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWindow::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWindow::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWindow_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWindow::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWindow::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWindow_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWindow::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWindow::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWindow_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWindow::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void* QWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWindow* QWindow_new() {
	return new MiqtVirtualQWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
	return new MiqtVirtualQWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
	return new MiqtVirtualQWindow(screen);
}

void QWindow_virtbase(QWindow* src, QObject** outptr_QObject, QSurface** outptr_QSurface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QSurface = static_cast<QSurface*>(src);
}

QMetaObject* QWindow_metaObject(const QWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWindow_metacast(QWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWindow_tr(const char* s) {
	QString _ret = QWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setSurfaceType(QWindow* self, int surfaceType) {
	self->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

int QWindow_surfaceType(const QWindow* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

bool QWindow_isVisible(const QWindow* self) {
	return self->isVisible();
}

int QWindow_visibility(const QWindow* self) {
	QWindow::Visibility _ret = self->visibility();
	return static_cast<int>(_ret);
}

void QWindow_setVisibility(QWindow* self, int v) {
	self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_winId(const QWindow* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

QWindow* QWindow_parent(const QWindow* self) {
	return self->parent();
}

void QWindow_setParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_isTopLevel(const QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_isModal(const QWindow* self) {
	return self->isModal();
}

int QWindow_modality(const QWindow* self) {
	Qt::WindowModality _ret = self->modality();
	return static_cast<int>(_ret);
}

void QWindow_setModality(QWindow* self, int modality) {
	self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_setFormat(QWindow* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_format(const QWindow* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QWindow_requestedFormat(const QWindow* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_setFlags(QWindow* self, int flags) {
	self->setFlags(static_cast<Qt::WindowFlags>(flags));
}

int QWindow_flags(const QWindow* self) {
	Qt::WindowFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWindow_setFlag(QWindow* self, int param1) {
	self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_type(const QWindow* self) {
	Qt::WindowType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QWindow_title(const QWindow* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setOpacity(QWindow* self, double level) {
	self->setOpacity(static_cast<qreal>(level));
}

double QWindow_opacity(const QWindow* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QWindow_setMask(QWindow* self, QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_mask(const QWindow* self) {
	return new QRegion(self->mask());
}

bool QWindow_isActive(const QWindow* self) {
	return self->isActive();
}

void QWindow_reportContentOrientationChange(QWindow* self, int orientation) {
	self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_contentOrientation(const QWindow* self) {
	Qt::ScreenOrientation _ret = self->contentOrientation();
	return static_cast<int>(_ret);
}

double QWindow_devicePixelRatio(const QWindow* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

int QWindow_windowState(const QWindow* self) {
	Qt::WindowState _ret = self->windowState();
	return static_cast<int>(_ret);
}

int QWindow_windowStates(const QWindow* self) {
	Qt::WindowStates _ret = self->windowStates();
	return static_cast<int>(_ret);
}

void QWindow_setWindowState(QWindow* self, int state) {
	self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_setWindowStates(QWindow* self, int states) {
	self->setWindowStates(static_cast<Qt::WindowStates>(states));
}

void QWindow_setTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_transientParent(const QWindow* self) {
	return self->transientParent();
}

bool QWindow_isAncestorOf(const QWindow* self, QWindow* child) {
	return self->isAncestorOf(child);
}

bool QWindow_isExposed(const QWindow* self) {
	return self->isExposed();
}

int QWindow_minimumWidth(const QWindow* self) {
	return self->minimumWidth();
}

int QWindow_minimumHeight(const QWindow* self) {
	return self->minimumHeight();
}

int QWindow_maximumWidth(const QWindow* self) {
	return self->maximumWidth();
}

int QWindow_maximumHeight(const QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_minimumSize(const QWindow* self) {
	return new QSize(self->minimumSize());
}

QSize* QWindow_maximumSize(const QWindow* self) {
	return new QSize(self->maximumSize());
}

QSize* QWindow_baseSize(const QWindow* self) {
	return new QSize(self->baseSize());
}

QSize* QWindow_sizeIncrement(const QWindow* self) {
	return new QSize(self->sizeIncrement());
}

void QWindow_setMinimumSize(QWindow* self, QSize* size) {
	self->setMinimumSize(*size);
}

void QWindow_setMaximumSize(QWindow* self, QSize* size) {
	self->setMaximumSize(*size);
}

void QWindow_setBaseSize(QWindow* self, QSize* size) {
	self->setBaseSize(*size);
}

void QWindow_setSizeIncrement(QWindow* self, QSize* size) {
	self->setSizeIncrement(*size);
}

QRect* QWindow_geometry(const QWindow* self) {
	return new QRect(self->geometry());
}

QMargins* QWindow_frameMargins(const QWindow* self) {
	return new QMargins(self->frameMargins());
}

QRect* QWindow_frameGeometry(const QWindow* self) {
	return new QRect(self->frameGeometry());
}

QPoint* QWindow_framePosition(const QWindow* self) {
	return new QPoint(self->framePosition());
}

void QWindow_setFramePosition(QWindow* self, QPoint* point) {
	self->setFramePosition(*point);
}

int QWindow_width(const QWindow* self) {
	return self->width();
}

int QWindow_height(const QWindow* self) {
	return self->height();
}

int QWindow_x(const QWindow* self) {
	return self->x();
}

int QWindow_y(const QWindow* self) {
	return self->y();
}

QSize* QWindow_size(const QWindow* self) {
	return new QSize(self->size());
}

QPoint* QWindow_position(const QWindow* self) {
	return new QPoint(self->position());
}

void QWindow_setPosition(QWindow* self, QPoint* pt) {
	self->setPosition(*pt);
}

void QWindow_setPosition2(QWindow* self, int posx, int posy) {
	self->setPosition(static_cast<int>(posx), static_cast<int>(posy));
}

void QWindow_resize(QWindow* self, QSize* newSize) {
	self->resize(*newSize);
}

void QWindow_resize2(QWindow* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWindow_setFilePath(QWindow* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setFilePath(filePath_QString);
}

struct miqt_string QWindow_filePath(const QWindow* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setIcon(QWindow* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_icon(const QWindow* self) {
	return new QIcon(self->icon());
}

void QWindow_destroy(QWindow* self) {
	self->destroy();
}

bool QWindow_setKeyboardGrabEnabled(QWindow* self, bool grab) {
	return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_setMouseGrabEnabled(QWindow* self, bool grab) {
	return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_screen(const QWindow* self) {
	return self->screen();
}

void QWindow_setScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_accessibleRoot(const QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_focusObject(const QWindow* self) {
	return self->focusObject();
}

QPointF* QWindow_mapToGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapToGlobal(*pos));
}

QPointF* QWindow_mapFromGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapFromGlobal(*pos));
}

QPoint* QWindow_mapToGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_mapFromGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_cursor(const QWindow* self) {
	return new QCursor(self->cursor());
}

void QWindow_setCursor(QWindow* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_unsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_fromWinId(uintptr_t id) {
	return QWindow::fromWinId(static_cast<WId>(id));
}

void QWindow_requestActivate(QWindow* self) {
	self->requestActivate();
}

void QWindow_setVisible(QWindow* self, bool visible) {
	self->setVisible(visible);
}

void QWindow_show(QWindow* self) {
	self->show();
}

void QWindow_hide(QWindow* self) {
	self->hide();
}

void QWindow_showMinimized(QWindow* self) {
	self->showMinimized();
}

void QWindow_showMaximized(QWindow* self) {
	self->showMaximized();
}

void QWindow_showFullScreen(QWindow* self) {
	self->showFullScreen();
}

void QWindow_showNormal(QWindow* self) {
	self->showNormal();
}

bool QWindow_close(QWindow* self) {
	return self->close();
}

void QWindow_raise(QWindow* self) {
	self->raise();
}

void QWindow_lower(QWindow* self) {
	self->lower();
}

bool QWindow_startSystemResize(QWindow* self, int edges) {
	return self->startSystemResize(static_cast<Qt::Edges>(edges));
}

bool QWindow_startSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_setTitle(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QWindow_setX(QWindow* self, int arg) {
	self->setX(static_cast<int>(arg));
}

void QWindow_setY(QWindow* self, int arg) {
	self->setY(static_cast<int>(arg));
}

void QWindow_setWidth(QWindow* self, int arg) {
	self->setWidth(static_cast<int>(arg));
}

void QWindow_setHeight(QWindow* self, int arg) {
	self->setHeight(static_cast<int>(arg));
}

void QWindow_setGeometry(QWindow* self, int posx, int posy, int w, int h) {
	self->setGeometry(static_cast<int>(posx), static_cast<int>(posy), static_cast<int>(w), static_cast<int>(h));
}

void QWindow_setGeometryWithRect(QWindow* self, QRect* rect) {
	self->setGeometry(*rect);
}

void QWindow_setMinimumWidth(QWindow* self, int w) {
	self->setMinimumWidth(static_cast<int>(w));
}

void QWindow_setMinimumHeight(QWindow* self, int h) {
	self->setMinimumHeight(static_cast<int>(h));
}

void QWindow_setMaximumWidth(QWindow* self, int w) {
	self->setMaximumWidth(static_cast<int>(w));
}

void QWindow_setMaximumHeight(QWindow* self, int h) {
	self->setMaximumHeight(static_cast<int>(h));
}

void QWindow_alert(QWindow* self, int msec) {
	self->alert(static_cast<int>(msec));
}

void QWindow_requestUpdate(QWindow* self) {
	self->requestUpdate();
}

void QWindow_screenChanged(QWindow* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QWindow_connect_screenChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QScreen*)>(&QWindow::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QWindow_screenChanged(slot, sigval1);
	});
}

void QWindow_modalityChanged(QWindow* self, int modality) {
	self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_connect_modalityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), self, [=](Qt::WindowModality modality) {
		Qt::WindowModality modality_ret = modality;
		int sigval1 = static_cast<int>(modality_ret);
		miqt_exec_callback_QWindow_modalityChanged(slot, sigval1);
	});
}

void QWindow_windowStateChanged(QWindow* self, int windowState) {
	self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_connect_windowStateChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), self, [=](Qt::WindowState windowState) {
		Qt::WindowState windowState_ret = windowState;
		int sigval1 = static_cast<int>(windowState_ret);
		miqt_exec_callback_QWindow_windowStateChanged(slot, sigval1);
	});
}

void QWindow_windowTitleChanged(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->windowTitleChanged(title_QString);
}

void QWindow_connect_windowTitleChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(const QString&)>(&QWindow::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWindow_windowTitleChanged(slot, sigval1);
	});
}

void QWindow_xChanged(QWindow* self, int arg) {
	self->xChanged(static_cast<int>(arg));
}

void QWindow_connect_xChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_xChanged(slot, sigval1);
	});
}

void QWindow_yChanged(QWindow* self, int arg) {
	self->yChanged(static_cast<int>(arg));
}

void QWindow_connect_yChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_yChanged(slot, sigval1);
	});
}

void QWindow_widthChanged(QWindow* self, int arg) {
	self->widthChanged(static_cast<int>(arg));
}

void QWindow_connect_widthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_widthChanged(slot, sigval1);
	});
}

void QWindow_heightChanged(QWindow* self, int arg) {
	self->heightChanged(static_cast<int>(arg));
}

void QWindow_connect_heightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_heightChanged(slot, sigval1);
	});
}

void QWindow_minimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_minimumWidthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_minimumWidthChanged(slot, sigval1);
	});
}

void QWindow_minimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_minimumHeightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_minimumHeightChanged(slot, sigval1);
	});
}

void QWindow_maximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_maximumWidthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_maximumWidthChanged(slot, sigval1);
	});
}

void QWindow_maximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_maximumHeightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_maximumHeightChanged(slot, sigval1);
	});
}

void QWindow_visibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_connect_visibleChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), self, [=](bool arg) {
		bool sigval1 = arg;
		miqt_exec_callback_QWindow_visibleChanged(slot, sigval1);
	});
}

void QWindow_visibilityChanged(QWindow* self, int visibility) {
	self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_connect_visibilityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), self, [=](QWindow::Visibility visibility) {
		QWindow::Visibility visibility_ret = visibility;
		int sigval1 = static_cast<int>(visibility_ret);
		miqt_exec_callback_QWindow_visibilityChanged(slot, sigval1);
	});
}

void QWindow_activeChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_connect_activeChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)()>(&QWindow::activeChanged), self, [=]() {
		miqt_exec_callback_QWindow_activeChanged(slot);
	});
}

void QWindow_contentOrientationChanged(QWindow* self, int orientation) {
	self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_connect_contentOrientationChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QWindow_contentOrientationChanged(slot, sigval1);
	});
}

void QWindow_focusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_connect_focusObjectChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QObject*)>(&QWindow::focusObjectChanged), self, [=](QObject* object) {
		QObject* sigval1 = object;
		miqt_exec_callback_QWindow_focusObjectChanged(slot, sigval1);
	});
}

void QWindow_opacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QWindow_connect_opacityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(qreal)>(&QWindow::opacityChanged), self, [=](qreal opacity) {
		qreal opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QWindow_opacityChanged(slot, sigval1);
	});
}

void QWindow_transientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_connect_transientParentChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QWindow*)>(&QWindow::transientParentChanged), self, [=](QWindow* transientParent) {
		QWindow* sigval1 = transientParent;
		miqt_exec_callback_QWindow_transientParentChanged(slot, sigval1);
	});
}

struct miqt_string QWindow_tr2(const char* s, const char* c) {
	QString _ret = QWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWindow* QWindow_parent1(const QWindow* self, int mode) {
	return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_setFlag2(QWindow* self, int param1, bool on) {
	self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_isAncestorOf2(const QWindow* self, QWindow* child, int mode) {
	return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

bool QWindow_override_virtual_surfaceType(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__surfaceType = slot;
	return true;
}

int QWindow_virtualbase_surfaceType(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_surfaceType();
}

bool QWindow_override_virtual_format(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__format = slot;
	return true;
}

QSurfaceFormat* QWindow_virtualbase_format(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_format();
}

bool QWindow_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

QSize* QWindow_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_size();
}

bool QWindow_override_virtual_accessibleRoot(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accessibleRoot = slot;
	return true;
}

QAccessibleInterface* QWindow_virtualbase_accessibleRoot(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_accessibleRoot();
}

bool QWindow_override_virtual_focusObject(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusObject = slot;
	return true;
}

QObject* QWindow_virtualbase_focusObject(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_focusObject();
}

bool QWindow_override_virtual_exposeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exposeEvent = slot;
	return true;
}

void QWindow_virtualbase_exposeEvent(void* self, QExposeEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_exposeEvent(param1);
}

bool QWindow_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWindow_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_resizeEvent(param1);
}

bool QWindow_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWindow_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_paintEvent(param1);
}

bool QWindow_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWindow_virtualbase_moveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_moveEvent(param1);
}

bool QWindow_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWindow_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_focusInEvent(param1);
}

bool QWindow_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QWindow_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWindow_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_showEvent(param1);
}

bool QWindow_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWindow_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_hideEvent(param1);
}

bool QWindow_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWindow_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_closeEvent(param1);
}

bool QWindow_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWindow_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_event(param1);
}

bool QWindow_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_keyReleaseEvent(param1);
}

bool QWindow_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_mouseDoubleClickEvent(param1);
}

bool QWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QWindow_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWindow_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_wheelEvent(param1);
}

bool QWindow_override_virtual_touchEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__touchEvent = slot;
	return true;
}

void QWindow_virtualbase_touchEvent(void* self, QTouchEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_touchEvent(param1);
}

bool QWindow_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWindow_virtualbase_tabletEvent(void* self, QTabletEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_tabletEvent(param1);
}

bool QWindow_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWindow_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWindow_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_timerEvent(event);
}

bool QWindow_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWindow_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_childEvent(event);
}

bool QWindow_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWindow_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_customEvent(event);
}

bool QWindow_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_connectNotify(signal);
}

bool QWindow_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_disconnectNotify(signal);
}

void* QWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->resolveInterface(name, static_cast<int>(revision));

}

QObject* QWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWindow_delete(QWindow* self) {
	delete self;
}

