#ifndef GEN_QKEYSEQUENCE_H
#define GEN_QKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeySequence;
#else
typedef struct QKeySequence QKeySequence;
#endif

QKeySequence* QKeySequence_new();
QKeySequence* QKeySequence_new2(const char* key, size_t key_Strlen);
QKeySequence* QKeySequence_new3(int k1);
QKeySequence* QKeySequence_new4(QKeySequence* ks);
QKeySequence* QKeySequence_new5(uintptr_t key);
QKeySequence* QKeySequence_new6(const char* key, size_t key_Strlen, uintptr_t format);
QKeySequence* QKeySequence_new7(int k1, int k2);
QKeySequence* QKeySequence_new8(int k1, int k2, int k3);
QKeySequence* QKeySequence_new9(int k1, int k2, int k3, int k4);
int QKeySequence_Count(const QKeySequence* self);
bool QKeySequence_IsEmpty(const QKeySequence* self);
void QKeySequence_ToString(const QKeySequence* self, char** _out, int* _out_Strlen);
QKeySequence* QKeySequence_FromString(const char* str, size_t str_Strlen);
void QKeySequence_ListFromString(const char* str, size_t str_Strlen, QKeySequence*** _out, size_t* _out_len);
void QKeySequence_ListToString(QKeySequence** list, size_t list_len, char** _out, int* _out_Strlen);
uintptr_t QKeySequence_Matches(const QKeySequence* self, QKeySequence* seq);
QKeySequence* QKeySequence_Mnemonic(const char* text, size_t text_Strlen);
void QKeySequence_KeyBindings(uintptr_t key, QKeySequence*** _out, size_t* _out_len);
int QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i);
void QKeySequence_OperatorAssign(QKeySequence* self, QKeySequence* other);
void QKeySequence_Swap(QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorNotEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesser(const QKeySequence* self, QKeySequence* ks);
bool QKeySequence_OperatorGreater(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorLesserOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_OperatorGreaterOrEqual(const QKeySequence* self, QKeySequence* other);
bool QKeySequence_IsDetached(const QKeySequence* self);
void QKeySequence_ToString1(const QKeySequence* self, uintptr_t format, char** _out, int* _out_Strlen);
QKeySequence* QKeySequence_FromString2(const char* str, size_t str_Strlen, uintptr_t format);
void QKeySequence_ListFromString2(const char* str, size_t str_Strlen, uintptr_t format, QKeySequence*** _out, size_t* _out_len);
void QKeySequence_ListToString2(QKeySequence** list, size_t list_len, uintptr_t format, char** _out, int* _out_Strlen);
void QKeySequence_Delete(QKeySequence* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
