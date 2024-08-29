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

QLabel* QLabel_new();
QLabel* QLabel_new2(const char* text, size_t text_Strlen);
QLabel* QLabel_new3(QWidget* parent);
QLabel* QLabel_new4(QWidget* parent, int f);
QLabel* QLabel_new5(const char* text, size_t text_Strlen, QWidget* parent);
QLabel* QLabel_new6(const char* text, size_t text_Strlen, QWidget* parent, int f);
QMetaObject* QLabel_MetaObject(QLabel* self);
void QLabel_Tr(const char* s, char** _out, int* _out_Strlen);
void QLabel_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QLabel_Text(QLabel* self, char** _out, int* _out_Strlen);
QPixmap* QLabel_Pixmap(QLabel* self);
QPixmap* QLabel_PixmapWithQtReturnByValueConstant(QLabel* self, uintptr_t param1);
QPicture* QLabel_Picture(QLabel* self);
QPicture* QLabel_PictureWithQtReturnByValueConstant(QLabel* self, uintptr_t param1);
QMovie* QLabel_Movie(QLabel* self);
uintptr_t QLabel_TextFormat(QLabel* self);
void QLabel_SetTextFormat(QLabel* self, uintptr_t textFormat);
int QLabel_Alignment(QLabel* self);
void QLabel_SetAlignment(QLabel* self, int alignment);
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
void QLabel_SetTextInteractionFlags(QLabel* self, int flags);
int QLabel_TextInteractionFlags(QLabel* self);
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
void QLabel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLabel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLabel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLabel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLabel_Delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
