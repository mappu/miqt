#ifndef GEN_QCOLORDIALOG_H
#define GEN_QCOLORDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QColorDialog;
class QMetaObject;
class QWidget;
#else
typedef struct QColor QColor;
typedef struct QColorDialog QColorDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QColorDialog* QColorDialog_new();
QColorDialog* QColorDialog_new2(QColor* initial);
QColorDialog* QColorDialog_new3(QWidget* parent);
QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent);
QMetaObject* QColorDialog_MetaObject(QColorDialog* self);
void QColorDialog_Tr(const char* s, char** _out, int* _out_Strlen);
void QColorDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color);
QColor* QColorDialog_CurrentColor(QColorDialog* self);
QColor* QColorDialog_SelectedColor(QColorDialog* self);
void QColorDialog_SetOption(QColorDialog* self, uintptr_t option);
bool QColorDialog_TestOption(QColorDialog* self, uintptr_t option);
void QColorDialog_SetOptions(QColorDialog* self, int options);
int QColorDialog_Options(QColorDialog* self);
void QColorDialog_SetVisible(QColorDialog* self, bool visible);
QColor* QColorDialog_GetColor();
unsigned int QColorDialog_GetRgba();
int QColorDialog_CustomCount();
QColor* QColorDialog_CustomColor(int index);
void QColorDialog_SetCustomColor(int index, QColor* color);
QColor* QColorDialog_StandardColor(int index);
void QColorDialog_SetStandardColor(int index, QColor* color);
void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color);
void QColorDialog_connect_CurrentColorChanged(QColorDialog* self, void* slot);
void QColorDialog_ColorSelected(QColorDialog* self, QColor* color);
void QColorDialog_connect_ColorSelected(QColorDialog* self, void* slot);
void QColorDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QColorDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QColorDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QColorDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QColorDialog_SetOption2(QColorDialog* self, uintptr_t option, bool on);
QColor* QColorDialog_GetColor1(QColor* initial);
QColor* QColorDialog_GetColor2(QColor* initial, QWidget* parent);
QColor* QColorDialog_GetColor3(QColor* initial, QWidget* parent, const char* title, size_t title_Strlen);
QColor* QColorDialog_GetColor4(QColor* initial, QWidget* parent, const char* title, size_t title_Strlen, int options);
unsigned int QColorDialog_GetRgba1(unsigned int rgba);
unsigned int QColorDialog_GetRgba2(unsigned int rgba, bool* ok);
unsigned int QColorDialog_GetRgba3(unsigned int rgba, bool* ok, QWidget* parent);
void QColorDialog_Delete(QColorDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
