#ifndef GEN_QWHATSTHIS_H
#define GEN_QWHATSTHIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QWhatsThis_ShowText(QPoint* pos, const char* text, size_t text_Strlen);
void QWhatsThis_HideText();
QAction* QWhatsThis_CreateAction();
void QWhatsThis_ShowText3(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w);
QAction* QWhatsThis_CreateAction1(QObject* parent);
void QWhatsThis_Delete(QWhatsThis* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
