#include <QList>
#include <QMetaObject>
#include <QObject>
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
#include <qscreen.h>
#include "gen_qscreen.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScreen_GeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_AvailableGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_PhysicalSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QScreen_PhysicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_LogicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_VirtualGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_PrimaryOrientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_OrientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_RefreshRateChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

void QScreen_virtbase(QScreen* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScreen_MetaObject(const QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScreen_Metacast(QScreen* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScreen_Tr(const char* s) {
	QString _ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_Name(const QScreen* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_Manufacturer(const QScreen* self) {
	QString _ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_Model(const QScreen* self) {
	QString _ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_SerialNumber(const QScreen* self) {
	QString _ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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
	qreal _ret = self->physicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_PhysicalDotsPerInchY(const QScreen* self) {
	qreal _ret = self->physicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_PhysicalDotsPerInch(const QScreen* self) {
	qreal _ret = self->physicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_LogicalDotsPerInchX(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_LogicalDotsPerInchY(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_LogicalDotsPerInch(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_DevicePixelRatio(const QScreen* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

QSize* QScreen_AvailableSize(const QScreen* self) {
	return new QSize(self->availableSize());
}

QRect* QScreen_AvailableGeometry(const QScreen* self) {
	return new QRect(self->availableGeometry());
}

struct miqt_array /* of QScreen* */  QScreen_VirtualSiblings(const QScreen* self) {
	QList<QScreen *> _ret = self->virtualSiblings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

int QScreen_PrimaryOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->primaryOrientation();
	return static_cast<int>(_ret);
}

int QScreen_Orientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QScreen_NativeOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->nativeOrientation();
	return static_cast<int>(_ret);
}

int QScreen_AngleBetween(const QScreen* self, int a, int b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_TransformBetween(const QScreen* self, int a, int b, QRect* target) {
	return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_MapBetween(const QScreen* self, int a, int b, QRect* rect) {
	return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_IsPortrait(const QScreen* self, int orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_IsLandscape(const QScreen* self, int orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_GrabWindow(QScreen* self) {
	return new QPixmap(self->grabWindow());
}

double QScreen_RefreshRate(const QScreen* self) {
	qreal _ret = self->refreshRate();
	return static_cast<double>(_ret);
}

void QScreen_GeometryChanged(QScreen* self, QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_connect_GeometryChanged(QScreen* self, intptr_t slot) {
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

void QScreen_connect_AvailableGeometryChanged(QScreen* self, intptr_t slot) {
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

void QScreen_connect_PhysicalSizeChanged(QScreen* self, intptr_t slot) {
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

void QScreen_connect_PhysicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::physicalDotsPerInchChanged), self, [=](qreal dpi) {
		qreal dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_PhysicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_LogicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::logicalDotsPerInchChanged), self, [=](qreal dpi) {
		qreal dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_LogicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_VirtualGeometryChanged(QScreen* self, QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_connect_VirtualGeometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::virtualGeometryChanged), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QScreen_VirtualGeometryChanged(slot, sigval1);
	});
}

void QScreen_PrimaryOrientationChanged(QScreen* self, int orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_PrimaryOrientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_PrimaryOrientationChanged(slot, sigval1);
	});
}

void QScreen_OrientationChanged(QScreen* self, int orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_OrientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_OrientationChanged(slot, sigval1);
	});
}

void QScreen_RefreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(static_cast<qreal>(refreshRate));
}

void QScreen_connect_RefreshRateChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::refreshRateChanged), self, [=](qreal refreshRate) {
		qreal refreshRate_ret = refreshRate;
		double sigval1 = static_cast<double>(refreshRate_ret);
		miqt_exec_callback_QScreen_RefreshRateChanged(slot, sigval1);
	});
}

struct miqt_string QScreen_Tr2(const char* s, const char* c) {
	QString _ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QScreen_GrabWindow1(QScreen* self, uintptr_t window) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window)));
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x)));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

void QScreen_Delete(QScreen* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScreen*>( self );
	} else {
		delete self;
	}
}

