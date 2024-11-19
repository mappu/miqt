#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSWIDGET_H
#define MIQT_QT6_GEN_QGRAPHICSWIDGET_H

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
class QCloseEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QGraphicsItem;
class QGraphicsLayout;
class QGraphicsLayoutItem;
class QGraphicsObject;
class QGraphicsSceneHoverEvent;
class QGraphicsSceneMoveEvent;
class QGraphicsSceneResizeEvent;
class QGraphicsWidget;
class QHideEvent;
class QKeySequence;
class QMarginsF;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPalette;
class QPointF;
class QRectF;
class QShowEvent;
class QSizeF;
class QStyle;
class QStyleOption;
class QStyleOptionGraphicsItem;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

void QGraphicsWidget_new(QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem);
void QGraphicsWidget_new2(QGraphicsItem* parent, QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem);
void QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags, QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem);
QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self);
void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1);
struct miqt_string QGraphicsWidget_Tr(const char* s);
QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout);
void QGraphicsWidget_AdjustSize(QGraphicsWidget* self);
int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction);
void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self);
QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self);
void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style);
QFont* QGraphicsWidget_Font(const QGraphicsWidget* self);
void QGraphicsWidget_SetFont(QGraphicsWidget* self, QFont* font);
QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self);
void QGraphicsWidget_SetPalette(QGraphicsWidget* self, QPalette* palette);
bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self);
void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled);
void QGraphicsWidget_Resize(QGraphicsWidget* self, QSizeF* size);
void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h);
QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self);
void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, QRectF* rect);
void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h);
QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self);
void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self);
int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self);
int QGraphicsWidget_WindowType(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags);
bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, struct miqt_string title);
struct miqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self);
int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self);
void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy);
void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second);
QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self);
int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, QKeySequence* sequence);
void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id);
void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action);
void QGraphicsWidget_AddActions(QGraphicsWidget* self, struct miqt_array /* of QAction* */  actions);
void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions);
void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action);
void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action);
struct miqt_array /* of QAction* */  QGraphicsWidget_Actions(const QGraphicsWidget* self);
void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute);
bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute);
int QGraphicsWidget_Type(const QGraphicsWidget* self);
void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self);
QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self);
void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_Close(QGraphicsWidget* self);
void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint);
void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self);
QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, QVariant* value);
QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, struct miqt_string propertyName, QVariant* value);
bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event);
bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e);
int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos);
bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_PolishEvent(QGraphicsWidget* self);
void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
struct miqt_string QGraphicsWidget_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n);
int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context);
void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on);
void QGraphicsWidget_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_SetGeometry(void* self, QRectF* rect);
void QGraphicsWidget_override_virtual_GetContentsMargins(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsWidget_virtualbase_Type(const void* self);
void QGraphicsWidget_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_override_virtual_PaintWindowFrame(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsWidget_virtualbase_BoundingRect(const void* self);
void QGraphicsWidget_override_virtual_Shape(void* self, intptr_t slot);
QPainterPath* QGraphicsWidget_virtualbase_Shape(const void* self);
void QGraphicsWidget_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_InitStyleOption(const void* self, QStyleOption* option);
void QGraphicsWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsWidget_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint);
void QGraphicsWidget_override_virtual_UpdateGeometry(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_UpdateGeometry(void* self);
void QGraphicsWidget_override_virtual_ItemChange(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_ItemChange(void* self, int change, QVariant* value);
void QGraphicsWidget_override_virtual_PropertyChange(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value);
void QGraphicsWidget_override_virtual_SceneEvent(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_SceneEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_WindowFrameEvent(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_WindowFrameEvent(void* self, QEvent* e);
void QGraphicsWidget_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot);
int QGraphicsWidget_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos);
void QGraphicsWidget_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_Event(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_ChangeEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QGraphicsWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QGraphicsWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QGraphicsWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QGraphicsWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QGraphicsWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_override_virtual_PolishEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_PolishEvent(void* self);
void QGraphicsWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QGraphicsWidget_override_virtual_HoverMoveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_override_virtual_HoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_override_virtual_GrabMouseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_GrabMouseEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_UngrabMouseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_UngrabMouseEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_GrabKeyboardEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event);
void QGraphicsWidget_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_IsEmpty(const void* self);
void QGraphicsWidget_Delete(QGraphicsWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
