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
#include "_cgo_export.h"

double QTextItem_Descent(const QTextItem* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextItem_Ascent(const QTextItem* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextItem_Width(const QTextItem* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

int QTextItem_RenderFlags(const QTextItem* self) {
	QTextItem::RenderFlags _ret = self->renderFlags();
	return static_cast<int>(_ret);
}

struct miqt_string QTextItem_Text(const QTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QTextItem_Font(const QTextItem* self) {
	return new QFont(self->font());
}

void QTextItem_Delete(QTextItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQPaintEngine : public virtual QPaintEngine {
public:

	MiqtVirtualQPaintEngine(): QPaintEngine() {};
	MiqtVirtualQPaintEngine(QPaintEngine::PaintEngineFeatures features): QPaintEngine(features) {};

	virtual ~MiqtVirtualQPaintEngine() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Begin = 0;

	// Subclass to allow providing a Go implementation
	virtual bool begin(QPaintDevice* pdev) override {
		if (handle__Begin == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QPaintDevice* sigval1 = pdev;

		bool callback_return_value = miqt_exec_callback_QPaintEngine_Begin(this, handle__Begin, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__End = 0;

	// Subclass to allow providing a Go implementation
	virtual bool end() override {
		if (handle__End == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QPaintEngine_End(this, handle__End);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(const QPaintEngineState& state) override {
		if (handle__UpdateState == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QPaintEngineState& state_ret = state;
		// Cast returned reference into pointer
		QPaintEngineState* sigval1 = const_cast<QPaintEngineState*>(&state_ret);

		miqt_exec_callback_QPaintEngine_UpdateState(this, handle__UpdateState, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRects = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRect* rects, int rectCount) override {
		if (handle__DrawRects == 0) {
			QPaintEngine::drawRects(rects, rectCount);
			return;
		}
		
		QRect* sigval1 = (QRect*) rects;
		int sigval2 = rectCount;

		miqt_exec_callback_QPaintEngine_DrawRects(this, handle__DrawRects, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawRects(QRect* rects, int rectCount) {

		QPaintEngine::drawRects(rects, static_cast<int>(rectCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRects2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRects(const QRectF* rects, int rectCount) override {
		if (handle__DrawRects2 == 0) {
			QPaintEngine::drawRects(rects, rectCount);
			return;
		}
		
		QRectF* sigval1 = (QRectF*) rects;
		int sigval2 = rectCount;

		miqt_exec_callback_QPaintEngine_DrawRects2(this, handle__DrawRects2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawRects2(QRectF* rects, int rectCount) {

		QPaintEngine::drawRects(rects, static_cast<int>(rectCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawLines = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLine* lines, int lineCount) override {
		if (handle__DrawLines == 0) {
			QPaintEngine::drawLines(lines, lineCount);
			return;
		}
		
		QLine* sigval1 = (QLine*) lines;
		int sigval2 = lineCount;

		miqt_exec_callback_QPaintEngine_DrawLines(this, handle__DrawLines, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawLines(QLine* lines, int lineCount) {

		QPaintEngine::drawLines(lines, static_cast<int>(lineCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawLines2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLines(const QLineF* lines, int lineCount) override {
		if (handle__DrawLines2 == 0) {
			QPaintEngine::drawLines(lines, lineCount);
			return;
		}
		
		QLineF* sigval1 = (QLineF*) lines;
		int sigval2 = lineCount;

		miqt_exec_callback_QPaintEngine_DrawLines2(this, handle__DrawLines2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawLines2(QLineF* lines, int lineCount) {

		QPaintEngine::drawLines(lines, static_cast<int>(lineCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawEllipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRectF& r) override {
		if (handle__DrawEllipse == 0) {
			QPaintEngine::drawEllipse(r);
			return;
		}
		
		const QRectF& r_ret = r;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&r_ret);

		miqt_exec_callback_QPaintEngine_DrawEllipse(this, handle__DrawEllipse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawEllipse(QRectF* r) {

		QPaintEngine::drawEllipse(*r);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawEllipseWithQRect = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawEllipse(const QRect& r) override {
		if (handle__DrawEllipseWithQRect == 0) {
			QPaintEngine::drawEllipse(r);
			return;
		}
		
		const QRect& r_ret = r;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&r_ret);

		miqt_exec_callback_QPaintEngine_DrawEllipseWithQRect(this, handle__DrawEllipseWithQRect, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawEllipseWithQRect(QRect* r) {

		QPaintEngine::drawEllipse(*r);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPath = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPath(const QPainterPath& path) override {
		if (handle__DrawPath == 0) {
			QPaintEngine::drawPath(path);
			return;
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);

		miqt_exec_callback_QPaintEngine_DrawPath(this, handle__DrawPath, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPath(QPainterPath* path) {

		QPaintEngine::drawPath(*path);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPoints = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPointF* points, int pointCount) override {
		if (handle__DrawPoints == 0) {
			QPaintEngine::drawPoints(points, pointCount);
			return;
		}
		
		QPointF* sigval1 = (QPointF*) points;
		int sigval2 = pointCount;

		miqt_exec_callback_QPaintEngine_DrawPoints(this, handle__DrawPoints, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPoints(QPointF* points, int pointCount) {

		QPaintEngine::drawPoints(points, static_cast<int>(pointCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPoints2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPoints(const QPoint* points, int pointCount) override {
		if (handle__DrawPoints2 == 0) {
			QPaintEngine::drawPoints(points, pointCount);
			return;
		}
		
		QPoint* sigval1 = (QPoint*) points;
		int sigval2 = pointCount;

		miqt_exec_callback_QPaintEngine_DrawPoints2(this, handle__DrawPoints2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPoints2(QPoint* points, int pointCount) {

		QPaintEngine::drawPoints(points, static_cast<int>(pointCount));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPolygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPointF* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
		if (handle__DrawPolygon == 0) {
			QPaintEngine::drawPolygon(points, pointCount, mode);
			return;
		}
		
		QPointF* sigval1 = (QPointF*) points;
		int sigval2 = pointCount;
		QPaintEngine::PolygonDrawMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		miqt_exec_callback_QPaintEngine_DrawPolygon(this, handle__DrawPolygon, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPolygon(QPointF* points, int pointCount, int mode) {

		QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPolygon2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPolygon(const QPoint* points, int pointCount, QPaintEngine::PolygonDrawMode mode) override {
		if (handle__DrawPolygon2 == 0) {
			QPaintEngine::drawPolygon(points, pointCount, mode);
			return;
		}
		
		QPoint* sigval1 = (QPoint*) points;
		int sigval2 = pointCount;
		QPaintEngine::PolygonDrawMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		miqt_exec_callback_QPaintEngine_DrawPolygon2(this, handle__DrawPolygon2, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawPolygon2(QPoint* points, int pointCount, int mode) {

		QPaintEngine::drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawPixmap(const QRectF& r, const QPixmap& pm, const QRectF& sr) override {
		if (handle__DrawPixmap == 0) {
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

		miqt_exec_callback_QPaintEngine_DrawPixmap(this, handle__DrawPixmap, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawTextItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTextItem(const QPointF& p, const QTextItem& textItem) override {
		if (handle__DrawTextItem == 0) {
			QPaintEngine::drawTextItem(p, textItem);
			return;
		}
		
		const QPointF& p_ret = p;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&p_ret);
		const QTextItem& textItem_ret = textItem;
		// Cast returned reference into pointer
		QTextItem* sigval2 = const_cast<QTextItem*>(&textItem_ret);

		miqt_exec_callback_QPaintEngine_DrawTextItem(this, handle__DrawTextItem, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawTextItem(QPointF* p, QTextItem* textItem) {

		QPaintEngine::drawTextItem(*p, *textItem);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawTiledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTiledPixmap(const QRectF& r, const QPixmap& pixmap, const QPointF& s) override {
		if (handle__DrawTiledPixmap == 0) {
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

		miqt_exec_callback_QPaintEngine_DrawTiledPixmap(this, handle__DrawTiledPixmap, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawTiledPixmap(QRectF* r, QPixmap* pixmap, QPointF* s) {

		QPaintEngine::drawTiledPixmap(*r, *pixmap, *s);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawImage(const QRectF& r, const QImage& pm, const QRectF& sr, Qt::ImageConversionFlags flags) override {
		if (handle__DrawImage == 0) {
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

		miqt_exec_callback_QPaintEngine_DrawImage(this, handle__DrawImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawImage(QRectF* r, QImage* pm, QRectF* sr, int flags) {

		QPaintEngine::drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CoordinateOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual QPoint coordinateOffset() const override {
		if (handle__CoordinateOffset == 0) {
			return QPaintEngine::coordinateOffset();
		}
		

		QPoint* callback_return_value = miqt_exec_callback_QPaintEngine_CoordinateOffset(const_cast<MiqtVirtualQPaintEngine*>(this), handle__CoordinateOffset);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPoint* virtualbase_CoordinateOffset() const {

		return new QPoint(QPaintEngine::coordinateOffset());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine::Type type() const override {
		if (handle__Type == 0) {
			return (QPaintEngine::Type)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QPaintEngine_Type(const_cast<MiqtVirtualQPaintEngine*>(this), handle__Type);

		return static_cast<QPaintEngine::Type>(callback_return_value);
	}

};

QPaintEngine* QPaintEngine_new() {
	return new MiqtVirtualQPaintEngine();
}

QPaintEngine* QPaintEngine_new2(int features) {
	return new MiqtVirtualQPaintEngine(static_cast<QPaintEngine::PaintEngineFeatures>(features));
}

bool QPaintEngine_IsActive(const QPaintEngine* self) {
	return self->isActive();
}

void QPaintEngine_SetActive(QPaintEngine* self, bool newState) {
	self->setActive(newState);
}

bool QPaintEngine_Begin(QPaintEngine* self, QPaintDevice* pdev) {
	return self->begin(pdev);
}

bool QPaintEngine_End(QPaintEngine* self) {
	return self->end();
}

void QPaintEngine_UpdateState(QPaintEngine* self, QPaintEngineState* state) {
	self->updateState(*state);
}

void QPaintEngine_DrawRects(QPaintEngine* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_DrawRects2(QPaintEngine* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_DrawLines(QPaintEngine* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_DrawLines2(QPaintEngine* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_DrawEllipse(QPaintEngine* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_DrawEllipseWithQRect(QPaintEngine* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_DrawPath(QPaintEngine* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPaintEngine_DrawPoints(QPaintEngine* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_DrawPoints2(QPaintEngine* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_DrawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*r, *pm, *sr);
}

void QPaintEngine_DrawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem) {
	self->drawTextItem(*p, *textItem);
}

void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	self->drawTiledPixmap(*r, *pixmap, *s);
}

void QPaintEngine_DrawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	self->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_PaintDevice(const QPaintEngine* self) {
	return self->paintDevice();
}

void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_SystemClip(const QPaintEngine* self) {
	return new QRegion(self->systemClip());
}

void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_SystemRect(const QPaintEngine* self) {
	return new QRect(self->systemRect());
}

QPoint* QPaintEngine_CoordinateOffset(const QPaintEngine* self) {
	return new QPoint(self->coordinateOffset());
}

int QPaintEngine_Type(const QPaintEngine* self) {
	QPaintEngine::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
	self->fix_neg_rect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

bool QPaintEngine_TestDirty(QPaintEngine* self, int df) {
	return self->testDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_SetDirty(QPaintEngine* self, int df) {
	self->setDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_ClearDirty(QPaintEngine* self, int df) {
	self->clearDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

bool QPaintEngine_HasFeature(const QPaintEngine* self, int feature) {
	return self->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_Painter(const QPaintEngine* self) {
	return self->painter();
}

void QPaintEngine_SyncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_IsExtended(const QPaintEngine* self) {
	return self->isExtended();
}

void QPaintEngine_override_virtual_Begin(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__Begin = slot;
}

void QPaintEngine_override_virtual_End(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__End = slot;
}

void QPaintEngine_override_virtual_UpdateState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__UpdateState = slot;
}

void QPaintEngine_override_virtual_DrawRects(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawRects = slot;
}

void QPaintEngine_virtualbase_DrawRects(void* self, QRect* rects, int rectCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawRects(rects, rectCount);
}

void QPaintEngine_override_virtual_DrawRects2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawRects2 = slot;
}

void QPaintEngine_virtualbase_DrawRects2(void* self, QRectF* rects, int rectCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawRects2(rects, rectCount);
}

void QPaintEngine_override_virtual_DrawLines(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawLines = slot;
}

void QPaintEngine_virtualbase_DrawLines(void* self, QLine* lines, int lineCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawLines(lines, lineCount);
}

void QPaintEngine_override_virtual_DrawLines2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawLines2 = slot;
}

void QPaintEngine_virtualbase_DrawLines2(void* self, QLineF* lines, int lineCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawLines2(lines, lineCount);
}

void QPaintEngine_override_virtual_DrawEllipse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawEllipse = slot;
}

void QPaintEngine_virtualbase_DrawEllipse(void* self, QRectF* r) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawEllipse(r);
}

void QPaintEngine_override_virtual_DrawEllipseWithQRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawEllipseWithQRect = slot;
}

void QPaintEngine_virtualbase_DrawEllipseWithQRect(void* self, QRect* r) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawEllipseWithQRect(r);
}

void QPaintEngine_override_virtual_DrawPath(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPath = slot;
}

void QPaintEngine_virtualbase_DrawPath(void* self, QPainterPath* path) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawPath(path);
}

void QPaintEngine_override_virtual_DrawPoints(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPoints = slot;
}

void QPaintEngine_virtualbase_DrawPoints(void* self, QPointF* points, int pointCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawPoints(points, pointCount);
}

void QPaintEngine_override_virtual_DrawPoints2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPoints2 = slot;
}

void QPaintEngine_virtualbase_DrawPoints2(void* self, QPoint* points, int pointCount) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawPoints2(points, pointCount);
}

void QPaintEngine_override_virtual_DrawPolygon(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPolygon = slot;
}

void QPaintEngine_virtualbase_DrawPolygon(void* self, QPointF* points, int pointCount, int mode) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawPolygon(points, pointCount, mode);
}

void QPaintEngine_override_virtual_DrawPolygon2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPolygon2 = slot;
}

void QPaintEngine_virtualbase_DrawPolygon2(void* self, QPoint* points, int pointCount, int mode) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawPolygon2(points, pointCount, mode);
}

void QPaintEngine_override_virtual_DrawPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawPixmap = slot;
}

void QPaintEngine_override_virtual_DrawTextItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawTextItem = slot;
}

void QPaintEngine_virtualbase_DrawTextItem(void* self, QPointF* p, QTextItem* textItem) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawTextItem(p, textItem);
}

void QPaintEngine_override_virtual_DrawTiledPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawTiledPixmap = slot;
}

void QPaintEngine_virtualbase_DrawTiledPixmap(void* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawTiledPixmap(r, pixmap, s);
}

void QPaintEngine_override_virtual_DrawImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__DrawImage = slot;
}

void QPaintEngine_virtualbase_DrawImage(void* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	( (MiqtVirtualQPaintEngine*)(self) )->virtualbase_DrawImage(r, pm, sr, flags);
}

void QPaintEngine_override_virtual_CoordinateOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__CoordinateOffset = slot;
}

QPoint* QPaintEngine_virtualbase_CoordinateOffset(const void* self) {
	return ( (const MiqtVirtualQPaintEngine*)(self) )->virtualbase_CoordinateOffset();
}

void QPaintEngine_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEngine*>( (QPaintEngine*)(self) )->handle__Type = slot;
}

void QPaintEngine_Delete(QPaintEngine* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPaintEngine*>( self );
	} else {
		delete self;
	}
}

int QPaintEngineState_State(const QPaintEngineState* self) {
	QPaintEngine::DirtyFlags _ret = self->state();
	return static_cast<int>(_ret);
}

QPen* QPaintEngineState_Pen(const QPaintEngineState* self) {
	return new QPen(self->pen());
}

QBrush* QPaintEngineState_Brush(const QPaintEngineState* self) {
	return new QBrush(self->brush());
}

QPointF* QPaintEngineState_BrushOrigin(const QPaintEngineState* self) {
	return new QPointF(self->brushOrigin());
}

QBrush* QPaintEngineState_BackgroundBrush(const QPaintEngineState* self) {
	return new QBrush(self->backgroundBrush());
}

int QPaintEngineState_BackgroundMode(const QPaintEngineState* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QFont* QPaintEngineState_Font(const QPaintEngineState* self) {
	return new QFont(self->font());
}

QMatrix* QPaintEngineState_Matrix(const QPaintEngineState* self) {
	return new QMatrix(self->matrix());
}

QTransform* QPaintEngineState_Transform(const QPaintEngineState* self) {
	return new QTransform(self->transform());
}

int QPaintEngineState_ClipOperation(const QPaintEngineState* self) {
	Qt::ClipOperation _ret = self->clipOperation();
	return static_cast<int>(_ret);
}

QRegion* QPaintEngineState_ClipRegion(const QPaintEngineState* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPaintEngineState_ClipPath(const QPaintEngineState* self) {
	return new QPainterPath(self->clipPath());
}

bool QPaintEngineState_IsClipEnabled(const QPaintEngineState* self) {
	return self->isClipEnabled();
}

int QPaintEngineState_RenderHints(const QPaintEngineState* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

int QPaintEngineState_CompositionMode(const QPaintEngineState* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<int>(_ret);
}

double QPaintEngineState_Opacity(const QPaintEngineState* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

QPainter* QPaintEngineState_Painter(const QPaintEngineState* self) {
	return self->painter();
}

bool QPaintEngineState_BrushNeedsResolving(const QPaintEngineState* self) {
	return self->brushNeedsResolving();
}

bool QPaintEngineState_PenNeedsResolving(const QPaintEngineState* self) {
	return self->penNeedsResolving();
}

void QPaintEngineState_Delete(QPaintEngineState* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPaintEngineState*>( self );
	} else {
		delete self;
	}
}

