#ifndef GEN_QCHECKBOX_H
#define GEN_QCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QCheckBox* QCheckBox_new2(struct miqt_string* text);
QCheckBox* QCheckBox_new3(QWidget* parent);
QCheckBox* QCheckBox_new4(struct miqt_string* text, QWidget* parent);
QMetaObject* QCheckBox_MetaObject(const QCheckBox* self);
struct miqt_string* QCheckBox_Tr(const char* s);
struct miqt_string* QCheckBox_TrUtf8(const char* s);
QSize* QCheckBox_SizeHint(const QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(const QCheckBox* self);
uintptr_t QCheckBox_CheckState(const QCheckBox* self);
void QCheckBox_SetCheckState(QCheckBox* self, uintptr_t state);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_connect_StateChanged(QCheckBox* self, void* slot);
struct miqt_string* QCheckBox_Tr2(const char* s, const char* c);
struct miqt_string* QCheckBox_Tr3(const char* s, const char* c, int n);
struct miqt_string* QCheckBox_TrUtf82(const char* s, const char* c);
struct miqt_string* QCheckBox_TrUtf83(const char* s, const char* c, int n);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
