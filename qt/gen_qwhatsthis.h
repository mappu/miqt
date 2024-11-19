#pragma once
#ifndef MIQT_QT_GEN_QWHATSTHIS_H
#define MIQT_QT_GEN_QWHATSTHIS_H

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

void QWhatsThis_EnterWhatsThisMode();
bool QWhatsThis_InWhatsThisMode();
void QWhatsThis_LeaveWhatsThisMode();
void QWhatsThis_ShowText(QPoint* pos, struct miqt_string text);
void QWhatsThis_HideText();
QAction* QWhatsThis_CreateAction();
void QWhatsThis_ShowText3(QPoint* pos, struct miqt_string text, QWidget* w);
QAction* QWhatsThis_CreateAction1(QObject* parent);
void QWhatsThis_Delete(QWhatsThis* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
