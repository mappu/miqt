#include <QPainter>
#include <QPalette>
#include <QRectF>
#include <qwt_column_symbol.h>
#include "gen_qwt_column_symbol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtColumnSymbol_draw(const QwtColumnSymbol*, intptr_t, QPainter*, QwtColumnRect*);
#ifdef __cplusplus
} /* extern C */
#endif

QwtColumnRect* QwtColumnRect_new() {
	return new (std::nothrow) QwtColumnRect();
}

QRectF* QwtColumnRect_toRect(const QwtColumnRect* self) {
	return new QRectF(self->toRect());
}

int QwtColumnRect_orientation(const QwtColumnRect* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

QwtInterval* QwtColumnRect_hInterval(const QwtColumnRect* self) {
	return new QwtInterval(self->hInterval);
}

void QwtColumnRect_setHInterval(QwtColumnRect* self, QwtInterval* hInterval) {
	self->hInterval = *hInterval;
}

QwtInterval* QwtColumnRect_vInterval(const QwtColumnRect* self) {
	return new QwtInterval(self->vInterval);
}

void QwtColumnRect_setVInterval(QwtColumnRect* self, QwtInterval* vInterval) {
	self->vInterval = *vInterval;
}

int QwtColumnRect_direction(const QwtColumnRect* self) {
	QwtColumnRect::Direction direction_ret = self->direction;
	return static_cast<int>(direction_ret);
}

void QwtColumnRect_setDirection(QwtColumnRect* self, int direction) {
	self->direction = static_cast<QwtColumnRect::Direction>(direction);
}

void QwtColumnRect_delete(QwtColumnRect* self) {
	delete self;
}

class MiqtVirtualQwtColumnSymbol final : public QwtColumnSymbol {
public:

	MiqtVirtualQwtColumnSymbol(): QwtColumnSymbol() {}
	MiqtVirtualQwtColumnSymbol(QwtColumnSymbol::Style param1): QwtColumnSymbol(param1) {}

	virtual ~MiqtVirtualQwtColumnSymbol() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QwtColumnRect& param2) const override {
		if (handle__draw == 0) {
			QwtColumnSymbol::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QwtColumnRect& param2_ret = param2;
		// Cast returned reference into pointer
		QwtColumnRect* sigval2 = const_cast<QwtColumnRect*>(&param2_ret);
		miqt_exec_callback_QwtColumnSymbol_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtColumnSymbol_virtualbase_draw(const void* self, QPainter* param1, QwtColumnRect* param2);

	// Wrappers to allow calling protected methods:
	friend void QwtColumnSymbol_protectedbase_drawBox(bool* _dynamic_cast_ok, const void* self, QPainter* param1, QwtColumnRect* param2);
};

QwtColumnSymbol* QwtColumnSymbol_new() {
	return new (std::nothrow) MiqtVirtualQwtColumnSymbol();
}

QwtColumnSymbol* QwtColumnSymbol_new2(int param1) {
	return new (std::nothrow) MiqtVirtualQwtColumnSymbol(static_cast<QwtColumnSymbol::Style>(param1));
}

void QwtColumnSymbol_setFrameStyle(QwtColumnSymbol* self, int frameStyle) {
	self->setFrameStyle(static_cast<QwtColumnSymbol::FrameStyle>(frameStyle));
}

int QwtColumnSymbol_frameStyle(const QwtColumnSymbol* self) {
	QwtColumnSymbol::FrameStyle _ret = self->frameStyle();
	return static_cast<int>(_ret);
}

void QwtColumnSymbol_setLineWidth(QwtColumnSymbol* self, int width) {
	self->setLineWidth(static_cast<int>(width));
}

int QwtColumnSymbol_lineWidth(const QwtColumnSymbol* self) {
	return self->lineWidth();
}

void QwtColumnSymbol_setPalette(QwtColumnSymbol* self, QPalette* palette) {
	self->setPalette(*palette);
}

QPalette* QwtColumnSymbol_palette(const QwtColumnSymbol* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QwtColumnSymbol_setStyle(QwtColumnSymbol* self, int style) {
	self->setStyle(static_cast<QwtColumnSymbol::Style>(style));
}

int QwtColumnSymbol_style(const QwtColumnSymbol* self) {
	QwtColumnSymbol::Style _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtColumnSymbol_draw(const QwtColumnSymbol* self, QPainter* param1, QwtColumnRect* param2) {
	self->draw(param1, *param2);
}

void QwtColumnSymbol_operatorAssign(QwtColumnSymbol* self, QwtColumnSymbol* param1) {
	self->operator=(*param1);
}

bool QwtColumnSymbol_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtColumnSymbol* self_cast = dynamic_cast<MiqtVirtualQwtColumnSymbol*>( (QwtColumnSymbol*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtColumnSymbol_virtualbase_draw(const void* self, QPainter* param1, QwtColumnRect* param2) {
	static_cast<const MiqtVirtualQwtColumnSymbol*>(self)->QwtColumnSymbol::draw(param1, *param2);
}

void QwtColumnSymbol_protectedbase_drawBox(bool* _dynamic_cast_ok, const void* self, QPainter* param1, QwtColumnRect* param2) {
	MiqtVirtualQwtColumnSymbol* self_cast = dynamic_cast<MiqtVirtualQwtColumnSymbol*>( (QwtColumnSymbol*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawBox(param1, *param2);
}

void QwtColumnSymbol_delete(QwtColumnSymbol* self) {
	delete self;
}

