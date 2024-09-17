#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include "qpen.h"
#include "gen_qpen.h"
#include "_cgo_export.h"

QPen* QPen_new() {
	return new QPen();
}

QPen* QPen_new2(uintptr_t param1) {
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

QPen* QPen_new6(QBrush* brush, double width, uintptr_t s) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(QBrush* brush, double width, uintptr_t s, uintptr_t c) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(QBrush* brush, double width, uintptr_t s, uintptr_t c, uintptr_t j) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_OperatorAssign(QPen* self, QPen* pen) {
	self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
	self->swap(*other);
}

uintptr_t QPen_Style(const QPen* self) {
	Qt::PenStyle _ret = self->style();
	return static_cast<uintptr_t>(_ret);
}

void QPen_SetStyle(QPen* self, uintptr_t style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

struct miqt_array* QPen_DashPattern(const QPen* self) {
	QVector<double> _ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QPen_SetDashPattern(QPen* self, struct miqt_array* /* of double */ pattern) {
	QVector<double> pattern_QList;
	pattern_QList.reserve(pattern->len);
	double* pattern_arr = static_cast<double*>(pattern->data);
	for(size_t i = 0; i < pattern->len; ++i) {
		pattern_QList.push_back(pattern_arr[i]);
	}
	self->setDashPattern(pattern_QList);
}

double QPen_DashOffset(const QPen* self) {
	return self->dashOffset();
}

void QPen_SetDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_MiterLimit(const QPen* self) {
	return self->miterLimit();
}

void QPen_SetMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_WidthF(const QPen* self) {
	return self->widthF();
}

void QPen_SetWidthF(QPen* self, double width) {
	self->setWidthF(static_cast<qreal>(width));
}

int QPen_Width(const QPen* self) {
	return self->width();
}

void QPen_SetWidth(QPen* self, int width) {
	self->setWidth(static_cast<int>(width));
}

QColor* QPen_Color(const QPen* self) {
	return new QColor(self->color());
}

void QPen_SetColor(QPen* self, QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_Brush(const QPen* self) {
	return new QBrush(self->brush());
}

void QPen_SetBrush(QPen* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_IsSolid(const QPen* self) {
	return self->isSolid();
}

uintptr_t QPen_CapStyle(const QPen* self) {
	Qt::PenCapStyle _ret = self->capStyle();
	return static_cast<uintptr_t>(_ret);
}

void QPen_SetCapStyle(QPen* self, uintptr_t pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

uintptr_t QPen_JoinStyle(const QPen* self) {
	Qt::PenJoinStyle _ret = self->joinStyle();
	return static_cast<uintptr_t>(_ret);
}

void QPen_SetJoinStyle(QPen* self, uintptr_t pcs) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_IsCosmetic(const QPen* self) {
	return self->isCosmetic();
}

void QPen_SetCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_OperatorEqual(const QPen* self, QPen* p) {
	return self->operator==(*p);
}

bool QPen_OperatorNotEqual(const QPen* self, QPen* p) {
	return self->operator!=(*p);
}

bool QPen_IsDetached(QPen* self) {
	return self->isDetached();
}

void QPen_Delete(QPen* self) {
	delete self;
}

