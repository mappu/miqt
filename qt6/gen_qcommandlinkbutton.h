#ifndef GEN_QCOMMANDLINKBUTTON_H
#define GEN_QCOMMANDLINKBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCommandLinkButton;
class QMetaObject;
class QSize;
class QStyleOptionButton;
class QWidget;
#else
typedef struct QCommandLinkButton QCommandLinkButton;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QWidget QWidget;
#endif

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new2();
QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text);
QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description);
QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent);
QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self);
void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1);
struct miqt_string QCommandLinkButton_Tr(const char* s);
struct miqt_string QCommandLinkButton_Description(const QCommandLinkButton* self);
void QCommandLinkButton_SetDescription(QCommandLinkButton* self, struct miqt_string description);
QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self);
int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1);
QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self);
void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option);
struct miqt_string QCommandLinkButton_Tr2(const char* s, const char* c);
struct miqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n);
void QCommandLinkButton_Delete(QCommandLinkButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
