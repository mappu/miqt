#ifndef GEN_QTOOLBUTTON_H
#define GEN_QTOOLBUTTON_H

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
class QMenu;
class QMetaObject;
class QSize;
class QToolButton;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QToolButton QToolButton;
typedef struct QWidget QWidget;
#endif

QToolButton* QToolButton_new(QWidget* parent);
QToolButton* QToolButton_new2();
QMetaObject* QToolButton_MetaObject(const QToolButton* self);
void* QToolButton_Metacast(QToolButton* self, const char* param1);
struct miqt_string QToolButton_Tr(const char* s);
QSize* QToolButton_SizeHint(const QToolButton* self);
QSize* QToolButton_MinimumSizeHint(const QToolButton* self);
int QToolButton_ToolButtonStyle(const QToolButton* self);
int QToolButton_ArrowType(const QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, int typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(const QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, int mode);
int QToolButton_PopupMode(const QToolButton* self);
QAction* QToolButton_DefaultAction(const QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(const QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, int style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_connect_Triggered(QToolButton* self, intptr_t slot);
struct miqt_string QToolButton_Tr2(const char* s, const char* c);
struct miqt_string QToolButton_Tr3(const char* s, const char* c, int n);
void QToolButton_Delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
