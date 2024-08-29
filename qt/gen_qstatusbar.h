#ifndef GEN_QSTATUSBAR_H
#define GEN_QSTATUSBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QStatusBar;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QStatusBar QStatusBar;
typedef struct QWidget QWidget;
#endif

QStatusBar* QStatusBar_new();
QStatusBar* QStatusBar_new2(QWidget* parent);
QMetaObject* QStatusBar_MetaObject(QStatusBar* self);
void QStatusBar_Tr(const char* s, char** _out, int* _out_Strlen);
void QStatusBar_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_IsSizeGripEnabled(QStatusBar* self);
void QStatusBar_CurrentMessage(QStatusBar* self, char** _out, int* _out_Strlen);
void QStatusBar_ShowMessage(QStatusBar* self, const char* text, size_t text_Strlen);
void QStatusBar_ClearMessage(QStatusBar* self);
void QStatusBar_MessageChanged(QStatusBar* self, const char* text, size_t text_Strlen);
void QStatusBar_connect_MessageChanged(QStatusBar* self, void* slot);
void QStatusBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStatusBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStatusBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStatusBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_ShowMessage2(QStatusBar* self, const char* text, size_t text_Strlen, int timeout);
void QStatusBar_Delete(QStatusBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
