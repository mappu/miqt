#include <QImage>
#include <QLine>
#include <QLineF>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEngineState>
#include <QPainter>
#include <QPainterPath>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QTextItem>
#include <qwt_null_paintdevice.h>
#include "gen_qwt_null_paintdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

QPaintEngine* miqt_exec_callback_QwtNullPaintDevice_paintEngine(const QwtNullPaintDevice*, intptr_t);
int miqt_exec_callback_QwtNullPaintDevice_metric(const QwtNullPaintDevice*, intptr_t, int);
void miqt_exec_callback_QwtNullPaintDevice_drawRects(QwtNullPaintDevice*, intptr_t, QRect*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawRects2(QwtNullPaintDevice*, intptr_t, QRectF*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawLines(QwtNullPaintDevice*, intptr_t, QLine*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawLines2(QwtNullPaintDevice*, intptr_t, QLineF*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawEllipse(QwtNullPaintDevice*, intptr_t, QRectF*);
void miqt_exec_callback_QwtNullPaintDevice_drawEllipseWithQRect(QwtNullPaintDevice*, intptr_t, QRect*);
void miqt_exec_callback_QwtNullPaintDevice_drawPath(QwtNullPaintDevice*, intptr_t, QPainterPath*);
void miqt_exec_callback_QwtNullPaintDevice_drawPoints(QwtNullPaintDevice*, intptr_t, QPointF*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawPoints2(QwtNullPaintDevice*, intptr_t, QPoint*, int);
void miqt_exec_callback_QwtNullPaintDevice_drawPolygon(QwtNullPaintDevice*, intptr_t, QPointF*, int, int);
void miqt_exec_callback_QwtNullPaintDevice_drawPolygon2(QwtNullPaintDevice*, intptr_t, QPoint*, int, int);
void miqt_exec_callback_QwtNullPaintDevice_drawPixmap(QwtNullPaintDevice*, intptr_t, QRectF*, QPixmap*, QRectF*);
void miqt_exec_callback_QwtNullPaintDevice_drawTextItem(QwtNullPaintDevice*, intptr_t, QPointF*, QTextItem*);
void miqt_exec_callback_QwtNullPaintDevice_drawTiledPixmap(QwtNullPaintDevice*, intptr_t, QRectF*, QPixmap*, QPointF*);
void miqt_exec_callback_QwtNullPaintDevice_drawImage(QwtNullPaintDevice*, intptr_t, QRectF*, QImage*, QRectF*, int);
void miqt_exec_callback_QwtNullPaintDevice_updateState(QwtNullPaintDevice*, intptr_t, QPaintEngineState*);
QSize* miqt_exec_callback_QwtNullPaintDevice_sizeMetrics(const QwtNullPaintDevice*, intptr_t);
int miqt_exec_callback_QwtNullPaintDevice_devType(const QwtNullPaintDevice*, intptr_t);
void miqt_exec_callback_QwtNullPaintDevice_initPainter(const QwtNullPaintDevice*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtNullPaintDevice_redirected(const QwtNullPaintDevice*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtNullPaintDevice_sharedPainter(const QwtNullPaintDevice*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtNullPaintDevice final : public QwtNullPaintDevice {
public:

	MiqtVirtualQwtNullPaintDevice(): QwtNullPaintDevice() {}

	virtual ~MiqtVirtualQwtNullPaintDevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtNullPaintDevice::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtNullPaintDevice_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtNullPaintDevice_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtNullPaintDevice::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtNullPaintDevice_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtNullPaintDevice_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRects = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRect* param1, int param2) override {
		if (handle__drawRects == 0) {
			QwtNullPaintDevice::drawRects(param1, param2);
			return;
		}

		QRect* sigval1 = (QRect*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawRects(this, handle__drawRects, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawRects(void* self, QRect* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRects2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRectF* param1, int param2) override {
		if (handle__drawRects2 == 0) {
			QwtNullPaintDevice::drawRects(param1, param2);
			return;
		}

		QRectF* sigval1 = (QRectF*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawRects2(this, handle__drawRects2, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawRects2(void* self, QRectF* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLines = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLine* param1, int param2) override {
		if (handle__drawLines == 0) {
			QwtNullPaintDevice::drawLines(param1, param2);
			return;
		}

		QLine* sigval1 = (QLine*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawLines(this, handle__drawLines, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawLines(void* self, QLine* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLines2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLineF* param1, int param2) override {
		if (handle__drawLines2 == 0) {
			QwtNullPaintDevice::drawLines(param1, param2);
			return;
		}

		QLineF* sigval1 = (QLineF*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawLines2(this, handle__drawLines2, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawLines2(void* self, QLineF* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawEllipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRectF& param1) override {
		if (handle__drawEllipse == 0) {
			QwtNullPaintDevice::drawEllipse(param1);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawEllipse(this, handle__drawEllipse, sigval1);

	}

	friend void QwtNullPaintDevice_virtualbase_drawEllipse(void* self, QRectF* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawEllipseWithQRect = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRect& param1) override {
		if (handle__drawEllipseWithQRect == 0) {
			QwtNullPaintDevice::drawEllipse(param1);
			return;
		}

		const QRect& param1_ret = param1;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&param1_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawEllipseWithQRect(this, handle__drawEllipseWithQRect, sigval1);

	}

	friend void QwtNullPaintDevice_virtualbase_drawEllipseWithQRect(void* self, QRect* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPath = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPath(const QPainterPath& param1) override {
		if (handle__drawPath == 0) {
			QwtNullPaintDevice::drawPath(param1);
			return;
		}

		const QPainterPath& param1_ret = param1;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&param1_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawPath(this, handle__drawPath, sigval1);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPath(void* self, QPainterPath* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPoints = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPointF* param1, int param2) override {
		if (handle__drawPoints == 0) {
			QwtNullPaintDevice::drawPoints(param1, param2);
			return;
		}

		QPointF* sigval1 = (QPointF*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawPoints(this, handle__drawPoints, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPoints(void* self, QPointF* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPoints2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPoint* param1, int param2) override {
		if (handle__drawPoints2 == 0) {
			QwtNullPaintDevice::drawPoints(param1, param2);
			return;
		}

		QPoint* sigval1 = (QPoint*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtNullPaintDevice_drawPoints2(this, handle__drawPoints2, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPoints2(void* self, QPoint* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPolygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPointF* param1, int param2, QPaintEngine::PolygonDrawMode param3) override {
		if (handle__drawPolygon == 0) {
			QwtNullPaintDevice::drawPolygon(param1, param2, param3);
			return;
		}

		QPointF* sigval1 = (QPointF*) param1;
		int sigval2 = param2;
		QPaintEngine::PolygonDrawMode param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawPolygon(this, handle__drawPolygon, sigval1, sigval2, sigval3);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPolygon2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPoint* param1, int param2, QPaintEngine::PolygonDrawMode param3) override {
		if (handle__drawPolygon2 == 0) {
			QwtNullPaintDevice::drawPolygon(param1, param2, param3);
			return;
		}

		QPoint* sigval1 = (QPoint*) param1;
		int sigval2 = param2;
		QPaintEngine::PolygonDrawMode param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawPolygon2(this, handle__drawPolygon2, sigval1, sigval2, sigval3);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPolygon2(void* self, QPoint* param1, int param2, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPixmap(const QRectF& param1, const QPixmap& param2, const QRectF& param3) override {
		if (handle__drawPixmap == 0) {
			QwtNullPaintDevice::drawPixmap(param1, param2, param3);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		const QPixmap& param2_ret = param2;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&param2_ret);
		const QRectF& param3_ret = param3;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&param3_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawPixmap(this, handle__drawPixmap, sigval1, sigval2, sigval3);

	}

	friend void QwtNullPaintDevice_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTextItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTextItem(const QPointF& param1, const QTextItem& param2) override {
		if (handle__drawTextItem == 0) {
			QwtNullPaintDevice::drawTextItem(param1, param2);
			return;
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		const QTextItem& param2_ret = param2;
		// Cast returned reference into pointer
		QTextItem* sigval2 = const_cast<QTextItem*>(&param2_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawTextItem(this, handle__drawTextItem, sigval1, sigval2);

	}

	friend void QwtNullPaintDevice_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTiledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTiledPixmap(const QRectF& param1, const QPixmap& param2, const QPointF& param3) override {
		if (handle__drawTiledPixmap == 0) {
			QwtNullPaintDevice::drawTiledPixmap(param1, param2, param3);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		const QPixmap& param2_ret = param2;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&param2_ret);
		const QPointF& param3_ret = param3;
		// Cast returned reference into pointer
		QPointF* sigval3 = const_cast<QPointF*>(&param3_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawTiledPixmap(this, handle__drawTiledPixmap, sigval1, sigval2, sigval3);

	}

	friend void QwtNullPaintDevice_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawImage(const QRectF& param1, const QImage& param2, const QRectF& param3, Qt::ImageConversionFlags param4) override {
		if (handle__drawImage == 0) {
			QwtNullPaintDevice::drawImage(param1, param2, param3, param4);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		const QImage& param2_ret = param2;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&param2_ret);
		const QRectF& param3_ret = param3;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&param3_ret);
		Qt::ImageConversionFlags param4_ret = param4;
		int sigval4 = static_cast<int>(param4_ret);
		miqt_exec_callback_QwtNullPaintDevice_drawImage(this, handle__drawImage, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtNullPaintDevice_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(const QPaintEngineState& param1) override {
		if (handle__updateState == 0) {
			QwtNullPaintDevice::updateState(param1);
			return;
		}

		const QPaintEngineState& param1_ret = param1;
		// Cast returned reference into pointer
		QPaintEngineState* sigval1 = const_cast<QPaintEngineState*>(&param1_ret);
		miqt_exec_callback_QwtNullPaintDevice_updateState(this, handle__updateState, sigval1);

	}

	friend void QwtNullPaintDevice_virtualbase_updateState(void* self, QPaintEngineState* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeMetrics = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeMetrics() const override {
		if (handle__sizeMetrics == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}

		QSize* callback_return_value = miqt_exec_callback_QwtNullPaintDevice_sizeMetrics(this, handle__sizeMetrics);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtNullPaintDevice::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtNullPaintDevice_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtNullPaintDevice_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtNullPaintDevice::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtNullPaintDevice_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtNullPaintDevice_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtNullPaintDevice::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtNullPaintDevice_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtNullPaintDevice_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtNullPaintDevice::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtNullPaintDevice_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtNullPaintDevice_virtualbase_sharedPainter(const void* self);

};

QwtNullPaintDevice* QwtNullPaintDevice_new() {
	return new (std::nothrow) MiqtVirtualQwtNullPaintDevice();
}

void QwtNullPaintDevice_virtbase(QwtNullPaintDevice* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

void QwtNullPaintDevice_setMode(QwtNullPaintDevice* self, int mode) {
	self->setMode(static_cast<QwtNullPaintDevice::Mode>(mode));
}

int QwtNullPaintDevice_mode(const QwtNullPaintDevice* self) {
	QwtNullPaintDevice::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

QPaintEngine* QwtNullPaintDevice_paintEngine(const QwtNullPaintDevice* self) {
	return self->paintEngine();
}

int QwtNullPaintDevice_metric(const QwtNullPaintDevice* self, int param1) {
	return self->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}

void QwtNullPaintDevice_drawRects(QwtNullPaintDevice* self, QRect* param1, int param2) {
	self->drawRects(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawRects2(QwtNullPaintDevice* self, QRectF* param1, int param2) {
	self->drawRects(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawLines(QwtNullPaintDevice* self, QLine* param1, int param2) {
	self->drawLines(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawLines2(QwtNullPaintDevice* self, QLineF* param1, int param2) {
	self->drawLines(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawEllipse(QwtNullPaintDevice* self, QRectF* param1) {
	self->drawEllipse(*param1);
}

void QwtNullPaintDevice_drawEllipseWithQRect(QwtNullPaintDevice* self, QRect* param1) {
	self->drawEllipse(*param1);
}

void QwtNullPaintDevice_drawPath(QwtNullPaintDevice* self, QPainterPath* param1) {
	self->drawPath(*param1);
}

void QwtNullPaintDevice_drawPoints(QwtNullPaintDevice* self, QPointF* param1, int param2) {
	self->drawPoints(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawPoints2(QwtNullPaintDevice* self, QPoint* param1, int param2) {
	self->drawPoints(param1, static_cast<int>(param2));
}

void QwtNullPaintDevice_drawPolygon(QwtNullPaintDevice* self, QPointF* param1, int param2, int param3) {
	self->drawPolygon(param1, static_cast<int>(param2), static_cast<QPaintEngine::PolygonDrawMode>(param3));
}

void QwtNullPaintDevice_drawPolygon2(QwtNullPaintDevice* self, QPoint* param1, int param2, int param3) {
	self->drawPolygon(param1, static_cast<int>(param2), static_cast<QPaintEngine::PolygonDrawMode>(param3));
}

void QwtNullPaintDevice_drawPixmap(QwtNullPaintDevice* self, QRectF* param1, QPixmap* param2, QRectF* param3) {
	self->drawPixmap(*param1, *param2, *param3);
}

void QwtNullPaintDevice_drawTextItem(QwtNullPaintDevice* self, QPointF* param1, QTextItem* param2) {
	self->drawTextItem(*param1, *param2);
}

void QwtNullPaintDevice_drawTiledPixmap(QwtNullPaintDevice* self, QRectF* param1, QPixmap* param2, QPointF* param3) {
	self->drawTiledPixmap(*param1, *param2, *param3);
}

void QwtNullPaintDevice_drawImage(QwtNullPaintDevice* self, QRectF* param1, QImage* param2, QRectF* param3, int param4) {
	self->drawImage(*param1, *param2, *param3, static_cast<Qt::ImageConversionFlags>(param4));
}

void QwtNullPaintDevice_updateState(QwtNullPaintDevice* self, QPaintEngineState* param1) {
	self->updateState(*param1);
}

bool QwtNullPaintDevice_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtNullPaintDevice_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::paintEngine();
}

bool QwtNullPaintDevice_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtNullPaintDevice_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::metric(static_cast<MiqtVirtualQwtNullPaintDevice::PaintDeviceMetric>(param1));
}

bool QwtNullPaintDevice_override_virtual_drawRects(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRects = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawRects(void* self, QRect* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawRects(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawRects2(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRects2 = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawRects2(void* self, QRectF* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawRects(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawLines(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLines = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawLines(void* self, QLine* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawLines(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawLines2(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLines2 = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawLines2(void* self, QLineF* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawLines(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawEllipse(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawEllipse = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawEllipse(void* self, QRectF* param1) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawEllipse(*param1);
}

bool QwtNullPaintDevice_override_virtual_drawEllipseWithQRect(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawEllipseWithQRect = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawEllipseWithQRect(void* self, QRect* param1) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawEllipse(*param1);
}

bool QwtNullPaintDevice_override_virtual_drawPath(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPath = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPath(void* self, QPainterPath* param1) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPath(*param1);
}

bool QwtNullPaintDevice_override_virtual_drawPoints(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPoints = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPoints(void* self, QPointF* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPoints(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawPoints2(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPoints2 = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPoints2(void* self, QPoint* param1, int param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPoints(param1, static_cast<int>(param2));
}

bool QwtNullPaintDevice_override_virtual_drawPolygon(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPolygon = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPolygon(param1, static_cast<int>(param2), static_cast<QPaintEngine::PolygonDrawMode>(param3));
}

bool QwtNullPaintDevice_override_virtual_drawPolygon2(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPolygon2 = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPolygon2(void* self, QPoint* param1, int param2, int param3) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPolygon(param1, static_cast<int>(param2), static_cast<QPaintEngine::PolygonDrawMode>(param3));
}

bool QwtNullPaintDevice_override_virtual_drawPixmap(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPixmap = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawPixmap(*param1, *param2, *param3);
}

bool QwtNullPaintDevice_override_virtual_drawTextItem(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTextItem = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawTextItem(*param1, *param2);
}

bool QwtNullPaintDevice_override_virtual_drawTiledPixmap(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTiledPixmap = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawTiledPixmap(*param1, *param2, *param3);
}

bool QwtNullPaintDevice_override_virtual_drawImage(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawImage = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::drawImage(*param1, *param2, *param3, static_cast<Qt::ImageConversionFlags>(param4));
}

bool QwtNullPaintDevice_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_updateState(void* self, QPaintEngineState* param1) {
	static_cast<MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::updateState(*param1);
}

bool QwtNullPaintDevice_override_virtual_sizeMetrics(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeMetrics = slot;
	return true;
}

bool QwtNullPaintDevice_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtNullPaintDevice_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::devType();
}

bool QwtNullPaintDevice_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtNullPaintDevice_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::initPainter(painter);
}

bool QwtNullPaintDevice_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtNullPaintDevice_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::redirected(offset);
}

bool QwtNullPaintDevice_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtNullPaintDevice* self_cast = dynamic_cast<MiqtVirtualQwtNullPaintDevice*>( (QwtNullPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtNullPaintDevice_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtNullPaintDevice*>(self)->QwtNullPaintDevice::sharedPainter();
}

void QwtNullPaintDevice_delete(QwtNullPaintDevice* self) {
	delete self;
}

