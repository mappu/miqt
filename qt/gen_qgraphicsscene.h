#ifndef GEN_QGRAPHICSSCENE_H
#define GEN_QGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
class QGraphicsRectItem;
class QGraphicsScene;
class QGraphicsSimpleTextItem;
class QGraphicsTextItem;
class QGraphicsView;
class QGraphicsWidget;
class QLineF;
class QMetaObject;
class QObject;
class QPainterPath;
class QPalette;
class QPen;
class QPixmap;
class QPointF;
class QRectF;
class QStyle;
class QTransform;
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
typedef struct QGraphicsRectItem QGraphicsRectItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSimpleTextItem QGraphicsSimpleTextItem;
typedef struct QGraphicsTextItem QGraphicsTextItem;
typedef struct QGraphicsView QGraphicsView;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QLineF QLineF;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QStyle QStyle;
typedef struct QTransform QTransform;
#endif

QGraphicsScene* QGraphicsScene_new();
QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect);
QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height);
QGraphicsScene* QGraphicsScene_new4(QObject* parent);
QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent);
QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent);
QMetaObject* QGraphicsScene_MetaObject(QGraphicsScene* self);
void QGraphicsScene_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsScene_TrUtf8(char* s, char** _out, int* _out_Strlen);
QRectF* QGraphicsScene_SceneRect(QGraphicsScene* self);
double QGraphicsScene_Width(QGraphicsScene* self);
double QGraphicsScene_Height(QGraphicsScene* self);
void QGraphicsScene_SetSceneRect(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h);
bool QGraphicsScene_IsSortCacheEnabled(QGraphicsScene* self);
void QGraphicsScene_SetSortCacheEnabled(QGraphicsScene* self, bool enabled);
int QGraphicsScene_BspTreeDepth(QGraphicsScene* self);
void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth);
QRectF* QGraphicsScene_ItemsBoundingRect(QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_ItemAt(QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform);
QGraphicsItem* QGraphicsScene_ItemAt2(QGraphicsScene* self, double x, double y, QTransform* deviceTransform);
void QGraphicsScene_SelectedItems(QGraphicsScene* self, QGraphicsItem*** _out, size_t* _out_len);
QPainterPath* QGraphicsScene_SelectionArea(QGraphicsScene* self);
void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform);
QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, QGraphicsItem** items, size_t items_len);
void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group);
void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, QRectF* rect);
QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, QLineF* line);
QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, QPixmap* pixmap);
QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, QRectF* rect);
QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, const char* text, size_t text_Strlen);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, const char* text, size_t text_Strlen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h);
QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_FocusItem(QGraphicsScene* self);
bool QGraphicsScene_HasFocus(QGraphicsScene* self);
void QGraphicsScene_ClearFocus(QGraphicsScene* self);
void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled);
bool QGraphicsScene_StickyFocus(QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_MouseGrabberItem(QGraphicsScene* self);
QBrush* QGraphicsScene_BackgroundBrush(QGraphicsScene* self);
void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, QBrush* brush);
QBrush* QGraphicsScene_ForegroundBrush(QGraphicsScene* self);
void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, QBrush* brush);
void QGraphicsScene_Views(QGraphicsScene* self, QGraphicsView*** _out, size_t* _out_len);
void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h);
QStyle* QGraphicsScene_Style(QGraphicsScene* self);
void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style);
QFont* QGraphicsScene_Font(QGraphicsScene* self);
void QGraphicsScene_SetFont(QGraphicsScene* self, QFont* font);
QPalette* QGraphicsScene_Palette(QGraphicsScene* self);
void QGraphicsScene_SetPalette(QGraphicsScene* self, QPalette* palette);
bool QGraphicsScene_IsActive(QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_ActivePanel(QGraphicsScene* self);
void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsWidget* QGraphicsScene_ActiveWindow(QGraphicsScene* self);
void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget);
bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event);
double QGraphicsScene_MinimumRenderSize(QGraphicsScene* self);
void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize);
bool QGraphicsScene_FocusOnTouch(QGraphicsScene* self);
void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled);
void QGraphicsScene_Update2(QGraphicsScene* self);
void QGraphicsScene_Advance(QGraphicsScene* self);
void QGraphicsScene_ClearSelection(QGraphicsScene* self);
void QGraphicsScene_Clear(QGraphicsScene* self);
void QGraphicsScene_Changed(QGraphicsScene* self, QRectF** region, size_t region_len);
void QGraphicsScene_connect_Changed(QGraphicsScene* self, void* slot);
void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_connect_SceneRectChanged(QGraphicsScene* self, void* slot);
void QGraphicsScene_SelectionChanged(QGraphicsScene* self);
void QGraphicsScene_connect_SelectionChanged(QGraphicsScene* self, void* slot);
void QGraphicsScene_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsScene_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsScene_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsScene_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, QLineF* line, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen);
QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush);
QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, const char* text, size_t text_Strlen, QFont* font);
QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, const char* text, size_t text_Strlen, QFont* font);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
void QGraphicsScene_Update1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_Delete(QGraphicsScene* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
