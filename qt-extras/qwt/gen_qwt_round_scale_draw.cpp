#include <QFont>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <qwt_round_scale_draw.h>
#include "gen_qwt_round_scale_draw.h"

#ifdef __cplusplus
extern "C" {
#endif

double miqt_exec_callback_QwtRoundScaleDraw_extent(const QwtRoundScaleDraw*, intptr_t, QFont*);
void miqt_exec_callback_QwtRoundScaleDraw_drawTick(const QwtRoundScaleDraw*, intptr_t, QPainter*, double, double);
void miqt_exec_callback_QwtRoundScaleDraw_drawBackbone(const QwtRoundScaleDraw*, intptr_t, QPainter*);
void miqt_exec_callback_QwtRoundScaleDraw_drawLabel(const QwtRoundScaleDraw*, intptr_t, QPainter*, double);
void miqt_exec_callback_QwtRoundScaleDraw_draw(const QwtRoundScaleDraw*, intptr_t, QPainter*, QPalette*);
QwtText* miqt_exec_callback_QwtRoundScaleDraw_label(const QwtRoundScaleDraw*, intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtRoundScaleDraw final : public QwtRoundScaleDraw {
public:

	MiqtVirtualQwtRoundScaleDraw(): QwtRoundScaleDraw() {}

	virtual ~MiqtVirtualQwtRoundScaleDraw() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extent = 0;

	// Subclass to allow providing a Go implementation
	virtual double extent(const QFont& param1) const override {
		if (handle__extent == 0) {
			return QwtRoundScaleDraw::extent(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtRoundScaleDraw_extent(this, handle__extent, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtRoundScaleDraw_virtualbase_extent(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTick = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTick(QPainter* param1, double value, double len) const override {
		if (handle__drawTick == 0) {
			QwtRoundScaleDraw::drawTick(param1, value, len);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		double sigval3 = len;
		miqt_exec_callback_QwtRoundScaleDraw_drawTick(this, handle__drawTick, sigval1, sigval2, sigval3);

	}

	friend void QwtRoundScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackbone = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackbone(QPainter* param1) const override {
		if (handle__drawBackbone == 0) {
			QwtRoundScaleDraw::drawBackbone(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtRoundScaleDraw_drawBackbone(this, handle__drawBackbone, sigval1);

	}

	friend void QwtRoundScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLabel = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLabel(QPainter* param1, double val) const override {
		if (handle__drawLabel == 0) {
			QwtRoundScaleDraw::drawLabel(param1, val);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = val;
		miqt_exec_callback_QwtRoundScaleDraw_drawLabel(this, handle__drawLabel, sigval1, sigval2);

	}

	friend void QwtRoundScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPalette& param2) const override {
		if (handle__draw == 0) {
			QwtRoundScaleDraw::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QPalette& param2_ret = param2;
		// Cast returned reference into pointer
		QPalette* sigval2 = const_cast<QPalette*>(&param2_ret);
		miqt_exec_callback_QwtRoundScaleDraw_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtRoundScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__label = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText label(double param1) const override {
		if (handle__label == 0) {
			return QwtRoundScaleDraw::label(param1);
		}

		double sigval1 = param1;
		QwtText* callback_return_value = miqt_exec_callback_QwtRoundScaleDraw_label(this, handle__label, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtRoundScaleDraw_virtualbase_label(const void* self, double param1);

	// Wrappers to allow calling protected methods:
	friend void QwtRoundScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend QwtText* QwtRoundScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);
};

QwtRoundScaleDraw* QwtRoundScaleDraw_new() {
	return new (std::nothrow) MiqtVirtualQwtRoundScaleDraw();
}

void QwtRoundScaleDraw_virtbase(QwtRoundScaleDraw* src, QwtAbstractScaleDraw** outptr_QwtAbstractScaleDraw) {
	*outptr_QwtAbstractScaleDraw = static_cast<QwtAbstractScaleDraw*>(src);
}

void QwtRoundScaleDraw_setRadius(QwtRoundScaleDraw* self, double radius) {
	self->setRadius(static_cast<double>(radius));
}

double QwtRoundScaleDraw_radius(const QwtRoundScaleDraw* self) {
	return self->radius();
}

void QwtRoundScaleDraw_moveCenter(QwtRoundScaleDraw* self, double x, double y) {
	self->moveCenter(static_cast<double>(x), static_cast<double>(y));
}

void QwtRoundScaleDraw_moveCenterWithQPointF(QwtRoundScaleDraw* self, QPointF* param1) {
	self->moveCenter(*param1);
}

QPointF* QwtRoundScaleDraw_center(const QwtRoundScaleDraw* self) {
	return new QPointF(self->center());
}

void QwtRoundScaleDraw_setAngleRange(QwtRoundScaleDraw* self, double angle1, double angle2) {
	self->setAngleRange(static_cast<double>(angle1), static_cast<double>(angle2));
}

double QwtRoundScaleDraw_extent(const QwtRoundScaleDraw* self, QFont* param1) {
	return self->extent(*param1);
}

bool QwtRoundScaleDraw_override_virtual_extent(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extent = slot;
	return true;
}

double QwtRoundScaleDraw_virtualbase_extent(const void* self, QFont* param1) {
	return static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::extent(*param1);
}

bool QwtRoundScaleDraw_override_virtual_drawTick(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTick = slot;
	return true;
}

void QwtRoundScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len) {
	static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::drawTick(param1, static_cast<double>(value), static_cast<double>(len));
}

bool QwtRoundScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackbone = slot;
	return true;
}

void QwtRoundScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::drawBackbone(param1);
}

bool QwtRoundScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLabel = slot;
	return true;
}

void QwtRoundScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val) {
	static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::drawLabel(param1, static_cast<double>(val));
}

bool QwtRoundScaleDraw_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtRoundScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2) {
	static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::draw(param1, *param2);
}

bool QwtRoundScaleDraw_override_virtual_label(void* self, intptr_t slot) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__label = slot;
	return true;
}

QwtText* QwtRoundScaleDraw_virtualbase_label(const void* self, double param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtRoundScaleDraw*>(self)->QwtRoundScaleDraw::label(static_cast<double>(param1)));
}

void QwtRoundScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

QwtText* QwtRoundScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value) {
	MiqtVirtualQwtRoundScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtRoundScaleDraw*>( (QwtRoundScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	const QwtText& _ret = self_cast->tickLabel(*param1, static_cast<double>(value));
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

void QwtRoundScaleDraw_delete(QwtRoundScaleDraw* self) {
	delete self;
}

