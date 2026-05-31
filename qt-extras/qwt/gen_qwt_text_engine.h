#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_ENGINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_ENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPainter;
class QRectF;
class QSizeF;
class QwtPlainTextEngine;
class QwtRichTextEngine;
class QwtTextEngine;
#else
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtPlainTextEngine QwtPlainTextEngine;
typedef struct QwtRichTextEngine QwtRichTextEngine;
typedef struct QwtTextEngine QwtTextEngine;
#endif

QwtTextEngine* QwtTextEngine_new(QwtTextEngine* param1);
double QwtTextEngine_heightForWidth(const QwtTextEngine* self, QFont* font, int flags, struct miqt_string text, double width);
QSizeF* QwtTextEngine_textSize(const QwtTextEngine* self, QFont* font, int flags, struct miqt_string text);
bool QwtTextEngine_mightRender(const QwtTextEngine* self, struct miqt_string text);
void QwtTextEngine_textMargins(const QwtTextEngine* self, QFont* font, struct miqt_string text, double* left, double* right, double* top, double* bottom);
void QwtTextEngine_draw(const QwtTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
void QwtTextEngine_operatorAssign(QwtTextEngine* self, QwtTextEngine* param1);

bool QwtTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot);
double QwtTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width);
bool QwtTextEngine_override_virtual_textSize(void* self, intptr_t slot);
QSizeF* QwtTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text);
bool QwtTextEngine_override_virtual_mightRender(void* self, intptr_t slot);
bool QwtTextEngine_virtualbase_mightRender(const void* self, struct miqt_string text);
bool QwtTextEngine_override_virtual_textMargins(void* self, intptr_t slot);
void QwtTextEngine_virtualbase_textMargins(const void* self, QFont* font, struct miqt_string text, double* left, double* right, double* top, double* bottom);
bool QwtTextEngine_override_virtual_draw(void* self, intptr_t slot);
void QwtTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);

void QwtTextEngine_delete(QwtTextEngine* self);

QwtPlainTextEngine* QwtPlainTextEngine_new();
QwtPlainTextEngine* QwtPlainTextEngine_new2(QwtPlainTextEngine* param1);
void QwtPlainTextEngine_virtbase(QwtPlainTextEngine* src, QwtTextEngine** outptr_QwtTextEngine);
double QwtPlainTextEngine_heightForWidth(const QwtPlainTextEngine* self, QFont* font, int flags, struct miqt_string text, double width);
QSizeF* QwtPlainTextEngine_textSize(const QwtPlainTextEngine* self, QFont* font, int flags, struct miqt_string text);
void QwtPlainTextEngine_draw(const QwtPlainTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
bool QwtPlainTextEngine_mightRender(const QwtPlainTextEngine* self, struct miqt_string param1);
void QwtPlainTextEngine_textMargins(const QwtPlainTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);
void QwtPlainTextEngine_operatorAssign(QwtPlainTextEngine* self, QwtPlainTextEngine* param1);

bool QwtPlainTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot);
double QwtPlainTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width);
bool QwtPlainTextEngine_override_virtual_textSize(void* self, intptr_t slot);
QSizeF* QwtPlainTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text);
bool QwtPlainTextEngine_override_virtual_draw(void* self, intptr_t slot);
void QwtPlainTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
bool QwtPlainTextEngine_override_virtual_mightRender(void* self, intptr_t slot);
bool QwtPlainTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1);
bool QwtPlainTextEngine_override_virtual_textMargins(void* self, intptr_t slot);
void QwtPlainTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);

void QwtPlainTextEngine_delete(QwtPlainTextEngine* self);

QwtRichTextEngine* QwtRichTextEngine_new();
QwtRichTextEngine* QwtRichTextEngine_new2(QwtRichTextEngine* param1);
void QwtRichTextEngine_virtbase(QwtRichTextEngine* src, QwtTextEngine** outptr_QwtTextEngine);
double QwtRichTextEngine_heightForWidth(const QwtRichTextEngine* self, QFont* font, int flags, struct miqt_string text, double width);
QSizeF* QwtRichTextEngine_textSize(const QwtRichTextEngine* self, QFont* font, int flags, struct miqt_string text);
void QwtRichTextEngine_draw(const QwtRichTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
bool QwtRichTextEngine_mightRender(const QwtRichTextEngine* self, struct miqt_string param1);
void QwtRichTextEngine_textMargins(const QwtRichTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);
void QwtRichTextEngine_operatorAssign(QwtRichTextEngine* self, QwtRichTextEngine* param1);

bool QwtRichTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot);
double QwtRichTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width);
bool QwtRichTextEngine_override_virtual_textSize(void* self, intptr_t slot);
QSizeF* QwtRichTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text);
bool QwtRichTextEngine_override_virtual_draw(void* self, intptr_t slot);
void QwtRichTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
bool QwtRichTextEngine_override_virtual_mightRender(void* self, intptr_t slot);
bool QwtRichTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1);
bool QwtRichTextEngine_override_virtual_textMargins(void* self, intptr_t slot);
void QwtRichTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);

void QwtRichTextEngine_delete(QwtRichTextEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
