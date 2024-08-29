#ifndef GEN_QERRORMESSAGE_H
#define GEN_QERRORMESSAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QErrorMessage* QErrorMessage_new();
QErrorMessage* QErrorMessage_new2(QWidget* parent);
QMetaObject* QErrorMessage_MetaObject(QErrorMessage* self);
void QErrorMessage_Tr(const char* s, char** _out, int* _out_Strlen);
void QErrorMessage_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, const char* message, size_t message_Strlen);
void QErrorMessage_ShowMessage2(QErrorMessage* self, const char* message, size_t message_Strlen, const char* typeVal, size_t typeVal_Strlen);
void QErrorMessage_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QErrorMessage_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QErrorMessage_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QErrorMessage_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
