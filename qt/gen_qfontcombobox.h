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
QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self);
void QFontComboBox_Tr(const char* s, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, uintptr_t writingSystem);
uintptr_t QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, void* slot);
void QFontComboBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFontComboBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFontComboBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
