#ifndef GEN_QCLIPBOARD_H
#define GEN_QCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QClipboard;
class QMetaObject;
#else
typedef struct QClipboard QClipboard;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QClipboard_MetaObject(QClipboard* self);
void QClipboard_Tr(char* s, char** _out, int* _out_Strlen);
void QClipboard_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QClipboard_SupportsSelection(QClipboard* self);
bool QClipboard_SupportsFindBuffer(QClipboard* self);
bool QClipboard_OwnsSelection(QClipboard* self);
bool QClipboard_OwnsClipboard(QClipboard* self);
bool QClipboard_OwnsFindBuffer(QClipboard* self);
void QClipboard_SelectionChanged(QClipboard* self);
void QClipboard_connect_SelectionChanged(QClipboard* self, void* slot);
void QClipboard_FindBufferChanged(QClipboard* self);
void QClipboard_connect_FindBufferChanged(QClipboard* self, void* slot);
void QClipboard_DataChanged(QClipboard* self);
void QClipboard_connect_DataChanged(QClipboard* self, void* slot);
void QClipboard_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QClipboard_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QClipboard_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QClipboard_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
