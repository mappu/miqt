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
QMetaObject* QMenuBar_MetaObject(const QMenuBar* self);
void QMenuBar_Tr(const char* s, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAction* QMenuBar_AddAction(QMenuBar* self, const char* text, size_t text_Strlen);
QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, const char* title, size_t title_Strlen);
QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, const char* title, size_t title_Strlen);
QAction* QMenuBar_AddSeparator(QMenuBar* self);
QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_Clear(QMenuBar* self);
QAction* QMenuBar_ActiveAction(const QMenuBar* self);
void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_IsDefaultUp(const QMenuBar* self);
QSize* QMenuBar_SizeHint(const QMenuBar* self);
QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self);
int QMenuBar_HeightForWidth(const QMenuBar* self, int param1);
QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1);
QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1);
void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w);
QWidget* QMenuBar_CornerWidget(const QMenuBar* self);
bool QMenuBar_IsNativeMenuBar(const QMenuBar* self);
void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_SetVisible(QMenuBar* self, bool visible);
void QMenuBar_Triggered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Triggered(QMenuBar* self, void* slot);
void QMenuBar_Hovered(QMenuBar* self, QAction* action);
void QMenuBar_connect_Hovered(QMenuBar* self, void* slot);
void QMenuBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMenuBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMenuBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, uintptr_t corner);
QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, uintptr_t corner);
void QMenuBar_Delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
