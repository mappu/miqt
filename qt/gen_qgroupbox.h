#ifndef GEN_QGROUPBOX_H
#define GEN_QGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QGroupBox* QGroupBox_new2(const char* title, size_t title_Strlen);
QGroupBox* QGroupBox_new3(QWidget* parent);
QGroupBox* QGroupBox_new4(const char* title, size_t title_Strlen, QWidget* parent);
QMetaObject* QGroupBox_MetaObject(QGroupBox* self);
void QGroupBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QGroupBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QGroupBox_Title(QGroupBox* self, char** _out, int* _out_Strlen);
void QGroupBox_SetTitle(QGroupBox* self, const char* title, size_t title_Strlen);
int QGroupBox_Alignment(QGroupBox* self);
void QGroupBox_SetAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_MinimumSizeHint(QGroupBox* self);
bool QGroupBox_IsFlat(QGroupBox* self);
void QGroupBox_SetFlat(QGroupBox* self, bool flat);
bool QGroupBox_IsCheckable(QGroupBox* self);
void QGroupBox_SetCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_IsChecked(QGroupBox* self);
void QGroupBox_SetChecked(QGroupBox* self, bool checked);
void QGroupBox_Clicked(QGroupBox* self);
void QGroupBox_connect_Clicked(QGroupBox* self, void* slot);
void QGroupBox_Toggled(QGroupBox* self, bool param1);
void QGroupBox_connect_Toggled(QGroupBox* self, void* slot);
void QGroupBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGroupBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGroupBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGroupBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGroupBox_Clicked1(QGroupBox* self, bool checked);
void QGroupBox_connect_Clicked1(QGroupBox* self, void* slot);
void QGroupBox_Delete(QGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
