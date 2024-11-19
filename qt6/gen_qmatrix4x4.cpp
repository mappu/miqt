#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QQuaternion>
#include <QRect>
#include <QRectF>
#include <QTransform>
#include <QVector3D>
#include <QVector4D>
#include <qmatrix4x4.h>
#include "gen_qmatrix4x4.h"
#include "_cgo_export.h"

void QMatrix4x4_new(QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4();
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new2(int param1, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(static_cast<Qt::Initialization>(param1));
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new3(const float* values, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(static_cast<const float*>(values));
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(static_cast<float>(m11), static_cast<float>(m12), static_cast<float>(m13), static_cast<float>(m14), static_cast<float>(m21), static_cast<float>(m22), static_cast<float>(m23), static_cast<float>(m24), static_cast<float>(m31), static_cast<float>(m32), static_cast<float>(m33), static_cast<float>(m34), static_cast<float>(m41), static_cast<float>(m42), static_cast<float>(m43), static_cast<float>(m44));
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new5(const float* values, int cols, int rows, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(static_cast<const float*>(values), static_cast<int>(cols), static_cast<int>(rows));
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new6(QTransform* transform, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(*transform);
	*outptr_QMatrix4x4 = ret;
}

void QMatrix4x4_new7(QMatrix4x4* param1, QMatrix4x4** outptr_QMatrix4x4) {
	QMatrix4x4* ret = new QMatrix4x4(*param1);
	*outptr_QMatrix4x4 = ret;
}

QVector4D* QMatrix4x4_Column(const QMatrix4x4* self, int index) {
	return new QVector4D(self->column(static_cast<int>(index)));
}

void QMatrix4x4_SetColumn(QMatrix4x4* self, int index, QVector4D* value) {
	self->setColumn(static_cast<int>(index), *value);
}

QVector4D* QMatrix4x4_Row(const QMatrix4x4* self, int index) {
	return new QVector4D(self->row(static_cast<int>(index)));
}

void QMatrix4x4_SetRow(QMatrix4x4* self, int index, QVector4D* value) {
	self->setRow(static_cast<int>(index), *value);
}

bool QMatrix4x4_IsAffine(const QMatrix4x4* self) {
	return self->isAffine();
}

bool QMatrix4x4_IsIdentity(const QMatrix4x4* self) {
	return self->isIdentity();
}

void QMatrix4x4_SetToIdentity(QMatrix4x4* self) {
	self->setToIdentity();
}

void QMatrix4x4_Fill(QMatrix4x4* self, float value) {
	self->fill(static_cast<float>(value));
}

double QMatrix4x4_Determinant(const QMatrix4x4* self) {
	return self->determinant();
}

QMatrix4x4* QMatrix4x4_Inverted(const QMatrix4x4* self) {
	return new QMatrix4x4(self->inverted());
}

QMatrix4x4* QMatrix4x4_Transposed(const QMatrix4x4* self) {
	return new QMatrix4x4(self->transposed());
}

QMatrix4x4* QMatrix4x4_OperatorPlusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_OperatorMinusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_OperatorMultiplyAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator*=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_OperatorMultiplyAssignWithFactor(QMatrix4x4* self, float factor) {
	QMatrix4x4& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_OperatorDivideAssign(QMatrix4x4* self, float divisor) {
	QMatrix4x4& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

bool QMatrix4x4_OperatorEqual(const QMatrix4x4* self, QMatrix4x4* other) {
	return self->operator==(*other);
}

bool QMatrix4x4_OperatorNotEqual(const QMatrix4x4* self, QMatrix4x4* other) {
	return self->operator!=(*other);
}

void QMatrix4x4_Scale(QMatrix4x4* self, QVector3D* vector) {
	self->scale(*vector);
}

void QMatrix4x4_Translate(QMatrix4x4* self, QVector3D* vector) {
	self->translate(*vector);
}

void QMatrix4x4_Rotate(QMatrix4x4* self, float angle, QVector3D* vector) {
	self->rotate(static_cast<float>(angle), *vector);
}

void QMatrix4x4_Scale2(QMatrix4x4* self, float x, float y) {
	self->scale(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_Scale3(QMatrix4x4* self, float x, float y, float z) {
	self->scale(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_ScaleWithFactor(QMatrix4x4* self, float factor) {
	self->scale(static_cast<float>(factor));
}

void QMatrix4x4_Translate2(QMatrix4x4* self, float x, float y) {
	self->translate(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_Translate3(QMatrix4x4* self, float x, float y, float z) {
	self->translate(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_Rotate2(QMatrix4x4* self, float angle, float x, float y) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_RotateWithQuaternion(QMatrix4x4* self, QQuaternion* quaternion) {
	self->rotate(*quaternion);
}

void QMatrix4x4_Ortho(QMatrix4x4* self, QRect* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_OrthoWithRect(QMatrix4x4* self, QRectF* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_Ortho2(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->ortho(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_Frustum(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->frustum(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_Perspective(QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
	self->perspective(static_cast<float>(verticalAngle), static_cast<float>(aspectRatio), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_LookAt(QMatrix4x4* self, QVector3D* eye, QVector3D* center, QVector3D* up) {
	self->lookAt(*eye, *center, *up);
}

void QMatrix4x4_Viewport(QMatrix4x4* self, QRectF* rect) {
	self->viewport(*rect);
}

void QMatrix4x4_Viewport2(QMatrix4x4* self, float left, float bottom, float width, float height) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height));
}

void QMatrix4x4_FlipCoordinates(QMatrix4x4* self) {
	self->flipCoordinates();
}

void QMatrix4x4_CopyDataTo(const QMatrix4x4* self, float* values) {
	self->copyDataTo(static_cast<float*>(values));
}

QTransform* QMatrix4x4_ToTransform(const QMatrix4x4* self) {
	return new QTransform(self->toTransform());
}

QTransform* QMatrix4x4_ToTransformWithDistanceToPlane(const QMatrix4x4* self, float distanceToPlane) {
	return new QTransform(self->toTransform(static_cast<float>(distanceToPlane)));
}

QPoint* QMatrix4x4_Map(const QMatrix4x4* self, QPoint* point) {
	return new QPoint(self->map(*point));
}

QPointF* QMatrix4x4_MapWithPoint(const QMatrix4x4* self, QPointF* point) {
	return new QPointF(self->map(*point));
}

QVector3D* QMatrix4x4_Map2(const QMatrix4x4* self, QVector3D* point) {
	return new QVector3D(self->map(*point));
}

QVector3D* QMatrix4x4_MapVector(const QMatrix4x4* self, QVector3D* vector) {
	return new QVector3D(self->mapVector(*vector));
}

QVector4D* QMatrix4x4_Map3(const QMatrix4x4* self, QVector4D* point) {
	return new QVector4D(self->map(*point));
}

QRect* QMatrix4x4_MapRect(const QMatrix4x4* self, QRect* rect) {
	return new QRect(self->mapRect(*rect));
}

QRectF* QMatrix4x4_MapRectWithRect(const QMatrix4x4* self, QRectF* rect) {
	return new QRectF(self->mapRect(*rect));
}

float* QMatrix4x4_Data(QMatrix4x4* self) {
	return self->data();
}

const float* QMatrix4x4_Data2(const QMatrix4x4* self) {
	return (const float*) self->data();
}

const float* QMatrix4x4_ConstData(const QMatrix4x4* self) {
	return (const float*) self->constData();
}

void QMatrix4x4_Optimize(QMatrix4x4* self) {
	self->optimize();
}

void QMatrix4x4_ProjectedRotate(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->projectedRotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

int QMatrix4x4_Flags(const QMatrix4x4* self) {
	QMatrix4x4::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

QMatrix4x4* QMatrix4x4_Inverted1(const QMatrix4x4* self, bool* invertible) {
	return new QMatrix4x4(self->inverted(invertible));
}

void QMatrix4x4_Rotate4(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_Viewport5(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane));
}

void QMatrix4x4_Viewport6(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_Delete(QMatrix4x4* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMatrix4x4*>( self );
	} else {
		delete self;
	}
}

