#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
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

int miqt_exec_callback_QRasterWindow_metric(const QRasterWindow*, intptr_t, int);
QPaintDevice* miqt_exec_callback_QRasterWindow_redirected(const QRasterWindow*, intptr_t, QPoint*);
void miqt_exec_callback_QRasterWindow_exposeEvent(QRasterWindow*, intptr_t, QExposeEvent*);
void miqt_exec_callback_QRasterWindow_paintEvent(QRasterWindow*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QRasterWindow_event(QRasterWindow*, intptr_t, QEvent*);
int miqt_exec_callback_QRasterWindow_surfaceType(const QRasterWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QRasterWindow_format(const QRasterWindow*, intptr_t);
QSize* miqt_exec_callback_QRasterWindow_size(const QRasterWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QRasterWindow_accessibleRoot(const QRasterWindow*, intptr_t);
QObject* miqt_exec_callback_QRasterWindow_focusObject(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_resizeEvent(QRasterWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRasterWindow_moveEvent(QRasterWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRasterWindow_focusInEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_focusOutEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_showEvent(QRasterWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRasterWindow_hideEvent(QRasterWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QRasterWindow_closeEvent(QRasterWindow*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QRasterWindow_keyPressEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_keyReleaseEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_mousePressEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseReleaseEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseMoveEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_wheelEvent(QRasterWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRasterWindow_touchEvent(QRasterWindow*, intptr_t, QTouchEvent*);
void miqt_exec_callback_QRasterWindow_tabletEvent(QRasterWindow*, intptr_t, QTabletEvent*);
bool miqt_exec_callback_QRasterWindow_nativeEvent(QRasterWindow*, intptr_t, struct miqt_string, void*, intptr_t*);
bool miqt_exec_callback_QRasterWindow_eventFilter(QRasterWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRasterWindow_timerEvent(QRasterWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRasterWindow_childEvent(QRasterWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRasterWindow_customEvent(QRasterWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QRasterWindow_connectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRasterWindow_disconnectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QRasterWindow_devType(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_initPainter(const QRasterWindow*, intptr_t, QPainter*);
QPainter* miqt_exec_callback_QRasterWindow_sharedPainter(const QRasterWindow*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRasterWindow final : public QRasterWindow {
public:

	MiqtVirtualQRasterWindow(): QRasterWindow() {};
	MiqtVirtualQRasterWindow(QWindow* parent): QRasterWindow(parent) {};

	virtual ~MiqtVirtualQRasterWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__metric == 0) {
			return QRasterWindow::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QRasterWindow_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int metric) const {

		return QRasterWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* param1) const override {
		if (handle__redirected == 0) {
			return QRasterWindow::redirected(param1);
		}
		
		QPoint* sigval1 = param1;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRasterWindow_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* param1) const {

		return QRasterWindow::redirected(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exposeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (handle__exposeEvent == 0) {
			QRasterWindow::exposeEvent(param1);
			return;
		}
		
		QExposeEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_exposeEvent(this, handle__exposeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_exposeEvent(QExposeEvent* param1) {

		QRasterWindow::exposeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QRasterWindow::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QRasterWindow::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QRasterWindow::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRasterWindow_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QRasterWindow::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__surfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (handle__surfaceType == 0) {
			return QRasterWindow::surfaceType();
		}
		

		int callback_return_value = miqt_exec_callback_QRasterWindow_surfaceType(this, handle__surfaceType);

		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_surfaceType() const {

		QSurface::SurfaceType _ret = QRasterWindow::surfaceType();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__format == 0) {
			return QRasterWindow::format();
		}
		

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QRasterWindow_format(this, handle__format);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSurfaceFormat* virtualbase_format() const {

		return new QSurfaceFormat(QRasterWindow::format());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__size == 0) {
			return QRasterWindow::size();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRasterWindow_size(this, handle__size);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_size() const {

		return new QSize(QRasterWindow::size());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accessibleRoot = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (handle__accessibleRoot == 0) {
			return QRasterWindow::accessibleRoot();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QRasterWindow_accessibleRoot(this, handle__accessibleRoot);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_accessibleRoot() const {

		return QRasterWindow::accessibleRoot();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (handle__focusObject == 0) {
			return QRasterWindow::focusObject();
		}
		

		QObject* callback_return_value = miqt_exec_callback_QRasterWindow_focusObject(this, handle__focusObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_focusObject() const {

		return QRasterWindow::focusObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QRasterWindow::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QRasterWindow::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__moveEvent == 0) {
			QRasterWindow::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* param1) {

		QRasterWindow::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QRasterWindow::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QRasterWindow::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QRasterWindow::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QRasterWindow::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QRasterWindow::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QRasterWindow::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__hideEvent == 0) {
			QRasterWindow::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* param1) {

		QRasterWindow::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QRasterWindow::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QRasterWindow::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QRasterWindow::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QRasterWindow::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QRasterWindow::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* param1) {

		QRasterWindow::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QRasterWindow::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* param1) {

		QRasterWindow::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QRasterWindow::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* param1) {

		QRasterWindow::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QRasterWindow::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* param1) {

		QRasterWindow::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QRasterWindow::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* param1) {

		QRasterWindow::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QRasterWindow::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* param1) {

		QRasterWindow::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__touchEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void touchEvent(QTouchEvent* param1) override {
		if (handle__touchEvent == 0) {
			QRasterWindow::touchEvent(param1);
			return;
		}
		
		QTouchEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_touchEvent(this, handle__touchEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_touchEvent(QTouchEvent* param1) {

		QRasterWindow::touchEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (handle__tabletEvent == 0) {
			QRasterWindow::tabletEvent(param1);
			return;
		}
		
		QTabletEvent* sigval1 = param1;

		miqt_exec_callback_QRasterWindow_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* param1) {

		QRasterWindow::tabletEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QRasterWindow::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QRasterWindow_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRasterWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRasterWindow::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRasterWindow_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QRasterWindow::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRasterWindow::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QRasterWindow::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRasterWindow::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QRasterWindow::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRasterWindow::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRasterWindow_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QRasterWindow::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRasterWindow::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRasterWindow_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QRasterWindow::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRasterWindow::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRasterWindow_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QRasterWindow::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QRasterWindow::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRasterWindow_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QRasterWindow::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QRasterWindow::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRasterWindow_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QRasterWindow::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QRasterWindow::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRasterWindow_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QRasterWindow::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend void* QRasterWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QRasterWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRasterWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRasterWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRasterWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QRasterWindow_metaObject(const QRasterWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRasterWindow_metacast(QRasterWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRasterWindow_tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRasterWindow_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QRasterWindow_virtualbase_metric(const void* self, int metric) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_metric(metric);
}

bool QRasterWindow_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QRasterWindow_virtualbase_redirected(const void* self, QPoint* param1) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_redirected(param1);
}

bool QRasterWindow_override_virtual_exposeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exposeEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_exposeEvent(void* self, QExposeEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_exposeEvent(param1);
}

bool QRasterWindow_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_paintEvent(event);
}

bool QRasterWindow_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QRasterWindow_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_event(event);
}

bool QRasterWindow_override_virtual_surfaceType(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__surfaceType = slot;
	return true;
}

int QRasterWindow_virtualbase_surfaceType(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_surfaceType();
}

bool QRasterWindow_override_virtual_format(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__format = slot;
	return true;
}

QSurfaceFormat* QRasterWindow_virtualbase_format(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_format();
}

bool QRasterWindow_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

QSize* QRasterWindow_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_size();
}

bool QRasterWindow_override_virtual_accessibleRoot(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accessibleRoot = slot;
	return true;
}

QAccessibleInterface* QRasterWindow_virtualbase_accessibleRoot(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_accessibleRoot();
}

bool QRasterWindow_override_virtual_focusObject(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusObject = slot;
	return true;
}

QObject* QRasterWindow_virtualbase_focusObject(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_focusObject();
}

bool QRasterWindow_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_resizeEvent(param1);
}

bool QRasterWindow_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_moveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_moveEvent(param1);
}

bool QRasterWindow_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_focusInEvent(param1);
}

bool QRasterWindow_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QRasterWindow_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_showEvent(param1);
}

bool QRasterWindow_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_hideEvent(param1);
}

bool QRasterWindow_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_closeEvent(param1);
}

bool QRasterWindow_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QRasterWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_keyReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QRasterWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_mouseDoubleClickEvent(param1);
}

bool QRasterWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QRasterWindow_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_wheelEvent(param1);
}

bool QRasterWindow_override_virtual_touchEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__touchEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_touchEvent(void* self, QTouchEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_touchEvent(param1);
}

bool QRasterWindow_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_tabletEvent(void* self, QTabletEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_tabletEvent(param1);
}

bool QRasterWindow_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QRasterWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QRasterWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRasterWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QRasterWindow_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_timerEvent(event);
}

bool QRasterWindow_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_childEvent(event);
}

bool QRasterWindow_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QRasterWindow_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_customEvent(event);
}

bool QRasterWindow_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QRasterWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_connectNotify(signal);
}

bool QRasterWindow_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRasterWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QRasterWindow_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QRasterWindow_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_devType();
}

bool QRasterWindow_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QRasterWindow_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_initPainter(painter);
}

bool QRasterWindow_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QRasterWindow_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_sharedPainter();
}

void* QRasterWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->resolveInterface(name, static_cast<int>(revision));

}

QObject* QRasterWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QRasterWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QRasterWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QRasterWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QRasterWindow_delete(QRasterWindow* self) {
	delete self;
}

