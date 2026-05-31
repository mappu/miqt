#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <qwt_dial_needle.h>
#include "gen_qwt_dial_needle.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtDialNeedle_setPalette(QwtDialNeedle*, intptr_t, QPalette*);
void miqt_exec_callback_QwtDialNeedle_draw(const QwtDialNeedle*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtDialNeedle_drawNeedle(const QwtDialNeedle*, intptr_t, QPainter*, double, int);
void miqt_exec_callback_QwtDialNeedle_drawKnob(const QwtDialNeedle*, intptr_t, QPainter*, double, QBrush*, bool);
void miqt_exec_callback_QwtDialSimpleNeedle_drawNeedle(const QwtDialSimpleNeedle*, intptr_t, QPainter*, double, int);
void miqt_exec_callback_QwtDialSimpleNeedle_setPalette(QwtDialSimpleNeedle*, intptr_t, QPalette*);
void miqt_exec_callback_QwtDialSimpleNeedle_draw(const QwtDialSimpleNeedle*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtDialSimpleNeedle_drawKnob(const QwtDialSimpleNeedle*, intptr_t, QPainter*, double, QBrush*, bool);
void miqt_exec_callback_QwtCompassMagnetNeedle_drawNeedle(const QwtCompassMagnetNeedle*, intptr_t, QPainter*, double, int);
void miqt_exec_callback_QwtCompassMagnetNeedle_setPalette(QwtCompassMagnetNeedle*, intptr_t, QPalette*);
void miqt_exec_callback_QwtCompassMagnetNeedle_draw(const QwtCompassMagnetNeedle*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtCompassMagnetNeedle_drawKnob(const QwtCompassMagnetNeedle*, intptr_t, QPainter*, double, QBrush*, bool);
void miqt_exec_callback_QwtCompassWindArrow_drawNeedle(const QwtCompassWindArrow*, intptr_t, QPainter*, double, int);
void miqt_exec_callback_QwtCompassWindArrow_setPalette(QwtCompassWindArrow*, intptr_t, QPalette*);
void miqt_exec_callback_QwtCompassWindArrow_draw(const QwtCompassWindArrow*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtCompassWindArrow_drawKnob(const QwtCompassWindArrow*, intptr_t, QPainter*, double, QBrush*, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtDialNeedle final : public QwtDialNeedle {
public:

	MiqtVirtualQwtDialNeedle(): QwtDialNeedle() {}
	MiqtVirtualQwtDialNeedle(const QwtDialNeedle& param1): QwtDialNeedle(param1) {}

	virtual ~MiqtVirtualQwtDialNeedle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& palette) override {
		if (handle__setPalette == 0) {
			QwtDialNeedle::setPalette(palette);
			return;
		}

		const QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&palette_ret);
		miqt_exec_callback_QwtDialNeedle_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtDialNeedle_virtualbase_setPalette(void* self, QPalette* palette);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QPointF& center, double length, double direction, QPalette::ColorGroup param5) const override {
		if (handle__draw == 0) {
			QwtDialNeedle::draw(painter, center, length, direction, param5);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = length;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtDialNeedle_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtDialNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawNeedle = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* painter, double length, QPalette::ColorGroup colorGroup) const override {
		if (handle__drawNeedle == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		double sigval2 = length;
		QPalette::ColorGroup colorGroup_ret = colorGroup;
		int sigval3 = static_cast<int>(colorGroup_ret);
		miqt_exec_callback_QwtDialNeedle_drawNeedle(this, handle__drawNeedle, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawKnob = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawKnob(QPainter* param1, double width, const QBrush& param3, bool sunken) const override {
		if (handle__drawKnob == 0) {
			QwtDialNeedle::drawKnob(param1, width, param3, sunken);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = width;
		const QBrush& param3_ret = param3;
		// Cast returned reference into pointer
		QBrush* sigval3 = const_cast<QBrush*>(&param3_ret);
		bool sigval4 = sunken;
		miqt_exec_callback_QwtDialNeedle_drawKnob(this, handle__drawKnob, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtDialNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

};

QwtDialNeedle* QwtDialNeedle_new() {
	return new (std::nothrow) MiqtVirtualQwtDialNeedle();
}

QwtDialNeedle* QwtDialNeedle_new2(QwtDialNeedle* param1) {
	return new (std::nothrow) MiqtVirtualQwtDialNeedle(*param1);
}

void QwtDialNeedle_setPalette(QwtDialNeedle* self, QPalette* palette) {
	self->setPalette(*palette);
}

QPalette* QwtDialNeedle_palette(const QwtDialNeedle* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QwtDialNeedle_draw(const QwtDialNeedle* self, QPainter* painter, QPointF* center, double length, double direction, int param5) {
	self->draw(painter, *center, static_cast<double>(length), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

void QwtDialNeedle_operatorAssign(QwtDialNeedle* self, QwtDialNeedle* param1) {
	self->operator=(*param1);
}

bool QwtDialNeedle_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtDialNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialNeedle*>( (QwtDialNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtDialNeedle_virtualbase_setPalette(void* self, QPalette* palette) {
	static_cast<MiqtVirtualQwtDialNeedle*>(self)->QwtDialNeedle::setPalette(*palette);
}

bool QwtDialNeedle_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtDialNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialNeedle*>( (QwtDialNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtDialNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5) {
	static_cast<const MiqtVirtualQwtDialNeedle*>(self)->QwtDialNeedle::draw(painter, *center, static_cast<double>(length), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtDialNeedle_override_virtual_drawNeedle(void* self, intptr_t slot) {
	MiqtVirtualQwtDialNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialNeedle*>( (QwtDialNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = slot;
	return true;
}

bool QwtDialNeedle_override_virtual_drawKnob(void* self, intptr_t slot) {
	MiqtVirtualQwtDialNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialNeedle*>( (QwtDialNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawKnob = slot;
	return true;
}

void QwtDialNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken) {
	static_cast<const MiqtVirtualQwtDialNeedle*>(self)->QwtDialNeedle::drawKnob(param1, static_cast<double>(width), *param3, sunken);
}

void QwtDialNeedle_delete(QwtDialNeedle* self) {
	delete self;
}

class MiqtVirtualQwtDialSimpleNeedle final : public QwtDialSimpleNeedle {
public:

	MiqtVirtualQwtDialSimpleNeedle(QwtDialSimpleNeedle::Style param1): QwtDialSimpleNeedle(param1) {}
	MiqtVirtualQwtDialSimpleNeedle(const QwtDialSimpleNeedle& param1): QwtDialSimpleNeedle(param1) {}
	MiqtVirtualQwtDialSimpleNeedle(QwtDialSimpleNeedle::Style param1, bool hasKnob): QwtDialSimpleNeedle(param1, hasKnob) {}
	MiqtVirtualQwtDialSimpleNeedle(QwtDialSimpleNeedle::Style param1, bool hasKnob, const QColor& mid): QwtDialSimpleNeedle(param1, hasKnob, mid) {}
	MiqtVirtualQwtDialSimpleNeedle(QwtDialSimpleNeedle::Style param1, bool hasKnob, const QColor& mid, const QColor& base): QwtDialSimpleNeedle(param1, hasKnob, mid, base) {}

	virtual ~MiqtVirtualQwtDialSimpleNeedle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawNeedle = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, double length, QPalette::ColorGroup param3) const override {
		if (handle__drawNeedle == 0) {
			QwtDialSimpleNeedle::drawNeedle(param1, length, param3);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = length;
		QPalette::ColorGroup param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtDialSimpleNeedle_drawNeedle(this, handle__drawNeedle, sigval1, sigval2, sigval3);

	}

	friend void QwtDialSimpleNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& palette) override {
		if (handle__setPalette == 0) {
			QwtDialSimpleNeedle::setPalette(palette);
			return;
		}

		const QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&palette_ret);
		miqt_exec_callback_QwtDialSimpleNeedle_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtDialSimpleNeedle_virtualbase_setPalette(void* self, QPalette* palette);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QPointF& center, double length, double direction, QPalette::ColorGroup param5) const override {
		if (handle__draw == 0) {
			QwtDialSimpleNeedle::draw(painter, center, length, direction, param5);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = length;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtDialSimpleNeedle_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtDialSimpleNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawKnob = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawKnob(QPainter* param1, double width, const QBrush& param3, bool sunken) const override {
		if (handle__drawKnob == 0) {
			QwtDialSimpleNeedle::drawKnob(param1, width, param3, sunken);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = width;
		const QBrush& param3_ret = param3;
		// Cast returned reference into pointer
		QBrush* sigval3 = const_cast<QBrush*>(&param3_ret);
		bool sigval4 = sunken;
		miqt_exec_callback_QwtDialSimpleNeedle_drawKnob(this, handle__drawKnob, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtDialSimpleNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

};

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new(int param1) {
	return new (std::nothrow) MiqtVirtualQwtDialSimpleNeedle(static_cast<QwtDialSimpleNeedle::Style>(param1));
}

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new2(QwtDialSimpleNeedle* param1) {
	return new (std::nothrow) MiqtVirtualQwtDialSimpleNeedle(*param1);
}

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new3(int param1, bool hasKnob) {
	return new (std::nothrow) MiqtVirtualQwtDialSimpleNeedle(static_cast<QwtDialSimpleNeedle::Style>(param1), hasKnob);
}

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new4(int param1, bool hasKnob, QColor* mid) {
	return new (std::nothrow) MiqtVirtualQwtDialSimpleNeedle(static_cast<QwtDialSimpleNeedle::Style>(param1), hasKnob, *mid);
}

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new5(int param1, bool hasKnob, QColor* mid, QColor* base) {
	return new (std::nothrow) MiqtVirtualQwtDialSimpleNeedle(static_cast<QwtDialSimpleNeedle::Style>(param1), hasKnob, *mid, *base);
}

void QwtDialSimpleNeedle_virtbase(QwtDialSimpleNeedle* src, QwtDialNeedle** outptr_QwtDialNeedle) {
	*outptr_QwtDialNeedle = static_cast<QwtDialNeedle*>(src);
}

void QwtDialSimpleNeedle_setWidth(QwtDialSimpleNeedle* self, double width) {
	self->setWidth(static_cast<double>(width));
}

double QwtDialSimpleNeedle_width(const QwtDialSimpleNeedle* self) {
	return self->width();
}

void QwtDialSimpleNeedle_operatorAssign(QwtDialSimpleNeedle* self, QwtDialSimpleNeedle* param1) {
	self->operator=(*param1);
}

bool QwtDialSimpleNeedle_override_virtual_drawNeedle(void* self, intptr_t slot) {
	MiqtVirtualQwtDialSimpleNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialSimpleNeedle*>( (QwtDialSimpleNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = slot;
	return true;
}

void QwtDialSimpleNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3) {
	static_cast<const MiqtVirtualQwtDialSimpleNeedle*>(self)->QwtDialSimpleNeedle::drawNeedle(param1, static_cast<double>(length), static_cast<QPalette::ColorGroup>(param3));
}

bool QwtDialSimpleNeedle_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtDialSimpleNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialSimpleNeedle*>( (QwtDialSimpleNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtDialSimpleNeedle_virtualbase_setPalette(void* self, QPalette* palette) {
	static_cast<MiqtVirtualQwtDialSimpleNeedle*>(self)->QwtDialSimpleNeedle::setPalette(*palette);
}

bool QwtDialSimpleNeedle_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtDialSimpleNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialSimpleNeedle*>( (QwtDialSimpleNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtDialSimpleNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5) {
	static_cast<const MiqtVirtualQwtDialSimpleNeedle*>(self)->QwtDialSimpleNeedle::draw(painter, *center, static_cast<double>(length), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtDialSimpleNeedle_override_virtual_drawKnob(void* self, intptr_t slot) {
	MiqtVirtualQwtDialSimpleNeedle* self_cast = dynamic_cast<MiqtVirtualQwtDialSimpleNeedle*>( (QwtDialSimpleNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawKnob = slot;
	return true;
}

void QwtDialSimpleNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken) {
	static_cast<const MiqtVirtualQwtDialSimpleNeedle*>(self)->QwtDialSimpleNeedle::drawKnob(param1, static_cast<double>(width), *param3, sunken);
}

void QwtDialSimpleNeedle_delete(QwtDialSimpleNeedle* self) {
	delete self;
}

class MiqtVirtualQwtCompassMagnetNeedle final : public QwtCompassMagnetNeedle {
public:

	MiqtVirtualQwtCompassMagnetNeedle(): QwtCompassMagnetNeedle() {}
	MiqtVirtualQwtCompassMagnetNeedle(const QwtCompassMagnetNeedle& param1): QwtCompassMagnetNeedle(param1) {}
	MiqtVirtualQwtCompassMagnetNeedle(QwtCompassMagnetNeedle::Style param1): QwtCompassMagnetNeedle(param1) {}
	MiqtVirtualQwtCompassMagnetNeedle(QwtCompassMagnetNeedle::Style param1, const QColor& light): QwtCompassMagnetNeedle(param1, light) {}
	MiqtVirtualQwtCompassMagnetNeedle(QwtCompassMagnetNeedle::Style param1, const QColor& light, const QColor& dark): QwtCompassMagnetNeedle(param1, light, dark) {}

	virtual ~MiqtVirtualQwtCompassMagnetNeedle() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawNeedle = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, double length, QPalette::ColorGroup param3) const override {
		if (handle__drawNeedle == 0) {
			QwtCompassMagnetNeedle::drawNeedle(param1, length, param3);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = length;
		QPalette::ColorGroup param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtCompassMagnetNeedle_drawNeedle(this, handle__drawNeedle, sigval1, sigval2, sigval3);

	}

	friend void QwtCompassMagnetNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& palette) override {
		if (handle__setPalette == 0) {
			QwtCompassMagnetNeedle::setPalette(palette);
			return;
		}

		const QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&palette_ret);
		miqt_exec_callback_QwtCompassMagnetNeedle_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtCompassMagnetNeedle_virtualbase_setPalette(void* self, QPalette* palette);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QPointF& center, double length, double direction, QPalette::ColorGroup param5) const override {
		if (handle__draw == 0) {
			QwtCompassMagnetNeedle::draw(painter, center, length, direction, param5);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = length;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtCompassMagnetNeedle_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtCompassMagnetNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawKnob = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawKnob(QPainter* param1, double width, const QBrush& param3, bool sunken) const override {
		if (handle__drawKnob == 0) {
			QwtCompassMagnetNeedle::drawKnob(param1, width, param3, sunken);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = width;
		const QBrush& param3_ret = param3;
		// Cast returned reference into pointer
		QBrush* sigval3 = const_cast<QBrush*>(&param3_ret);
		bool sigval4 = sunken;
		miqt_exec_callback_QwtCompassMagnetNeedle_drawKnob(this, handle__drawKnob, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtCompassMagnetNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

};

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new() {
	return new (std::nothrow) MiqtVirtualQwtCompassMagnetNeedle();
}

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new2(QwtCompassMagnetNeedle* param1) {
	return new (std::nothrow) MiqtVirtualQwtCompassMagnetNeedle(*param1);
}

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtCompassMagnetNeedle(static_cast<QwtCompassMagnetNeedle::Style>(param1));
}

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new4(int param1, QColor* light) {
	return new (std::nothrow) MiqtVirtualQwtCompassMagnetNeedle(static_cast<QwtCompassMagnetNeedle::Style>(param1), *light);
}

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new5(int param1, QColor* light, QColor* dark) {
	return new (std::nothrow) MiqtVirtualQwtCompassMagnetNeedle(static_cast<QwtCompassMagnetNeedle::Style>(param1), *light, *dark);
}

void QwtCompassMagnetNeedle_virtbase(QwtCompassMagnetNeedle* src, QwtDialNeedle** outptr_QwtDialNeedle) {
	*outptr_QwtDialNeedle = static_cast<QwtDialNeedle*>(src);
}

void QwtCompassMagnetNeedle_operatorAssign(QwtCompassMagnetNeedle* self, QwtCompassMagnetNeedle* param1) {
	self->operator=(*param1);
}

bool QwtCompassMagnetNeedle_override_virtual_drawNeedle(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassMagnetNeedle* self_cast = dynamic_cast<MiqtVirtualQwtCompassMagnetNeedle*>( (QwtCompassMagnetNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = slot;
	return true;
}

void QwtCompassMagnetNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3) {
	static_cast<const MiqtVirtualQwtCompassMagnetNeedle*>(self)->QwtCompassMagnetNeedle::drawNeedle(param1, static_cast<double>(length), static_cast<QPalette::ColorGroup>(param3));
}

bool QwtCompassMagnetNeedle_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassMagnetNeedle* self_cast = dynamic_cast<MiqtVirtualQwtCompassMagnetNeedle*>( (QwtCompassMagnetNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtCompassMagnetNeedle_virtualbase_setPalette(void* self, QPalette* palette) {
	static_cast<MiqtVirtualQwtCompassMagnetNeedle*>(self)->QwtCompassMagnetNeedle::setPalette(*palette);
}

bool QwtCompassMagnetNeedle_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassMagnetNeedle* self_cast = dynamic_cast<MiqtVirtualQwtCompassMagnetNeedle*>( (QwtCompassMagnetNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtCompassMagnetNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5) {
	static_cast<const MiqtVirtualQwtCompassMagnetNeedle*>(self)->QwtCompassMagnetNeedle::draw(painter, *center, static_cast<double>(length), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtCompassMagnetNeedle_override_virtual_drawKnob(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassMagnetNeedle* self_cast = dynamic_cast<MiqtVirtualQwtCompassMagnetNeedle*>( (QwtCompassMagnetNeedle*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawKnob = slot;
	return true;
}

void QwtCompassMagnetNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken) {
	static_cast<const MiqtVirtualQwtCompassMagnetNeedle*>(self)->QwtCompassMagnetNeedle::drawKnob(param1, static_cast<double>(width), *param3, sunken);
}

void QwtCompassMagnetNeedle_delete(QwtCompassMagnetNeedle* self) {
	delete self;
}

class MiqtVirtualQwtCompassWindArrow final : public QwtCompassWindArrow {
public:

	MiqtVirtualQwtCompassWindArrow(QwtCompassWindArrow::Style param1): QwtCompassWindArrow(param1) {}
	MiqtVirtualQwtCompassWindArrow(const QwtCompassWindArrow& param1): QwtCompassWindArrow(param1) {}
	MiqtVirtualQwtCompassWindArrow(QwtCompassWindArrow::Style param1, const QColor& light): QwtCompassWindArrow(param1, light) {}
	MiqtVirtualQwtCompassWindArrow(QwtCompassWindArrow::Style param1, const QColor& light, const QColor& dark): QwtCompassWindArrow(param1, light, dark) {}

	virtual ~MiqtVirtualQwtCompassWindArrow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawNeedle = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, double length, QPalette::ColorGroup param3) const override {
		if (handle__drawNeedle == 0) {
			QwtCompassWindArrow::drawNeedle(param1, length, param3);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = length;
		QPalette::ColorGroup param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtCompassWindArrow_drawNeedle(this, handle__drawNeedle, sigval1, sigval2, sigval3);

	}

	friend void QwtCompassWindArrow_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& palette) override {
		if (handle__setPalette == 0) {
			QwtCompassWindArrow::setPalette(palette);
			return;
		}

		const QPalette& palette_ret = palette;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&palette_ret);
		miqt_exec_callback_QwtCompassWindArrow_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtCompassWindArrow_virtualbase_setPalette(void* self, QPalette* palette);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QPointF& center, double length, double direction, QPalette::ColorGroup param5) const override {
		if (handle__draw == 0) {
			QwtCompassWindArrow::draw(painter, center, length, direction, param5);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = length;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtCompassWindArrow_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtCompassWindArrow_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawKnob = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawKnob(QPainter* param1, double width, const QBrush& param3, bool sunken) const override {
		if (handle__drawKnob == 0) {
			QwtCompassWindArrow::drawKnob(param1, width, param3, sunken);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = width;
		const QBrush& param3_ret = param3;
		// Cast returned reference into pointer
		QBrush* sigval3 = const_cast<QBrush*>(&param3_ret);
		bool sigval4 = sunken;
		miqt_exec_callback_QwtCompassWindArrow_drawKnob(this, handle__drawKnob, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtCompassWindArrow_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

};

QwtCompassWindArrow* QwtCompassWindArrow_new(int param1) {
	return new (std::nothrow) MiqtVirtualQwtCompassWindArrow(static_cast<QwtCompassWindArrow::Style>(param1));
}

QwtCompassWindArrow* QwtCompassWindArrow_new2(QwtCompassWindArrow* param1) {
	return new (std::nothrow) MiqtVirtualQwtCompassWindArrow(*param1);
}

QwtCompassWindArrow* QwtCompassWindArrow_new3(int param1, QColor* light) {
	return new (std::nothrow) MiqtVirtualQwtCompassWindArrow(static_cast<QwtCompassWindArrow::Style>(param1), *light);
}

QwtCompassWindArrow* QwtCompassWindArrow_new4(int param1, QColor* light, QColor* dark) {
	return new (std::nothrow) MiqtVirtualQwtCompassWindArrow(static_cast<QwtCompassWindArrow::Style>(param1), *light, *dark);
}

void QwtCompassWindArrow_virtbase(QwtCompassWindArrow* src, QwtDialNeedle** outptr_QwtDialNeedle) {
	*outptr_QwtDialNeedle = static_cast<QwtDialNeedle*>(src);
}

void QwtCompassWindArrow_operatorAssign(QwtCompassWindArrow* self, QwtCompassWindArrow* param1) {
	self->operator=(*param1);
}

bool QwtCompassWindArrow_override_virtual_drawNeedle(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassWindArrow* self_cast = dynamic_cast<MiqtVirtualQwtCompassWindArrow*>( (QwtCompassWindArrow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = slot;
	return true;
}

void QwtCompassWindArrow_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3) {
	static_cast<const MiqtVirtualQwtCompassWindArrow*>(self)->QwtCompassWindArrow::drawNeedle(param1, static_cast<double>(length), static_cast<QPalette::ColorGroup>(param3));
}

bool QwtCompassWindArrow_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassWindArrow* self_cast = dynamic_cast<MiqtVirtualQwtCompassWindArrow*>( (QwtCompassWindArrow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtCompassWindArrow_virtualbase_setPalette(void* self, QPalette* palette) {
	static_cast<MiqtVirtualQwtCompassWindArrow*>(self)->QwtCompassWindArrow::setPalette(*palette);
}

bool QwtCompassWindArrow_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassWindArrow* self_cast = dynamic_cast<MiqtVirtualQwtCompassWindArrow*>( (QwtCompassWindArrow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtCompassWindArrow_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5) {
	static_cast<const MiqtVirtualQwtCompassWindArrow*>(self)->QwtCompassWindArrow::draw(painter, *center, static_cast<double>(length), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtCompassWindArrow_override_virtual_drawKnob(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassWindArrow* self_cast = dynamic_cast<MiqtVirtualQwtCompassWindArrow*>( (QwtCompassWindArrow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawKnob = slot;
	return true;
}

void QwtCompassWindArrow_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken) {
	static_cast<const MiqtVirtualQwtCompassWindArrow*>(self)->QwtCompassWindArrow::drawKnob(param1, static_cast<double>(width), *param3, sunken);
}

void QwtCompassWindArrow_delete(QwtCompassWindArrow* self) {
	delete self;
}

