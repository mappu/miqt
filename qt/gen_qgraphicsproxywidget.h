#ifndef GEN_QGRAPHICSPROXYWIDGET_H
#define GEN_QGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsProxyWidget;
class QMetaObject;
class QPainter;
class QRectF;
class QStyleOptionGraphicsItem;
class QWidget;
#else
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QWidget QWidget;
#endif

QMetaObject* QGraphicsProxyWidget_MetaObject(QGraphicsProxyWidget* self);
void QGraphicsProxyWidget_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget);
QWidget* QGraphicsProxyWidget_Widget(QGraphicsProxyWidget* self);
QRectF* QGraphicsProxyWidget_SubWidgetRect(QGraphicsProxyWidget* self, QWidget* widget);
void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, QRectF* rect);
void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsProxyWidget_Type(QGraphicsProxyWidget* self);
QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child);
void QGraphicsProxyWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
