#ifndef GEN_QDIAL_H
#define GEN_QDIAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDial;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QDial QDial;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QDial* QDial_new();
QDial* QDial_new2(QWidget* parent);
QMetaObject* QDial_MetaObject(QDial* self);
void QDial_Tr(const char* s, char** _out, int* _out_Strlen);
void QDial_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QDial_Wrapping(QDial* self);
int QDial_NotchSize(QDial* self);
void QDial_SetNotchTarget(QDial* self, double target);
double QDial_NotchTarget(QDial* self);
bool QDial_NotchesVisible(QDial* self);
QSize* QDial_SizeHint(QDial* self);
QSize* QDial_MinimumSizeHint(QDial* self);
void QDial_SetNotchesVisible(QDial* self, bool visible);
void QDial_SetWrapping(QDial* self, bool on);
void QDial_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDial_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDial_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QDial_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QDial_Delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
