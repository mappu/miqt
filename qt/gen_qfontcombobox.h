#ifndef GEN_QFONTCOMBOBOX_H
#define GEN_QFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QFontComboBox* QFontComboBox_new(QWidget* parent);
QFontComboBox* QFontComboBox_new2();
QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self);
void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1);
struct miqt_string QFontComboBox_Tr(const char* s);
struct miqt_string QFontComboBox_TrUtf8(const char* s);
void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_WritingSystem(const QFontComboBox* self);
void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_FontFilters(const QFontComboBox* self);
QFont* QFontComboBox_CurrentFont(const QFontComboBox* self);
QSize* QFontComboBox_SizeHint(const QFontComboBox* self);
void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot);
struct miqt_string QFontComboBox_Tr2(const char* s, const char* c);
struct miqt_string QFontComboBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QFontComboBox_TrUtf82(const char* s, const char* c);
struct miqt_string QFontComboBox_TrUtf83(const char* s, const char* c, int n);
void QFontComboBox_Delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
