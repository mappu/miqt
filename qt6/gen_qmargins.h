#pragma once
#ifndef MIQT_QT6_GEN_QMARGINS_H
#define MIQT_QT6_GEN_QMARGINS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMargins;
class QMarginsF;
#else
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
#endif

struct miqt_qmargins QMargins_new();
struct miqt_qmargins QMargins_new2(int left, int top, int right, int bottom);
struct miqt_qmargins QMargins_new3(struct miqt_qmargins param1);
bool QMargins_isNull(struct miqt_qmargins self_cabi);
int QMargins_left(struct miqt_qmargins self_cabi);
int QMargins_top(struct miqt_qmargins self_cabi);
int QMargins_right(struct miqt_qmargins self_cabi);
int QMargins_bottom(struct miqt_qmargins self_cabi);
void QMargins_setLeft(QMargins* self, int left);
void QMargins_setTop(QMargins* self, int top);
void QMargins_setRight(QMargins* self, int right);
void QMargins_setBottom(QMargins* self, int bottom);
QMargins* QMargins_operatorPlusAssign(QMargins* self, struct miqt_qmargins margins);
QMargins* QMargins_operatorMinusAssign(QMargins* self, struct miqt_qmargins margins);
QMargins* QMargins_operatorPlusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_operatorMinusAssignWithInt(QMargins* self, int param1);
QMargins* QMargins_operatorMultiplyAssign(QMargins* self, int param1);
QMargins* QMargins_operatorDivideAssign(QMargins* self, int param1);
QMargins* QMargins_operatorMultiplyAssignWithQreal(QMargins* self, double param1);
QMargins* QMargins_operatorDivideAssignWithQreal(QMargins* self, double param1);
struct miqt_qmarginsf QMargins_toMarginsF(struct miqt_qmargins self_cabi);
void QMargins_operatorAssign(QMargins* self, struct miqt_qmargins param1);


struct miqt_qmarginsf QMarginsF_new();
struct miqt_qmarginsf QMarginsF_new2(double left, double top, double right, double bottom);
struct miqt_qmarginsf QMarginsF_new3(struct miqt_qmargins margins);
struct miqt_qmarginsf QMarginsF_new4(struct miqt_qmarginsf param1);
bool QMarginsF_isNull(struct miqt_qmarginsf self_cabi);
double QMarginsF_left(struct miqt_qmarginsf self_cabi);
double QMarginsF_top(struct miqt_qmarginsf self_cabi);
double QMarginsF_right(struct miqt_qmarginsf self_cabi);
double QMarginsF_bottom(struct miqt_qmarginsf self_cabi);
void QMarginsF_setLeft(QMarginsF* self, double aleft);
void QMarginsF_setTop(QMarginsF* self, double atop);
void QMarginsF_setRight(QMarginsF* self, double aright);
void QMarginsF_setBottom(QMarginsF* self, double abottom);
QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, struct miqt_qmarginsf margins);
QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, struct miqt_qmarginsf margins);
QMarginsF* QMarginsF_operatorPlusAssignWithAddend(QMarginsF* self, double addend);
QMarginsF* QMarginsF_operatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend);
QMarginsF* QMarginsF_operatorMultiplyAssign(QMarginsF* self, double factor);
QMarginsF* QMarginsF_operatorDivideAssign(QMarginsF* self, double divisor);
struct miqt_qmargins QMarginsF_toMargins(struct miqt_qmarginsf self_cabi);
void QMarginsF_operatorAssign(QMarginsF* self, struct miqt_qmarginsf param1);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
