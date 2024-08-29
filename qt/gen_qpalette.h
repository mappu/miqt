#ifndef GEN_QPALETTE_H
#define GEN_QPALETTE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QPalette;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPalette QPalette;
#endif

QPalette* QPalette_new();
QPalette* QPalette_new2(QColor* button);
QPalette* QPalette_new3(uintptr_t button);
QPalette* QPalette_new4(QColor* button, QColor* window);
QPalette* QPalette_new5(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window);
QPalette* QPalette_new6(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base);
QPalette* QPalette_new7(QPalette* palette);
void QPalette_OperatorAssign(QPalette* self, QPalette* palette);
void QPalette_Swap(QPalette* self, QPalette* other);
uintptr_t QPalette_CurrentColorGroup(QPalette* self);
void QPalette_SetCurrentColorGroup(QPalette* self, uintptr_t cg);
QColor* QPalette_Color(QPalette* self, uintptr_t cg, uintptr_t cr);
QBrush* QPalette_Brush(QPalette* self, uintptr_t cg, uintptr_t cr);
void QPalette_SetColor(QPalette* self, uintptr_t cg, uintptr_t cr, QColor* color);
void QPalette_SetColor2(QPalette* self, uintptr_t cr, QColor* color);
void QPalette_SetBrush(QPalette* self, uintptr_t cr, QBrush* brush);
bool QPalette_IsBrushSet(QPalette* self, uintptr_t cg, uintptr_t cr);
void QPalette_SetBrush2(QPalette* self, uintptr_t cg, uintptr_t cr, QBrush* brush);
void QPalette_SetColorGroup(QPalette* self, uintptr_t cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window);
bool QPalette_IsEqual(QPalette* self, uintptr_t cr1, uintptr_t cr2);
QColor* QPalette_ColorWithCr(QPalette* self, uintptr_t cr);
QBrush* QPalette_BrushWithCr(QPalette* self, uintptr_t cr);
QBrush* QPalette_WindowText(QPalette* self);
QBrush* QPalette_Button(QPalette* self);
QBrush* QPalette_Light(QPalette* self);
QBrush* QPalette_Dark(QPalette* self);
QBrush* QPalette_Mid(QPalette* self);
QBrush* QPalette_Text(QPalette* self);
QBrush* QPalette_Base(QPalette* self);
QBrush* QPalette_AlternateBase(QPalette* self);
QBrush* QPalette_ToolTipBase(QPalette* self);
QBrush* QPalette_ToolTipText(QPalette* self);
QBrush* QPalette_Window(QPalette* self);
QBrush* QPalette_Midlight(QPalette* self);
QBrush* QPalette_BrightText(QPalette* self);
QBrush* QPalette_ButtonText(QPalette* self);
QBrush* QPalette_Shadow(QPalette* self);
QBrush* QPalette_Highlight(QPalette* self);
QBrush* QPalette_HighlightedText(QPalette* self);
QBrush* QPalette_Link(QPalette* self);
QBrush* QPalette_LinkVisited(QPalette* self);
QBrush* QPalette_PlaceholderText(QPalette* self);
QBrush* QPalette_Foreground(QPalette* self);
QBrush* QPalette_Background(QPalette* self);
bool QPalette_OperatorEqual(QPalette* self, QPalette* p);
bool QPalette_OperatorNotEqual(QPalette* self, QPalette* p);
bool QPalette_IsCopyOf(QPalette* self, QPalette* p);
long long QPalette_CacheKey(QPalette* self);
QPalette* QPalette_Resolve(QPalette* self, QPalette* param1);
unsigned int QPalette_Resolve2(QPalette* self);
void QPalette_ResolveWithMask(QPalette* self, unsigned int mask);
void QPalette_Delete(QPalette* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
