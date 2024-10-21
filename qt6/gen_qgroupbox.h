#ifndef GEN_QGROUPBOX_H
#define GEN_QGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGroupBox;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QGroupBox QGroupBox;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QGroupBox* QGroupBox_new();
QGroupBox* QGroupBox_new2(struct miqt_string title);
QGroupBox* QGroupBox_new3(QWidget* parent);
QGroupBox* QGroupBox_new4(struct miqt_string title, QWidget* parent);
QMetaObject* QGroupBox_MetaObject(const QGroupBox* self);
void* QGroupBox_Metacast(QGroupBox* self, const char* param1);
struct miqt_string QGroupBox_Tr(const char* s);
struct miqt_string QGroupBox_Title(const QGroupBox* self);
void QGroupBox_SetTitle(QGroupBox* self, struct miqt_string title);
int QGroupBox_Alignment(const QGroupBox* self);
void QGroupBox_SetAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self);
bool QGroupBox_IsFlat(const QGroupBox* self);
void QGroupBox_SetFlat(QGroupBox* self, bool flat);
bool QGroupBox_IsCheckable(const QGroupBox* self);
void QGroupBox_SetCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_IsChecked(const QGroupBox* self);
void QGroupBox_SetChecked(QGroupBox* self, bool checked);
void QGroupBox_Clicked(QGroupBox* self);
void QGroupBox_connect_Clicked(QGroupBox* self, intptr_t slot);
void QGroupBox_Toggled(QGroupBox* self, bool param1);
void QGroupBox_connect_Toggled(QGroupBox* self, intptr_t slot);
struct miqt_string QGroupBox_Tr2(const char* s, const char* c);
struct miqt_string QGroupBox_Tr3(const char* s, const char* c, int n);
void QGroupBox_Clicked1(QGroupBox* self, bool checked);
void QGroupBox_connect_Clicked1(QGroupBox* self, intptr_t slot);
void QGroupBox_Delete(QGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
