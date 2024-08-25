#ifndef GEN_QFONTCOMBOBOX_H
#define GEN_QFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QFontComboBox;
class QMetaObject;
class QSize;
class QWidget;
#else
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QFontComboBox* QFontComboBox_new();
QFontComboBox* QFontComboBox_new2(QWidget* parent);
QMetaObject* QFontComboBox_MetaObject(QFontComboBox* self);
void QFontComboBox_Tr(char* s, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf8(char* s, char** _out, int* _out_Strlen);
QFont* QFontComboBox_CurrentFont(QFontComboBox* self);
QSize* QFontComboBox_SizeHint(QFontComboBox* self);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, void* slot);
void QFontComboBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFontComboBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
