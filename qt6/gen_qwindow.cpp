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

void miqt_exec_callback_QWindow_ScreenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QWindow_ModalityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_WindowStateChanged(intptr_t, int);
void miqt_exec_callback_QWindow_WindowTitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWindow_XChanged(intptr_t, int);
void miqt_exec_callback_QWindow_YChanged(intptr_t, int);
void miqt_exec_callback_QWindow_WidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_HeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_MinimumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_MinimumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_MaximumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_MaximumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_VisibleChanged(intptr_t, bool);
void miqt_exec_callback_QWindow_VisibilityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_ActiveChanged(intptr_t);
void miqt_exec_callback_QWindow_ContentOrientationChanged(intptr_t, int);
void miqt_exec_callback_QWindow_FocusObjectChanged(intptr_t, QObject*);
void miqt_exec_callback_QWindow_OpacityChanged(intptr_t, double);
void miqt_exec_callback_QWindow_TransientParentChanged(intptr_t, QWindow*);
int miqt_exec_callback_QWindow_SurfaceType(const QWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QWindow_Format(const QWindow*, intptr_t);
QSize* miqt_exec_callback_QWindow_Size(const QWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QWindow_AccessibleRoot(const QWindow*, intptr_t);
QObject* miqt_exec_callback_QWindow_FocusObject(const QWindow*, intptr_t);
void miqt_exec_callback_QWindow_ExposeEvent(QWindow*, intptr_t, QExposeEvent*);
void miqt_exec_callback_QWindow_ResizeEvent(QWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWindow_PaintEvent(QWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWindow_MoveEvent(QWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWindow_FocusInEvent(QWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWindow_FocusOutEvent(QWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWindow_ShowEvent(QWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWindow_HideEvent(QWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWindow_CloseEvent(QWindow*, intptr_t, QCloseEvent*);
bool miqt_exec_callback_QWindow_Event(QWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QWindow_KeyPressEvent(QWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWindow_KeyReleaseEvent(QWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWindow_MousePressEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_MouseReleaseEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_MouseDoubleClickEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_MouseMoveEvent(QWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWindow_WheelEvent(QWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWindow_TouchEvent(QWindow*, intptr_t, QTouchEvent*);
void miqt_exec_callback_QWindow_TabletEvent(QWindow*, intptr_t, QTabletEvent*);
bool miqt_exec_callback_QWindow_NativeEvent(QWindow*, intptr_t, struct miqt_string, void*, intptr_t*);
bool miqt_exec_callback_QWindow_EventFilter(QWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWindow_TimerEvent(QWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWindow_ChildEvent(QWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWindow_CustomEvent(QWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QWindow_ConnectNotify(QWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWindow_DisconnectNotify(QWindow*, intptr_t, QMetaMethod*);
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
	intptr_t handle__SurfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__SurfaceType == 0) {
			return QWindow::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QWindow_SurfaceType(this, handle__SurfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SurfaceType() const {

		QSurface::SurfaceType _ret = QWindow::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__Format == 0) {
			return QWindow::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QWindow_Format(this, handle__Format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_Format() const {

		return new QSurfaceFormat(QWindow::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__Size == 0) {
			return QWindow::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWindow_Size(this, handle__Size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Size() const {

		return new QSize(QWindow::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AccessibleRoot = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (handle__AccessibleRoot == 0) {
			return QWindow::accessibleRoot();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QWindow_AccessibleRoot(this, handle__AccessibleRoot);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_AccessibleRoot() const {

		return QWindow::accessibleRoot();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (handle__FocusObject == 0) {
			return QWindow::focusObject();
		}
		

		QObject* callback_return_value = miqt_exec_callback_QWindow_FocusObject(this, handle__FocusObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_FocusObject() const {

		return QWindow::focusObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExposeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (handle__ExposeEvent == 0) {
			QWindow::exposeEvent(param1);
			return;
		}
		
		QExposeEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_ExposeEvent(this, handle__ExposeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ExposeEvent(QExposeEvent* param1) {

		QWindow::exposeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QWindow::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QWindow::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QWindow::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QWindow::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__MoveEvent == 0) {
			QWindow::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* param1) {

		QWindow::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QWindow::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QWindow::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QWindow::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QWindow::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QWindow::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QWindow::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QWindow::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QWindow::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QWindow::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QWindow::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWindow::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWindow_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWindow::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QWindow::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QWindow::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__KeyReleaseEvent == 0) {
			QWindow::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* param1) {

		QWindow::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QWindow::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QWindow::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QWindow::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QWindow::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWindow::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QWindow::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QWindow::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QWindow::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QWindow::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QWindow::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TouchEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void touchEvent(QTouchEvent* param1) override {
		if (handle__TouchEvent == 0) {
			QWindow::touchEvent(param1);
			return;
		}
		
		QTouchEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_TouchEvent(this, handle__TouchEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TouchEvent(QTouchEvent* param1) {

		QWindow::touchEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (handle__TabletEvent == 0) {
			QWindow::tabletEvent(param1);
			return;
		}
		
		QTabletEvent* sigval1 = param1;

		miqt_exec_callback_QWindow_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* param1) {

		QWindow::tabletEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QWindow_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWindow::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWindow_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWindow::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWindow::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWindow_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWindow::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWindow::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWindow_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWindow::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWindow::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWindow_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWindow::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWindow::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWindow_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWindow::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWindow::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWindow_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWindow::disconnectNotify(*signal);

	}

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

QMetaObject* QWindow_MetaObject(const QWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWindow_Metacast(QWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWindow_Tr(const char* s) {
	QString _ret = QWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_SetSurfaceType(QWindow* self, int surfaceType) {
	self->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

int QWindow_SurfaceType(const QWindow* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

bool QWindow_IsVisible(const QWindow* self) {
	return self->isVisible();
}

int QWindow_Visibility(const QWindow* self) {
	QWindow::Visibility _ret = self->visibility();
	return static_cast<int>(_ret);
}

void QWindow_SetVisibility(QWindow* self, int v) {
	self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_Create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_WinId(const QWindow* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

QWindow* QWindow_Parent(const QWindow* self) {
	return self->parent();
}

void QWindow_SetParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_IsTopLevel(const QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_IsModal(const QWindow* self) {
	return self->isModal();
}

int QWindow_Modality(const QWindow* self) {
	Qt::WindowModality _ret = self->modality();
	return static_cast<int>(_ret);
}

void QWindow_SetModality(QWindow* self, int modality) {
	self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_Format(const QWindow* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_SetFlags(QWindow* self, int flags) {
	self->setFlags(static_cast<Qt::WindowFlags>(flags));
}

int QWindow_Flags(const QWindow* self) {
	Qt::WindowFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWindow_SetFlag(QWindow* self, int param1) {
	self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_Type(const QWindow* self) {
	Qt::WindowType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QWindow_Title(const QWindow* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_SetOpacity(QWindow* self, double level) {
	self->setOpacity(static_cast<qreal>(level));
}

double QWindow_Opacity(const QWindow* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QWindow_SetMask(QWindow* self, QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_Mask(const QWindow* self) {
	return new QRegion(self->mask());
}

bool QWindow_IsActive(const QWindow* self) {
	return self->isActive();
}

void QWindow_ReportContentOrientationChange(QWindow* self, int orientation) {
	self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_ContentOrientation(const QWindow* self) {
	Qt::ScreenOrientation _ret = self->contentOrientation();
	return static_cast<int>(_ret);
}

double QWindow_DevicePixelRatio(const QWindow* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

int QWindow_WindowState(const QWindow* self) {
	Qt::WindowState _ret = self->windowState();
	return static_cast<int>(_ret);
}

int QWindow_WindowStates(const QWindow* self) {
	Qt::WindowStates _ret = self->windowStates();
	return static_cast<int>(_ret);
}

void QWindow_SetWindowState(QWindow* self, int state) {
	self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_SetWindowStates(QWindow* self, int states) {
	self->setWindowStates(static_cast<Qt::WindowStates>(states));
}

void QWindow_SetTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_TransientParent(const QWindow* self) {
	return self->transientParent();
}

bool QWindow_IsAncestorOf(const QWindow* self, QWindow* child) {
	return self->isAncestorOf(child);
}

bool QWindow_IsExposed(const QWindow* self) {
	return self->isExposed();
}

int QWindow_MinimumWidth(const QWindow* self) {
	return self->minimumWidth();
}

int QWindow_MinimumHeight(const QWindow* self) {
	return self->minimumHeight();
}

int QWindow_MaximumWidth(const QWindow* self) {
	return self->maximumWidth();
}

int QWindow_MaximumHeight(const QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_MinimumSize(const QWindow* self) {
	return new QSize(self->minimumSize());
}

QSize* QWindow_MaximumSize(const QWindow* self) {
	return new QSize(self->maximumSize());
}

QSize* QWindow_BaseSize(const QWindow* self) {
	return new QSize(self->baseSize());
}

QSize* QWindow_SizeIncrement(const QWindow* self) {
	return new QSize(self->sizeIncrement());
}

void QWindow_SetMinimumSize(QWindow* self, QSize* size) {
	self->setMinimumSize(*size);
}

void QWindow_SetMaximumSize(QWindow* self, QSize* size) {
	self->setMaximumSize(*size);
}

void QWindow_SetBaseSize(QWindow* self, QSize* size) {
	self->setBaseSize(*size);
}

void QWindow_SetSizeIncrement(QWindow* self, QSize* size) {
	self->setSizeIncrement(*size);
}

QRect* QWindow_Geometry(const QWindow* self) {
	return new QRect(self->geometry());
}

QMargins* QWindow_FrameMargins(const QWindow* self) {
	return new QMargins(self->frameMargins());
}

QRect* QWindow_FrameGeometry(const QWindow* self) {
	return new QRect(self->frameGeometry());
}

QPoint* QWindow_FramePosition(const QWindow* self) {
	return new QPoint(self->framePosition());
}

void QWindow_SetFramePosition(QWindow* self, QPoint* point) {
	self->setFramePosition(*point);
}

int QWindow_Width(const QWindow* self) {
	return self->width();
}

int QWindow_Height(const QWindow* self) {
	return self->height();
}

int QWindow_X(const QWindow* self) {
	return self->x();
}

int QWindow_Y(const QWindow* self) {
	return self->y();
}

QSize* QWindow_Size(const QWindow* self) {
	return new QSize(self->size());
}

QPoint* QWindow_Position(const QWindow* self) {
	return new QPoint(self->position());
}

void QWindow_SetPosition(QWindow* self, QPoint* pt) {
	self->setPosition(*pt);
}

void QWindow_SetPosition2(QWindow* self, int posx, int posy) {
	self->setPosition(static_cast<int>(posx), static_cast<int>(posy));
}

void QWindow_Resize(QWindow* self, QSize* newSize) {
	self->resize(*newSize);
}

void QWindow_Resize2(QWindow* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetFilePath(QWindow* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setFilePath(filePath_QString);
}

struct miqt_string QWindow_FilePath(const QWindow* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_SetIcon(QWindow* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_Icon(const QWindow* self) {
	return new QIcon(self->icon());
}

void QWindow_Destroy(QWindow* self) {
	self->destroy();
}

bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab) {
	return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab) {
	return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_Screen(const QWindow* self) {
	return self->screen();
}

void QWindow_SetScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_FocusObject(const QWindow* self) {
	return self->focusObject();
}

QPointF* QWindow_MapToGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapToGlobal(*pos));
}

QPointF* QWindow_MapFromGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapFromGlobal(*pos));
}

QPoint* QWindow_MapToGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_MapFromGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_Cursor(const QWindow* self) {
	return new QCursor(self->cursor());
}

void QWindow_SetCursor(QWindow* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_UnsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_FromWinId(uintptr_t id) {
	return QWindow::fromWinId(static_cast<WId>(id));
}

void QWindow_RequestActivate(QWindow* self) {
	self->requestActivate();
}

void QWindow_SetVisible(QWindow* self, bool visible) {
	self->setVisible(visible);
}

void QWindow_Show(QWindow* self) {
	self->show();
}

void QWindow_Hide(QWindow* self) {
	self->hide();
}

void QWindow_ShowMinimized(QWindow* self) {
	self->showMinimized();
}

void QWindow_ShowMaximized(QWindow* self) {
	self->showMaximized();
}

void QWindow_ShowFullScreen(QWindow* self) {
	self->showFullScreen();
}

void QWindow_ShowNormal(QWindow* self) {
	self->showNormal();
}

bool QWindow_Close(QWindow* self) {
	return self->close();
}

void QWindow_Raise(QWindow* self) {
	self->raise();
}

void QWindow_Lower(QWindow* self) {
	self->lower();
}

bool QWindow_StartSystemResize(QWindow* self, int edges) {
	return self->startSystemResize(static_cast<Qt::Edges>(edges));
}

bool QWindow_StartSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_SetTitle(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QWindow_SetX(QWindow* self, int arg) {
	self->setX(static_cast<int>(arg));
}

void QWindow_SetY(QWindow* self, int arg) {
	self->setY(static_cast<int>(arg));
}

void QWindow_SetWidth(QWindow* self, int arg) {
	self->setWidth(static_cast<int>(arg));
}

void QWindow_SetHeight(QWindow* self, int arg) {
	self->setHeight(static_cast<int>(arg));
}

void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h) {
	self->setGeometry(static_cast<int>(posx), static_cast<int>(posy), static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetGeometryWithRect(QWindow* self, QRect* rect) {
	self->setGeometry(*rect);
}

void QWindow_SetMinimumWidth(QWindow* self, int w) {
	self->setMinimumWidth(static_cast<int>(w));
}

void QWindow_SetMinimumHeight(QWindow* self, int h) {
	self->setMinimumHeight(static_cast<int>(h));
}

void QWindow_SetMaximumWidth(QWindow* self, int w) {
	self->setMaximumWidth(static_cast<int>(w));
}

void QWindow_SetMaximumHeight(QWindow* self, int h) {
	self->setMaximumHeight(static_cast<int>(h));
}

void QWindow_Alert(QWindow* self, int msec) {
	self->alert(static_cast<int>(msec));
}

void QWindow_RequestUpdate(QWindow* self) {
	self->requestUpdate();
}

void QWindow_ScreenChanged(QWindow* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QWindow_connect_ScreenChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QScreen*)>(&QWindow::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QWindow_ScreenChanged(slot, sigval1);
	});
}

void QWindow_ModalityChanged(QWindow* self, int modality) {
	self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_connect_ModalityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), self, [=](Qt::WindowModality modality) {
		Qt::WindowModality modality_ret = modality;
		int sigval1 = static_cast<int>(modality_ret);
		miqt_exec_callback_QWindow_ModalityChanged(slot, sigval1);
	});
}

void QWindow_WindowStateChanged(QWindow* self, int windowState) {
	self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_connect_WindowStateChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), self, [=](Qt::WindowState windowState) {
		Qt::WindowState windowState_ret = windowState;
		int sigval1 = static_cast<int>(windowState_ret);
		miqt_exec_callback_QWindow_WindowStateChanged(slot, sigval1);
	});
}

void QWindow_WindowTitleChanged(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->windowTitleChanged(title_QString);
}

void QWindow_connect_WindowTitleChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(const QString&)>(&QWindow::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWindow_WindowTitleChanged(slot, sigval1);
	});
}

void QWindow_XChanged(QWindow* self, int arg) {
	self->xChanged(static_cast<int>(arg));
}

void QWindow_connect_XChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_XChanged(slot, sigval1);
	});
}

void QWindow_YChanged(QWindow* self, int arg) {
	self->yChanged(static_cast<int>(arg));
}

void QWindow_connect_YChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_YChanged(slot, sigval1);
	});
}

void QWindow_WidthChanged(QWindow* self, int arg) {
	self->widthChanged(static_cast<int>(arg));
}

void QWindow_connect_WidthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_WidthChanged(slot, sigval1);
	});
}

void QWindow_HeightChanged(QWindow* self, int arg) {
	self->heightChanged(static_cast<int>(arg));
}

void QWindow_connect_HeightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_HeightChanged(slot, sigval1);
	});
}

void QWindow_MinimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumWidthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MinimumWidthChanged(slot, sigval1);
	});
}

void QWindow_MinimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MinimumHeightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MinimumHeightChanged(slot, sigval1);
	});
}

void QWindow_MaximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumWidthChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MaximumWidthChanged(slot, sigval1);
	});
}

void QWindow_MaximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_MaximumHeightChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_MaximumHeightChanged(slot, sigval1);
	});
}

void QWindow_VisibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_connect_VisibleChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), self, [=](bool arg) {
		bool sigval1 = arg;
		miqt_exec_callback_QWindow_VisibleChanged(slot, sigval1);
	});
}

void QWindow_VisibilityChanged(QWindow* self, int visibility) {
	self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_connect_VisibilityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), self, [=](QWindow::Visibility visibility) {
		QWindow::Visibility visibility_ret = visibility;
		int sigval1 = static_cast<int>(visibility_ret);
		miqt_exec_callback_QWindow_VisibilityChanged(slot, sigval1);
	});
}

void QWindow_ActiveChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_connect_ActiveChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)()>(&QWindow::activeChanged), self, [=]() {
		miqt_exec_callback_QWindow_ActiveChanged(slot);
	});
}

void QWindow_ContentOrientationChanged(QWindow* self, int orientation) {
	self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_connect_ContentOrientationChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QWindow_ContentOrientationChanged(slot, sigval1);
	});
}

void QWindow_FocusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_connect_FocusObjectChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QObject*)>(&QWindow::focusObjectChanged), self, [=](QObject* object) {
		QObject* sigval1 = object;
		miqt_exec_callback_QWindow_FocusObjectChanged(slot, sigval1);
	});
}

void QWindow_OpacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QWindow_connect_OpacityChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(qreal)>(&QWindow::opacityChanged), self, [=](qreal opacity) {
		qreal opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QWindow_OpacityChanged(slot, sigval1);
	});
}

void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_connect_TransientParentChanged(QWindow* self, intptr_t slot) {
	MiqtVirtualQWindow::connect(self, static_cast<void (QWindow::*)(QWindow*)>(&QWindow::transientParentChanged), self, [=](QWindow* transientParent) {
		QWindow* sigval1 = transientParent;
		miqt_exec_callback_QWindow_TransientParentChanged(slot, sigval1);
	});
}

struct miqt_string QWindow_Tr2(const char* s, const char* c) {
	QString _ret = QWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWindow* QWindow_Parent1(const QWindow* self, int mode) {
	return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_SetFlag2(QWindow* self, int param1, bool on) {
	self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_IsAncestorOf2(const QWindow* self, QWindow* child, int mode) {
	return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

bool QWindow_override_virtual_SurfaceType(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SurfaceType = slot;
	return true;
}

int QWindow_virtualbase_SurfaceType(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_SurfaceType();
}

bool QWindow_override_virtual_Format(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Format = slot;
	return true;
}

QSurfaceFormat* QWindow_virtualbase_Format(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_Format();
}

bool QWindow_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

QSize* QWindow_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_Size();
}

bool QWindow_override_virtual_AccessibleRoot(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AccessibleRoot = slot;
	return true;
}

QAccessibleInterface* QWindow_virtualbase_AccessibleRoot(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_AccessibleRoot();
}

bool QWindow_override_virtual_FocusObject(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusObject = slot;
	return true;
}

QObject* QWindow_virtualbase_FocusObject(const void* self) {
	return ( (const MiqtVirtualQWindow*)(self) )->virtualbase_FocusObject();
}

bool QWindow_override_virtual_ExposeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExposeEvent = slot;
	return true;
}

void QWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_ExposeEvent(param1);
}

bool QWindow_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QWindow_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QWindow_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_PaintEvent(param1);
}

bool QWindow_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QWindow_virtualbase_MoveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_MoveEvent(param1);
}

bool QWindow_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QWindow_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QWindow_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_ShowEvent(param1);
}

bool QWindow_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QWindow_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_HideEvent(param1);
}

bool QWindow_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QWindow_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_CloseEvent(param1);
}

bool QWindow_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWindow_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_Event(param1);
}

bool QWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_KeyReleaseEvent(param1);
}

bool QWindow_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QWindow_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QWindow_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_WheelEvent(param1);
}

bool QWindow_override_virtual_TouchEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TouchEvent = slot;
	return true;
}

void QWindow_virtualbase_TouchEvent(void* self, QTouchEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_TouchEvent(param1);
}

bool QWindow_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QWindow_virtualbase_TabletEvent(void* self, QTabletEvent* param1) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_TabletEvent(param1);
}

bool QWindow_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QWindow_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWindow_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWindow*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWindow_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWindow_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_TimerEvent(event);
}

bool QWindow_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWindow_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_ChildEvent(event);
}

bool QWindow_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWindow_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_CustomEvent(event);
}

bool QWindow_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWindow_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWindow_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = dynamic_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWindow_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWindow*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWindow_Delete(QWindow* self) {
	delete self;
}

