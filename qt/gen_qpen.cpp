#include "gen_qpen.h"
#include "qpen.h"

#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPen* QPen_new() {
	return new QPen();
}

QPen* QPen_new2(QColor* color) {
	return new QPen(*color);
}

QPen* QPen_new3(QPen* pen) {
	return new QPen(*pen);
}

void QPen_OperatorAssign(QPen* self, QPen* pen) {
	self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
	self->swap(*other);
}

void QPen_DashPattern(QPen* self, double** _out, size_t* _out_len) {
	QVector<qreal> ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* __out = static_cast<double*>(malloc(sizeof(double) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPen_SetDashPattern(QPen* self, double* pattern, size_t pattern_len) {
	QVector<qreal> pattern_QList;
	pattern_QList.reserve(pattern_len);
	for(size_t i = 0; i < pattern_len; ++i) {
		pattern_QList.push_back(pattern[i]);
	}
	self->setDashPattern(pattern_QList);
}

double QPen_DashOffset(QPen* self) {
	return self->dashOffset();
}

void QPen_SetDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_MiterLimit(QPen* self) {
	return self->miterLimit();
}

void QPen_SetMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_WidthF(QPen* self) {
	return self->widthF();
}

void QPen_SetWidthF(QPen* self, double width) {
	self->setWidthF(static_cast<qreal>(width));
}

int QPen_Width(QPen* self) {
	return self->width();
}

void QPen_SetWidth(QPen* self, int width) {
	self->setWidth(static_cast<int>(width));
}

QColor* QPen_Color(QPen* self) {
	QColor ret = self->color();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QPen_SetColor(QPen* self, QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_Brush(QPen* self) {
	QBrush ret = self->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QPen_SetBrush(QPen* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_IsSolid(QPen* self) {
	return self->isSolid();
}

bool QPen_IsCosmetic(QPen* self) {
	return self->isCosmetic();
}

void QPen_SetCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_OperatorEqual(QPen* self, QPen* p) {
	return self->operator==(*p);
}

bool QPen_OperatorNotEqual(QPen* self, QPen* p) {
	return self->operator!=(*p);
}

bool QPen_IsDetached(QPen* self) {
	return self->isDetached();
}

void QPen_Delete(QPen* self) {
	delete self;
}

