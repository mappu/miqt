#include <QList>
#include <QMetaMethod>
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

void miqt_exec_callback_QScreen_geometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_availableGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_physicalSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QScreen_physicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_logicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_virtualGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_primaryOrientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_orientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_refreshRateChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

void QScreen_virtbase(QScreen* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScreen_metaObject(const QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScreen_metacast(QScreen* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScreen_tr(const char* s) {
	QString _ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_trUtf8(const char* s) {
	QString _ret = QScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_name(const QScreen* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_manufacturer(const QScreen* self) {
	QString _ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_model(const QScreen* self) {
	QString _ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_serialNumber(const QScreen* self) {
	QString _ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScreen_depth(const QScreen* self) {
	return self->depth();
}

QSize* QScreen_size(const QScreen* self) {
	return new QSize(self->size());
}

QRect* QScreen_geometry(const QScreen* self) {
	return new QRect(self->geometry());
}

QSizeF* QScreen_physicalSize(const QScreen* self) {
	return new QSizeF(self->physicalSize());
}

double QScreen_physicalDotsPerInchX(const QScreen* self) {
	qreal _ret = self->physicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_physicalDotsPerInchY(const QScreen* self) {
	qreal _ret = self->physicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_physicalDotsPerInch(const QScreen* self) {
	qreal _ret = self->physicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInchX(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInchY(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInch(const QScreen* self) {
	qreal _ret = self->logicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_devicePixelRatio(const QScreen* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

QSize* QScreen_availableSize(const QScreen* self) {
	return new QSize(self->availableSize());
}

QRect* QScreen_availableGeometry(const QScreen* self) {
	return new QRect(self->availableGeometry());
}

struct miqt_array /* of QScreen* */  QScreen_virtualSiblings(const QScreen* self) {
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

QScreen* QScreen_virtualSiblingAt(QScreen* self, QPoint* point) {
	return self->virtualSiblingAt(*point);
}

QSize* QScreen_virtualSize(const QScreen* self) {
	return new QSize(self->virtualSize());
}

QRect* QScreen_virtualGeometry(const QScreen* self) {
	return new QRect(self->virtualGeometry());
}

QSize* QScreen_availableVirtualSize(const QScreen* self) {
	return new QSize(self->availableVirtualSize());
}

QRect* QScreen_availableVirtualGeometry(const QScreen* self) {
	return new QRect(self->availableVirtualGeometry());
}

int QScreen_primaryOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->primaryOrientation();
	return static_cast<int>(_ret);
}

int QScreen_orientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QScreen_nativeOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->nativeOrientation();
	return static_cast<int>(_ret);
}

int QScreen_orientationUpdateMask(const QScreen* self) {
	Qt::ScreenOrientations _ret = self->orientationUpdateMask();
	return static_cast<int>(_ret);
}

void QScreen_setOrientationUpdateMask(QScreen* self, int mask) {
	self->setOrientationUpdateMask(static_cast<Qt::ScreenOrientations>(mask));
}

int QScreen_angleBetween(const QScreen* self, int a, int b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_transformBetween(const QScreen* self, int a, int b, QRect* target) {
	return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_mapBetween(const QScreen* self, int a, int b, QRect* rect) {
	return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_isPortrait(const QScreen* self, int orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_isLandscape(const QScreen* self, int orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_grabWindow(QScreen* self, uintptr_t window) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window)));
}

double QScreen_refreshRate(const QScreen* self) {
	qreal _ret = self->refreshRate();
	return static_cast<double>(_ret);
}

void QScreen_geometryChanged(QScreen* self, QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_connect_geometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::geometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_geometryChanged(slot, sigval1);
	});
}

void QScreen_availableGeometryChanged(QScreen* self, QRect* geometry) {
	self->availableGeometryChanged(*geometry);
}

void QScreen_connect_availableGeometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::availableGeometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_availableGeometryChanged(slot, sigval1);
	});
}

void QScreen_physicalSizeChanged(QScreen* self, QSizeF* size) {
	self->physicalSizeChanged(*size);
}

void QScreen_connect_physicalSizeChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QSizeF&)>(&QScreen::physicalSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QScreen_physicalSizeChanged(slot, sigval1);
	});
}

void QScreen_physicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->physicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_physicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::physicalDotsPerInchChanged), self, [=](qreal dpi) {
		qreal dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_physicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_logicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_connect_logicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::logicalDotsPerInchChanged), self, [=](qreal dpi) {
		qreal dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_logicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_virtualGeometryChanged(QScreen* self, QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_connect_virtualGeometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::virtualGeometryChanged), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QScreen_virtualGeometryChanged(slot, sigval1);
	});
}

void QScreen_primaryOrientationChanged(QScreen* self, int orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_primaryOrientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_primaryOrientationChanged(slot, sigval1);
	});
}

void QScreen_orientationChanged(QScreen* self, int orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_orientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_orientationChanged(slot, sigval1);
	});
}

void QScreen_refreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(static_cast<qreal>(refreshRate));
}

void QScreen_connect_refreshRateChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::refreshRateChanged), self, [=](qreal refreshRate) {
		qreal refreshRate_ret = refreshRate;
		double sigval1 = static_cast<double>(refreshRate_ret);
		miqt_exec_callback_QScreen_refreshRateChanged(slot, sigval1);
	});
}

struct miqt_string QScreen_tr2(const char* s, const char* c) {
	QString _ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_tr3(const char* s, const char* c, int n) {
	QString _ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_trUtf82(const char* s, const char* c) {
	QString _ret = QScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QScreen_grabWindow2(QScreen* self, uintptr_t window, int x) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x)));
}

QPixmap* QScreen_grabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QScreen_grabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QScreen_grabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

void QScreen_delete(QScreen* self) {
	delete self;
}

