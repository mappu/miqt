#include <QImage>
#include <QLine>
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
#include <QSizeF>
#include <QTextItem>
#include <qwt_graphic.h>
#include "gen_qwt_graphic.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QwtGraphic_sizeMetrics(const QwtGraphic*, intptr_t);
void miqt_exec_callback_QwtGraphic_drawPath(QwtGraphic*, intptr_t, QPainterPath*);
void miqt_exec_callback_QwtGraphic_drawPixmap(QwtGraphic*, intptr_t, QRectF*, QPixmap*, QRectF*);
void miqt_exec_callback_QwtGraphic_drawImage(QwtGraphic*, intptr_t, QRectF*, QImage*, QRectF*, int);
void miqt_exec_callback_QwtGraphic_updateState(QwtGraphic*, intptr_t, QPaintEngineState*);
QPaintEngine* miqt_exec_callback_QwtGraphic_paintEngine(const QwtGraphic*, intptr_t);
int miqt_exec_callback_QwtGraphic_metric(const QwtGraphic*, intptr_t, int);
void miqt_exec_callback_QwtGraphic_drawRects(QwtGraphic*, intptr_t, QRect*, int);
void miqt_exec_callback_QwtGraphic_drawLines(QwtGraphic*, intptr_t, QLine*, int);
void miqt_exec_callback_QwtGraphic_drawEllipse(QwtGraphic*, intptr_t, QRectF*);
void miqt_exec_callback_QwtGraphic_drawPoints(QwtGraphic*, intptr_t, QPointF*, int);
void miqt_exec_callback_QwtGraphic_drawPolygon(QwtGraphic*, intptr_t, QPointF*, int, int);
void miqt_exec_callback_QwtGraphic_drawTextItem(QwtGraphic*, intptr_t, QPointF*, QTextItem*);
void miqt_exec_callback_QwtGraphic_drawTiledPixmap(QwtGraphic*, intptr_t, QRectF*, QPixmap*, QPointF*);
int miqt_exec_callback_QwtGraphic_devType(const QwtGraphic*, intptr_t);
void miqt_exec_callback_QwtGraphic_initPainter(const QwtGraphic*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtGraphic_redirected(const QwtGraphic*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtGraphic_sharedPainter(const QwtGraphic*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtGraphic final : public QwtGraphic {
public:

	MiqtVirtualQwtGraphic(): QwtGraphic() {}
	MiqtVirtualQwtGraphic(const QwtGraphic& param1): QwtGraphic(param1) {}

	virtual ~MiqtVirtualQwtGraphic() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeMetrics = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeMetrics() const override {
		if (handle__sizeMetrics == 0) {
			return QwtGraphic::sizeMetrics();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtGraphic_sizeMetrics(this, handle__sizeMetrics);
		return *callback_return_value;
	}

	friend QSize* QwtGraphic_virtualbase_sizeMetrics(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPath = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPath(const QPainterPath& param1) override {
		if (handle__drawPath == 0) {
			QwtGraphic::drawPath(param1);
			return;
		}

		const QPainterPath& param1_ret = param1;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&param1_ret);
		miqt_exec_callback_QwtGraphic_drawPath(this, handle__drawPath, sigval1);

	}

	friend void QwtGraphic_virtualbase_drawPath(void* self, QPainterPath* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPixmap(const QRectF& param1, const QPixmap& param2, const QRectF& param3) override {
		if (handle__drawPixmap == 0) {
			QwtGraphic::drawPixmap(param1, param2, param3);
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
		miqt_exec_callback_QwtGraphic_drawPixmap(this, handle__drawPixmap, sigval1, sigval2, sigval3);

	}

	friend void QwtGraphic_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawImage(const QRectF& param1, const QImage& param2, const QRectF& param3, Qt::ImageConversionFlags param4) override {
		if (handle__drawImage == 0) {
			QwtGraphic::drawImage(param1, param2, param3, param4);
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
		miqt_exec_callback_QwtGraphic_drawImage(this, handle__drawImage, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtGraphic_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(const QPaintEngineState& state) override {
		if (handle__updateState == 0) {
			QwtGraphic::updateState(state);
			return;
		}

		const QPaintEngineState& state_ret = state;
		// Cast returned reference into pointer
		QPaintEngineState* sigval1 = const_cast<QPaintEngineState*>(&state_ret);
		miqt_exec_callback_QwtGraphic_updateState(this, handle__updateState, sigval1);

	}

	friend void QwtGraphic_virtualbase_updateState(void* self, QPaintEngineState* state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtGraphic::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtGraphic_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtGraphic_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtGraphic::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtGraphic_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtGraphic_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRects = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRect* param1, int param2) override {
		if (handle__drawRects == 0) {
			QwtGraphic::drawRects(param1, param2);
			return;
		}

		QRect* sigval1 = (QRect*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtGraphic_drawRects(this, handle__drawRects, sigval1, sigval2);

	}

	friend void QwtGraphic_virtualbase_drawRects(void* self, QRect* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLines = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLine* param1, int param2) override {
		if (handle__drawLines == 0) {
			QwtGraphic::drawLines(param1, param2);
			return;
		}

		QLine* sigval1 = (QLine*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtGraphic_drawLines(this, handle__drawLines, sigval1, sigval2);

	}

	friend void QwtGraphic_virtualbase_drawLines(void* self, QLine* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawEllipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRectF& param1) override {
		if (handle__drawEllipse == 0) {
			QwtGraphic::drawEllipse(param1);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QwtGraphic_drawEllipse(this, handle__drawEllipse, sigval1);

	}

	friend void QwtGraphic_virtualbase_drawEllipse(void* self, QRectF* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPoints = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPointF* param1, int param2) override {
		if (handle__drawPoints == 0) {
			QwtGraphic::drawPoints(param1, param2);
			return;
		}

		QPointF* sigval1 = (QPointF*) param1;
		int sigval2 = param2;
		miqt_exec_callback_QwtGraphic_drawPoints(this, handle__drawPoints, sigval1, sigval2);

	}

	friend void QwtGraphic_virtualbase_drawPoints(void* self, QPointF* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPolygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPointF* param1, int param2, QPaintEngine::PolygonDrawMode param3) override {
		if (handle__drawPolygon == 0) {
			QwtGraphic::drawPolygon(param1, param2, param3);
			return;
		}

		QPointF* sigval1 = (QPointF*) param1;
		int sigval2 = param2;
		QPaintEngine::PolygonDrawMode param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtGraphic_drawPolygon(this, handle__drawPolygon, sigval1, sigval2, sigval3);

	}

	friend void QwtGraphic_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTextItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTextItem(const QPointF& param1, const QTextItem& param2) override {
		if (handle__drawTextItem == 0) {
			QwtGraphic::drawTextItem(param1, param2);
			return;
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		const QTextItem& param2_ret = param2;
		// Cast returned reference into pointer
		QTextItem* sigval2 = const_cast<QTextItem*>(&param2_ret);
		miqt_exec_callback_QwtGraphic_drawTextItem(this, handle__drawTextItem, sigval1, sigval2);

	}

	friend void QwtGraphic_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTiledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTiledPixmap(const QRectF& param1, const QPixmap& param2, const QPointF& param3) override {
		if (handle__drawTiledPixmap == 0) {
			QwtGraphic::drawTiledPixmap(param1, param2, param3);
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
		miqt_exec_callback_QwtGraphic_drawTiledPixmap(this, handle__drawTiledPixmap, sigval1, sigval2, sigval3);

	}

	friend void QwtGraphic_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtGraphic::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtGraphic_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtGraphic_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtGraphic::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtGraphic_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtGraphic_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtGraphic::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtGraphic_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtGraphic_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtGraphic::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtGraphic_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtGraphic_virtualbase_sharedPainter(const void* self);

};

QwtGraphic* QwtGraphic_new() {
	return new (std::nothrow) MiqtVirtualQwtGraphic();
}

QwtGraphic* QwtGraphic_new2(QwtGraphic* param1) {
	return new (std::nothrow) MiqtVirtualQwtGraphic(*param1);
}

void QwtGraphic_virtbase(QwtGraphic* src, QwtNullPaintDevice** outptr_QwtNullPaintDevice) {
	*outptr_QwtNullPaintDevice = static_cast<QwtNullPaintDevice*>(src);
}

void QwtGraphic_operatorAssign(QwtGraphic* self, QwtGraphic* param1) {
	self->operator=(*param1);
}

void QwtGraphic_reset(QwtGraphic* self) {
	self->reset();
}

bool QwtGraphic_isNull(const QwtGraphic* self) {
	return self->isNull();
}

bool QwtGraphic_isEmpty(const QwtGraphic* self) {
	return self->isEmpty();
}

void QwtGraphic_render(const QwtGraphic* self, QPainter* param1) {
	self->render(param1);
}

void QwtGraphic_render2(const QwtGraphic* self, QPainter* param1, QSizeF* param2) {
	self->render(param1, *param2);
}

void QwtGraphic_render3(const QwtGraphic* self, QPainter* param1, QRectF* param2) {
	self->render(param1, *param2);
}

void QwtGraphic_render4(const QwtGraphic* self, QPainter* param1, QPointF* param2) {
	self->render(param1, *param2);
}

QPixmap* QwtGraphic_toPixmap(const QwtGraphic* self) {
	return new QPixmap(self->toPixmap());
}

QPixmap* QwtGraphic_toPixmapWithQSize(const QwtGraphic* self, QSize* param1) {
	return new QPixmap(self->toPixmap(*param1));
}

QImage* QwtGraphic_toImage(const QwtGraphic* self) {
	return new QImage(self->toImage());
}

QImage* QwtGraphic_toImageWithQSize(const QwtGraphic* self, QSize* param1) {
	return new QImage(self->toImage(*param1));
}

QRectF* QwtGraphic_scaledBoundingRect(const QwtGraphic* self, double sx, double sy) {
	return new QRectF(self->scaledBoundingRect(static_cast<double>(sx), static_cast<double>(sy)));
}

QRectF* QwtGraphic_boundingRect(const QwtGraphic* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QwtGraphic_controlPointRect(const QwtGraphic* self) {
	return new QRectF(self->controlPointRect());
}

void QwtGraphic_setDefaultSize(QwtGraphic* self, QSizeF* defaultSize) {
	self->setDefaultSize(*defaultSize);
}

QSizeF* QwtGraphic_defaultSize(const QwtGraphic* self) {
	return new QSizeF(self->defaultSize());
}

void QwtGraphic_setRenderHint(QwtGraphic* self, int param1) {
	self->setRenderHint(static_cast<QwtGraphic::RenderHint>(param1));
}

bool QwtGraphic_testRenderHint(const QwtGraphic* self, int param1) {
	return self->testRenderHint(static_cast<QwtGraphic::RenderHint>(param1));
}

void QwtGraphic_render5(const QwtGraphic* self, QPainter* param1, QSizeF* param2, int param3) {
	self->render(param1, *param2, static_cast<Qt::AspectRatioMode>(param3));
}

void QwtGraphic_render6(const QwtGraphic* self, QPainter* param1, QRectF* param2, int param3) {
	self->render(param1, *param2, static_cast<Qt::AspectRatioMode>(param3));
}

void QwtGraphic_render7(const QwtGraphic* self, QPainter* param1, QPointF* param2, int param3) {
	self->render(param1, *param2, static_cast<Qt::Alignment>(param3));
}

QPixmap* QwtGraphic_toPixmap2(const QwtGraphic* self, QSize* param1, int param2) {
	return new QPixmap(self->toPixmap(*param1, static_cast<Qt::AspectRatioMode>(param2)));
}

QImage* QwtGraphic_toImage2(const QwtGraphic* self, QSize* param1, int param2) {
	return new QImage(self->toImage(*param1, static_cast<Qt::AspectRatioMode>(param2)));
}

void QwtGraphic_setRenderHint2(QwtGraphic* self, int param1, bool on) {
	self->setRenderHint(static_cast<QwtGraphic::RenderHint>(param1), on);
}

bool QwtGraphic_override_virtual_sizeMetrics(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeMetrics = slot;
	return true;
}

QSize* QwtGraphic_virtualbase_sizeMetrics(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::sizeMetrics());
}

bool QwtGraphic_override_virtual_drawPath(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPath = slot;
	return true;
}

void QwtGraphic_virtualbase_drawPath(void* self, QPainterPath* param1) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawPath(*param1);
}

bool QwtGraphic_override_virtual_drawPixmap(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPixmap = slot;
	return true;
}

void QwtGraphic_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawPixmap(*param1, *param2, *param3);
}

bool QwtGraphic_override_virtual_drawImage(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawImage = slot;
	return true;
}

void QwtGraphic_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawImage(*param1, *param2, *param3, static_cast<Qt::ImageConversionFlags>(param4));
}

bool QwtGraphic_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = slot;
	return true;
}

void QwtGraphic_virtualbase_updateState(void* self, QPaintEngineState* state) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::updateState(*state);
}

bool QwtGraphic_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtGraphic_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::paintEngine();
}

bool QwtGraphic_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtGraphic_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::metric(static_cast<MiqtVirtualQwtGraphic::PaintDeviceMetric>(param1));
}

bool QwtGraphic_override_virtual_drawRects(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRects = slot;
	return true;
}

void QwtGraphic_virtualbase_drawRects(void* self, QRect* param1, int param2) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawRects(param1, static_cast<int>(param2));
}

bool QwtGraphic_override_virtual_drawLines(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLines = slot;
	return true;
}

void QwtGraphic_virtualbase_drawLines(void* self, QLine* param1, int param2) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawLines(param1, static_cast<int>(param2));
}

bool QwtGraphic_override_virtual_drawEllipse(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawEllipse = slot;
	return true;
}

void QwtGraphic_virtualbase_drawEllipse(void* self, QRectF* param1) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawEllipse(*param1);
}

bool QwtGraphic_override_virtual_drawPoints(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPoints = slot;
	return true;
}

void QwtGraphic_virtualbase_drawPoints(void* self, QPointF* param1, int param2) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawPoints(param1, static_cast<int>(param2));
}

bool QwtGraphic_override_virtual_drawPolygon(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawPolygon = slot;
	return true;
}

void QwtGraphic_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawPolygon(param1, static_cast<int>(param2), static_cast<QPaintEngine::PolygonDrawMode>(param3));
}

bool QwtGraphic_override_virtual_drawTextItem(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTextItem = slot;
	return true;
}

void QwtGraphic_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawTextItem(*param1, *param2);
}

bool QwtGraphic_override_virtual_drawTiledPixmap(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTiledPixmap = slot;
	return true;
}

void QwtGraphic_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3) {
	static_cast<MiqtVirtualQwtGraphic*>(self)->QwtGraphic::drawTiledPixmap(*param1, *param2, *param3);
}

bool QwtGraphic_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtGraphic_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::devType();
}

bool QwtGraphic_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtGraphic_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::initPainter(painter);
}

bool QwtGraphic_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtGraphic_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::redirected(offset);
}

bool QwtGraphic_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtGraphic* self_cast = dynamic_cast<MiqtVirtualQwtGraphic*>( (QwtGraphic*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtGraphic_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtGraphic*>(self)->QwtGraphic::sharedPainter();
}

void QwtGraphic_delete(QwtGraphic* self) {
	delete self;
}

