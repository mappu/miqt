#ifndef GEN_QPOINT_H
#define GEN_QPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
class QPointF;
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
#endif

QPoint* QPoint_new();
QPoint* QPoint_new2(int xpos, int ypos);
QPoint* QPoint_new3(QPoint* param1);
bool QPoint_IsNull(const QPoint* self);
int QPoint_X(const QPoint* self);
int QPoint_Y(const QPoint* self);
void QPoint_SetX(QPoint* self, int x);
void QPoint_SetY(QPoint* self, int y);
int QPoint_ManhattanLength(const QPoint* self);
QPoint* QPoint_Transposed(const QPoint* self);
QPoint* QPoint_OperatorPlusAssign(QPoint* self, QPoint* p);
QPoint* QPoint_OperatorMinusAssign(QPoint* self, QPoint* p);
QPoint* QPoint_OperatorMultiplyAssign(QPoint* self, float factor);
QPoint* QPoint_OperatorMultiplyAssignWithFactor(QPoint* self, double factor);
QPoint* QPoint_OperatorMultiplyAssign2(QPoint* self, int factor);
QPoint* QPoint_OperatorDivideAssign(QPoint* self, double divisor);
int QPoint_DotProduct(QPoint* p1, QPoint* p2);
void QPoint_Delete(QPoint* self);

QPointF* QPointF_new();
QPointF* QPointF_new2(QPoint* p);
QPointF* QPointF_new3(double xpos, double ypos);
QPointF* QPointF_new4(QPointF* param1);
double QPointF_ManhattanLength(const QPointF* self);
bool QPointF_IsNull(const QPointF* self);
double QPointF_X(const QPointF* self);
double QPointF_Y(const QPointF* self);
void QPointF_SetX(QPointF* self, double x);
void QPointF_SetY(QPointF* self, double y);
QPointF* QPointF_Transposed(const QPointF* self);
QPointF* QPointF_OperatorPlusAssign(QPointF* self, QPointF* p);
QPointF* QPointF_OperatorMinusAssign(QPointF* self, QPointF* p);
QPointF* QPointF_OperatorMultiplyAssign(QPointF* self, double c);
QPointF* QPointF_OperatorDivideAssign(QPointF* self, double c);
double QPointF_DotProduct(QPointF* p1, QPointF* p2);
QPoint* QPointF_ToPoint(const QPointF* self);
void QPointF_Delete(QPointF* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
