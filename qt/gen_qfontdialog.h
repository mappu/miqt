#ifndef GEN_QFONTDIALOG_H
#define GEN_QFONTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QFontDialog;
class QMetaObject;
class QWidget;
#else
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QFontDialog* QFontDialog_new();
QFontDialog* QFontDialog_new2(QFont* initial);
QFontDialog* QFontDialog_new3(QWidget* parent);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
QMetaObject* QFontDialog_MetaObject(QFontDialog* self);
void QFontDialog_Tr(char* s, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_CurrentFont(QFontDialog* self);
QFont* QFontDialog_SelectedFont(QFontDialog* self);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, void* slot);
void QFontDialog_FontSelected(QFontDialog* self, QFont* font);
void QFontDialog_connect_FontSelected(QFontDialog* self, void* slot);
void QFontDialog_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFontDialog_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QFont* QFontDialog_GetFont2(bool* ok, QWidget* parent);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
