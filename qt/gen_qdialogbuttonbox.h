#ifndef GEN_QDIALOGBUTTONBOX_H
#define GEN_QDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QDialogButtonBox;
class QMetaObject;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QDialogButtonBox QDialogButtonBox;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QDialogButtonBox* QDialogButtonBox_new();
QDialogButtonBox* QDialogButtonBox_new2(QWidget* parent);
QMetaObject* QDialogButtonBox_MetaObject(QDialogButtonBox* self);
void QDialogButtonBox_Tr(char* s, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_Clear(QDialogButtonBox* self);
void QDialogButtonBox_Buttons(QDialogButtonBox* self, QAbstractButton*** _out, size_t* _out_len);
void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_CenterButtons(QDialogButtonBox* self);
void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Accepted(QDialogButtonBox* self);
void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_HelpRequested(QDialogButtonBox* self);
void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Rejected(QDialogButtonBox* self);
void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, void* slot);
void QDialogButtonBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QDialogButtonBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QDialogButtonBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QDialogButtonBox_Delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
