#include <QFont>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSizeF>
#include <QTransform>
#include <qwt_scale_draw.h>
#include "gen_qwt_scale_draw.h"

#ifdef __cplusplus
extern "C" {
#endif

double miqt_exec_callback_QwtScaleDraw_extent(const QwtScaleDraw*, intptr_t, QFont*);
void miqt_exec_callback_QwtScaleDraw_drawTick(const QwtScaleDraw*, intptr_t, QPainter*, double, double);
void miqt_exec_callback_QwtScaleDraw_drawBackbone(const QwtScaleDraw*, intptr_t, QPainter*);
void miqt_exec_callback_QwtScaleDraw_drawLabel(const QwtScaleDraw*, intptr_t, QPainter*, double);
void miqt_exec_callback_QwtScaleDraw_draw(const QwtScaleDraw*, intptr_t, QPainter*, QPalette*);
QwtText* miqt_exec_callback_QwtScaleDraw_label(const QwtScaleDraw*, intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtScaleDraw final : public QwtScaleDraw {
public:

	MiqtVirtualQwtScaleDraw(): QwtScaleDraw() {}

	virtual ~MiqtVirtualQwtScaleDraw() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extent = 0;

	// Subclass to allow providing a Go implementation
	virtual double extent(const QFont& param1) const override {
		if (handle__extent == 0) {
			return QwtScaleDraw::extent(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtScaleDraw_extent(this, handle__extent, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtScaleDraw_virtualbase_extent(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTick = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTick(QPainter* param1, double value, double len) const override {
		if (handle__drawTick == 0) {
			QwtScaleDraw::drawTick(param1, value, len);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		double sigval3 = len;
		miqt_exec_callback_QwtScaleDraw_drawTick(this, handle__drawTick, sigval1, sigval2, sigval3);

	}

	friend void QwtScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackbone = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackbone(QPainter* param1) const override {
		if (handle__drawBackbone == 0) {
			QwtScaleDraw::drawBackbone(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtScaleDraw_drawBackbone(this, handle__drawBackbone, sigval1);

	}

	friend void QwtScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLabel = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLabel(QPainter* param1, double value) const override {
		if (handle__drawLabel == 0) {
			QwtScaleDraw::drawLabel(param1, value);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		miqt_exec_callback_QwtScaleDraw_drawLabel(this, handle__drawLabel, sigval1, sigval2);

	}

	friend void QwtScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPalette& param2) const override {
		if (handle__draw == 0) {
			QwtScaleDraw::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QPalette& param2_ret = param2;
		// Cast returned reference into pointer
		QPalette* sigval2 = const_cast<QPalette*>(&param2_ret);
		miqt_exec_callback_QwtScaleDraw_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__label = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText label(double param1) const override {
		if (handle__label == 0) {
			return QwtScaleDraw::label(param1);
		}

		double sigval1 = param1;
		QwtText* callback_return_value = miqt_exec_callback_QwtScaleDraw_label(this, handle__label, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtScaleDraw_virtualbase_label(const void* self, double param1);

	// Wrappers to allow calling protected methods:
	friend QTransform* QwtScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2);
	friend void QwtScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend QwtText* QwtScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);
};

QwtScaleDraw* QwtScaleDraw_new() {
	return new (std::nothrow) MiqtVirtualQwtScaleDraw();
}

void QwtScaleDraw_virtbase(QwtScaleDraw* src, QwtAbstractScaleDraw** outptr_QwtAbstractScaleDraw) {
	*outptr_QwtAbstractScaleDraw = static_cast<QwtAbstractScaleDraw*>(src);
}

void QwtScaleDraw_getBorderDistHint(const QwtScaleDraw* self, QFont* param1, int* start, int* end) {
	self->getBorderDistHint(*param1, static_cast<int&>(*start), static_cast<int&>(*end));
}

int QwtScaleDraw_minLabelDist(const QwtScaleDraw* self, QFont* param1) {
	return self->minLabelDist(*param1);
}

int QwtScaleDraw_minLength(const QwtScaleDraw* self, QFont* param1) {
	return self->minLength(*param1);
}

double QwtScaleDraw_extent(const QwtScaleDraw* self, QFont* param1) {
	return self->extent(*param1);
}

void QwtScaleDraw_move(QwtScaleDraw* self, double x, double y) {
	self->move(static_cast<double>(x), static_cast<double>(y));
}

void QwtScaleDraw_moveWithQPointF(QwtScaleDraw* self, QPointF* param1) {
	self->move(*param1);
}

void QwtScaleDraw_setLength(QwtScaleDraw* self, double length) {
	self->setLength(static_cast<double>(length));
}

int QwtScaleDraw_alignment(const QwtScaleDraw* self) {
	QwtScaleDraw::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QwtScaleDraw_setAlignment(QwtScaleDraw* self, int alignment) {
	self->setAlignment(static_cast<QwtScaleDraw::Alignment>(alignment));
}

int QwtScaleDraw_orientation(const QwtScaleDraw* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

QPointF* QwtScaleDraw_pos(const QwtScaleDraw* self) {
	return new QPointF(self->pos());
}

double QwtScaleDraw_length(const QwtScaleDraw* self) {
	return self->length();
}

void QwtScaleDraw_setLabelAlignment(QwtScaleDraw* self, int labelAlignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(labelAlignment));
}

int QwtScaleDraw_labelAlignment(const QwtScaleDraw* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QwtScaleDraw_setLabelRotation(QwtScaleDraw* self, double rotation) {
	self->setLabelRotation(static_cast<double>(rotation));
}

double QwtScaleDraw_labelRotation(const QwtScaleDraw* self) {
	return self->labelRotation();
}

int QwtScaleDraw_maxLabelHeight(const QwtScaleDraw* self, QFont* param1) {
	return self->maxLabelHeight(*param1);
}

int QwtScaleDraw_maxLabelWidth(const QwtScaleDraw* self, QFont* param1) {
	return self->maxLabelWidth(*param1);
}

QPointF* QwtScaleDraw_labelPosition(const QwtScaleDraw* self, double value) {
	return new QPointF(self->labelPosition(static_cast<double>(value)));
}

QRectF* QwtScaleDraw_labelRect(const QwtScaleDraw* self, QFont* param1, double value) {
	return new QRectF(self->labelRect(*param1, static_cast<double>(value)));
}

QSizeF* QwtScaleDraw_labelSize(const QwtScaleDraw* self, QFont* param1, double value) {
	return new QSizeF(self->labelSize(*param1, static_cast<double>(value)));
}

QRect* QwtScaleDraw_boundingLabelRect(const QwtScaleDraw* self, QFont* param1, double value) {
	return new QRect(self->boundingLabelRect(*param1, static_cast<double>(value)));
}

bool QwtScaleDraw_override_virtual_extent(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extent = slot;
	return true;
}

double QwtScaleDraw_virtualbase_extent(const void* self, QFont* param1) {
	return static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::extent(*param1);
}

bool QwtScaleDraw_override_virtual_drawTick(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTick = slot;
	return true;
}

void QwtScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len) {
	static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::drawTick(param1, static_cast<double>(value), static_cast<double>(len));
}

bool QwtScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackbone = slot;
	return true;
}

void QwtScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::drawBackbone(param1);
}

bool QwtScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLabel = slot;
	return true;
}

void QwtScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value) {
	static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::drawLabel(param1, static_cast<double>(value));
}

bool QwtScaleDraw_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2) {
	static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::draw(param1, *param2);
}

bool QwtScaleDraw_override_virtual_label(void* self, intptr_t slot) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__label = slot;
	return true;
}

QwtText* QwtScaleDraw_virtualbase_label(const void* self, double param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtScaleDraw*>(self)->QwtScaleDraw::label(static_cast<double>(param1)));
}

QTransform* QwtScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTransform(self_cast->labelTransformation(*param1, *param2));
}

void QwtScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

QwtText* QwtScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value) {
	MiqtVirtualQwtScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtScaleDraw*>( (QwtScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	const QwtText& _ret = self_cast->tickLabel(*param1, static_cast<double>(value));
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

void QwtScaleDraw_delete(QwtScaleDraw* self) {
	delete self;
}

