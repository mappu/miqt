#ifndef GEN_QABSTRACTSCROLLAREA_H
#define GEN_QABSTRACTSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QMetaObject;
class QScrollBar;
class QSize;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QMetaObject QMetaObject;
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QAbstractScrollArea* QAbstractScrollArea_new();
QAbstractScrollArea* QAbstractScrollArea_new2(QWidget* parent);
QMetaObject* QAbstractScrollArea_MetaObject(QAbstractScrollArea* self);
void QAbstractScrollArea_Tr(char* s, char** _out, int* _out_Strlen);
void QAbstractScrollArea_TrUtf8(char* s, char** _out, int* _out_Strlen);
QScrollBar* QAbstractScrollArea_VerticalScrollBar(QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QScrollBar* QAbstractScrollArea_HorizontalScrollBar(QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QWidget* QAbstractScrollArea_CornerWidget(QAbstractScrollArea* self);
void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget);
QWidget* QAbstractScrollArea_Viewport(QAbstractScrollArea* self);
void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget);
QSize* QAbstractScrollArea_MaximumViewportSize(QAbstractScrollArea* self);
QSize* QAbstractScrollArea_MinimumSizeHint(QAbstractScrollArea* self);
QSize* QAbstractScrollArea_SizeHint(QAbstractScrollArea* self);
void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport);
void QAbstractScrollArea_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractScrollArea_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractScrollArea_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAbstractScrollArea_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAbstractScrollArea_Delete(QAbstractScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
