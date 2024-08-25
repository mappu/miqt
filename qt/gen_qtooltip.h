#ifndef GEN_QTOOLTIP_H
#define GEN_QTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPalette;
class QPoint;
class QRect;
class QToolTip;
class QWidget;
#else
typedef struct QFont QFont;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QToolTip QToolTip;
typedef struct QWidget QWidget;
#endif

void QToolTip_ShowText(QPoint* pos, const char* text, size_t text_Strlen);
void QToolTip_ShowText2(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w, QRect* rect);
void QToolTip_ShowText3(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w, QRect* rect, int msecShowTime);
void QToolTip_HideText();
bool QToolTip_IsVisible();
void QToolTip_Text(char** _out, int* _out_Strlen);
QPalette* QToolTip_Palette();
void QToolTip_SetPalette(QPalette* palette);
QFont* QToolTip_Font();
void QToolTip_SetFont(QFont* font);
void QToolTip_ShowText32(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w);
void QToolTip_Delete(QToolTip* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
