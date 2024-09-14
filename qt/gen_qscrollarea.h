#ifndef GEN_QSCROLLAREA_H
#define GEN_QSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QScrollArea;
class QSize;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QScrollArea QScrollArea;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QScrollArea* QScrollArea_new();
QScrollArea* QScrollArea_new2(QWidget* parent);
QMetaObject* QScrollArea_MetaObject(const QScrollArea* self);
struct miqt_string* QScrollArea_Tr(const char* s);
struct miqt_string* QScrollArea_TrUtf8(const char* s);
QWidget* QScrollArea_Widget(const QScrollArea* self);
void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_TakeWidget(QScrollArea* self);
bool QScrollArea_WidgetResizable(const QScrollArea* self);
void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_SizeHint(const QScrollArea* self);
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_Alignment(const QScrollArea* self);
void QScrollArea_SetAlignment(QScrollArea* self, int alignment);
void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y);
void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget);
struct miqt_string* QScrollArea_Tr2(const char* s, const char* c);
struct miqt_string* QScrollArea_Tr3(const char* s, const char* c, int n);
struct miqt_string* QScrollArea_TrUtf82(const char* s, const char* c);
struct miqt_string* QScrollArea_TrUtf83(const char* s, const char* c, int n);
void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);
void QScrollArea_Delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
