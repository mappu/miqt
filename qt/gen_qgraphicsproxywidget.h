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
class QGraphicsItem;
class QGraphicsProxyWidget;
class QMetaObject;
class QPainter;
class QRectF;
class QStyleOptionGraphicsItem;
class QWidget;
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QWidget QWidget;
#endif

QGraphicsProxyWidget* QGraphicsProxyWidget_new();
QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent);
QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags);
QMetaObject* QGraphicsProxyWidget_MetaObject(const QGraphicsProxyWidget* self);
void QGraphicsProxyWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget);
QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self);
QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget);
void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, QRectF* rect);
void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self);
QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child);
void QGraphicsProxyWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
