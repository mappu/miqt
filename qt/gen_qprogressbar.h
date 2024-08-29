#ifndef GEN_QPROGRESSBAR_H
#define GEN_QPROGRESSBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QProgressBar;
class QSize;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QProgressBar QProgressBar;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QProgressBar* QProgressBar_new();
QProgressBar* QProgressBar_new2(QWidget* parent);
QMetaObject* QProgressBar_MetaObject(QProgressBar* self);
void QProgressBar_Tr(const char* s, char** _out, int* _out_Strlen);
void QProgressBar_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QProgressBar_Minimum(QProgressBar* self);
int QProgressBar_Maximum(QProgressBar* self);
int QProgressBar_Value(QProgressBar* self);
void QProgressBar_Text(QProgressBar* self, char** _out, int* _out_Strlen);
void QProgressBar_SetTextVisible(QProgressBar* self, bool visible);
bool QProgressBar_IsTextVisible(QProgressBar* self);
int QProgressBar_Alignment(QProgressBar* self);
void QProgressBar_SetAlignment(QProgressBar* self, int alignment);
QSize* QProgressBar_SizeHint(QProgressBar* self);
QSize* QProgressBar_MinimumSizeHint(QProgressBar* self);
uintptr_t QProgressBar_Orientation(QProgressBar* self);
void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert);
bool QProgressBar_InvertedAppearance(QProgressBar* self);
void QProgressBar_SetTextDirection(QProgressBar* self, uintptr_t textDirection);
uintptr_t QProgressBar_TextDirection(QProgressBar* self);
void QProgressBar_SetFormat(QProgressBar* self, const char* format, size_t format_Strlen);
void QProgressBar_ResetFormat(QProgressBar* self);
void QProgressBar_Format(QProgressBar* self, char** _out, int* _out_Strlen);
void QProgressBar_Reset(QProgressBar* self);
void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum);
void QProgressBar_SetMinimum(QProgressBar* self, int minimum);
void QProgressBar_SetMaximum(QProgressBar* self, int maximum);
void QProgressBar_SetValue(QProgressBar* self, int value);
void QProgressBar_SetOrientation(QProgressBar* self, uintptr_t orientation);
void QProgressBar_ValueChanged(QProgressBar* self, int value);
void QProgressBar_connect_ValueChanged(QProgressBar* self, void* slot);
void QProgressBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProgressBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProgressBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProgressBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProgressBar_Delete(QProgressBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
