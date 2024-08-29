#ifndef GEN_QTOOLBUTTON_H
#define GEN_QTOOLBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QToolButton* QToolButton_new();
QToolButton* QToolButton_new2(QWidget* parent);
QMetaObject* QToolButton_MetaObject(QToolButton* self);
void QToolButton_Tr(const char* s, char** _out, int* _out_Strlen);
void QToolButton_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QToolButton_SizeHint(QToolButton* self);
QSize* QToolButton_MinimumSizeHint(QToolButton* self);
uintptr_t QToolButton_ToolButtonStyle(QToolButton* self);
uintptr_t QToolButton_ArrowType(QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, uintptr_t typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, uintptr_t mode);
uintptr_t QToolButton_PopupMode(QToolButton* self);
QAction* QToolButton_DefaultAction(QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, uintptr_t style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_connect_Triggered(QToolButton* self, void* slot);
void QToolButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QToolButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QToolButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QToolButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QToolButton_Delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
