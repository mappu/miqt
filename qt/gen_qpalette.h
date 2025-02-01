#pragma once
#ifndef MIQT_QT_GEN_QPALETTE_H
#define MIQT_QT_GEN_QPALETTE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QPalette;
class QVariant;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
typedef struct QVariant QVariant;
#endif

QPalette* QPalette_new();
QPalette* QPalette_new2(QColor* button);
QPalette* QPalette_new3(int button);
QPalette* QPalette_new4(QColor* button, QColor* window);
QPalette* QPalette_new5(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window);
QPalette* QPalette_new6(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base);
QPalette* QPalette_new7(QPalette* palette);
void QPalette_operatorAssign(QPalette* self, QPalette* palette);
void QPalette_swap(QPalette* self, QPalette* other);
QVariant* QPalette_ToQVariant(const QPalette* self);
int QPalette_currentColorGroup(const QPalette* self);
void QPalette_setCurrentColorGroup(QPalette* self, int cg);
QColor* QPalette_color(const QPalette* self, int cg, int cr);
QBrush* QPalette_brush(const QPalette* self, int cg, int cr);
void QPalette_setColor(QPalette* self, int cg, int cr, QColor* color);
void QPalette_setColor2(QPalette* self, int cr, QColor* color);
void QPalette_setBrush(QPalette* self, int cr, QBrush* brush);
bool QPalette_isBrushSet(const QPalette* self, int cg, int cr);
void QPalette_setBrush2(QPalette* self, int cg, int cr, QBrush* brush);
void QPalette_setColorGroup(QPalette* self, int cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window);
bool QPalette_isEqual(const QPalette* self, int cr1, int cr2);
QColor* QPalette_colorWithCr(const QPalette* self, int cr);
QBrush* QPalette_brushWithCr(const QPalette* self, int cr);
QBrush* QPalette_windowText(const QPalette* self);
QBrush* QPalette_button(const QPalette* self);
QBrush* QPalette_light(const QPalette* self);
QBrush* QPalette_dark(const QPalette* self);
QBrush* QPalette_mid(const QPalette* self);
QBrush* QPalette_text(const QPalette* self);
QBrush* QPalette_base(const QPalette* self);
QBrush* QPalette_alternateBase(const QPalette* self);
QBrush* QPalette_toolTipBase(const QPalette* self);
QBrush* QPalette_toolTipText(const QPalette* self);
QBrush* QPalette_window(const QPalette* self);
QBrush* QPalette_midlight(const QPalette* self);
QBrush* QPalette_brightText(const QPalette* self);
QBrush* QPalette_buttonText(const QPalette* self);
QBrush* QPalette_shadow(const QPalette* self);
QBrush* QPalette_highlight(const QPalette* self);
QBrush* QPalette_highlightedText(const QPalette* self);
QBrush* QPalette_link(const QPalette* self);
QBrush* QPalette_linkVisited(const QPalette* self);
QBrush* QPalette_placeholderText(const QPalette* self);
QBrush* QPalette_foreground(const QPalette* self);
QBrush* QPalette_background(const QPalette* self);
bool QPalette_operatorEqual(const QPalette* self, QPalette* p);
bool QPalette_operatorNotEqual(const QPalette* self, QPalette* p);
bool QPalette_isCopyOf(const QPalette* self, QPalette* p);
long long QPalette_cacheKey(const QPalette* self);
QPalette* QPalette_resolve(const QPalette* self, QPalette* param1);
unsigned int QPalette_resolve2(const QPalette* self);
void QPalette_resolveWithMask(QPalette* self, unsigned int mask);
void QPalette_delete(QPalette* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
