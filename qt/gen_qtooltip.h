#pragma once
#ifndef MIQT_QT_GEN_QTOOLTIP_H
#define MIQT_QT_GEN_QTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

void QToolTip_ShowText(QPoint* pos, struct miqt_string text);
void QToolTip_ShowText2(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect);
void QToolTip_ShowText3(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect, int msecShowTime);
void QToolTip_HideText();
bool QToolTip_IsVisible();
struct miqt_string QToolTip_Text();
QPalette* QToolTip_Palette();
void QToolTip_SetPalette(QPalette* palette);
QFont* QToolTip_Font();
void QToolTip_SetFont(QFont* font);
void QToolTip_ShowText32(QPoint* pos, struct miqt_string text, QWidget* w);
void QToolTip_Delete(QToolTip* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
