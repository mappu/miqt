#ifndef GEN_QSTACKEDLAYOUT_H
#define GEN_QSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QStackedLayout_MetaObject(QStackedLayout* self);
void QStackedLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QStackedLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_CurrentWidget(QStackedLayout* self);
int QStackedLayout_CurrentIndex(QStackedLayout* self);
QWidget* QStackedLayout_Widget(QStackedLayout* self, int param1);
int QStackedLayout_Count(QStackedLayout* self);
uintptr_t QStackedLayout_StackingMode(QStackedLayout* self);
void QStackedLayout_SetStackingMode(QStackedLayout* self, uintptr_t stackingMode);
void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_SizeHint(QStackedLayout* self);
QSize* QStackedLayout_MinimumSize(QStackedLayout* self);
QLayoutItem* QStackedLayout_ItemAt(QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1);
void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect);
bool QStackedLayout_HasHeightForWidth(QStackedLayout* self);
int QStackedLayout_HeightForWidth(QStackedLayout* self, int width);
void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, void* slot);
void QStackedLayout_CurrentChanged(QStackedLayout* self, int index);
void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, void* slot);
void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w);
void QStackedLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStackedLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStackedLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStackedLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStackedLayout_Delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
