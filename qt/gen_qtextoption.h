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
class QChar;
class QTextOption;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab)
typedef QTextOption::Tab QTextOption__Tab;
#else
class QTextOption__Tab;
#endif
#else
typedef struct QChar QChar;
typedef struct QTextOption QTextOption;
typedef struct QTextOption__Tab QTextOption__Tab;
#endif

QTextOption* QTextOption_new();
QTextOption* QTextOption_new2(int alignment);
QTextOption* QTextOption_new3(QTextOption* o);
void QTextOption_OperatorAssign(QTextOption* self, QTextOption* o);
void QTextOption_SetAlignment(QTextOption* self, int alignment);
int QTextOption_Alignment(const QTextOption* self);
void QTextOption_SetTextDirection(QTextOption* self, uintptr_t aDirection);
uintptr_t QTextOption_TextDirection(const QTextOption* self);
void QTextOption_SetWrapMode(QTextOption* self, uintptr_t wrap);
uintptr_t QTextOption_WrapMode(const QTextOption* self);
void QTextOption_SetFlags(QTextOption* self, int flags);
int QTextOption_Flags(const QTextOption* self);
void QTextOption_SetTabStop(QTextOption* self, double tabStop);
double QTextOption_TabStop(const QTextOption* self);
void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance);
double QTextOption_TabStopDistance(const QTextOption* self);
void QTextOption_SetTabArray(QTextOption* self, double* tabStops, size_t tabStops_len);
void QTextOption_TabArray(const QTextOption* self, double** _out, size_t* _out_len);
void QTextOption_SetTabs(QTextOption* self, QTextOption__Tab** tabStops, size_t tabStops_len);
void QTextOption_Tabs(const QTextOption* self, QTextOption__Tab*** _out, size_t* _out_len);
void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b);
bool QTextOption_UseDesignMetrics(const QTextOption* self);
void QTextOption_Delete(QTextOption* self);

QTextOption__Tab* QTextOption__Tab_new();
QTextOption__Tab* QTextOption__Tab_new2(double pos, uintptr_t tabType);
QTextOption__Tab* QTextOption__Tab_new3(QTextOption__Tab* param1);
QTextOption__Tab* QTextOption__Tab_new4(double pos, uintptr_t tabType, QChar* delim);
bool QTextOption__Tab_OperatorEqual(const QTextOption__Tab* self, QTextOption__Tab* other);
bool QTextOption__Tab_OperatorNotEqual(const QTextOption__Tab* self, QTextOption__Tab* other);
void QTextOption__Tab_Delete(QTextOption__Tab* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
