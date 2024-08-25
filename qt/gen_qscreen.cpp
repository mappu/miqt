#include "gen_qscreen.h"
#include "qscreen.h"

#include <QList>
#include <QMetaObject>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QScreen>
#include <QSize>
#include <QSizeF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QScreen_MetaObject(QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void QScreen_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Name(QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Manufacturer(QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Model(QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_SerialNumber(QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QScreen_Depth(QScreen* self) {
	return self->depth();
}

QSize* QScreen_Size(QScreen* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_Geometry(QScreen* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSizeF* QScreen_PhysicalSize(QScreen* self) {
	QSizeF ret = self->physicalSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

double QScreen_PhysicalDotsPerInchX(QScreen* self) {
	return self->physicalDotsPerInchX();
}

double QScreen_PhysicalDotsPerInchY(QScreen* self) {
	return self->physicalDotsPerInchY();
}

double QScreen_PhysicalDotsPerInch(QScreen* self) {
	return self->physicalDotsPerInch();
}

double QScreen_LogicalDotsPerInchX(QScreen* self) {
	return self->logicalDotsPerInchX();
}

double QScreen_LogicalDotsPerInchY(QScreen* self) {
	return self->logicalDotsPerInchY();
}

double QScreen_LogicalDotsPerInch(QScreen* self) {
	return self->logicalDotsPerInch();
}

double QScreen_DevicePixelRatio(QScreen* self) {
	return self->devicePixelRatio();
}

QSize* QScreen_AvailableSize(QScreen* self) {
	QSize ret = self->availableSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_AvailableGeometry(QScreen* self) {
	QRect ret = self->availableGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QScreen_VirtualSiblings(QScreen* self, QScreen*** _out, size_t* _out_len) {
	QList<QScreen *> ret = self->virtualSiblings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** __out = static_cast<QScreen**>(malloc(sizeof(QScreen*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point) {
	return self->virtualSiblingAt(*point);
}

QSize* QScreen_VirtualSize(QScreen* self) {
	QSize ret = self->virtualSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_VirtualGeometry(QScreen* self) {
	QRect ret = self->virtualGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QScreen_AvailableVirtualSize(QScreen* self) {
	QSize ret = self->availableVirtualSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_AvailableVirtualGeometry(QScreen* self) {
	QRect ret = self->availableVirtualGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPixmap* QScreen_GrabWindow(QScreen* self, uintptr_t window) {
	QPixmap ret = self->grabWindow(static_cast<uintptr_t>(window));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

double QScreen_RefreshRate(QScreen* self) {
	return self->refreshRate();
}

void QScreen_GeometryChanged(QScreen* self, QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_connect_GeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::geometryChanged), self, [=](const QRect& geometry) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_AvailableGeometryChanged(QScreen* self, QRect* geometry) {
	self->availableGeometryChanged(*geometry);
}

void QScreen_connect_AvailableGeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::availableGeometryChanged), self, [=](const QRect& geometry) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_PhysicalSizeChanged(QScreen* self, QSizeF* size) {
	self->physicalSizeChanged(*size);
}

void QScreen_connect_PhysicalSizeChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QSizeF&)>(&QScreen::physicalSizeChanged), self, [=](const QSizeF& size) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->physicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_PhysicalDotsPerInchChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::physicalDotsPerInchChanged), self, [=](qreal dpi) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_LogicalDotsPerInchChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::logicalDotsPerInchChanged), self, [=](qreal dpi) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_VirtualGeometryChanged(QScreen* self, QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_connect_VirtualGeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::virtualGeometryChanged), self, [=](const QRect& rect) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_RefreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(static_cast<qreal>(refreshRate));
}

void QScreen_connect_RefreshRateChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::refreshRateChanged), self, [=](qreal refreshRate) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
	QPixmap ret = self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	QPixmap ret = self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	QPixmap ret = self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	QPixmap ret = self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QScreen_Delete(QScreen* self) {
	delete self;
}

