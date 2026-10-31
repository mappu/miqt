#pragma once
#ifndef MIQT_QT6_GEN_QPOINT_H
#define MIQT_QT6_GEN_QPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

struct miqt_qpoint QPoint_new();
struct miqt_qpoint QPoint_new2(int xpos, int ypos);
struct miqt_qpoint QPoint_new3(struct miqt_qpoint param1);
bool QPoint_isNull(struct miqt_qpoint self_cabi);
int QPoint_x(struct miqt_qpoint self_cabi);
int QPoint_y(struct miqt_qpoint self_cabi);
void QPoint_setX(QPoint* self, int x);
void QPoint_setY(QPoint* self, int y);
int QPoint_manhattanLength(struct miqt_qpoint self_cabi);
struct miqt_qpoint QPoint_transposed(struct miqt_qpoint self_cabi);
QPoint* QPoint_operatorPlusAssign(QPoint* self, struct miqt_qpoint p);
QPoint* QPoint_operatorMinusAssign(QPoint* self, struct miqt_qpoint p);
QPoint* QPoint_operatorMultiplyAssign(QPoint* self, float factor);
QPoint* QPoint_operatorMultiplyAssignWithFactor(QPoint* self, double factor);
QPoint* QPoint_operatorMultiplyAssign2(QPoint* self, int factor);
QPoint* QPoint_operatorDivideAssign(QPoint* self, double divisor);
int QPoint_dotProduct(struct miqt_qpoint p1, struct miqt_qpoint p2);
struct miqt_qpointf QPoint_toPointF(struct miqt_qpoint self_cabi);


struct miqt_qpointf QPointF_new();
struct miqt_qpointf QPointF_new2(struct miqt_qpoint p);
struct miqt_qpointf QPointF_new3(double xpos, double ypos);
struct miqt_qpointf QPointF_new4(struct miqt_qpointf param1);
double QPointF_manhattanLength(struct miqt_qpointf self_cabi);
bool QPointF_isNull(struct miqt_qpointf self_cabi);
double QPointF_x(struct miqt_qpointf self_cabi);
double QPointF_y(struct miqt_qpointf self_cabi);
void QPointF_setX(QPointF* self, double x);
void QPointF_setY(QPointF* self, double y);
struct miqt_qpointf QPointF_transposed(struct miqt_qpointf self_cabi);
QPointF* QPointF_operatorPlusAssign(QPointF* self, struct miqt_qpointf p);
QPointF* QPointF_operatorMinusAssign(QPointF* self, struct miqt_qpointf p);
QPointF* QPointF_operatorMultiplyAssign(QPointF* self, double c);
QPointF* QPointF_operatorDivideAssign(QPointF* self, double c);
double QPointF_dotProduct(struct miqt_qpointf p1, struct miqt_qpointf p2);
struct miqt_qpoint QPointF_toPoint(struct miqt_qpointf self_cabi);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
