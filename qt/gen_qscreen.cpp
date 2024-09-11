#include <QList>
#include <QMetaObject>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QScreen>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include "qscreen.h"

#include "gen_qscreen.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QScreen_MetaObject(const QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void QScreen_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Name(const QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Manufacturer(const QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Model(const QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_SerialNumber(const QScreen* self, char** _out, int* _out_Strlen) {
	QString ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QScreen_Depth(const QScreen* self) {
	return self->depth();
}

QSize* QScreen_Size(const QScreen* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_Geometry(const QScreen* self) {
	QRect ret = self->geometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSizeF* QScreen_PhysicalSize(const QScreen* self) {
	QSizeF ret = self->physicalSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

double QScreen_PhysicalDotsPerInchX(const QScreen* self) {
	return self->physicalDotsPerInchX();
}

double QScreen_PhysicalDotsPerInchY(const QScreen* self) {
	return self->physicalDotsPerInchY();
}

double QScreen_PhysicalDotsPerInch(const QScreen* self) {
	return self->physicalDotsPerInch();
}

double QScreen_LogicalDotsPerInchX(const QScreen* self) {
	return self->logicalDotsPerInchX();
}

double QScreen_LogicalDotsPerInchY(const QScreen* self) {
	return self->logicalDotsPerInchY();
}

double QScreen_LogicalDotsPerInch(const QScreen* self) {
	return self->logicalDotsPerInch();
}

double QScreen_DevicePixelRatio(const QScreen* self) {
	return self->devicePixelRatio();
}

QSize* QScreen_AvailableSize(const QScreen* self) {
	QSize ret = self->availableSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_AvailableGeometry(const QScreen* self) {
	QRect ret = self->availableGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QScreen_VirtualSiblings(const QScreen* self, QScreen*** _out, size_t* _out_len) {
	QList<QScreen*> ret = self->virtualSiblings();
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

QSize* QScreen_VirtualSize(const QScreen* self) {
	QSize ret = self->virtualSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_VirtualGeometry(const QScreen* self) {
	QRect ret = self->virtualGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QScreen_AvailableVirtualSize(const QScreen* self) {
	QSize ret = self->availableVirtualSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QScreen_AvailableVirtualGeometry(const QScreen* self) {
	QRect ret = self->availableVirtualGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

uintptr_t QScreen_PrimaryOrientation(const QScreen* self) {
	Qt::ScreenOrientation ret = self->primaryOrientation();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QScreen_Orientation(const QScreen* self) {
	Qt::ScreenOrientation ret = self->orientation();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QScreen_NativeOrientation(const QScreen* self) {
	Qt::ScreenOrientation ret = self->nativeOrientation();
	return static_cast<uintptr_t>(ret);
}

int QScreen_OrientationUpdateMask(const QScreen* self) {
	Qt::ScreenOrientations ret = self->orientationUpdateMask();
	return static_cast<int>(ret);
}

void QScreen_SetOrientationUpdateMask(QScreen* self, int mask) {
	self->setOrientationUpdateMask(static_cast<Qt::ScreenOrientations>(mask));
}

int QScreen_AngleBetween(const QScreen* self, uintptr_t a, uintptr_t b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_TransformBetween(const QScreen* self, uintptr_t a, uintptr_t b, QRect* target) {
	QTransform ret = self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QRect* QScreen_MapBetween(const QScreen* self, uintptr_t a, uintptr_t b, QRect* rect) {
	QRect ret = self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QScreen_IsPortrait(const QScreen* self, uintptr_t orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_IsLandscape(const QScreen* self, uintptr_t orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_GrabWindow(QScreen* self, uintptr_t window) {
	QPixmap ret = self->grabWindow(static_cast<quintptr>(window));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

double QScreen_RefreshRate(const QScreen* self) {
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

void QScreen_PrimaryOrientationChanged(QScreen* self, uintptr_t orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_PrimaryOrientationChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScreen_OrientationChanged(QScreen* self, uintptr_t orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_OrientationChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), self, [=](Qt::ScreenOrientation orientation) {
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

void QScreen_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScreen_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
	QPixmap ret = self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	QPixmap ret = self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	QPixmap ret = self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	QPixmap ret = self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QScreen_Delete(QScreen* self) {
	delete self;
}

