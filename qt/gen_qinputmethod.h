#ifndef GEN_QINPUTMETHOD_H
#define GEN_QINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QInputMethod;
class QLocale;
class QMetaObject;
class QRectF;
class QTransform;
class QVariant;
#else
typedef struct QInputMethod QInputMethod;
typedef struct QLocale QLocale;
typedef struct QMetaObject QMetaObject;
typedef struct QRectF QRectF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QMetaObject* QInputMethod_MetaObject(QInputMethod* self);
void QInputMethod_Tr(const char* s, char** _out, int* _out_Strlen);
void QInputMethod_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QTransform* QInputMethod_InputItemTransform(QInputMethod* self);
void QInputMethod_SetInputItemTransform(QInputMethod* self, QTransform* transform);
QRectF* QInputMethod_InputItemRectangle(QInputMethod* self);
void QInputMethod_SetInputItemRectangle(QInputMethod* self, QRectF* rect);
QRectF* QInputMethod_CursorRectangle(QInputMethod* self);
QRectF* QInputMethod_AnchorRectangle(QInputMethod* self);
QRectF* QInputMethod_KeyboardRectangle(QInputMethod* self);
QRectF* QInputMethod_InputItemClipRectangle(QInputMethod* self);
bool QInputMethod_IsVisible(QInputMethod* self);
void QInputMethod_SetVisible(QInputMethod* self, bool visible);
bool QInputMethod_IsAnimating(QInputMethod* self);
QLocale* QInputMethod_Locale(QInputMethod* self);
uintptr_t QInputMethod_InputDirection(QInputMethod* self);
QVariant* QInputMethod_QueryFocusObject(uintptr_t query, QVariant* argument);
void QInputMethod_Show(QInputMethod* self);
void QInputMethod_Hide(QInputMethod* self);
void QInputMethod_Update(QInputMethod* self, int queries);
void QInputMethod_Reset(QInputMethod* self);
void QInputMethod_Commit(QInputMethod* self);
void QInputMethod_InvokeAction(QInputMethod* self, uintptr_t a, int cursorPosition);
void QInputMethod_CursorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_CursorRectangleChanged(QInputMethod* self, void* slot);
void QInputMethod_AnchorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_AnchorRectangleChanged(QInputMethod* self, void* slot);
void QInputMethod_KeyboardRectangleChanged(QInputMethod* self);
void QInputMethod_connect_KeyboardRectangleChanged(QInputMethod* self, void* slot);
void QInputMethod_InputItemClipRectangleChanged(QInputMethod* self);
void QInputMethod_connect_InputItemClipRectangleChanged(QInputMethod* self, void* slot);
void QInputMethod_VisibleChanged(QInputMethod* self);
void QInputMethod_connect_VisibleChanged(QInputMethod* self, void* slot);
void QInputMethod_AnimatingChanged(QInputMethod* self);
void QInputMethod_connect_AnimatingChanged(QInputMethod* self, void* slot);
void QInputMethod_LocaleChanged(QInputMethod* self);
void QInputMethod_connect_LocaleChanged(QInputMethod* self, void* slot);
void QInputMethod_InputDirectionChanged(QInputMethod* self, uintptr_t newDirection);
void QInputMethod_connect_InputDirectionChanged(QInputMethod* self, void* slot);
void QInputMethod_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QInputMethod_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QInputMethod_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QInputMethod_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
