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

void QToolTip_showText(QPoint* pos, struct miqt_string text);
void QToolTip_showText2(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect);
void QToolTip_showText3(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect, int msecShowTime);
void QToolTip_hideText();
bool QToolTip_isVisible();
struct miqt_string QToolTip_text();
QPalette* QToolTip_palette();
void QToolTip_setPalette(QPalette* palette);
QFont* QToolTip_font();
void QToolTip_setFont(QFont* font);
void QToolTip_showText32(QPoint* pos, struct miqt_string text, QWidget* w);
void QToolTip_delete(QToolTip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
