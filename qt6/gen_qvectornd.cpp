#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QVariant>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qvectornd.h>
#include "gen_qvectornd.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVector2D* QVector2D_new() {
	return new (std::nothrow) QVector2D();
}

QVector2D* QVector2D_new2(int param1) {
	return new (std::nothrow) QVector2D(static_cast<Qt::Initialization>(param1));
}

QVector2D* QVector2D_new3(float xpos, float ypos) {
	return new (std::nothrow) QVector2D(static_cast<float>(xpos), static_cast<float>(ypos));
}

QVector2D* QVector2D_new4(struct miqt_qpoint point) {
	return new (std::nothrow) QVector2D(miqt_from_cabi<QPoint>(point));
}

QVector2D* QVector2D_new5(struct miqt_qpointf point) {
	return new (std::nothrow) QVector2D(miqt_from_cabi<QPointF>(point));
}

QVector2D* QVector2D_new6(struct miqt_qvector3d vector) {
	return new (std::nothrow) QVector2D(miqt_from_cabi<QVector3D>(vector));
}

QVector2D* QVector2D_new7(QVector4D* vector) {
	return new (std::nothrow) QVector2D(*vector);
}

QVector2D* QVector2D_new8(QVector2D* param1) {
	return new (std::nothrow) QVector2D(*param1);
}

bool QVector2D_isNull(const QVector2D* self) {
	return self->isNull();
}

float QVector2D_x(const QVector2D* self) {
	return self->x();
}

float QVector2D_y(const QVector2D* self) {
	return self->y();
}

void QVector2D_setX(QVector2D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector2D_setY(QVector2D* self, float y) {
	self->setY(static_cast<float>(y));
}

float QVector2D_operatorSubscript(const QVector2D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector2D_length(const QVector2D* self) {
	return self->length();
}

float QVector2D_lengthSquared(const QVector2D* self) {
	return self->lengthSquared();
}

QVector2D* QVector2D_normalized(const QVector2D* self) {
	return new QVector2D(self->normalized());
}

void QVector2D_normalize(QVector2D* self) {
	self->normalize();
}

float QVector2D_distanceToPoint(const QVector2D* self, QVector2D* point) {
	return self->distanceToPoint(*point);
}

float QVector2D_distanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector2D_operatorPlusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMinusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssign(QVector2D* self, float factor) {
	QVector2D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssign(QVector2D* self, float divisor) {
	QVector2D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector2D_dotProduct(QVector2D* v1, QVector2D* v2) {
	return QVector2D::dotProduct(*v1, *v2);
}

struct miqt_qvector3d QVector2D_toVector3D(const QVector2D* self) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->toVector3D());
}

QVector4D* QVector2D_toVector4D(const QVector2D* self) {
	return new QVector4D(self->toVector4D());
}

struct miqt_qpoint QVector2D_toPoint(const QVector2D* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->toPoint());
}

struct miqt_qpointf QVector2D_toPointF(const QVector2D* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->toPointF());
}

QVariant* QVector2D_ToQVariant(const QVector2D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector2D_delete(QVector2D* self) {
	delete self;
}

struct miqt_qvector3d QVector3D_new() {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D());
}

struct miqt_qvector3d QVector3D_new2(int param1) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(static_cast<Qt::Initialization>(param1)));
}

struct miqt_qvector3d QVector3D_new3(float xpos, float ypos, float zpos) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos)));
}

struct miqt_qvector3d QVector3D_new4(struct miqt_qpoint point) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(miqt_from_cabi<QPoint>(point)));
}

struct miqt_qvector3d QVector3D_new5(struct miqt_qpointf point) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(miqt_from_cabi<QPointF>(point)));
}

struct miqt_qvector3d QVector3D_new6(QVector2D* vector) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(*vector));
}

struct miqt_qvector3d QVector3D_new7(QVector2D* vector, float zpos) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(*vector, static_cast<float>(zpos)));
}

struct miqt_qvector3d QVector3D_new8(QVector4D* vector) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(*vector));
}

struct miqt_qvector3d QVector3D_new9(struct miqt_qvector3d param1) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D(miqt_from_cabi<QVector3D>(param1)));
}

bool QVector3D_isNull(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->isNull();
}

float QVector3D_x(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->x();
}

float QVector3D_y(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->y();
}

float QVector3D_z(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->z();
}

void QVector3D_setX(QVector3D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector3D_setY(QVector3D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector3D_setZ(QVector3D* self, float z) {
	self->setZ(static_cast<float>(z));
}

float QVector3D_operatorSubscript(struct miqt_qvector3d self_cabi, int i) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->operator[](static_cast<int>(i));
}

float QVector3D_length(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->length();
}

float QVector3D_lengthSquared(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->lengthSquared();
}

struct miqt_qvector3d QVector3D_normalized(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return miqt_to_cabi<struct miqt_qvector3d>(self->normalized());
}

void QVector3D_normalize(QVector3D* self) {
	self->normalize();
}

QVector3D* QVector3D_operatorPlusAssign(QVector3D* self, struct miqt_qvector3d vector) {
	QVector3D& _ret = self->operator+=(miqt_from_cabi<QVector3D>(vector));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMinusAssign(QVector3D* self, struct miqt_qvector3d vector) {
	QVector3D& _ret = self->operator-=(miqt_from_cabi<QVector3D>(vector));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssign(QVector3D* self, float factor) {
	QVector3D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssignWithVector(QVector3D* self, struct miqt_qvector3d vector) {
	QVector3D& _ret = self->operator*=(miqt_from_cabi<QVector3D>(vector));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssign(QVector3D* self, float divisor) {
	QVector3D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssignWithVector(QVector3D* self, struct miqt_qvector3d vector) {
	QVector3D& _ret = self->operator/=(miqt_from_cabi<QVector3D>(vector));
	// Cast returned reference into pointer
	return &_ret;
}

float QVector3D_dotProduct(struct miqt_qvector3d v1, struct miqt_qvector3d v2) {
	return QVector3D::dotProduct(miqt_from_cabi<QVector3D>(v1), miqt_from_cabi<QVector3D>(v2));
}

struct miqt_qvector3d QVector3D_crossProduct(struct miqt_qvector3d v1, struct miqt_qvector3d v2) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D::crossProduct(miqt_from_cabi<QVector3D>(v1), miqt_from_cabi<QVector3D>(v2)));
}

struct miqt_qvector3d QVector3D_normal(struct miqt_qvector3d v1, struct miqt_qvector3d v2) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D::normal(miqt_from_cabi<QVector3D>(v1), miqt_from_cabi<QVector3D>(v2)));
}

struct miqt_qvector3d QVector3D_normal2(struct miqt_qvector3d v1, struct miqt_qvector3d v2, struct miqt_qvector3d v3) {
	return miqt_to_cabi<struct miqt_qvector3d>(QVector3D::normal(miqt_from_cabi<QVector3D>(v1), miqt_from_cabi<QVector3D>(v2), miqt_from_cabi<QVector3D>(v3)));
}

struct miqt_qvector3d QVector3D_project(struct miqt_qvector3d self_cabi, QMatrix4x4* modelView, QMatrix4x4* projection, struct miqt_qrect viewport) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return miqt_to_cabi<struct miqt_qvector3d>(self->project(*modelView, *projection, miqt_from_cabi<QRect>(viewport)));
}

struct miqt_qvector3d QVector3D_unproject(struct miqt_qvector3d self_cabi, QMatrix4x4* modelView, QMatrix4x4* projection, struct miqt_qrect viewport) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return miqt_to_cabi<struct miqt_qvector3d>(self->unproject(*modelView, *projection, miqt_from_cabi<QRect>(viewport)));
}

float QVector3D_distanceToPoint(struct miqt_qvector3d self_cabi, struct miqt_qvector3d point) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->distanceToPoint(miqt_from_cabi<QVector3D>(point));
}

float QVector3D_distanceToPlane(struct miqt_qvector3d self_cabi, struct miqt_qvector3d plane, struct miqt_qvector3d normal) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->distanceToPlane(miqt_from_cabi<QVector3D>(plane), miqt_from_cabi<QVector3D>(normal));
}

float QVector3D_distanceToPlane2(struct miqt_qvector3d self_cabi, struct miqt_qvector3d plane1, struct miqt_qvector3d plane2, struct miqt_qvector3d plane3) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->distanceToPlane(miqt_from_cabi<QVector3D>(plane1), miqt_from_cabi<QVector3D>(plane2), miqt_from_cabi<QVector3D>(plane3));
}

float QVector3D_distanceToLine(struct miqt_qvector3d self_cabi, struct miqt_qvector3d point, struct miqt_qvector3d direction) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return self->distanceToLine(miqt_from_cabi<QVector3D>(point), miqt_from_cabi<QVector3D>(direction));
}

QVector2D* QVector3D_toVector2D(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return new QVector2D(self->toVector2D());
}

QVector4D* QVector3D_toVector4D(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return new QVector4D(self->toVector4D());
}

struct miqt_qpoint QVector3D_toPoint(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->toPoint());
}

struct miqt_qpointf QVector3D_toPointF(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->toPointF());
}

QVariant* QVector3D_ToQVariant(struct miqt_qvector3d self_cabi) {
	const QVector3D self_val = miqt_from_cabi<QVector3D>(self_cabi);
	const QVector3D* self = &self_val;
	return new QVariant(self->operator QVariant());
}

QVector4D* QVector4D_new() {
	return new (std::nothrow) QVector4D();
}

QVector4D* QVector4D_new2(int param1) {
	return new (std::nothrow) QVector4D(static_cast<Qt::Initialization>(param1));
}

QVector4D* QVector4D_new3(float xpos, float ypos, float zpos, float wpos) {
	return new (std::nothrow) QVector4D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new4(struct miqt_qpoint point) {
	return new (std::nothrow) QVector4D(miqt_from_cabi<QPoint>(point));
}

QVector4D* QVector4D_new5(struct miqt_qpointf point) {
	return new (std::nothrow) QVector4D(miqt_from_cabi<QPointF>(point));
}

QVector4D* QVector4D_new6(QVector2D* vector) {
	return new (std::nothrow) QVector4D(*vector);
}

QVector4D* QVector4D_new7(QVector2D* vector, float zpos, float wpos) {
	return new (std::nothrow) QVector4D(*vector, static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new8(struct miqt_qvector3d vector) {
	return new (std::nothrow) QVector4D(miqt_from_cabi<QVector3D>(vector));
}

QVector4D* QVector4D_new9(struct miqt_qvector3d vector, float wpos) {
	return new (std::nothrow) QVector4D(miqt_from_cabi<QVector3D>(vector), static_cast<float>(wpos));
}

QVector4D* QVector4D_new10(QVector4D* param1) {
	return new (std::nothrow) QVector4D(*param1);
}

bool QVector4D_isNull(const QVector4D* self) {
	return self->isNull();
}

float QVector4D_x(const QVector4D* self) {
	return self->x();
}

float QVector4D_y(const QVector4D* self) {
	return self->y();
}

float QVector4D_z(const QVector4D* self) {
	return self->z();
}

float QVector4D_w(const QVector4D* self) {
	return self->w();
}

void QVector4D_setX(QVector4D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector4D_setY(QVector4D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector4D_setZ(QVector4D* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QVector4D_setW(QVector4D* self, float w) {
	self->setW(static_cast<float>(w));
}

float QVector4D_operatorSubscript(const QVector4D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector4D_length(const QVector4D* self) {
	return self->length();
}

float QVector4D_lengthSquared(const QVector4D* self) {
	return self->lengthSquared();
}

QVector4D* QVector4D_normalized(const QVector4D* self) {
	return new QVector4D(self->normalized());
}

void QVector4D_normalize(QVector4D* self) {
	self->normalize();
}

QVector4D* QVector4D_operatorPlusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMinusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssign(QVector4D* self, float factor) {
	QVector4D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssign(QVector4D* self, float divisor) {
	QVector4D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector4D_dotProduct(QVector4D* v1, QVector4D* v2) {
	return QVector4D::dotProduct(*v1, *v2);
}

QVector2D* QVector4D_toVector2D(const QVector4D* self) {
	return new QVector2D(self->toVector2D());
}

QVector2D* QVector4D_toVector2DAffine(const QVector4D* self) {
	return new QVector2D(self->toVector2DAffine());
}

struct miqt_qvector3d QVector4D_toVector3D(const QVector4D* self) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->toVector3D());
}

struct miqt_qvector3d QVector4D_toVector3DAffine(const QVector4D* self) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->toVector3DAffine());
}

struct miqt_qpoint QVector4D_toPoint(const QVector4D* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->toPoint());
}

struct miqt_qpointf QVector4D_toPointF(const QVector4D* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->toPointF());
}

QVariant* QVector4D_ToQVariant(const QVector4D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector4D_delete(QVector4D* self) {
	delete self;
}

