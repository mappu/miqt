#ifndef GEN_QCHECKBOX_H
#define GEN_QCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCheckBox;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QCheckBox QCheckBox;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QCheckBox* QCheckBox_new();
QCheckBox* QCheckBox_new2(const char* text, size_t text_Strlen);
QCheckBox* QCheckBox_new3(QWidget* parent);
QCheckBox* QCheckBox_new4(const char* text, size_t text_Strlen, QWidget* parent);
QMetaObject* QCheckBox_MetaObject(QCheckBox* self);
void QCheckBox_Tr(char* s, char** _out, int* _out_Strlen);
void QCheckBox_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QCheckBox_SizeHint(QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(QCheckBox* self);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_connect_StateChanged(QCheckBox* self, void* slot);
void QCheckBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QCheckBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QCheckBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QCheckBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
