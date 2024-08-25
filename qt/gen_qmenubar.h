#ifndef GEN_QMENUBAR_H
#define GEN_QMENUBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QIcon;
class QMenu;
class QMenuBar;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMenuBar* QMenuBar_new();
QMenuBar* QMenuBar_new2(QWidget* parent);
QMetaObject* QMenuBar_MetaObject(QMenuBar* self);
void QMenuBar_Tr(char* s, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAction* QMenuBar_AddAction(QMenuBar* self, const char* text, size_t text_Strlen);
QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, const char* title, size_t title_Strlen);
QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, const char* title, size_t title_Strlen);
QAction* QMenuBar_AddSeparator(QMenuBar* self);
QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_Clear(QMenuBar* self);
QAction* QMenuBar_ActiveAction(QMenuBar* self);
void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_IsDefaultUp(QMenuBar* self);
QSize* QMenuBar_SizeHint(QMenuBar* self);
QSize* QMenuBar_MinimumSizeHint(QMenuBar* self);
int QMenuBar_HeightForWidth(QMenuBar* self, int param1);
QRect* QMenuBar_ActionGeometry(QMenuBar* self, QAction* param1);
QAction* QMenuBar_ActionAt(QMenuBar* self, QPoint* param1);
bool QMenuBar_IsNativeMenuBar(QMenuBar* self);
void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_SetVisible(QMenuBar* self, bool visible);
void QMenuBar_Triggered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Triggered(QMenuBar* self, void* slot);
void QMenuBar_Hovered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Hovered(QMenuBar* self, void* slot);
void QMenuBar_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QMenuBar_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMenuBar_Delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
