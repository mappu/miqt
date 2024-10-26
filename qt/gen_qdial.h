#ifndef GEN_QDIAL_H
#define GEN_QDIAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QDial* QDial_new(QWidget* parent);
QDial* QDial_new2();
QMetaObject* QDial_MetaObject(const QDial* self);
void* QDial_Metacast(QDial* self, const char* param1);
struct miqt_string QDial_Tr(const char* s);
struct miqt_string QDial_TrUtf8(const char* s);
bool QDial_Wrapping(const QDial* self);
int QDial_NotchSize(const QDial* self);
void QDial_SetNotchTarget(QDial* self, double target);
double QDial_NotchTarget(const QDial* self);
bool QDial_NotchesVisible(const QDial* self);
QSize* QDial_SizeHint(const QDial* self);
QSize* QDial_MinimumSizeHint(const QDial* self);
void QDial_SetNotchesVisible(QDial* self, bool visible);
void QDial_SetWrapping(QDial* self, bool on);
struct miqt_string QDial_Tr2(const char* s, const char* c);
struct miqt_string QDial_Tr3(const char* s, const char* c, int n);
struct miqt_string QDial_TrUtf82(const char* s, const char* c);
struct miqt_string QDial_TrUtf83(const char* s, const char* c, int n);
void QDial_Delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
