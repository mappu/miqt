#ifndef GEN_QACCESSIBLEWIDGET_H
#define GEN_QACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#else
class QAccessible__State;
#endif
class QAccessibleInterface;
class QAccessibleWidget;
class QColor;
class QRect;
class QWidget;
class QWindow;
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleWidget QAccessibleWidget;
typedef struct QColor QColor;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, uintptr_t r);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, uintptr_t r, const char* name, size_t name_Strlen);
bool QAccessibleWidget_IsValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self);
int QAccessibleWidget_ChildCount(const QAccessibleWidget* self);
int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, QAccessibleInterface* child);
QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self);
QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index);
void QAccessibleWidget_Text(const QAccessibleWidget* self, uintptr_t t, char** _out, int* _out_Strlen);
uintptr_t QAccessibleWidget_Role(const QAccessibleWidget* self);
QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self);
QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self);
QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self);
void QAccessibleWidget_ActionNames(const QAccessibleWidget* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QAccessibleWidget_DoAction(QAccessibleWidget* self, const char* actionName, size_t actionName_Strlen);
void QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const char* actionName, size_t actionName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
