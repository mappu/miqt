#include <QFont>
#include <QPainter>
#include <QPalette>
#include <qwt_abstract_scale_draw.h>
#include "gen_qwt_abstract_scale_draw.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtAbstractScaleDraw_draw(const QwtAbstractScaleDraw*, intptr_t, QPainter*, QPalette*);
QwtText* miqt_exec_callback_QwtAbstractScaleDraw_label(const QwtAbstractScaleDraw*, intptr_t, double);
double miqt_exec_callback_QwtAbstractScaleDraw_extent(const QwtAbstractScaleDraw*, intptr_t, QFont*);
void miqt_exec_callback_QwtAbstractScaleDraw_drawTick(const QwtAbstractScaleDraw*, intptr_t, QPainter*, double, double);
void miqt_exec_callback_QwtAbstractScaleDraw_drawBackbone(const QwtAbstractScaleDraw*, intptr_t, QPainter*);
void miqt_exec_callback_QwtAbstractScaleDraw_drawLabel(const QwtAbstractScaleDraw*, intptr_t, QPainter*, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtAbstractScaleDraw final : public QwtAbstractScaleDraw {
public:

	MiqtVirtualQwtAbstractScaleDraw(): QwtAbstractScaleDraw() {}

	virtual ~MiqtVirtualQwtAbstractScaleDraw() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPalette& param2) const override {
		if (handle__draw == 0) {
			QwtAbstractScaleDraw::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QPalette& param2_ret = param2;
		// Cast returned reference into pointer
		QPalette* sigval2 = const_cast<QPalette*>(&param2_ret);
		miqt_exec_callback_QwtAbstractScaleDraw_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtAbstractScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__label = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText label(double param1) const override {
		if (handle__label == 0) {
			return QwtAbstractScaleDraw::label(param1);
		}

		double sigval1 = param1;
		QwtText* callback_return_value = miqt_exec_callback_QwtAbstractScaleDraw_label(this, handle__label, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtAbstractScaleDraw_virtualbase_label(const void* self, double param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extent = 0;

	// Subclass to allow providing a Go implementation
	virtual double extent(const QFont& font) const override {
		if (handle__extent == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		double callback_return_value = miqt_exec_callback_QwtAbstractScaleDraw_extent(this, handle__extent, sigval1);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTick = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTick(QPainter* painter, double value, double len) const override {
		if (handle__drawTick == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		double sigval2 = value;
		double sigval3 = len;
		miqt_exec_callback_QwtAbstractScaleDraw_drawTick(this, handle__drawTick, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackbone = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackbone(QPainter* painter) const override {
		if (handle__drawBackbone == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtAbstractScaleDraw_drawBackbone(this, handle__drawBackbone, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLabel = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLabel(QPainter* painter, double value) const override {
		if (handle__drawLabel == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		double sigval2 = value;
		miqt_exec_callback_QwtAbstractScaleDraw_drawLabel(this, handle__drawLabel, sigval1, sigval2);

	}

	// Wrappers to allow calling protected methods:
	friend void QwtAbstractScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend QwtText* QwtAbstractScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);
};

QwtAbstractScaleDraw* QwtAbstractScaleDraw_new() {
	return new (std::nothrow) MiqtVirtualQwtAbstractScaleDraw();
}

void QwtAbstractScaleDraw_setScaleDiv(QwtAbstractScaleDraw* self, QwtScaleDiv* scaleDiv) {
	self->setScaleDiv(*scaleDiv);
}

QwtScaleDiv* QwtAbstractScaleDraw_scaleDiv(const QwtAbstractScaleDraw* self) {
	const QwtScaleDiv& _ret = self->scaleDiv();
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

void QwtAbstractScaleDraw_setTransformation(QwtAbstractScaleDraw* self, QwtTransform* transformation) {
	self->setTransformation(transformation);
}

void QwtAbstractScaleDraw_enableComponent(QwtAbstractScaleDraw* self, int param1) {
	self->enableComponent(static_cast<QwtAbstractScaleDraw::ScaleComponent>(param1));
}

bool QwtAbstractScaleDraw_hasComponent(const QwtAbstractScaleDraw* self, int param1) {
	return self->hasComponent(static_cast<QwtAbstractScaleDraw::ScaleComponent>(param1));
}

void QwtAbstractScaleDraw_setTickLength(QwtAbstractScaleDraw* self, int param1, double length) {
	self->setTickLength(static_cast<QwtScaleDiv::TickType>(param1), static_cast<double>(length));
}

double QwtAbstractScaleDraw_tickLength(const QwtAbstractScaleDraw* self, int param1) {
	return self->tickLength(static_cast<QwtScaleDiv::TickType>(param1));
}

double QwtAbstractScaleDraw_maxTickLength(const QwtAbstractScaleDraw* self) {
	return self->maxTickLength();
}

void QwtAbstractScaleDraw_setSpacing(QwtAbstractScaleDraw* self, double spacing) {
	self->setSpacing(static_cast<double>(spacing));
}

double QwtAbstractScaleDraw_spacing(const QwtAbstractScaleDraw* self) {
	return self->spacing();
}

void QwtAbstractScaleDraw_setPenWidth(QwtAbstractScaleDraw* self, int width) {
	self->setPenWidth(static_cast<int>(width));
}

int QwtAbstractScaleDraw_penWidth(const QwtAbstractScaleDraw* self) {
	return self->penWidth();
}

void QwtAbstractScaleDraw_draw(const QwtAbstractScaleDraw* self, QPainter* param1, QPalette* param2) {
	self->draw(param1, *param2);
}

QwtText* QwtAbstractScaleDraw_label(const QwtAbstractScaleDraw* self, double param1) {
	return new QwtText(self->label(static_cast<double>(param1)));
}

double QwtAbstractScaleDraw_extent(const QwtAbstractScaleDraw* self, QFont* font) {
	return self->extent(*font);
}

void QwtAbstractScaleDraw_setMinimumExtent(QwtAbstractScaleDraw* self, double minimumExtent) {
	self->setMinimumExtent(static_cast<double>(minimumExtent));
}

double QwtAbstractScaleDraw_minimumExtent(const QwtAbstractScaleDraw* self) {
	return self->minimumExtent();
}

void QwtAbstractScaleDraw_enableComponent2(QwtAbstractScaleDraw* self, int param1, bool enable) {
	self->enableComponent(static_cast<QwtAbstractScaleDraw::ScaleComponent>(param1), enable);
}

bool QwtAbstractScaleDraw_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtAbstractScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2) {
	static_cast<const MiqtVirtualQwtAbstractScaleDraw*>(self)->QwtAbstractScaleDraw::draw(param1, *param2);
}

bool QwtAbstractScaleDraw_override_virtual_label(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__label = slot;
	return true;
}

QwtText* QwtAbstractScaleDraw_virtualbase_label(const void* self, double param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtAbstractScaleDraw*>(self)->QwtAbstractScaleDraw::label(static_cast<double>(param1)));
}

bool QwtAbstractScaleDraw_override_virtual_extent(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extent = slot;
	return true;
}

bool QwtAbstractScaleDraw_override_virtual_drawTick(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTick = slot;
	return true;
}

bool QwtAbstractScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackbone = slot;
	return true;
}

bool QwtAbstractScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLabel = slot;
	return true;
}

void QwtAbstractScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

QwtText* QwtAbstractScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value) {
	MiqtVirtualQwtAbstractScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtAbstractScaleDraw*>( (QwtAbstractScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	const QwtText& _ret = self_cast->tickLabel(*param1, static_cast<double>(value));
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

void QwtAbstractScaleDraw_delete(QwtAbstractScaleDraw* self) {
	delete self;
}

