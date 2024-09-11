#ifndef GEN_QLOGGINGCATEGORY_H
#define GEN_QLOGGINGCATEGORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLoggingCategory;
#else
typedef struct QLoggingCategory QLoggingCategory;
#endif

QLoggingCategory* QLoggingCategory_new(const char* category);
bool QLoggingCategory_IsDebugEnabled(const QLoggingCategory* self);
bool QLoggingCategory_IsInfoEnabled(const QLoggingCategory* self);
bool QLoggingCategory_IsWarningEnabled(const QLoggingCategory* self);
bool QLoggingCategory_IsCriticalEnabled(const QLoggingCategory* self);
const char* QLoggingCategory_CategoryName(const QLoggingCategory* self);
QLoggingCategory* QLoggingCategory_OperatorCall(QLoggingCategory* self);
QLoggingCategory* QLoggingCategory_OperatorCall2(const QLoggingCategory* self);
QLoggingCategory* QLoggingCategory_DefaultCategory();
void QLoggingCategory_SetFilterRules(const char* rules, size_t rules_Strlen);
void QLoggingCategory_Delete(QLoggingCategory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
