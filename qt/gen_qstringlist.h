#pragma once
#ifndef MIQT_QT_GEN_QSTRINGLIST_H
#define MIQT_QT_GEN_QSTRINGLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRegExp;
class QRegularExpression;
class QStringList;
#else
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QStringList QStringList;
#endif

QStringList* QStringList_new();
QStringList* QStringList_new2(struct miqt_string i);
QStringList* QStringList_new3(struct miqt_array /* of struct miqt_string */  l);
void QStringList_operatorAssign(QStringList* self, struct miqt_array /* of struct miqt_string */  other);
bool QStringList_contains(const QStringList* self, struct miqt_string str);
struct miqt_array /* of struct miqt_string */  QStringList_operatorPlus(const QStringList* self, struct miqt_array /* of struct miqt_string */  other);
struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeft(QStringList* self, struct miqt_string str);
struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeftWithQStringList(QStringList* self, struct miqt_array /* of struct miqt_string */  l);
struct miqt_array /* of struct miqt_string */  QStringList_operatorShiftLeftWithQListLesserQStringGreater(QStringList* self, struct miqt_array /* of struct miqt_string */  l);
int QStringList_indexOfWithRx(const QStringList* self, QRegExp* rx);
int QStringList_lastIndexOfWithRx(const QStringList* self, QRegExp* rx);
int QStringList_indexOf2(const QStringList* self, QRegExp* rx);
int QStringList_lastIndexOf2(const QStringList* self, QRegExp* rx);
int QStringList_indexOfWithRe(const QStringList* self, QRegularExpression* re);
int QStringList_lastIndexOfWithRe(const QStringList* self, QRegularExpression* re);
void QStringList_operatorAssignWithQStringList(QStringList* self, struct miqt_array /* of struct miqt_string */  param1);
bool QStringList_contains3(const QStringList* self, struct miqt_string str, int cs);
int QStringList_indexOf5(const QStringList* self, QRegExp* rx, int from);
int QStringList_lastIndexOf5(const QStringList* self, QRegExp* rx, int from);
int QStringList_indexOf6(const QStringList* self, QRegExp* rx, int from);
int QStringList_lastIndexOf6(const QStringList* self, QRegExp* rx, int from);
int QStringList_indexOf7(const QStringList* self, QRegularExpression* re, int from);
int QStringList_lastIndexOf7(const QStringList* self, QRegularExpression* re, int from);
void QStringList_delete(QStringList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
