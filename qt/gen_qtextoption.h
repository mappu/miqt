#ifndef GEN_QTEXTOPTION_H
#define GEN_QTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTextOption;
#else
typedef struct QTextOption QTextOption;
#endif

QTextOption* QTextOption_new();
QTextOption* QTextOption_new2(QTextOption* o);
void QTextOption_OperatorAssign(QTextOption* self, QTextOption* o);
void QTextOption_SetTabStop(QTextOption* self, double tabStop);
double QTextOption_TabStop(QTextOption* self);
void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance);
double QTextOption_TabStopDistance(QTextOption* self);
void QTextOption_SetTabArray(QTextOption* self, double* tabStops, size_t tabStops_len);
void QTextOption_TabArray(QTextOption* self, double** _out, size_t* _out_len);
void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b);
bool QTextOption_UseDesignMetrics(QTextOption* self);
void QTextOption_Delete(QTextOption* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
