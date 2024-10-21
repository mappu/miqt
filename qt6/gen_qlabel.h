#ifndef GEN_QLABEL_H
#define GEN_QLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QLabel* QLabel_new2(struct miqt_string text);
QLabel* QLabel_new3(QWidget* parent);
QLabel* QLabel_new4(QWidget* parent, int f);
QLabel* QLabel_new5(struct miqt_string text, QWidget* parent);
QLabel* QLabel_new6(struct miqt_string text, QWidget* parent, int f);
QMetaObject* QLabel_MetaObject(const QLabel* self);
void* QLabel_Metacast(QLabel* self, const char* param1);
struct miqt_string QLabel_Tr(const char* s);
struct miqt_string QLabel_Text(const QLabel* self);
QPixmap* QLabel_Pixmap(const QLabel* self, int param1);
QPixmap* QLabel_Pixmap2(const QLabel* self);
QPicture* QLabel_Picture(const QLabel* self, int param1);
QPicture* QLabel_Picture2(const QLabel* self);
QMovie* QLabel_Movie(const QLabel* self);
int QLabel_TextFormat(const QLabel* self);
void QLabel_SetTextFormat(QLabel* self, int textFormat);
int QLabel_Alignment(const QLabel* self);
void QLabel_SetAlignment(QLabel* self, int alignment);
void QLabel_SetWordWrap(QLabel* self, bool on);
bool QLabel_WordWrap(const QLabel* self);
int QLabel_Indent(const QLabel* self);
void QLabel_SetIndent(QLabel* self, int indent);
int QLabel_Margin(const QLabel* self);
void QLabel_SetMargin(QLabel* self, int margin);
bool QLabel_HasScaledContents(const QLabel* self);
void QLabel_SetScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_SizeHint(const QLabel* self);
QSize* QLabel_MinimumSizeHint(const QLabel* self);
void QLabel_SetBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_Buddy(const QLabel* self);
int QLabel_HeightForWidth(const QLabel* self, int param1);
bool QLabel_OpenExternalLinks(const QLabel* self);
void QLabel_SetOpenExternalLinks(QLabel* self, bool open);
void QLabel_SetTextInteractionFlags(QLabel* self, int flags);
int QLabel_TextInteractionFlags(const QLabel* self);
void QLabel_SetSelection(QLabel* self, int param1, int param2);
bool QLabel_HasSelectedText(const QLabel* self);
struct miqt_string QLabel_SelectedText(const QLabel* self);
int QLabel_SelectionStart(const QLabel* self);
void QLabel_SetText(QLabel* self, struct miqt_string text);
void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap);
void QLabel_SetPicture(QLabel* self, QPicture* picture);
void QLabel_SetMovie(QLabel* self, QMovie* movie);
void QLabel_SetNum(QLabel* self, int num);
void QLabel_SetNumWithNum(QLabel* self, double num);
void QLabel_Clear(QLabel* self);
void QLabel_LinkActivated(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot);
void QLabel_LinkHovered(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot);
struct miqt_string QLabel_Tr2(const char* s, const char* c);
struct miqt_string QLabel_Tr3(const char* s, const char* c, int n);
void QLabel_Delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
