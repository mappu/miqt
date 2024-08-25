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
QPalette* QPalette_new3(QColor* button, QColor* window);
QPalette* QPalette_new4(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window);
QPalette* QPalette_new5(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base);
QPalette* QPalette_new6(QPalette* palette);
void QPalette_OperatorAssign(QPalette* self, QPalette* palette);
void QPalette_Swap(QPalette* self, QPalette* other);
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
int64_t QPalette_CacheKey(QPalette* self);
QPalette* QPalette_Resolve(QPalette* self, QPalette* param1);
unsigned int QPalette_Resolve2(QPalette* self);
void QPalette_ResolveWithMask(QPalette* self, unsigned int mask);
void QPalette_Delete(QPalette* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
