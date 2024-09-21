#ifndef GEN_QABSTRACTSCROLLAREA_H
#define GEN_QABSTRACTSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self);
void* QAbstractScrollArea_Metacast(QAbstractScrollArea* self, const char* param1);
struct miqt_string* QAbstractScrollArea_Tr(const char* s);
struct miqt_string* QAbstractScrollArea_TrUtf8(const char* s);
int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget);
void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment);
struct miqt_array* QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment);
QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget);
QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport);
int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy);
struct miqt_string* QAbstractScrollArea_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractScrollArea_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractScrollArea_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractScrollArea_TrUtf83(const char* s, const char* c, int n);
void QAbstractScrollArea_Delete(QAbstractScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
