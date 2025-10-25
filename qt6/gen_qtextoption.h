#pragma once
#ifndef MIQT_QT6_GEN_QTEXTOPTION_H
#define MIQT_QT6_GEN_QTEXTOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
void QTextOption_operatorAssign(QTextOption* self, QTextOption* o);
void QTextOption_setAlignment(QTextOption* self, int alignment);
int QTextOption_alignment(const QTextOption* self);
void QTextOption_setTextDirection(QTextOption* self, int aDirection);
int QTextOption_textDirection(const QTextOption* self);
void QTextOption_setWrapMode(QTextOption* self, int wrap);
int QTextOption_wrapMode(const QTextOption* self);
void QTextOption_setFlags(QTextOption* self, int flags);
int QTextOption_flags(const QTextOption* self);
void QTextOption_setTabStopDistance(QTextOption* self, double tabStopDistance);
double QTextOption_tabStopDistance(const QTextOption* self);
void QTextOption_setTabArray(QTextOption* self, struct miqt_array /* of double */  tabStops);
struct miqt_array /* of double */  QTextOption_tabArray(const QTextOption* self);
void QTextOption_setTabs(QTextOption* self, struct miqt_array /* of QTextOption__Tab* */  tabStops);
struct miqt_array /* of QTextOption__Tab* */  QTextOption_tabs(const QTextOption* self);
void QTextOption_setUseDesignMetrics(QTextOption* self, bool b);
bool QTextOption_useDesignMetrics(const QTextOption* self);

void QTextOption_delete(QTextOption* self);

QTextOption__Tab* QTextOption__Tab_new();
QTextOption__Tab* QTextOption__Tab_new2(double pos, int tabType);
QTextOption__Tab* QTextOption__Tab_new3(double pos, int tabType, QChar* delim);
bool QTextOption__Tab_operatorEqual(const QTextOption__Tab* self, QTextOption__Tab* other);
bool QTextOption__Tab_operatorNotEqual(const QTextOption__Tab* self, QTextOption__Tab* other);
double QTextOption__Tab_position(const QTextOption__Tab* self);
void QTextOption__Tab_setPosition(QTextOption__Tab* self, double position);
int QTextOption__Tab_type(const QTextOption__Tab* self);
void QTextOption__Tab_setType(QTextOption__Tab* self, int type);
QChar* QTextOption__Tab_delimiter(const QTextOption__Tab* self);
void QTextOption__Tab_setDelimiter(QTextOption__Tab* self, QChar* delimiter);

void QTextOption__Tab_delete(QTextOption__Tab* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
