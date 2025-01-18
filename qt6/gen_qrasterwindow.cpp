#include <QEvent>
#include <QExposeEvent>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPoint>
#include <QRasterWindow>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QWindow>
#include <qrasterwindow.h>
#include "gen_qrasterwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QRasterWindow_Metric(void*, intptr_t, int);
QPaintDevice* miqt_exec_callback_QRasterWindow_Redirected(void*, intptr_t, QPoint*);
void miqt_exec_callback_QRasterWindow_ExposeEvent(void*, intptr_t, QExposeEvent*);
void miqt_exec_callback_QRasterWindow_PaintEvent(void*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QRasterWindow_Event(void*, intptr_t, QEvent*);
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

		int callback_return_value = miqt_exec_callback_QRasterWindow_Metric(const_cast<MiqtVirtualQRasterWindow*>(this), handle__Metric, sigval1);

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

		QPaintDevice* callback_return_value = miqt_exec_callback_QRasterWindow_Redirected(const_cast<MiqtVirtualQRasterWindow*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* param1) const {

		return QRasterWindow::redirected(param1);

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

void QRasterWindow_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) )->handle__Metric = slot;
}

int QRasterWindow_virtualbase_Metric(const void* self, int metric) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Metric(metric);
}

void QRasterWindow_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QRasterWindow_virtualbase_Redirected(const void* self, QPoint* param1) {
	return ( (const MiqtVirtualQRasterWindow*)(self) )->virtualbase_Redirected(param1);
}

void QRasterWindow_override_virtual_ExposeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) )->handle__ExposeEvent = slot;
}

void QRasterWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_ExposeEvent(param1);
}

void QRasterWindow_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) )->handle__PaintEvent = slot;
}

void QRasterWindow_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_PaintEvent(event);
}

void QRasterWindow_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) )->handle__Event = slot;
}

bool QRasterWindow_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRasterWindow*)(self) )->virtualbase_Event(event);
}

void QRasterWindow_Delete(QRasterWindow* self) {
	delete self;
}

