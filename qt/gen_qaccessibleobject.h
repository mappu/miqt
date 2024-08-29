#ifndef GEN_QACCESSIBLEOBJECT_H
#define GEN_QACCESSIBLEOBJECT_H

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
class QAccessibleApplication;
class QAccessibleInterface;
class QAccessibleObject;
class QObject;
class QRect;
class QWindow;
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleApplication QAccessibleApplication;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWindow QWindow;
#endif

bool QAccessibleObject_IsValid(QAccessibleObject* self);
QObject* QAccessibleObject_Object(QAccessibleObject* self);
QRect* QAccessibleObject_Rect(QAccessibleObject* self);
void QAccessibleObject_SetText(QAccessibleObject* self, uintptr_t t, const char* text, size_t text_Strlen);
QAccessibleInterface* QAccessibleObject_ChildAt(QAccessibleObject* self, int x, int y);

QAccessibleApplication* QAccessibleApplication_new();
QWindow* QAccessibleApplication_Window(QAccessibleApplication* self);
int QAccessibleApplication_ChildCount(QAccessibleApplication* self);
int QAccessibleApplication_IndexOfChild(QAccessibleApplication* self, QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_FocusChild(QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Parent(QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Child(QAccessibleApplication* self, int index);
void QAccessibleApplication_Text(QAccessibleApplication* self, uintptr_t t, char** _out, int* _out_Strlen);
uintptr_t QAccessibleApplication_Role(QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_State(QAccessibleApplication* self);
void QAccessibleApplication_Delete(QAccessibleApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
