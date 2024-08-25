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
QMetaObject* QRadioButton_MetaObject(QRadioButton* self);
void QRadioButton_Tr(char* s, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QRadioButton_SizeHint(QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(QRadioButton* self);
void QRadioButton_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QRadioButton_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QRadioButton_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
