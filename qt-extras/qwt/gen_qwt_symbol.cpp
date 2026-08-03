#include <QBrush>
#include <QByteArray>
#include <QColor>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <qwt_symbol.h>
#include "gen_qwt_symbol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtSymbol_setColor(QwtSymbol*, intptr_t, QColor*);
QRect* miqt_exec_callback_QwtSymbol_boundingRect(const QwtSymbol*, intptr_t);
void miqt_exec_callback_QwtSymbol_renderSymbols(const QwtSymbol*, intptr_t, QPainter*, QPointF*, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtSymbol final : public QwtSymbol {
public:

	MiqtVirtualQwtSymbol(): QwtSymbol() {}
	MiqtVirtualQwtSymbol(QwtSymbol::Style param1, const QBrush& param2, const QPen& param3, const QSize& param4): QwtSymbol(param1, param2, param3, param4) {}
	MiqtVirtualQwtSymbol(const QPainterPath& param1, const QBrush& param2, const QPen& param3): QwtSymbol(param1, param2, param3) {}
	MiqtVirtualQwtSymbol(QwtSymbol::Style param1): QwtSymbol(param1) {}

	virtual ~MiqtVirtualQwtSymbol() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& color) override {
		if (handle__setColor == 0) {
			QwtSymbol::setColor(color);
			return;
		}

		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QwtSymbol_setColor(this, handle__setColor, sigval1);

	}

	friend void QwtSymbol_virtualbase_setColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QwtSymbol::boundingRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtSymbol_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRect* QwtSymbol_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__renderSymbols = 0;

	// Subclass to allow providing a Go implementation
	virtual void renderSymbols(QPainter* param1, const QPointF* param2, int numPoints) const override {
		if (handle__renderSymbols == 0) {
			QwtSymbol::renderSymbols(param1, param2, numPoints);
			return;
		}

		QPainter* sigval1 = param1;
		QPointF* sigval2 = (QPointF*) param2;
		int sigval3 = numPoints;
		miqt_exec_callback_QwtSymbol_renderSymbols(this, handle__renderSymbols, sigval1, sigval2, sigval3);

	}

	friend void QwtSymbol_virtualbase_renderSymbols(const void* self, QPainter* param1, QPointF* param2, int numPoints);

};

QwtSymbol* QwtSymbol_new() {
	return new (std::nothrow) MiqtVirtualQwtSymbol();
}

QwtSymbol* QwtSymbol_new2(int param1, QBrush* param2, QPen* param3, QSize* param4) {
	return new (std::nothrow) MiqtVirtualQwtSymbol(static_cast<QwtSymbol::Style>(param1), *param2, *param3, *param4);
}

QwtSymbol* QwtSymbol_new3(QPainterPath* param1, QBrush* param2, QPen* param3) {
	return new (std::nothrow) MiqtVirtualQwtSymbol(*param1, *param2, *param3);
}

QwtSymbol* QwtSymbol_new4(int param1) {
	return new (std::nothrow) MiqtVirtualQwtSymbol(static_cast<QwtSymbol::Style>(param1));
}

void QwtSymbol_setCachePolicy(QwtSymbol* self, int cachePolicy) {
	self->setCachePolicy(static_cast<QwtSymbol::CachePolicy>(cachePolicy));
}

int QwtSymbol_cachePolicy(const QwtSymbol* self) {
	QwtSymbol::CachePolicy _ret = self->cachePolicy();
	return static_cast<int>(_ret);
}

void QwtSymbol_setSize(QwtSymbol* self, QSize* size) {
	self->setSize(*size);
}

void QwtSymbol_setSizeWithWidth(QwtSymbol* self, int width) {
	self->setSize(static_cast<int>(width));
}

QSize* QwtSymbol_size(const QwtSymbol* self) {
	const QSize& _ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

void QwtSymbol_setPinPoint(QwtSymbol* self, QPointF* pos) {
	self->setPinPoint(*pos);
}

QPointF* QwtSymbol_pinPoint(const QwtSymbol* self) {
	return new QPointF(self->pinPoint());
}

void QwtSymbol_setPinPointEnabled(QwtSymbol* self, bool pinPointEnabled) {
	self->setPinPointEnabled(pinPointEnabled);
}

bool QwtSymbol_isPinPointEnabled(const QwtSymbol* self) {
	return self->isPinPointEnabled();
}

void QwtSymbol_setColor(QwtSymbol* self, QColor* color) {
	self->setColor(*color);
}

void QwtSymbol_setBrush(QwtSymbol* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtSymbol_brush(const QwtSymbol* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QwtSymbol_setPen(QwtSymbol* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtSymbol_setPenWithPen(QwtSymbol* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtSymbol_pen(const QwtSymbol* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtSymbol_setStyle(QwtSymbol* self, int style) {
	self->setStyle(static_cast<QwtSymbol::Style>(style));
}

int QwtSymbol_style(const QwtSymbol* self) {
	QwtSymbol::Style _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtSymbol_setPath(QwtSymbol* self, QPainterPath* path) {
	self->setPath(*path);
}

QPainterPath* QwtSymbol_path(const QwtSymbol* self) {
	const QPainterPath& _ret = self->path();
	// Cast returned reference into pointer
	return const_cast<QPainterPath*>(&_ret);
}

void QwtSymbol_setPixmap(QwtSymbol* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QwtSymbol_pixmap(const QwtSymbol* self) {
	const QPixmap& _ret = self->pixmap();
	// Cast returned reference into pointer
	return const_cast<QPixmap*>(&_ret);
}

void QwtSymbol_setGraphic(QwtSymbol* self, QwtGraphic* graphic) {
	self->setGraphic(*graphic);
}

QwtGraphic* QwtSymbol_graphic(const QwtSymbol* self) {
	const QwtGraphic& _ret = self->graphic();
	// Cast returned reference into pointer
	return const_cast<QwtGraphic*>(&_ret);
}

void QwtSymbol_setSvgDocument(QwtSymbol* self, struct miqt_string svgDocument) {
	QByteArray svgDocument_QByteArray(svgDocument.data, svgDocument.len);
	self->setSvgDocument(svgDocument_QByteArray);
}

void QwtSymbol_drawSymbol(const QwtSymbol* self, QPainter* param1, QRectF* param2) {
	self->drawSymbol(param1, *param2);
}

void QwtSymbol_drawSymbol2(const QwtSymbol* self, QPainter* param1, QPointF* param2) {
	self->drawSymbol(param1, *param2);
}

void QwtSymbol_drawSymbols2(const QwtSymbol* self, QPainter* param1, QPointF* param2, int numPoints) {
	self->drawSymbols(param1, param2, static_cast<int>(numPoints));
}

QRect* QwtSymbol_boundingRect(const QwtSymbol* self) {
	return new QRect(self->boundingRect());
}

void QwtSymbol_invalidateCache(QwtSymbol* self) {
	self->invalidateCache();
}

void QwtSymbol_setSize2(QwtSymbol* self, int width, int height) {
	self->setSize(static_cast<int>(width), static_cast<int>(height));
}

void QwtSymbol_setPinPoint2(QwtSymbol* self, QPointF* pos, bool enable) {
	self->setPinPoint(*pos, enable);
}

void QwtSymbol_setPen2(QwtSymbol* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtSymbol_setPen3(QwtSymbol* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

bool QwtSymbol_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQwtSymbol* self_cast = dynamic_cast<MiqtVirtualQwtSymbol*>( (QwtSymbol*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = slot;
	return true;
}

void QwtSymbol_virtualbase_setColor(void* self, QColor* color) {
	static_cast<MiqtVirtualQwtSymbol*>(self)->QwtSymbol::setColor(*color);
}

bool QwtSymbol_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQwtSymbol* self_cast = dynamic_cast<MiqtVirtualQwtSymbol*>( (QwtSymbol*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRect* QwtSymbol_virtualbase_boundingRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtSymbol*>(self)->QwtSymbol::boundingRect());
}

bool QwtSymbol_override_virtual_renderSymbols(void* self, intptr_t slot) {
	MiqtVirtualQwtSymbol* self_cast = dynamic_cast<MiqtVirtualQwtSymbol*>( (QwtSymbol*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderSymbols = slot;
	return true;
}

void QwtSymbol_virtualbase_renderSymbols(const void* self, QPainter* param1, QPointF* param2, int numPoints) {
	static_cast<const MiqtVirtualQwtSymbol*>(self)->QwtSymbol::renderSymbols(param1, param2, static_cast<int>(numPoints));
}

void QwtSymbol_delete(QwtSymbol* self) {
	delete self;
}

