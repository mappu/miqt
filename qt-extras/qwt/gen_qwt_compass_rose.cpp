#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <qwt_compass_rose.h>
#include "gen_qwt_compass_rose.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtCompassRose_setPalette(QwtCompassRose*, intptr_t, QPalette*);
void miqt_exec_callback_QwtCompassRose_draw(const QwtCompassRose*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtSimpleCompassRose_draw(const QwtSimpleCompassRose*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtSimpleCompassRose_setPalette(QwtSimpleCompassRose*, intptr_t, QPalette*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtCompassRose final : public QwtCompassRose {
public:

	MiqtVirtualQwtCompassRose(const QwtCompassRose& param1): QwtCompassRose(param1) {}

	virtual ~MiqtVirtualQwtCompassRose() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& p) override {
		if (handle__setPalette == 0) {
			QwtCompassRose::setPalette(p);
			return;
		}

		const QPalette& p_ret = p;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&p_ret);
		miqt_exec_callback_QwtCompassRose_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtCompassRose_virtualbase_setPalette(void* self, QPalette* p);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QPointF& center, double radius, double north, QPalette::ColorGroup colorGroup) const override {
		if (handle__draw == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		double sigval4 = north;
		QPalette::ColorGroup colorGroup_ret = colorGroup;
		int sigval5 = static_cast<int>(colorGroup_ret);
		miqt_exec_callback_QwtCompassRose_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

};

QwtCompassRose* QwtCompassRose_new(QwtCompassRose* param1) {
	return new (std::nothrow) MiqtVirtualQwtCompassRose(*param1);
}

void QwtCompassRose_setPalette(QwtCompassRose* self, QPalette* p) {
	self->setPalette(*p);
}

QPalette* QwtCompassRose_palette(const QwtCompassRose* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QwtCompassRose_draw(const QwtCompassRose* self, QPainter* painter, QPointF* center, double radius, double north, int colorGroup) {
	self->draw(painter, *center, static_cast<double>(radius), static_cast<double>(north), static_cast<QPalette::ColorGroup>(colorGroup));
}

void QwtCompassRose_operatorAssign(QwtCompassRose* self, QwtCompassRose* param1) {
	self->operator=(*param1);
}

bool QwtCompassRose_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassRose* self_cast = dynamic_cast<MiqtVirtualQwtCompassRose*>( (QwtCompassRose*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtCompassRose_virtualbase_setPalette(void* self, QPalette* p) {
	static_cast<MiqtVirtualQwtCompassRose*>(self)->QwtCompassRose::setPalette(*p);
}

bool QwtCompassRose_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassRose* self_cast = dynamic_cast<MiqtVirtualQwtCompassRose*>( (QwtCompassRose*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtCompassRose_delete(QwtCompassRose* self) {
	delete self;
}

class MiqtVirtualQwtSimpleCompassRose final : public QwtSimpleCompassRose {
public:

	MiqtVirtualQwtSimpleCompassRose(): QwtSimpleCompassRose() {}
	MiqtVirtualQwtSimpleCompassRose(const QwtSimpleCompassRose& param1): QwtSimpleCompassRose(param1) {}
	MiqtVirtualQwtSimpleCompassRose(int numThorns): QwtSimpleCompassRose(numThorns) {}
	MiqtVirtualQwtSimpleCompassRose(int numThorns, int numThornLevels): QwtSimpleCompassRose(numThorns, numThornLevels) {}

	virtual ~MiqtVirtualQwtSimpleCompassRose() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPointF& center, double radius, double north, QPalette::ColorGroup param5) const override {
		if (handle__draw == 0) {
			QwtSimpleCompassRose::draw(param1, center, radius, north, param5);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		double sigval4 = north;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtSimpleCompassRose_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtSimpleCompassRose_virtualbase_draw(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPalette = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPalette(const QPalette& p) override {
		if (handle__setPalette == 0) {
			QwtSimpleCompassRose::setPalette(p);
			return;
		}

		const QPalette& p_ret = p;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&p_ret);
		miqt_exec_callback_QwtSimpleCompassRose_setPalette(this, handle__setPalette, sigval1);

	}

	friend void QwtSimpleCompassRose_virtualbase_setPalette(void* self, QPalette* p);

};

QwtSimpleCompassRose* QwtSimpleCompassRose_new() {
	return new (std::nothrow) MiqtVirtualQwtSimpleCompassRose();
}

QwtSimpleCompassRose* QwtSimpleCompassRose_new2(QwtSimpleCompassRose* param1) {
	return new (std::nothrow) MiqtVirtualQwtSimpleCompassRose(*param1);
}

QwtSimpleCompassRose* QwtSimpleCompassRose_new3(int numThorns) {
	return new (std::nothrow) MiqtVirtualQwtSimpleCompassRose(static_cast<int>(numThorns));
}

QwtSimpleCompassRose* QwtSimpleCompassRose_new4(int numThorns, int numThornLevels) {
	return new (std::nothrow) MiqtVirtualQwtSimpleCompassRose(static_cast<int>(numThorns), static_cast<int>(numThornLevels));
}

void QwtSimpleCompassRose_virtbase(QwtSimpleCompassRose* src, QwtCompassRose** outptr_QwtCompassRose) {
	*outptr_QwtCompassRose = static_cast<QwtCompassRose*>(src);
}

void QwtSimpleCompassRose_setWidth(QwtSimpleCompassRose* self, double width) {
	self->setWidth(static_cast<double>(width));
}

double QwtSimpleCompassRose_width(const QwtSimpleCompassRose* self) {
	return self->width();
}

void QwtSimpleCompassRose_setNumThorns(QwtSimpleCompassRose* self, int numThorns) {
	self->setNumThorns(static_cast<int>(numThorns));
}

int QwtSimpleCompassRose_numThorns(const QwtSimpleCompassRose* self) {
	return self->numThorns();
}

void QwtSimpleCompassRose_setNumThornLevels(QwtSimpleCompassRose* self, int numThornLevels) {
	self->setNumThornLevels(static_cast<int>(numThornLevels));
}

int QwtSimpleCompassRose_numThornLevels(const QwtSimpleCompassRose* self) {
	return self->numThornLevels();
}

void QwtSimpleCompassRose_setShrinkFactor(QwtSimpleCompassRose* self, double factor) {
	self->setShrinkFactor(static_cast<double>(factor));
}

double QwtSimpleCompassRose_shrinkFactor(const QwtSimpleCompassRose* self) {
	return self->shrinkFactor();
}

void QwtSimpleCompassRose_draw(const QwtSimpleCompassRose* self, QPainter* param1, QPointF* center, double radius, double north, int param5) {
	self->draw(param1, *center, static_cast<double>(radius), static_cast<double>(north), static_cast<QPalette::ColorGroup>(param5));
}

void QwtSimpleCompassRose_drawRose(QPainter* param1, QPalette* param2, QPointF* center, double radius, double north, double width, int numThorns, int numThornLevels, double shrinkFactor) {
	QwtSimpleCompassRose::drawRose(param1, *param2, *center, static_cast<double>(radius), static_cast<double>(north), static_cast<double>(width), static_cast<int>(numThorns), static_cast<int>(numThornLevels), static_cast<double>(shrinkFactor));
}

void QwtSimpleCompassRose_operatorAssign(QwtSimpleCompassRose* self, QwtSimpleCompassRose* param1) {
	self->operator=(*param1);
}

bool QwtSimpleCompassRose_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtSimpleCompassRose* self_cast = dynamic_cast<MiqtVirtualQwtSimpleCompassRose*>( (QwtSimpleCompassRose*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtSimpleCompassRose_virtualbase_draw(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5) {
	static_cast<const MiqtVirtualQwtSimpleCompassRose*>(self)->QwtSimpleCompassRose::draw(param1, *center, static_cast<double>(radius), static_cast<double>(north), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtSimpleCompassRose_override_virtual_setPalette(void* self, intptr_t slot) {
	MiqtVirtualQwtSimpleCompassRose* self_cast = dynamic_cast<MiqtVirtualQwtSimpleCompassRose*>( (QwtSimpleCompassRose*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPalette = slot;
	return true;
}

void QwtSimpleCompassRose_virtualbase_setPalette(void* self, QPalette* p) {
	static_cast<MiqtVirtualQwtSimpleCompassRose*>(self)->QwtSimpleCompassRose::setPalette(*p);
}

void QwtSimpleCompassRose_delete(QwtSimpleCompassRose* self) {
	delete self;
}

