#ifndef GEN_QRADIOBUTTON_H
#define GEN_QRADIOBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QRadioButton;
class QSize;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QRadioButton QRadioButton;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QRadioButton* QRadioButton_new();
QRadioButton* QRadioButton_new2(const char* text, size_t text_Strlen);
QRadioButton* QRadioButton_new3(QWidget* parent);
QRadioButton* QRadioButton_new4(const char* text, size_t text_Strlen, QWidget* parent);
QMetaObject* QRadioButton_MetaObject(const QRadioButton* self);
void QRadioButton_Tr(const char* s, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
void QRadioButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRadioButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
