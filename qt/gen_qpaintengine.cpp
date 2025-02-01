#include <QBrush>
#include <QFont>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEngineState>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextItem>
#include <QTransform>
#include <qpaintengine.h>
#include "gen_qpaintengine.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPaintEngine_begin(QPaintEngine*, intptr_t, QPaintDevice*);
bool miqt_exec_callback_QPaintEngine_end(QPaintEngine*, intptr_t);
void miqt_exec_callback_QPaintEngine_updateState(QPaintEngine*, intptr_t, QPaintEngineState*);
void miqt_exec_callback_QPaintEngine_drawRects(QPaintEngine*, intptr_t, QRect*, int);
void miqt_exec_callback_QPaintEngine_drawRects2(QPaintEngine*, intptr_t, QRectF*, int);
void miqt_exec_callback_QPaintEngine_drawLines(QPaintEngine*, intptr_t, QLine*, int);
void miqt_exec_callback_QPaintEngine_drawLines2(QPaintEngine*, intptr_t, QLineF*, int);
void miqt_exec_callback_QPaintEngine_drawEllipse(QPaintEngine*, intptr_t, QRectF*);
void miqt_exec_callback_QPaintEngine_drawEllipseWithQRect(QPaintEngine*, intptr_t, QRect*);
void miqt_exec_callback_QPaintEngine_drawPath(QPaintEngine*, intptr_t, QPainterPath*);
void miqt_exec_callback_QPaintEngine_drawPoints(QPaintEngine*, intptr_t, QPointF*, int);
void miqt_exec_callback_QPaintEngine_drawPoints2(QPaintEngine*, intptr_t, QPoint*, int);
void miqt_exec_callback_QPaintEngine_drawPolygon(QPaintEngine*, intptr_t, QPointF*, int, int);
void miqt_exec_callback_QPaintEngine_drawPolygon2(QPaintEngine*, intptr_t, QPoint*, int, int);
void miqt_exec_callback_QPaintEngine_drawPixmap(QPaintEngine*, intptr_t, QRectF*, QPixmap*, QRectF*);
void miqt_exec_callback_QPaintEngine_drawTextItem(QPaintEngine*, intptr_t, QPointF*, QTextItem*);
void miqt_exec_callback_QPaintEngine_drawTiledPixmap(QPaintEngine*, intptr_t, QRectF*, QPixmap*, QPointF*);
void miqt_exec_callback_QPaintEngine_drawImage(QPaintEngine*, intptr_t, QRectF*, QImage*, QRectF*, int);
QPoint* miqt_exec_callback_QPaintEngine_coordinateOffset(const QPaintEngine*, intptr_t);
int miqt_exec_callback_QPaintEngine_type(const QPaintEngine*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

double QTextItem_descent(const QTextItem* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextItem_ascent(const QTextItem* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextItem_width(const QTextItem* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

int QTextItem_renderFlags(const QTextItem* self) {
	QTextItem::RenderFlags _ret = self->renderFlags();
	return static_cast<int>(_ret);
}

struct miqt_string QTextItem_text(const QTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QTextItem_font(const QTextItem* self) {
	return new QFont(self->font());
}

void QTextItem_delete(QTextItem* self) {
	delete self;
}

class MiqtVirtualQPaintEngine final : public QPaintEngine {
public:

	MiqtVirtualQPaintEngine(): QPaintEngine() {};
	MiqtVirtualQPaintEngine(QPaintEngine::PaintEngineFeatures features): QPaintEngine(features) {};

	virtual ~MiqtVirtualQPaintEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__begin = 0;

	// Subclass to allow providing a Go implementation
	virtual bool begin(QPaintDevice* pdev) override {
		if (handle__begin == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QPaintDevice* sigval1 = pdev;

		bool callback_return_value = miqt_exec_callback_QPaintEngine_begin(this, handle__begin, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__end = 0;

	// Subclass to allow providing a Go implementation
	virtual bool end() override {
		if (handle__end == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QPaintEngine_end(this, handle__end);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(const QPaintEngineState& state) override {
		if (handle__updateState == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QPaintEngineState& state_ret = state;
		// Cast returned reference into pointer
		QPaintEngineState* sigval1 = const_cast<QPaintEngineState*>(&state_ret);

		miqt_exec_callback_QPaintEngine_updateState(this, handle__updateState, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRects = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRect* rects, int rectCount) override {
		if (handle__drawRects == 0) {
			QPaintEngine::drawRects(rects, rectCount);
			return;
		}
		
		QRect* sigval1 = (QRect*) rects;
		int sigval2 = rectCount;

		miqt_exec_callback_QPaintEngine_drawRects(this, handle__drawRects, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawRects(QRect* rects, int rectCount) {

		QPaintEngine::drawRects(rects, static_cast<int>(rectCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRects2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRectF* rects, int rectCount) override {
		if (handle__drawRects2 == 0) {
			QPaintEngine::drawRects(rects, rectCount);
			return;
		}
		
		QRectF* sigval1 = (QRectF*) rects;
		int sigval2 = rectCount;

		miqt_exec_callback_QPaintEngine_drawRects2(this, handle__drawRects2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawRects2(QRectF* rects, int rectCount) {

		QPaintEngine::drawRects(rects, static_cast<int>(rectCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLines = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLine* lines, int lineCount) override {
		if (handle__drawLines == 0) {
			QPaintEngine::drawLines(lines, lineCount);
			return;
		}
		
		QLine* sigval1 = (QLine*) lines;
		int sigval2 = lineCount;

		miqt_exec_callback_QPaintEngine_drawLines(this, handle__drawLines, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawLines(QLine* lines, int lineCount) {

		QPaintEngine::drawLines(lines, static_cast<int>(lineCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLines2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLineF* lines, int lineCount) override {
		if (handle__drawLines2 == 0) {
			QPaintEngine::drawLines(lines, lineCount);
			return;
		}
		
		QLineF* sigval1 = (QLineF*) lines;
		int sigval2 = lineCount;

		miqt_exec_callback_QPaintEngine_drawLines2(this, handle__drawLines2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawLines2(QLineF* lines, int lineCount) {

		QPaintEngine::drawLines(lines, static_cast<int>(lineCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawEllipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRectF& r) override {
		if (handle__drawEllipse == 0) {
			QPaintEngine::drawEllipse(r);
			return;
		}
		
		const QRectF& r_ret = r;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&r_ret);

		miqt_exec_callback_QPaintEngine_drawEllipse(this, handle__drawEllipse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawEllipse(QRectF* r) {

		QPaintEngine::drawEllipse(*r);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawEllipseWithQRect = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRect& r) override {
		if (handle__drawEllipseWithQRect == 0) {
			QPaintEngine::drawEllipse(r);
			return;
		}
		
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);

		miqt_exec_callback_QPaintEngine_drawEllipseWithQRect(this, handle__drawEllipseWithQRect, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawEllipseWithQRect(QRect* r) {

		QPaintEngine::drawEllipse(*r);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPath = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPath(const QPainterPath& path) override {
		if (handle__drawPath == 0) {
			QPaintEngine::drawPath(path);
			return;
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);

		miqt_exec_callback_QPaintEngine_drawPath(this, handle__drawPath, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawPath(QPainterPath* path) {

		QPaintEngine::drawPath(*path);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPoints = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPointF* points, int pointCount) override {
		if (handle__drawPoints == 0) {
			QPaintEngine::drawPoints(points, pointCount);
			return;
		}
		
		QPointF* sigval1 = (QPointF*) points;
		int sigval2 = pointCount;

		miqt_exec_callback_QPaintEngine_drawPoints(this, handle__drawPoints, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawPoints(QPointF* points, int pointCount) {

		QPaintEngine::drawPoints(points, static_cast<int>(pointCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPoints2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPoint* points, int pointCount) override {
		if (handle__drawPoints2 == 0) {
			QPaintEngine::drawPoints(points, pointCount);
			return;
		}
		
		QPoint* sigval1 = (QPoint*) points;
		int sigval2 = pointCount;

		miqt_exec_callback_QPaintEngine_drawPoints2(this, handle__drawPoints2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawPoints2(QPoint* points, int pointCount) {

		QPaintEngine::drawPoints(points, static_cast<int>(pointCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPolygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPointF* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
		if (handle__drawPolygon == 0) {
			QPaintEngine::drawPolygon(points, pointCount, mode);
			return;
		}
		
		QPointF* sigval1 = (QPointF*) points;
		int sigval2 = pointCount;
		QPaintEngine::PolygonDrawMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		miqt_exec_callback_QPaintEngine_drawPolygon(this, handle__drawPolygon, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawPolygon(QPointF* points, int pointCount, int mode) {

		QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPolygon2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPoint* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
		if (handle__drawPolygon2 == 0) {
			QPaintEngine::drawPolygon(points, pointCount, mode);
			return;
		}
		
		QPoint* sigval1 = (QPoint*) points;
		int sigval2 = pointCount;
		QPaintEngine::PolygonDrawMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		miqt_exec_callback_QPaintEngine_drawPolygon2(this, handle__drawPolygon2, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawPolygon2(QPoint* points, int pointCount, int mode) {

		QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPixmap(const QRectF& r, const QPixmap& pm, const QRectF& sr) override {
		if (handle__drawPixmap == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QRectF& r_ret = r;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&r_ret);
		const QPixmap& pm_ret = pm;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pm_ret);
		const QRectF& sr_ret = sr;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&sr_ret);

		miqt_exec_callback_QPaintEngine_drawPixmap(this, handle__drawPixmap, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTextItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTextItem(const QPointF& p, const QTextItem& textItem) override {
		if (handle__drawTextItem == 0) {
			QPaintEngine::drawTextItem(p, textItem);
			return;
		}
		
		const QPointF& p_ret = p;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&p_ret);
		const QTextItem& textItem_ret = textItem;
		// Cast returned reference into pointer
		QTextItem* sigval2 = const_cast<QTextItem*>(&textItem_ret);

		miqt_exec_callback_QPaintEngine_drawTextItem(this, handle__drawTextItem, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawTextItem(QPointF* p, QTextItem* textItem) {

		QPaintEngine::drawTextItem(*p, *textItem);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTiledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTiledPixmap(const QRectF& r, const QPixmap& pixmap, const QPointF& s) override {
		if (handle__drawTiledPixmap == 0) {
			QPaintEngine::drawTiledPixmap(r, pixmap, s);
			return;
		}
		
		const QRectF& r_ret = r;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&r_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval2 = const_cast<QPixmap*>(&pixmap_ret);
		const QPointF& s_ret = s;
		// Cast returned reference into pointer
		QPointF* sigval3 = const_cast<QPointF*>(&s_ret);

		miqt_exec_callback_QPaintEngine_drawTiledPixmap(this, handle__drawTiledPixmap, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawTiledPixmap(QRectF* r, QPixmap* pixmap, QPointF* s) {

		QPaintEngine::drawTiledPixmap(*r, *pixmap, *s);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawImage(const QRectF& r, const QImage& pm, const QRectF& sr, Qt::ImageConversionFlags flags) override {
		if (handle__drawImage == 0) {
			QPaintEngine::drawImage(r, pm, sr, flags);
			return;
		}
		
		const QRectF& r_ret = r;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&r_ret);
		const QImage& pm_ret = pm;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&pm_ret);
		const QRectF& sr_ret = sr;
		// Cast returned reference into pointer
		QRectF* sigval3 = const_cast<QRectF*>(&sr_ret);
		Qt::ImageConversionFlags flags_ret = flags;
		int sigval4 = static_cast<int>(flags_ret);

		miqt_exec_callback_QPaintEngine_drawImage(this, handle__drawImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawImage(QRectF* r, QImage* pm, QRectF* sr, int flags) {

		QPaintEngine::drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__coordinateOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual QPoint coordinateOffset() const override {
		if (handle__coordinateOffset == 0) {
			return QPaintEngine::coordinateOffset();
		}
		

		QPoint* callback_return_value = miqt_exec_callback_QPaintEngine_coordinateOffset(this, handle__coordinateOffset);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPoint* virtualbase_coordinateOffset() const {

		return new QPoint(QPaintEngine::coordinateOffset());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine::Type type() const override {
		if (handle__type == 0) {
			return (QPaintEngine::Type)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QPaintEngine_type(this, handle__type);

		return static_cast<QPaintEngine::Type>(callback_return_value);
	}

};

QPaintEngine* QPaintEngine_new() {
	return new MiqtVirtualQPaintEngine();
}

QPaintEngine* QPaintEngine_new2(int features) {
	return new MiqtVirtualQPaintEngine(static_cast<QPaintEngine::PaintEngineFeatures>(features));
}

bool QPaintEngine_isActive(const QPaintEngine* self) {
	return self->isActive();
}

void QPaintEngine_setActive(QPaintEngine* self, bool newState) {
	self->setActive(newState);
}

bool QPaintEngine_begin(QPaintEngine* self, QPaintDevice* pdev) {
	return self->begin(pdev);
}

bool QPaintEngine_end(QPaintEngine* self) {
	return self->end();
}

void QPaintEngine_updateState(QPaintEngine* self, QPaintEngineState* state) {
	self->updateState(*state);
}

void QPaintEngine_drawRects(QPaintEngine* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_drawRects2(QPaintEngine* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_drawLines(QPaintEngine* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_drawLines2(QPaintEngine* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_drawEllipse(QPaintEngine* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_drawEllipseWithQRect(QPaintEngine* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_drawPath(QPaintEngine* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPaintEngine_drawPoints(QPaintEngine* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_drawPoints2(QPaintEngine* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_drawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_drawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_drawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*r, *pm, *sr);
}

void QPaintEngine_drawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem) {
	self->drawTextItem(*p, *textItem);
}

void QPaintEngine_drawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	self->drawTiledPixmap(*r, *pixmap, *s);
}

void QPaintEngine_drawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	self->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPaintEngine_setPaintDevice(QPaintEngine* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_paintDevice(const QPaintEngine* self) {
	return self->paintDevice();
}

void QPaintEngine_setSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_systemClip(const QPaintEngine* self) {
	return new QRegion(self->systemClip());
}

void QPaintEngine_setSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_systemRect(const QPaintEngine* self) {
	return new QRect(self->systemRect());
}

QPoint* QPaintEngine_coordinateOffset(const QPaintEngine* self) {
	return new QPoint(self->coordinateOffset());
}

int QPaintEngine_type(const QPaintEngine* self) {
	QPaintEngine::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QPaintEngine_fixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
	self->fix_neg_rect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

bool QPaintEngine_testDirty(QPaintEngine* self, int df) {
	return self->testDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_setDirty(QPaintEngine* self, int df) {
	self->setDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_clearDirty(QPaintEngine* self, int df) {
	self->clearDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

bool QPaintEngine_hasFeature(const QPaintEngine* self, int feature) {
	return self->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_painter(const QPaintEngine* self) {
	return self->painter();
}

void QPaintEngine_syncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_isExtended(const QPaintEngine* self) {
	return self->isExtended();
}

bool QPaintEngine_override_virtual_begin(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__begin = slot;
	return true;
}

bool QPaintEngine_override_virtual_end(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__end = slot;
	return true;
}

bool QPaintEngine_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

bool QPaintEngine_override_virtual_drawRects(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawRects = slot;
	return true;
}

void QPaintEngine_virtualbase_drawRects(void* self, QRect* rects, int rectCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawRects(rects, rectCount);
}

bool QPaintEngine_override_virtual_drawRects2(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawRects2 = slot;
	return true;
}

void QPaintEngine_virtualbase_drawRects2(void* self, QRectF* rects, int rectCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawRects2(rects, rectCount);
}

bool QPaintEngine_override_virtual_drawLines(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawLines = slot;
	return true;
}

void QPaintEngine_virtualbase_drawLines(void* self, QLine* lines, int lineCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawLines(lines, lineCount);
}

bool QPaintEngine_override_virtual_drawLines2(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawLines2 = slot;
	return true;
}

void QPaintEngine_virtualbase_drawLines2(void* self, QLineF* lines, int lineCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawLines2(lines, lineCount);
}

bool QPaintEngine_override_virtual_drawEllipse(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawEllipse = slot;
	return true;
}

void QPaintEngine_virtualbase_drawEllipse(void* self, QRectF* r) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawEllipse(r);
}

bool QPaintEngine_override_virtual_drawEllipseWithQRect(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawEllipseWithQRect = slot;
	return true;
}

void QPaintEngine_virtualbase_drawEllipseWithQRect(void* self, QRect* r) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawEllipseWithQRect(r);
}

bool QPaintEngine_override_virtual_drawPath(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPath = slot;
	return true;
}

void QPaintEngine_virtualbase_drawPath(void* self, QPainterPath* path) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawPath(path);
}

bool QPaintEngine_override_virtual_drawPoints(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPoints = slot;
	return true;
}

void QPaintEngine_virtualbase_drawPoints(void* self, QPointF* points, int pointCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawPoints(points, pointCount);
}

bool QPaintEngine_override_virtual_drawPoints2(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPoints2 = slot;
	return true;
}

void QPaintEngine_virtualbase_drawPoints2(void* self, QPoint* points, int pointCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawPoints2(points, pointCount);
}

bool QPaintEngine_override_virtual_drawPolygon(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPolygon = slot;
	return true;
}

void QPaintEngine_virtualbase_drawPolygon(void* self, QPointF* points, int pointCount, int mode) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawPolygon(points, pointCount, mode);
}

bool QPaintEngine_override_virtual_drawPolygon2(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPolygon2 = slot;
	return true;
}

void QPaintEngine_virtualbase_drawPolygon2(void* self, QPoint* points, int pointCount, int mode) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawPolygon2(points, pointCount, mode);
}

bool QPaintEngine_override_virtual_drawPixmap(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawPixmap = slot;
	return true;
}

bool QPaintEngine_override_virtual_drawTextItem(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawTextItem = slot;
	return true;
}

void QPaintEngine_virtualbase_drawTextItem(void* self, QPointF* p, QTextItem* textItem) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawTextItem(p, textItem);
}

bool QPaintEngine_override_virtual_drawTiledPixmap(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawTiledPixmap = slot;
	return true;
}

void QPaintEngine_virtualbase_drawTiledPixmap(void* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawTiledPixmap(r, pixmap, s);
}

bool QPaintEngine_override_virtual_drawImage(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawImage = slot;
	return true;
}

void QPaintEngine_virtualbase_drawImage(void* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_drawImage(r, pm, sr, flags);
}

bool QPaintEngine_override_virtual_coordinateOffset(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__coordinateOffset = slot;
	return true;
}

QPoint* QPaintEngine_virtualbase_coordinateOffset(const void* self) {
	return ( (const MiqtVirtualQPaintEngine*)(self) )->virtualbase_coordinateOffset();
}

bool QPaintEngine_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQPaintEngine* self_cast = dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

void QPaintEngine_delete(QPaintEngine* self) {
	delete self;
}

int QPaintEngineState_state(const QPaintEngineState* self) {
	QPaintEngine::DirtyFlags _ret = self->state();
	return static_cast<int>(_ret);
}

QPen* QPaintEngineState_pen(const QPaintEngineState* self) {
	return new QPen(self->pen());
}

QBrush* QPaintEngineState_brush(const QPaintEngineState* self) {
	return new QBrush(self->brush());
}

QPointF* QPaintEngineState_brushOrigin(const QPaintEngineState* self) {
	return new QPointF(self->brushOrigin());
}

QBrush* QPaintEngineState_backgroundBrush(const QPaintEngineState* self) {
	return new QBrush(self->backgroundBrush());
}

int QPaintEngineState_backgroundMode(const QPaintEngineState* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QFont* QPaintEngineState_font(const QPaintEngineState* self) {
	return new QFont(self->font());
}

QMatrix* QPaintEngineState_matrix(const QPaintEngineState* self) {
	return new QMatrix(self->matrix());
}

QTransform* QPaintEngineState_transform(const QPaintEngineState* self) {
	return new QTransform(self->transform());
}

int QPaintEngineState_clipOperation(const QPaintEngineState* self) {
	Qt::ClipOperation _ret = self->clipOperation();
	return static_cast<int>(_ret);
}

QRegion* QPaintEngineState_clipRegion(const QPaintEngineState* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPaintEngineState_clipPath(const QPaintEngineState* self) {
	return new QPainterPath(self->clipPath());
}

bool QPaintEngineState_isClipEnabled(const QPaintEngineState* self) {
	return self->isClipEnabled();
}

int QPaintEngineState_renderHints(const QPaintEngineState* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

int QPaintEngineState_compositionMode(const QPaintEngineState* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<int>(_ret);
}

double QPaintEngineState_opacity(const QPaintEngineState* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

QPainter* QPaintEngineState_painter(const QPaintEngineState* self) {
	return self->painter();
}

bool QPaintEngineState_brushNeedsResolving(const QPaintEngineState* self) {
	return self->brushNeedsResolving();
}

bool QPaintEngineState_penNeedsResolving(const QPaintEngineState* self) {
	return self->penNeedsResolving();
}

void QPaintEngineState_delete(QPaintEngineState* self) {
	delete self;
}

