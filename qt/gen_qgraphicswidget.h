#ifndef GEN_QGRAPHICSWIDGET_H
#define GEN_QGRAPHICSWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QFont;
class QGraphicsItem;
class QGraphicsLayout;
class QGraphicsWidget;
class QKeySequence;
class QMarginsF;
class QMetaObject;
class QPainter;
class QPainterPath;
class QPalette;
class QRectF;
class QSizeF;
class QStyle;
class QStyleOptionGraphicsItem;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QKeySequence QKeySequence;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyle QStyle;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QWidget QWidget;
#endif

QGraphicsWidget* QGraphicsWidget_new();
QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent);
QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags);
QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self);
void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1);
struct miqt_string* QGraphicsWidget_Tr(const char* s);
struct miqt_string* QGraphicsWidget_TrUtf8(const char* s);
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
void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, struct miqt_string* title);
struct miqt_string* QGraphicsWidget_WindowTitle(const QGraphicsWidget* self);
int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self);
void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy);
void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second);
QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self);
int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, QKeySequence* sequence);
void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id);
void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action);
void QGraphicsWidget_AddActions(QGraphicsWidget* self, struct miqt_array* /* of QAction* */ actions);
void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, struct miqt_array* /* of QAction* */ actions);
void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action);
void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action);
struct miqt_array* QGraphicsWidget_Actions(const QGraphicsWidget* self);
void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute);
bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute);
int QGraphicsWidget_Type(const QGraphicsWidget* self);
void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option);
void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option);
QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self);
QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self);
void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_Close(QGraphicsWidget* self);
struct miqt_string* QGraphicsWidget_Tr2(const char* s, const char* c);
struct miqt_string* QGraphicsWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string* QGraphicsWidget_TrUtf82(const char* s, const char* c);
struct miqt_string* QGraphicsWidget_TrUtf83(const char* s, const char* c, int n);
int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context);
void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on);
void QGraphicsWidget_Paint3(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_PaintWindowFrame3(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_Delete(QGraphicsWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
