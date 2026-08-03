#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPen>
#include <QPointF>
#include <qwt_interval_symbol.h>
#include "gen_qwt_interval_symbol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtIntervalSymbol_draw(const QwtIntervalSymbol*, intptr_t, QPainter*, int, QPointF*, QPointF*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtIntervalSymbol final : public QwtIntervalSymbol {
public:

	MiqtVirtualQwtIntervalSymbol(): QwtIntervalSymbol() {}
	MiqtVirtualQwtIntervalSymbol(const QwtIntervalSymbol& param1): QwtIntervalSymbol(param1) {}
	MiqtVirtualQwtIntervalSymbol(QwtIntervalSymbol::Style param1): QwtIntervalSymbol(param1) {}

	virtual ~MiqtVirtualQwtIntervalSymbol() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, Qt::Orientation param2, const QPointF& from, const QPointF& to) const override {
		if (handle__draw == 0) {
			QwtIntervalSymbol::draw(param1, param2, from, to);
			return;
		}

		QPainter* sigval1 = param1;
		Qt::Orientation param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);
		const QPointF& from_ret = from;
		// Cast returned reference into pointer
		QPointF* sigval3 = const_cast<QPointF*>(&from_ret);
		const QPointF& to_ret = to;
		// Cast returned reference into pointer
		QPointF* sigval4 = const_cast<QPointF*>(&to_ret);
		miqt_exec_callback_QwtIntervalSymbol_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtIntervalSymbol_virtualbase_draw(const void* self, QPainter* param1, int param2, QPointF* from, QPointF* to);

};

QwtIntervalSymbol* QwtIntervalSymbol_new() {
	return new (std::nothrow) MiqtVirtualQwtIntervalSymbol();
}

QwtIntervalSymbol* QwtIntervalSymbol_new2(QwtIntervalSymbol* param1) {
	return new (std::nothrow) MiqtVirtualQwtIntervalSymbol(*param1);
}

QwtIntervalSymbol* QwtIntervalSymbol_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtIntervalSymbol(static_cast<QwtIntervalSymbol::Style>(param1));
}

void QwtIntervalSymbol_operatorAssign(QwtIntervalSymbol* self, QwtIntervalSymbol* param1) {
	self->operator=(*param1);
}

bool QwtIntervalSymbol_operatorEqual(const QwtIntervalSymbol* self, QwtIntervalSymbol* param1) {
	return (*self == *param1);
}

bool QwtIntervalSymbol_operatorNotEqual(const QwtIntervalSymbol* self, QwtIntervalSymbol* param1) {
	return (*self != *param1);
}

void QwtIntervalSymbol_setWidth(QwtIntervalSymbol* self, int width) {
	self->setWidth(static_cast<int>(width));
}

int QwtIntervalSymbol_width(const QwtIntervalSymbol* self) {
	return self->width();
}

void QwtIntervalSymbol_setBrush(QwtIntervalSymbol* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtIntervalSymbol_brush(const QwtIntervalSymbol* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QwtIntervalSymbol_setPen(QwtIntervalSymbol* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtIntervalSymbol_setPenWithPen(QwtIntervalSymbol* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtIntervalSymbol_pen(const QwtIntervalSymbol* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtIntervalSymbol_setStyle(QwtIntervalSymbol* self, int style) {
	self->setStyle(static_cast<QwtIntervalSymbol::Style>(style));
}

int QwtIntervalSymbol_style(const QwtIntervalSymbol* self) {
	QwtIntervalSymbol::Style _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtIntervalSymbol_draw(const QwtIntervalSymbol* self, QPainter* param1, int param2, QPointF* from, QPointF* to) {
	self->draw(param1, static_cast<Qt::Orientation>(param2), *from, *to);
}

void QwtIntervalSymbol_setPen2(QwtIntervalSymbol* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtIntervalSymbol_setPen3(QwtIntervalSymbol* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

bool QwtIntervalSymbol_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtIntervalSymbol* self_cast = dynamic_cast<MiqtVirtualQwtIntervalSymbol*>( (QwtIntervalSymbol*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtIntervalSymbol_virtualbase_draw(const void* self, QPainter* param1, int param2, QPointF* from, QPointF* to) {
	static_cast<const MiqtVirtualQwtIntervalSymbol*>(self)->QwtIntervalSymbol::draw(param1, static_cast<Qt::Orientation>(param2), *from, *to);
}

void QwtIntervalSymbol_delete(QwtIntervalSymbol* self) {
	delete self;
}

