#ifndef GEN_QGRAPHICSSCENE_H
#define GEN_QGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QEvent;
class QFont;
class QGraphicsEllipseItem;
class QGraphicsItem;
class QGraphicsItemGroup;
class QGraphicsLineItem;
class QGraphicsPathItem;
class QGraphicsPixmapItem;
class QGraphicsProxyWidget;
class QGraphicsRectItem;
class QGraphicsScene;
class QGraphicsSimpleTextItem;
class QGraphicsTextItem;
class QGraphicsView;
class QGraphicsWidget;
class QLineF;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPalette;
class QPen;
class QPixmap;
class QPointF;
class QRectF;
class QStyle;
class QTransform;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEllipseItem QGraphicsEllipseItem;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLineItem QGraphicsLineItem;
typedef struct QGraphicsPathItem QGraphicsPathItem;
typedef struct QGraphicsPixmapItem QGraphicsPixmapItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsRectItem QGraphicsRectItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSimpleTextItem QGraphicsSimpleTextItem;
typedef struct QGraphicsTextItem QGraphicsTextItem;
typedef struct QGraphicsView QGraphicsView;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QLineF QLineF;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QStyle QStyle;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsScene* QGraphicsScene_new();
QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect);
QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height);
QGraphicsScene* QGraphicsScene_new4(QObject* parent);
QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent);
QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent);
QMetaObject* QGraphicsScene_MetaObject(const QGraphicsScene* self);
struct miqt_string* QGraphicsScene_Tr(const char* s);
struct miqt_string* QGraphicsScene_TrUtf8(const char* s);
QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self);
double QGraphicsScene_Width(const QGraphicsScene* self);
double QGraphicsScene_Height(const QGraphicsScene* self);
void QGraphicsScene_SetSceneRect(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter);
uintptr_t QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self);
void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, uintptr_t method);
bool QGraphicsScene_IsSortCacheEnabled(const QGraphicsScene* self);
void QGraphicsScene_SetSortCacheEnabled(QGraphicsScene* self, bool enabled);
int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self);
void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth);
QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self);
struct miqt_array* QGraphicsScene_Items(const QGraphicsScene* self);
struct miqt_array* QGraphicsScene_ItemsWithPos(const QGraphicsScene* self, QPointF* pos);
struct miqt_array* QGraphicsScene_ItemsWithRect(const QGraphicsScene* self, QRectF* rect);
struct miqt_array* QGraphicsScene_ItemsWithPath(const QGraphicsScene* self, QPainterPath* path);
struct miqt_array* QGraphicsScene_CollidingItems(const QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform);
struct miqt_array* QGraphicsScene_Items2(const QGraphicsScene* self, double x, double y, double w, double h, uintptr_t mode, uintptr_t order);
QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform);
struct miqt_array* QGraphicsScene_SelectedItems(const QGraphicsScene* self);
QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self);
void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform);
void QGraphicsScene_SetSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path);
void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation);
QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, struct miqt_array* /* of QGraphicsItem* */ items);
void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group);
void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, QRectF* rect);
QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, QLineF* line);
QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, QPixmap* pixmap);
QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, QRectF* rect);
QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, struct miqt_string* text);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, struct miqt_string* text);
QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h);
QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self);
void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item);
bool QGraphicsScene_HasFocus(const QGraphicsScene* self);
void QGraphicsScene_SetFocus(QGraphicsScene* self);
void QGraphicsScene_ClearFocus(QGraphicsScene* self);
void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled);
bool QGraphicsScene_StickyFocus(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self);
QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, QBrush* brush);
QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self);
void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, QBrush* brush);
QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, uintptr_t query);
struct miqt_array* QGraphicsScene_Views(const QGraphicsScene* self);
void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h);
QStyle* QGraphicsScene_Style(const QGraphicsScene* self);
void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style);
QFont* QGraphicsScene_Font(const QGraphicsScene* self);
void QGraphicsScene_SetFont(QGraphicsScene* self, QFont* font);
QPalette* QGraphicsScene_Palette(const QGraphicsScene* self);
void QGraphicsScene_SetPalette(QGraphicsScene* self, QPalette* palette);
bool QGraphicsScene_IsActive(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self);
void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self);
void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget);
bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event);
double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self);
void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize);
bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self);
void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled);
void QGraphicsScene_Update2(QGraphicsScene* self);
void QGraphicsScene_Invalidate2(QGraphicsScene* self);
void QGraphicsScene_Advance(QGraphicsScene* self);
void QGraphicsScene_ClearSelection(QGraphicsScene* self);
void QGraphicsScene_Clear(QGraphicsScene* self);
void QGraphicsScene_Changed(QGraphicsScene* self, struct miqt_array* /* of QRectF */ region);
void QGraphicsScene_connect_Changed(QGraphicsScene* self, void* slot);
void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_connect_SceneRectChanged(QGraphicsScene* self, void* slot);
void QGraphicsScene_SelectionChanged(QGraphicsScene* self);
void QGraphicsScene_connect_SelectionChanged(QGraphicsScene* self, void* slot);
void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, uintptr_t reason);
void QGraphicsScene_connect_FocusItemChanged(QGraphicsScene* self, void* slot);
struct miqt_string* QGraphicsScene_Tr2(const char* s, const char* c);
struct miqt_string* QGraphicsScene_Tr3(const char* s, const char* c, int n);
struct miqt_string* QGraphicsScene_TrUtf82(const char* s, const char* c);
struct miqt_string* QGraphicsScene_TrUtf83(const char* s, const char* c, int n);
void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, QRectF* target);
void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source);
void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, uintptr_t aspectRatioMode);
struct miqt_array* QGraphicsScene_Items1(const QGraphicsScene* self, uintptr_t order);
struct miqt_array* QGraphicsScene_Items22(const QGraphicsScene* self, QPointF* pos, uintptr_t mode);
struct miqt_array* QGraphicsScene_Items3(const QGraphicsScene* self, QPointF* pos, uintptr_t mode, uintptr_t order);
struct miqt_array* QGraphicsScene_Items4(const QGraphicsScene* self, QPointF* pos, uintptr_t mode, uintptr_t order, QTransform* deviceTransform);
struct miqt_array* QGraphicsScene_Items23(const QGraphicsScene* self, QRectF* rect, uintptr_t mode);
struct miqt_array* QGraphicsScene_Items32(const QGraphicsScene* self, QRectF* rect, uintptr_t mode, uintptr_t order);
struct miqt_array* QGraphicsScene_Items42(const QGraphicsScene* self, QRectF* rect, uintptr_t mode, uintptr_t order, QTransform* deviceTransform);
struct miqt_array* QGraphicsScene_Items25(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode);
struct miqt_array* QGraphicsScene_Items34(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode, uintptr_t order);
struct miqt_array* QGraphicsScene_Items44(const QGraphicsScene* self, QPainterPath* path, uintptr_t mode, uintptr_t order, QTransform* deviceTransform);
struct miqt_array* QGraphicsScene_CollidingItems2(const QGraphicsScene* self, QGraphicsItem* item, uintptr_t mode);
struct miqt_array* QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, uintptr_t mode, uintptr_t order, QTransform* deviceTransform);
void QGraphicsScene_SetSelectionArea22(QGraphicsScene* self, QPainterPath* path, uintptr_t mode);
void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, QPainterPath* path, uintptr_t mode, QTransform* deviceTransform);
void QGraphicsScene_SetSelectionArea32(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation, uintptr_t mode);
void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, QPainterPath* path, uintptr_t selectionOperation, uintptr_t mode, QTransform* deviceTransform);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, QLineF* line, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush);
QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, struct miqt_string* text, QFont* font);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, struct miqt_string* text, QFont* font);
QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, uintptr_t focusReason);
void QGraphicsScene_SetFocus1(QGraphicsScene* self, uintptr_t focusReason);
void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers);
void QGraphicsScene_Update1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Invalidate1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Invalidate22(QGraphicsScene* self, QRectF* rect, int layers);
void QGraphicsScene_Delete(QGraphicsScene* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
