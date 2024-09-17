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
#include "_cgo_export.h"

QMetaObject* QScreen_MetaObject(const QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QScreen_Tr(const char* s) {
	QString _ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_TrUtf8(const char* s) {
	QString _ret = QScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_Name(const QScreen* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_Manufacturer(const QScreen* self) {
	QString _ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_Model(const QScreen* self) {
	QString _ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_SerialNumber(const QScreen* self) {
	QString _ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QScreen_Depth(const QScreen* self) {
	return self->depth();
}

QSize* QScreen_Size(const QScreen* self) {
	return new QSize(self->size());
}

QRect* QScreen_Geometry(const QScreen* self) {
	return new QRect(self->geometry());
}

QSizeF* QScreen_PhysicalSize(const QScreen* self) {
	return new QSizeF(self->physicalSize());
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
	return new QSize(self->availableSize());
}

QRect* QScreen_AvailableGeometry(const QScreen* self) {
	return new QRect(self->availableGeometry());
}

struct miqt_array* QScreen_VirtualSiblings(const QScreen* self) {
	QList<QScreen*> _ret = self->virtualSiblings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point) {
	return self->virtualSiblingAt(*point);
}

QSize* QScreen_VirtualSize(const QScreen* self) {
	return new QSize(self->virtualSize());
}

QRect* QScreen_VirtualGeometry(const QScreen* self) {
	return new QRect(self->virtualGeometry());
}

QSize* QScreen_AvailableVirtualSize(const QScreen* self) {
	return new QSize(self->availableVirtualSize());
}

QRect* QScreen_AvailableVirtualGeometry(const QScreen* self) {
	return new QRect(self->availableVirtualGeometry());
}

uintptr_t QScreen_PrimaryOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->primaryOrientation();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QScreen_Orientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QScreen_NativeOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->nativeOrientation();
	return static_cast<uintptr_t>(_ret);
}

int QScreen_OrientationUpdateMask(const QScreen* self) {
	Qt::ScreenOrientations _ret = self->orientationUpdateMask();
	return static_cast<int>(_ret);
}

void QScreen_SetOrientationUpdateMask(QScreen* self, int mask) {
	self->setOrientationUpdateMask(static_cast<Qt::ScreenOrientations>(mask));
}

int QScreen_AngleBetween(const QScreen* self, uintptr_t a, uintptr_t b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_TransformBetween(const QScreen* self, uintptr_t a, uintptr_t b, QRect* target) {
	return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_MapBetween(const QScreen* self, uintptr_t a, uintptr_t b, QRect* rect) {
	return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_IsPortrait(const QScreen* self, uintptr_t orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_IsLandscape(const QScreen* self, uintptr_t orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_GrabWindow(QScreen* self, uintptr_t window) {
	return new QPixmap(self->grabWindow(static_cast<quintptr>(window)));
}

double QScreen_RefreshRate(const QScreen* self) {
	return self->refreshRate();
}

void QScreen_GeometryChanged(QScreen* self, QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_connect_GeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::geometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_GeometryChanged(slot, sigval1);
	});
}

void QScreen_AvailableGeometryChanged(QScreen* self, QRect* geometry) {
	self->availableGeometryChanged(*geometry);
}

void QScreen_connect_AvailableGeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::availableGeometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_AvailableGeometryChanged(slot, sigval1);
	});
}

void QScreen_PhysicalSizeChanged(QScreen* self, QSizeF* size) {
	self->physicalSizeChanged(*size);
}

void QScreen_connect_PhysicalSizeChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QSizeF&)>(&QScreen::physicalSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QScreen_PhysicalSizeChanged(slot, sigval1);
	});
}

void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->physicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_PhysicalDotsPerInchChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::physicalDotsPerInchChanged), self, [=](qreal dpi) {
		double sigval1 = dpi;
		miqt_exec_callback_QScreen_PhysicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_LogicalDotsPerInchChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::logicalDotsPerInchChanged), self, [=](qreal dpi) {
		double sigval1 = dpi;
		miqt_exec_callback_QScreen_LogicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_VirtualGeometryChanged(QScreen* self, QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_connect_VirtualGeometryChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::virtualGeometryChanged), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QScreen_VirtualGeometryChanged(slot, sigval1);
	});
}

void QScreen_PrimaryOrientationChanged(QScreen* self, uintptr_t orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_PrimaryOrientationChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		uintptr_t sigval1 = static_cast<uintptr_t>(orientation_ret);
		miqt_exec_callback_QScreen_PrimaryOrientationChanged(slot, sigval1);
	});
}

void QScreen_OrientationChanged(QScreen* self, uintptr_t orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_OrientationChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		uintptr_t sigval1 = static_cast<uintptr_t>(orientation_ret);
		miqt_exec_callback_QScreen_OrientationChanged(slot, sigval1);
	});
}

void QScreen_RefreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(static_cast<qreal>(refreshRate));
}

void QScreen_connect_RefreshRateChanged(QScreen* self, void* slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::refreshRateChanged), self, [=](qreal refreshRate) {
		double sigval1 = refreshRate;
		miqt_exec_callback_QScreen_RefreshRateChanged(slot, sigval1);
	});
}

struct miqt_string* QScreen_Tr2(const char* s, const char* c) {
	QString _ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_TrUtf82(const char* s, const char* c) {
	QString _ret = QScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QScreen_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
	return new QPixmap(self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x)));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	return new QPixmap(self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	return new QPixmap(self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	return new QPixmap(self->grabWindow(static_cast<quintptr>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

void QScreen_Delete(QScreen* self) {
	delete self;
}

