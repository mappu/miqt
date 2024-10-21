#ifndef GEN_QSTATUSBAR_H
#define GEN_QSTATUSBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QStatusBar;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QStatusBar QStatusBar;
typedef struct QWidget QWidget;
#endif

QStatusBar* QStatusBar_new();
QStatusBar* QStatusBar_new2(QWidget* parent);
QMetaObject* QStatusBar_MetaObject(const QStatusBar* self);
void* QStatusBar_Metacast(QStatusBar* self, const char* param1);
struct miqt_string QStatusBar_Tr(const char* s);
void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self);
struct miqt_string QStatusBar_CurrentMessage(const QStatusBar* self);
void QStatusBar_ShowMessage(QStatusBar* self, struct miqt_string text);
void QStatusBar_ClearMessage(QStatusBar* self);
void QStatusBar_MessageChanged(QStatusBar* self, struct miqt_string text);
void QStatusBar_connect_MessageChanged(QStatusBar* self, intptr_t slot);
struct miqt_string QStatusBar_Tr2(const char* s, const char* c);
struct miqt_string QStatusBar_Tr3(const char* s, const char* c, int n);
void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_ShowMessage2(QStatusBar* self, struct miqt_string text, int timeout);
void QStatusBar_Delete(QStatusBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
