#ifndef GEN_QERRORMESSAGE_H
#define GEN_QERRORMESSAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QErrorMessage;
class QMetaObject;
class QWidget;
#else
typedef struct QErrorMessage QErrorMessage;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QErrorMessage* QErrorMessage_new(QWidget* parent);
QErrorMessage* QErrorMessage_new2();
QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self);
void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1);
struct miqt_string QErrorMessage_Tr(const char* s);
struct miqt_string QErrorMessage_TrUtf8(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal);
struct miqt_string QErrorMessage_Tr2(const char* s, const char* c);
struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
struct miqt_string QErrorMessage_TrUtf82(const char* s, const char* c);
struct miqt_string QErrorMessage_TrUtf83(const char* s, const char* c, int n);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
