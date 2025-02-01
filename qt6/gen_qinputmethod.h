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
class QObject;
class QRectF;
class QTransform;
class QVariant;
#else
typedef struct QInputMethod QInputMethod;
typedef struct QLocale QLocale;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRectF QRectF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

void QInputMethod_virtbase(QInputMethod* src, QObject** outptr_QObject);
QMetaObject* QInputMethod_metaObject(const QInputMethod* self);
void* QInputMethod_metacast(QInputMethod* self, const char* param1);
struct miqt_string QInputMethod_tr(const char* s);
QTransform* QInputMethod_inputItemTransform(const QInputMethod* self);
void QInputMethod_setInputItemTransform(QInputMethod* self, QTransform* transform);
QRectF* QInputMethod_inputItemRectangle(const QInputMethod* self);
void QInputMethod_setInputItemRectangle(QInputMethod* self, QRectF* rect);
QRectF* QInputMethod_cursorRectangle(const QInputMethod* self);
QRectF* QInputMethod_anchorRectangle(const QInputMethod* self);
QRectF* QInputMethod_keyboardRectangle(const QInputMethod* self);
QRectF* QInputMethod_inputItemClipRectangle(const QInputMethod* self);
bool QInputMethod_isVisible(const QInputMethod* self);
void QInputMethod_setVisible(QInputMethod* self, bool visible);
bool QInputMethod_isAnimating(const QInputMethod* self);
QLocale* QInputMethod_locale(const QInputMethod* self);
int QInputMethod_inputDirection(const QInputMethod* self);
QVariant* QInputMethod_queryFocusObject(int query, QVariant* argument);
void QInputMethod_show(QInputMethod* self);
void QInputMethod_hide(QInputMethod* self);
void QInputMethod_update(QInputMethod* self, int queries);
void QInputMethod_reset(QInputMethod* self);
void QInputMethod_commit(QInputMethod* self);
void QInputMethod_invokeAction(QInputMethod* self, int a, int cursorPosition);
void QInputMethod_cursorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_cursorRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_anchorRectangleChanged(QInputMethod* self);
void QInputMethod_connect_anchorRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_keyboardRectangleChanged(QInputMethod* self);
void QInputMethod_connect_keyboardRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_inputItemClipRectangleChanged(QInputMethod* self);
void QInputMethod_connect_inputItemClipRectangleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_visibleChanged(QInputMethod* self);
void QInputMethod_connect_visibleChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_animatingChanged(QInputMethod* self);
void QInputMethod_connect_animatingChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_localeChanged(QInputMethod* self);
void QInputMethod_connect_localeChanged(QInputMethod* self, intptr_t slot);
void QInputMethod_inputDirectionChanged(QInputMethod* self, int newDirection);
void QInputMethod_connect_inputDirectionChanged(QInputMethod* self, intptr_t slot);
struct miqt_string QInputMethod_tr2(const char* s, const char* c);
struct miqt_string QInputMethod_tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
