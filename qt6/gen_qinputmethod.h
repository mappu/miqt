#pragma once
#ifndef MIQT_QT6_GEN_QINPUTMETHOD_H
#define MIQT_QT6_GEN_QINPUTMETHOD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QMetaObject* QInputMethod_MetaObject(const QInputMethod* self);
void* QInputMethod_Metacast(QInputMethod* self, const char* param1);
struct miqt_string QInputMethod_Tr(const char* s);
QTransform* QInputMethod_InputItemTransform(const QInputMethod* self);
void QInputMethod_SetInputItemTransform(QInputMethod* self, QTransform* transform);
QRectF* QInputMethod_InputItemRectangle(const QInputMethod* self);
void QInputMethod_SetInputItemRectangle(QInputMethod* self, QRectF* rect);
QRectF* QInputMethod_CursorRectangle(const QInputMethod* self);
QRectF* QInputMethod_AnchorRectangle(const QInputMethod* self);
QRectF* QInputMethod_KeyboardRectangle(const QInputMethod* self);
QRectF* QInputMethod_InputItemClipRectangle(const QInputMethod* self);
bool QInputMethod_IsVisible(const QInputMethod* self);
void QInputMethod_SetVisible(QInputMethod* self, bool visible);
bool QInputMethod_IsAnimating(const QInputMethod* self);
QLocale* QInputMethod_Locale(const QInputMethod* self);
int QInputMethod_InputDirection(const QInputMethod* self);
QVariant* QInputMethod_QueryFocusObject(int query, QVariant* argument);
void QInputMethod_Show(QInputMethod* self);
void QInputMethod_Hide(QInputMethod* self);
void QInputMethod_Update(QInputMethod* self, int queries);
void QInputMethod_Reset(QInputMethod* self);
void QInputMethod_Commit(QInputMethod* self);
void QInputMethod_InvokeAction(QInputMethod* self, int a, int cursorPosition);
void QInputMethod_CursorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_CursorRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_AnchorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_AnchorRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_KeyboardRectangleChanged(QInputMethod* self);
void QInputMethod_connect_KeyboardRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_InputItemClipRectangleChanged(QInputMethod* self);
void QInputMethod_connect_InputItemClipRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_VisibleChanged(QInputMethod* self);
void QInputMethod_connect_VisibleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_AnimatingChanged(QInputMethod* self);
void QInputMethod_connect_AnimatingChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_LocaleChanged(QInputMethod* self);
void QInputMethod_connect_LocaleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_InputDirectionChanged(QInputMethod* self, int newDirection);
void QInputMethod_connect_InputDirectionChanged(QInputMethod* self, intptr_t slot);
struct miqt_string QInputMethod_Tr2(const char* s, const char* c);
struct miqt_string QInputMethod_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
