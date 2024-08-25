#ifndef GEN_QLABEL_H
#define GEN_QLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLabel;
class QMetaObject;
class QMovie;
class QPicture;
class QPixmap;
class QSize;
class QWidget;
#else
typedef struct QLabel QLabel;
typedef struct QMetaObject QMetaObject;
typedef struct QMovie QMovie;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMetaObject* QLabel_MetaObject(QLabel* self);
void QLabel_Tr(char* s, char** _out, int* _out_Strlen);
void QLabel_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QLabel_Text(QLabel* self, char** _out, int* _out_Strlen);
QPixmap* QLabel_Pixmap(QLabel* self);
QPicture* QLabel_Picture(QLabel* self);
QMovie* QLabel_Movie(QLabel* self);
void QLabel_SetWordWrap(QLabel* self, bool on);
bool QLabel_WordWrap(QLabel* self);
int QLabel_Indent(QLabel* self);
void QLabel_SetIndent(QLabel* self, int indent);
int QLabel_Margin(QLabel* self);
void QLabel_SetMargin(QLabel* self, int margin);
bool QLabel_HasScaledContents(QLabel* self);
void QLabel_SetScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_SizeHint(QLabel* self);
QSize* QLabel_MinimumSizeHint(QLabel* self);
void QLabel_SetBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_Buddy(QLabel* self);
int QLabel_HeightForWidth(QLabel* self, int param1);
bool QLabel_OpenExternalLinks(QLabel* self);
void QLabel_SetOpenExternalLinks(QLabel* self, bool open);
void QLabel_SetSelection(QLabel* self, int param1, int param2);
bool QLabel_HasSelectedText(QLabel* self);
void QLabel_SelectedText(QLabel* self, char** _out, int* _out_Strlen);
int QLabel_SelectionStart(QLabel* self);
void QLabel_SetText(QLabel* self, const char* text, size_t text_Strlen);
void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap);
void QLabel_SetPicture(QLabel* self, QPicture* picture);
void QLabel_SetMovie(QLabel* self, QMovie* movie);
void QLabel_SetNum(QLabel* self, int num);
void QLabel_SetNumWithNum(QLabel* self, double num);
void QLabel_Clear(QLabel* self);
void QLabel_LinkActivated(QLabel* self, const char* link, size_t link_Strlen);
void QLabel_connect_LinkActivated(QLabel* self, void* slot);
void QLabel_LinkHovered(QLabel* self, const char* link, size_t link_Strlen);
void QLabel_connect_LinkHovered(QLabel* self, void* slot);
void QLabel_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QLabel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QLabel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QLabel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QLabel_Delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
