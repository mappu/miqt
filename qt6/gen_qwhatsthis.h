#pragma once
#ifndef MIQT_QT6_GEN_QWHATSTHIS_H
#define MIQT_QT6_GEN_QWHATSTHIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QObject;
class QPoint;
class QWhatsThis;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QWhatsThis QWhatsThis;
typedef struct QWidget QWidget;
#endif

void QWhatsThis_enterWhatsThisMode();
bool QWhatsThis_inWhatsThisMode();
void QWhatsThis_leaveWhatsThisMode();
void QWhatsThis_showText(QPoint* pos, struct miqt_string text);
void QWhatsThis_hideText();
QAction* QWhatsThis_createAction();
void QWhatsThis_showText2(QPoint* pos, struct miqt_string text, QWidget* w);
QAction* QWhatsThis_createActionWithParent(QObject* parent);
void QWhatsThis_delete(QWhatsThis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
