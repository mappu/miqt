#ifndef GEN_QCOMMONSTYLE_H
#define GEN_QCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QApplication;
class QCommonStyle;
class QMetaObject;
class QPalette;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QCommonStyle QCommonStyle;
typedef struct QMetaObject QMetaObject;
typedef struct QPalette QPalette;
typedef struct QWidget QWidget;
#endif

QCommonStyle* QCommonStyle_new();
QMetaObject* QCommonStyle_MetaObject(QCommonStyle* self);
void QCommonStyle_Tr(char* s, char** _out, int* _out_Strlen);
void QCommonStyle_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1);
void QCommonStyle_PolishWithApp(QCommonStyle* self, QApplication* app);
void QCommonStyle_PolishWithWidget(QCommonStyle* self, QWidget* widget);
void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget);
void QCommonStyle_UnpolishWithApplication(QCommonStyle* self, QApplication* application);
void QCommonStyle_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QCommonStyle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QCommonStyle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QCommonStyle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QCommonStyle_Delete(QCommonStyle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
