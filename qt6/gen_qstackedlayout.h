#ifndef GEN_QSTACKEDLAYOUT_H
#define GEN_QSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLayout;
class QLayoutItem;
class QMetaObject;
class QRect;
class QSize;
class QStackedLayout;
class QWidget;
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaObject QMetaObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStackedLayout QStackedLayout;
typedef struct QWidget QWidget;
#endif

QStackedLayout* QStackedLayout_new();
QStackedLayout* QStackedLayout_new2(QWidget* parent);
QStackedLayout* QStackedLayout_new3(QLayout* parentLayout);
QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self);
void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1);
struct miqt_string QStackedLayout_Tr(const char* s);
int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self);
int QStackedLayout_CurrentIndex(const QStackedLayout* self);
QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1);
int QStackedLayout_Count(const QStackedLayout* self);
int QStackedLayout_StackingMode(const QStackedLayout* self);
void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode);
void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_SizeHint(const QStackedLayout* self);
QSize* QStackedLayout_MinimumSize(const QStackedLayout* self);
QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1);
void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect);
bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self);
int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, intptr_t slot);
void QStackedLayout_CurrentChanged(QStackedLayout* self, int index);
void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, intptr_t slot);
void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w);
struct miqt_string QStackedLayout_Tr2(const char* s, const char* c);
struct miqt_string QStackedLayout_Tr3(const char* s, const char* c, int n);
void QStackedLayout_Delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
