#ifndef GEN_QSIZEGRIP_H
#define GEN_QSIZEGRIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1);
struct miqt_string QSizeGrip_Tr(const char* s);
QSize* QSizeGrip_SizeHint(const QSizeGrip* self);
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible);
struct miqt_string QSizeGrip_Tr2(const char* s, const char* c);
struct miqt_string QSizeGrip_Tr3(const char* s, const char* c, int n);
void QSizeGrip_Delete(QSizeGrip* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
