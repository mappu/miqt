#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include <QVariant>
#include <qpen.h>
#include "gen_qpen.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPen* QPen_new() {
	return new QPen();
}

QPen* QPen_new2(int param1) {
	return new QPen(static_cast<Qt::PenStyle>(param1));
}

QPen* QPen_new3(QColor* color) {
	return new QPen(*color);
}

QPen* QPen_new4(QBrush* brush, double width) {
	return new QPen(*brush, static_cast<qreal>(width));
}

QPen* QPen_new5(QPen* pen) {
	return new QPen(*pen);
}

QPen* QPen_new6(QBrush* brush, double width, int s) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(QBrush* brush, double width, int s, int c) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(QBrush* brush, double width, int s, int c, int j) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_operatorAssign(QPen* self, QPen* pen) {
	self->operator=(*pen);
}

void QPen_swap(QPen* self, QPen* other) {
	self->swap(*other);
}

int QPen_style(const QPen* self) {
	Qt::PenStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QPen_setStyle(QPen* self, int style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

struct miqt_array /* of double */  QPen_dashPattern(const QPen* self) {
	QList<qreal> _ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPen_setDashPattern(QPen* self, struct miqt_array /* of double */  pattern) {
	QList<qreal> pattern_QList;
	pattern_QList.reserve(pattern.len);
	double* pattern_arr = static_cast<double*>(pattern.data);
	for(size_t i = 0; i < pattern.len; ++i) {
		pattern_QList.push_back(static_cast<double>(pattern_arr[i]));
	}
	self->setDashPattern(pattern_QList);
}

double QPen_dashOffset(const QPen* self) {
	qreal _ret = self->dashOffset();
	return static_cast<double>(_ret);
}

void QPen_setDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_miterLimit(const QPen* self) {
	qreal _ret = self->miterLimit();
	return static_cast<double>(_ret);
}

void QPen_setMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_widthF(const QPen* self) {
	qreal _ret = self->widthF();
	return static_cast<double>(_ret);
}

void QPen_setWidthF(QPen* self, double width) {
	self->setWidthF(static_cast<qreal>(width));
}

int QPen_width(const QPen* self) {
	return self->width();
}

void QPen_setWidth(QPen* self, int width) {
	self->setWidth(static_cast<int>(width));
}

QColor* QPen_color(const QPen* self) {
	return new QColor(self->color());
}

void QPen_setColor(QPen* self, QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_brush(const QPen* self) {
	return new QBrush(self->brush());
}

void QPen_setBrush(QPen* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_isSolid(const QPen* self) {
	return self->isSolid();
}

int QPen_capStyle(const QPen* self) {
	Qt::PenCapStyle _ret = self->capStyle();
	return static_cast<int>(_ret);
}

void QPen_setCapStyle(QPen* self, int pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

int QPen_joinStyle(const QPen* self) {
	Qt::PenJoinStyle _ret = self->joinStyle();
	return static_cast<int>(_ret);
}

void QPen_setJoinStyle(QPen* self, int pcs) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_isCosmetic(const QPen* self) {
	return self->isCosmetic();
}

void QPen_setCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_operatorEqual(const QPen* self, QPen* p) {
	return (*self == *p);
}

bool QPen_operatorNotEqual(const QPen* self, QPen* p) {
	return (*self != *p);
}

QVariant* QPen_ToQVariant(const QPen* self) {
	return new QVariant(self->operator QVariant());
}

bool QPen_isDetached(QPen* self) {
	return self->isDetached();
}

void QPen_delete(QPen* self) {
	delete self;
}

