#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_EVENT_PATTERN_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_EVENT_PATTERN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QKeyEvent;
class QMouseEvent;
class QwtEventPattern;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern)
typedef QwtEventPattern::KeyPattern QwtEventPattern__KeyPattern;
#else
class QwtEventPattern__KeyPattern;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern)
typedef QwtEventPattern::MousePattern QwtEventPattern__MousePattern;
#else
class QwtEventPattern__MousePattern;
#endif
#else
typedef struct QKeyEvent QKeyEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QwtEventPattern QwtEventPattern;
typedef struct QwtEventPattern__KeyPattern QwtEventPattern__KeyPattern;
typedef struct QwtEventPattern__MousePattern QwtEventPattern__MousePattern;
#endif

QwtEventPattern* QwtEventPattern_new();
QwtEventPattern* QwtEventPattern_new2(QwtEventPattern* param1);
void QwtEventPattern_initMousePattern(QwtEventPattern* self, int numButtons);
void QwtEventPattern_initKeyPattern(QwtEventPattern* self);
void QwtEventPattern_setMousePattern(QwtEventPattern* self, int param1, int button);
void QwtEventPattern_setKeyPattern(QwtEventPattern* self, int param1, int key);
void QwtEventPattern_setMousePatternWithMousePattern(QwtEventPattern* self, struct miqt_array /* of QwtEventPattern__MousePattern* */  mousePattern);
void QwtEventPattern_setKeyPatternWithKeyPattern(QwtEventPattern* self, struct miqt_array /* of QwtEventPattern__KeyPattern* */  keyPattern);
struct miqt_array /* of QwtEventPattern__MousePattern* */  QwtEventPattern_mousePattern(const QwtEventPattern* self);
struct miqt_array /* of QwtEventPattern__KeyPattern* */  QwtEventPattern_keyPattern(const QwtEventPattern* self);
struct miqt_array /* of QwtEventPattern__MousePattern* */  QwtEventPattern_mousePattern2(QwtEventPattern* self);
struct miqt_array /* of QwtEventPattern__KeyPattern* */  QwtEventPattern_keyPattern2(QwtEventPattern* self);
bool QwtEventPattern_mouseMatch(const QwtEventPattern* self, int param1, QMouseEvent* param2);
bool QwtEventPattern_keyMatch(const QwtEventPattern* self, int param1, QKeyEvent* param2);
bool QwtEventPattern_mouseMatch2(const QwtEventPattern* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);
bool QwtEventPattern_keyMatch2(const QwtEventPattern* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);
void QwtEventPattern_operatorAssign(QwtEventPattern* self, QwtEventPattern* param1);
void QwtEventPattern_setMousePattern2(QwtEventPattern* self, int param1, int button, int param3);
void QwtEventPattern_setKeyPattern2(QwtEventPattern* self, int param1, int key, int modifiers);

bool QwtEventPattern_override_virtual_mouseMatch2(void* self, intptr_t slot);
bool QwtEventPattern_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);
bool QwtEventPattern_override_virtual_keyMatch2(void* self, intptr_t slot);
bool QwtEventPattern_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

void QwtEventPattern_delete(QwtEventPattern* self);

QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new();
QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new2(QwtEventPattern__MousePattern* param1);
QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new3(int btn);
QwtEventPattern__MousePattern* QwtEventPattern__MousePattern_new4(int btn, int modifierCodes);
int QwtEventPattern__MousePattern_button(const QwtEventPattern__MousePattern* self);
void QwtEventPattern__MousePattern_setButton(QwtEventPattern__MousePattern* self, int button);
int QwtEventPattern__MousePattern_modifiers(const QwtEventPattern__MousePattern* self);
void QwtEventPattern__MousePattern_setModifiers(QwtEventPattern__MousePattern* self, int modifiers);

void QwtEventPattern__MousePattern_delete(QwtEventPattern__MousePattern* self);

QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new();
QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new2(QwtEventPattern__KeyPattern* param1);
QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new3(int keyCode);
QwtEventPattern__KeyPattern* QwtEventPattern__KeyPattern_new4(int keyCode, int modifierCodes);
int QwtEventPattern__KeyPattern_key(const QwtEventPattern__KeyPattern* self);
void QwtEventPattern__KeyPattern_setKey(QwtEventPattern__KeyPattern* self, int key);
int QwtEventPattern__KeyPattern_modifiers(const QwtEventPattern__KeyPattern* self);
void QwtEventPattern__KeyPattern_setModifiers(QwtEventPattern__KeyPattern* self, int modifiers);

void QwtEventPattern__KeyPattern_delete(QwtEventPattern__KeyPattern* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
