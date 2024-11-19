#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include <qpen.h>
#include "gen_qpen.h"
#include "_cgo_export.h"

void QPen_new(QPen** outptr_QPen) {
	QPen* ret = new QPen();
	*outptr_QPen = ret;
}

void QPen_new2(int param1, QPen** outptr_QPen) {
	QPen* ret = new QPen(static_cast<Qt::PenStyle>(param1));
	*outptr_QPen = ret;
}

void QPen_new3(QColor* color, QPen** outptr_QPen) {
	QPen* ret = new QPen(*color);
	*outptr_QPen = ret;
}

void QPen_new4(QBrush* brush, double width, QPen** outptr_QPen) {
	QPen* ret = new QPen(*brush, static_cast<qreal>(width));
	*outptr_QPen = ret;
}

void QPen_new5(QPen* pen, QPen** outptr_QPen) {
	QPen* ret = new QPen(*pen);
	*outptr_QPen = ret;
}

void QPen_new6(QBrush* brush, double width, int s, QPen** outptr_QPen) {
	QPen* ret = new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s));
	*outptr_QPen = ret;
}

void QPen_new7(QBrush* brush, double width, int s, int c, QPen** outptr_QPen) {
	QPen* ret = new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
	*outptr_QPen = ret;
}

void QPen_new8(QBrush* brush, double width, int s, int c, int j, QPen** outptr_QPen) {
	QPen* ret = new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
	*outptr_QPen = ret;
}

void QPen_OperatorAssign(QPen* self, QPen* pen) {
	self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
	self->swap(*other);
}

int QPen_Style(const QPen* self) {
	Qt::PenStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QPen_SetStyle(QPen* self, int style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

struct miqt_array /* of double */  QPen_DashPattern(const QPen* self) {
	QVector<qreal> _ret = self->dashPattern();
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

void QPen_SetDashPattern(QPen* self, struct miqt_array /* of double */  pattern) {
	QVector<qreal> pattern_QList;
	pattern_QList.reserve(pattern.len);
	double* pattern_arr = static_cast<double*>(pattern.data);
	for(size_t i = 0; i < pattern.len; ++i) {
		pattern_QList.push_back(static_cast<double>(pattern_arr[i]));
	}
	self->setDashPattern(pattern_QList);
}

double QPen_DashOffset(const QPen* self) {
	qreal _ret = self->dashOffset();
	return static_cast<double>(_ret);
}

void QPen_SetDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_MiterLimit(const QPen* self) {
	qreal _ret = self->miterLimit();
	return static_cast<double>(_ret);
}

void QPen_SetMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_WidthF(const QPen* self) {
	qreal _ret = self->widthF();
	return static_cast<double>(_ret);
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

int QPen_CapStyle(const QPen* self) {
	Qt::PenCapStyle _ret = self->capStyle();
	return static_cast<int>(_ret);
}

void QPen_SetCapStyle(QPen* self, int pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

int QPen_JoinStyle(const QPen* self) {
	Qt::PenJoinStyle _ret = self->joinStyle();
	return static_cast<int>(_ret);
}

void QPen_SetJoinStyle(QPen* self, int pcs) {
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

void QPen_Delete(QPen* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPen*>( self );
	} else {
		delete self;
	}
}

