#ifndef GEN_QSIZEGRIP_H
#define GEN_QSIZEGRIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSize;
class QSizeGrip;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QSizeGrip QSizeGrip;
typedef struct QWidget QWidget;
#endif

QSizeGrip* QSizeGrip_new(QWidget* parent);
QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self);
void QSizeGrip_Tr(const char* s, char** _out, int* _out_Strlen);
void QSizeGrip_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QSizeGrip_SizeHint(const QSizeGrip* self);
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSizeGrip_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSizeGrip_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSizeGrip_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSizeGrip_Delete(QSizeGrip* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
