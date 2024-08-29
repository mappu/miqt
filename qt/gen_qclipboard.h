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
class QImage;
class QMetaObject;
class QMimeData;
class QPixmap;
#else
typedef struct QClipboard QClipboard;
typedef struct QImage QImage;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QPixmap QPixmap;
#endif

QMetaObject* QClipboard_MetaObject(QClipboard* self);
void QClipboard_Tr(const char* s, char** _out, int* _out_Strlen);
void QClipboard_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QClipboard_Clear(QClipboard* self);
bool QClipboard_SupportsSelection(QClipboard* self);
bool QClipboard_SupportsFindBuffer(QClipboard* self);
bool QClipboard_OwnsSelection(QClipboard* self);
bool QClipboard_OwnsClipboard(QClipboard* self);
bool QClipboard_OwnsFindBuffer(QClipboard* self);
void QClipboard_Text(QClipboard* self, char** _out, int* _out_Strlen);
void QClipboard_TextWithSubtype(QClipboard* self, const char* subtype, size_t subtype_Strlen, char** _out, int* _out_Strlen);
void QClipboard_SetText(QClipboard* self, const char* param1, size_t param1_Strlen);
QMimeData* QClipboard_MimeData(QClipboard* self);
void QClipboard_SetMimeData(QClipboard* self, QMimeData* data);
QImage* QClipboard_Image(QClipboard* self);
QPixmap* QClipboard_Pixmap(QClipboard* self);
void QClipboard_SetImage(QClipboard* self, QImage* param1);
void QClipboard_SetPixmap(QClipboard* self, QPixmap* param1);
void QClipboard_Changed(QClipboard* self, uintptr_t mode);
void QClipboard_connect_Changed(QClipboard* self, void* slot);
void QClipboard_SelectionChanged(QClipboard* self);
void QClipboard_connect_SelectionChanged(QClipboard* self, void* slot);
void QClipboard_FindBufferChanged(QClipboard* self);
void QClipboard_connect_FindBufferChanged(QClipboard* self, void* slot);
void QClipboard_DataChanged(QClipboard* self);
void QClipboard_connect_DataChanged(QClipboard* self, void* slot);
void QClipboard_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QClipboard_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QClipboard_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QClipboard_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QClipboard_Clear1(QClipboard* self, uintptr_t mode);
void QClipboard_Text1(QClipboard* self, uintptr_t mode, char** _out, int* _out_Strlen);
void QClipboard_Text2(QClipboard* self, const char* subtype, size_t subtype_Strlen, uintptr_t mode, char** _out, int* _out_Strlen);
void QClipboard_SetText2(QClipboard* self, const char* param1, size_t param1_Strlen, uintptr_t mode);
QMimeData* QClipboard_MimeData1(QClipboard* self, uintptr_t mode);
void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, uintptr_t mode);
QImage* QClipboard_Image1(QClipboard* self, uintptr_t mode);
QPixmap* QClipboard_Pixmap1(QClipboard* self, uintptr_t mode);
void QClipboard_SetImage2(QClipboard* self, QImage* param1, uintptr_t mode);
void QClipboard_SetPixmap2(QClipboard* self, QPixmap* param1, uintptr_t mode);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
