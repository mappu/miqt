#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QQuaternion>
#include <QRect>
#include <QRectF>
#include <QTransform>
#include <QVariant>
#include <QVector3D>
#include <QVector4D>
#include <qmatrix4x4.h>
#include "gen_qmatrix4x4.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMatrix4x4* QMatrix4x4_new() {
	return new QMatrix4x4();
}

QMatrix4x4* QMatrix4x4_new2(int param1) {
	return new QMatrix4x4(static_cast<Qt::Initialization>(param1));
}

QMatrix4x4* QMatrix4x4_new3(const float* values) {
	return new QMatrix4x4(static_cast<const float*>(values));
}

QMatrix4x4* QMatrix4x4_new4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
	return new QMatrix4x4(static_cast<float>(m11), static_cast<float>(m12), static_cast<float>(m13), static_cast<float>(m14), static_cast<float>(m21), static_cast<float>(m22), static_cast<float>(m23), static_cast<float>(m24), static_cast<float>(m31), static_cast<float>(m32), static_cast<float>(m33), static_cast<float>(m34), static_cast<float>(m41), static_cast<float>(m42), static_cast<float>(m43), static_cast<float>(m44));
}

QMatrix4x4* QMatrix4x4_new5(const float* values, int cols, int rows) {
	return new QMatrix4x4(static_cast<const float*>(values), static_cast<int>(cols), static_cast<int>(rows));
}

QMatrix4x4* QMatrix4x4_new6(QTransform* transform) {
	return new QMatrix4x4(*transform);
}

QMatrix4x4* QMatrix4x4_new7(QMatrix4x4* param1) {
	return new QMatrix4x4(*param1);
}

QVector4D* QMatrix4x4_column(const QMatrix4x4* self, int index) {
	return new QVector4D(self->column(static_cast<int>(index)));
}

void QMatrix4x4_setColumn(QMatrix4x4* self, int index, QVector4D* value) {
	self->setColumn(static_cast<int>(index), *value);
}

QVector4D* QMatrix4x4_row(const QMatrix4x4* self, int index) {
	return new QVector4D(self->row(static_cast<int>(index)));
}

void QMatrix4x4_setRow(QMatrix4x4* self, int index, QVector4D* value) {
	self->setRow(static_cast<int>(index), *value);
}

bool QMatrix4x4_isAffine(const QMatrix4x4* self) {
	return self->isAffine();
}

bool QMatrix4x4_isIdentity(const QMatrix4x4* self) {
	return self->isIdentity();
}

void QMatrix4x4_setToIdentity(QMatrix4x4* self) {
	self->setToIdentity();
}

void QMatrix4x4_fill(QMatrix4x4* self, float value) {
	self->fill(static_cast<float>(value));
}

double QMatrix4x4_determinant(const QMatrix4x4* self) {
	return self->determinant();
}

QMatrix4x4* QMatrix4x4_inverted(const QMatrix4x4* self) {
	return new QMatrix4x4(self->inverted());
}

QMatrix4x4* QMatrix4x4_transposed(const QMatrix4x4* self) {
	return new QMatrix4x4(self->transposed());
}

QMatrix4x4* QMatrix4x4_operatorPlusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMinusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMultiplyAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator*=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMultiplyAssignWithFactor(QMatrix4x4* self, float factor) {
	QMatrix4x4& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorDivideAssign(QMatrix4x4* self, float divisor) {
	QMatrix4x4& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

bool QMatrix4x4_operatorEqual(const QMatrix4x4* self, QMatrix4x4* other) {
	return (*self == *other);
}

bool QMatrix4x4_operatorNotEqual(const QMatrix4x4* self, QMatrix4x4* other) {
	return (*self != *other);
}

void QMatrix4x4_scale(QMatrix4x4* self, QVector3D* vector) {
	self->scale(*vector);
}

void QMatrix4x4_translate(QMatrix4x4* self, QVector3D* vector) {
	self->translate(*vector);
}

void QMatrix4x4_rotate(QMatrix4x4* self, float angle, QVector3D* vector) {
	self->rotate(static_cast<float>(angle), *vector);
}

void QMatrix4x4_scale2(QMatrix4x4* self, float x, float y) {
	self->scale(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_scale3(QMatrix4x4* self, float x, float y, float z) {
	self->scale(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_scaleWithFactor(QMatrix4x4* self, float factor) {
	self->scale(static_cast<float>(factor));
}

void QMatrix4x4_translate2(QMatrix4x4* self, float x, float y) {
	self->translate(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_translate3(QMatrix4x4* self, float x, float y, float z) {
	self->translate(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_rotate2(QMatrix4x4* self, float angle, float x, float y) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_rotateWithQuaternion(QMatrix4x4* self, QQuaternion* quaternion) {
	self->rotate(*quaternion);
}

void QMatrix4x4_ortho(QMatrix4x4* self, QRect* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_orthoWithRect(QMatrix4x4* self, QRectF* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_ortho2(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->ortho(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_frustum(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->frustum(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_perspective(QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
	self->perspective(static_cast<float>(verticalAngle), static_cast<float>(aspectRatio), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_lookAt(QMatrix4x4* self, QVector3D* eye, QVector3D* center, QVector3D* up) {
	self->lookAt(*eye, *center, *up);
}

void QMatrix4x4_viewport(QMatrix4x4* self, QRectF* rect) {
	self->viewport(*rect);
}

void QMatrix4x4_viewport2(QMatrix4x4* self, float left, float bottom, float width, float height) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height));
}

void QMatrix4x4_flipCoordinates(QMatrix4x4* self) {
	self->flipCoordinates();
}

void QMatrix4x4_copyDataTo(const QMatrix4x4* self, float* values) {
	self->copyDataTo(static_cast<float*>(values));
}

QTransform* QMatrix4x4_toTransform(const QMatrix4x4* self) {
	return new QTransform(self->toTransform());
}

QTransform* QMatrix4x4_toTransformWithDistanceToPlane(const QMatrix4x4* self, float distanceToPlane) {
	return new QTransform(self->toTransform(static_cast<float>(distanceToPlane)));
}

QPoint* QMatrix4x4_map(const QMatrix4x4* self, QPoint* point) {
	return new QPoint(self->map(*point));
}

QPointF* QMatrix4x4_mapWithPoint(const QMatrix4x4* self, QPointF* point) {
	return new QPointF(self->map(*point));
}

QVector3D* QMatrix4x4_map2(const QMatrix4x4* self, QVector3D* point) {
	return new QVector3D(self->map(*point));
}

QVector3D* QMatrix4x4_mapVector(const QMatrix4x4* self, QVector3D* vector) {
	return new QVector3D(self->mapVector(*vector));
}

QVector4D* QMatrix4x4_map3(const QMatrix4x4* self, QVector4D* point) {
	return new QVector4D(self->map(*point));
}

QRect* QMatrix4x4_mapRect(const QMatrix4x4* self, QRect* rect) {
	return new QRect(self->mapRect(*rect));
}

QRectF* QMatrix4x4_mapRectWithRect(const QMatrix4x4* self, QRectF* rect) {
	return new QRectF(self->mapRect(*rect));
}

float* QMatrix4x4_data(QMatrix4x4* self) {
	return self->data();
}

const float* QMatrix4x4_data2(const QMatrix4x4* self) {
	return (const float*) self->data();
}

const float* QMatrix4x4_constData(const QMatrix4x4* self) {
	return (const float*) self->constData();
}

void QMatrix4x4_optimize(QMatrix4x4* self) {
	self->optimize();
}

QVariant* QMatrix4x4_ToQVariant(const QMatrix4x4* self) {
	return new QVariant(self->operator QVariant());
}

void QMatrix4x4_projectedRotate(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->projectedRotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

int QMatrix4x4_flags(const QMatrix4x4* self) {
	QMatrix4x4::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

QMatrix4x4* QMatrix4x4_inverted1(const QMatrix4x4* self, bool* invertible) {
	return new QMatrix4x4(self->inverted(invertible));
}

void QMatrix4x4_rotate4(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_viewport5(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane));
}

void QMatrix4x4_viewport6(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_delete(QMatrix4x4* self) {
	delete self;
}

