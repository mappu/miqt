#pragma once
#ifndef MIQT_QT6_GEN_QCOMMANDLINEOPTION_H
#define MIQT_QT6_GEN_QCOMMANDLINEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCommandLineOption;
#else
typedef struct QCommandLineOption QCommandLineOption;
#endif

QCommandLineOption* QCommandLineOption_new(struct miqt_string name);
QCommandLineOption* QCommandLineOption_new2(struct miqt_array /* of struct miqt_string */  names);
QCommandLineOption* QCommandLineOption_new3(struct miqt_string name, struct miqt_string description);
QCommandLineOption* QCommandLineOption_new4(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description);
QCommandLineOption* QCommandLineOption_new5(QCommandLineOption* other);
QCommandLineOption* QCommandLineOption_new6(struct miqt_string name, struct miqt_string description, struct miqt_string valueName);
QCommandLineOption* QCommandLineOption_new7(struct miqt_string name, struct miqt_string description, struct miqt_string valueName, struct miqt_string defaultValue);
QCommandLineOption* QCommandLineOption_new8(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description, struct miqt_string valueName);
QCommandLineOption* QCommandLineOption_new9(struct miqt_array /* of struct miqt_string */  names, struct miqt_string description, struct miqt_string valueName, struct miqt_string defaultValue);
void QCommandLineOption_OperatorAssign(QCommandLineOption* self, QCommandLineOption* other);
void QCommandLineOption_Swap(QCommandLineOption* self, QCommandLineOption* other);
struct miqt_array /* of struct miqt_string */  QCommandLineOption_Names(const QCommandLineOption* self);
void QCommandLineOption_SetValueName(QCommandLineOption* self, struct miqt_string name);
struct miqt_string QCommandLineOption_ValueName(const QCommandLineOption* self);
void QCommandLineOption_SetDescription(QCommandLineOption* self, struct miqt_string description);
struct miqt_string QCommandLineOption_Description(const QCommandLineOption* self);
void QCommandLineOption_SetDefaultValue(QCommandLineOption* self, struct miqt_string defaultValue);
void QCommandLineOption_SetDefaultValues(QCommandLineOption* self, struct miqt_array /* of struct miqt_string */  defaultValues);
struct miqt_array /* of struct miqt_string */  QCommandLineOption_DefaultValues(const QCommandLineOption* self);
int QCommandLineOption_Flags(const QCommandLineOption* self);
void QCommandLineOption_SetFlags(QCommandLineOption* self, int aflags);
void QCommandLineOption_Delete(QCommandLineOption* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
