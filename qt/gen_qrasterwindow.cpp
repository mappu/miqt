#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRasterWindow>
#include <QResizeEvent>
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
#include <qrasterwindow.h>
#include "gen_qrasterwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QRasterWindow_Metric(const QRasterWindow*, intptr_t, int);
QPaintDevice* miqt_exec_callback_QRasterWindow_Redirected(const QRasterWindow*, intptr_t, QPoint*);
void miqt_exec_callback_QRasterWindow_PaintEvent(QRasterWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QRasterWindow_ExposeEvent(QRasterWindow*, intptr_t, QExposeEvent*);
bool miqt_exec_callback_QRasterWindow_Event(QRasterWindow*, intptr_t, QEvent*);
int miqt_exec_callback_QRasterWindow_SurfaceType(const QRasterWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QRasterWindow_Format(const QRasterWindow*, intptr_t);
QSize* miqt_exec_callback_QRasterWindow_Size(const QRasterWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QRasterWindow_AccessibleRoot(const QRasterWindow*, intptr_t);
QObject* miqt_exec_callback_QRasterWindow_FocusObject(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_ResizeEvent(QRasterWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRasterWindow_MoveEvent(QRasterWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRasterWindow_FocusInEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_FocusOutEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_ShowEvent(QRasterWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRasterWindow_HideEvent(QRasterWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QRasterWindow_KeyPressEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_KeyReleaseEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_MousePressEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_MouseReleaseEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_MouseDoubleClickEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_MouseMoveEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_WheelEvent(QRasterWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRasterWindow_TouchEvent(QRasterWindow*, intptr_t, QTouchEvent*);
void miqt_exec_callback_QRasterWindow_TabletEvent(QRasterWindow*, intptr_t, QTabletEvent*);
bool miqt_exec_callback_QRasterWindow_NativeEvent(QRasterWindow*, intptr_t, struct miqt_string, void*, long*);
bool miqt_exec_callback_QRasterWindow_EventFilter(QRasterWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRasterWindow_TimerEvent(QRasterWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRasterWindow_ChildEvent(QRasterWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRasterWindow_CustomEvent(QRasterWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QRasterWindow_ConnectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRasterWindow_DisconnectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QRasterWindow_DevType(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_InitPainter(const QRasterWindow*, intptr_t, QPainter*);
QPainter* miqt_exec_callback_QRasterWindow_SharedPainter(const QRasterWindow*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRasterWindow final : public QRasterWindow {
public:

	MiqtVirtualQRasterWindow(): QRasterWindow() {};
	MiqtVirtualQRasterWindow(QWindow* parent): QRasterWindow(parent) {};

	virtual ~MiqtVirtualQRasterWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__Metric == 0) {
			return QRasterWindow::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QRasterWindow_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int metric) const {

		return QRasterWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* param1) const override {
		if (handle__Redirected == 0) {
			return QRasterWindow::redirected(param1);
		}
		
		QPoint* sigval1 = param1;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRasterWindow_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* param1) const {

		return QRasterWindow::redirected(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QRasterWindow::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QRasterWindow::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExposeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (handle__ExposeEvent == 0) {
			QRasterWindow::exposeEvent(param1);
			return;
		}
		
		QExposeEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_ExposeEvent(this, handle__ExposeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ExposeEvent(QExposeEvent* param1) {

		QRasterWindow::exposeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QRasterWindow::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRasterWindow_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QRasterWindow::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SurfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__SurfaceType == 0) {
			return QRasterWindow::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QRasterWindow_SurfaceType(this, handle__SurfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SurfaceType() const {

		QSurface::SurfaceType _ret = QRasterWindow::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__Format == 0) {
			return QRasterWindow::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QRasterWindow_Format(this, handle__Format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_Format() const {

		return new QSurfaceFormat(QRasterWindow::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__Size == 0) {
			return QRasterWindow::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRasterWindow_Size(this, handle__Size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Size() const {

		return new QSize(QRasterWindow::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AccessibleRoot = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (handle__AccessibleRoot == 0) {
			return QRasterWindow::accessibleRoot();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QRasterWindow_AccessibleRoot(this, handle__AccessibleRoot);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_AccessibleRoot() const {

		return QRasterWindow::accessibleRoot();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (handle__FocusObject == 0) {
			return QRasterWindow::focusObject();
		}
		

		QObject* callback_return_value = miqt_exec_callback_QRasterWindow_FocusObject(this, handle__FocusObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_FocusObject() const {

		return QRasterWindow::focusObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QRasterWindow::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QRasterWindow::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__MoveEvent == 0) {
			QRasterWindow::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* param1) {

		QRasterWindow::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QRasterWindow::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QRasterWindow::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QRasterWindow::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QRasterWindow::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QRasterWindow::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QRasterWindow::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QRasterWindow::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QRasterWindow::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QRasterWindow::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QRasterWindow::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__KeyReleaseEvent == 0) {
			QRasterWindow::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* param1) {

		QRasterWindow::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QRasterWindow::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QRasterWindow::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QRasterWindow::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QRasterWindow::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QRasterWindow::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QRasterWindow::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QRasterWindow::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QRasterWindow::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QRasterWindow::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QRasterWindow::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TouchEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void touchEvent(QTouchEvent* param1) override {
		if (handle__TouchEvent == 0) {
			QRasterWindow::touchEvent(param1);
			return;
		}
		
		QTouchEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_TouchEvent(this, handle__TouchEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TouchEvent(QTouchEvent* param1) {

		QRasterWindow::touchEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (handle__TabletEvent == 0) {
			QRasterWindow::tabletEvent(param1);
			return;
		}
		
		QTabletEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* param1) {

		QRasterWindow::tabletEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QRasterWindow::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QRasterWindow_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRasterWindow::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRasterWindow::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRasterWindow_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRasterWindow::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QRasterWindow::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QRasterWindow::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRasterWindow::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRasterWindow::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRasterWindow::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRasterWindow::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRasterWindow::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRasterWindow_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRasterWindow::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRasterWindow::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRasterWindow_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRasterWindow::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QRasterWindow::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRasterWindow_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QRasterWindow::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QRasterWindow::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRasterWindow_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QRasterWindow::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QRasterWindow::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRasterWindow_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QRasterWindow::sharedPainter();

	}

};

QRasterWindow* QRasterWindow_new() {
	return new MiqtVirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	return new MiqtVirtualQRasterWindow(parent);
}

void QRasterWindow_virtbase(QRasterWindow* src, QPaintDeviceWindow** outptr_QPaintDeviceWindow) {
	*outptr_QPaintDeviceWindow = static_cast<QPaintDeviceWindow*>(src);
}

QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRasterWindow_Tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_TrUtf8(const char* s) {
	QString _ret = QRasterWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_Tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QRasterWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRasterWindow_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QRasterWindow_virtualbase_Metric(const void* self, int metric) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Metric(metric);
}

bool QRasterWindow_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QRasterWindow_virtualbase_Redirected(const void* self, QPoint* param1) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Redirected(param1);
}

bool QRasterWindow_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_PaintEvent(event);
}

bool QRasterWindow_override_virtual_ExposeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExposeEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ExposeEvent(param1);
}

bool QRasterWindow_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QRasterWindow_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_Event(event);
}

bool QRasterWindow_override_virtual_SurfaceType(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SurfaceType = slot;
	return true;
}

int QRasterWindow_virtualbase_SurfaceType(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_SurfaceType();
}

bool QRasterWindow_override_virtual_Format(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Format = slot;
	return true;
}

QSurfaceFormat* QRasterWindow_virtualbase_Format(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Format();
}

bool QRasterWindow_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

QSize* QRasterWindow_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Size();
}

bool QRasterWindow_override_virtual_AccessibleRoot(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AccessibleRoot = slot;
	return true;
}

QAccessibleInterface* QRasterWindow_virtualbase_AccessibleRoot(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_AccessibleRoot();
}

bool QRasterWindow_override_virtual_FocusObject(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusObject = slot;
	return true;
}

QObject* QRasterWindow_virtualbase_FocusObject(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_FocusObject();
}

bool QRasterWindow_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QRasterWindow_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_MoveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_MoveEvent(param1);
}

bool QRasterWindow_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QRasterWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QRasterWindow_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ShowEvent(param1);
}

bool QRasterWindow_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_HideEvent(param1);
}

bool QRasterWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QRasterWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_KeyReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QRasterWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QRasterWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QRasterWindow_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_WheelEvent(param1);
}

bool QRasterWindow_override_virtual_TouchEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TouchEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_TouchEvent(void* self, QTouchEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_TouchEvent(param1);
}

bool QRasterWindow_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_TabletEvent(void* self, QTabletEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_TabletEvent(param1);
}

bool QRasterWindow_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QRasterWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QRasterWindow_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QRasterWindow_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QRasterWindow_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_TimerEvent(event);
}

bool QRasterWindow_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ChildEvent(event);
}

bool QRasterWindow_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_CustomEvent(event);
}

bool QRasterWindow_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QRasterWindow_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QRasterWindow_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QRasterWindow_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QRasterWindow_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QRasterWindow_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_DevType();
}

bool QRasterWindow_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QRasterWindow_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_InitPainter(painter);
}

bool QRasterWindow_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QRasterWindow_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_SharedPainter();
}

void QRasterWindow_Delete(QRasterWindow* self) {
	delete self;
}

