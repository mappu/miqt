#pragma once
#ifndef MIQT_QT_GEN_QWIZARD_H
#define MIQT_QT_GEN_QWIZARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QMetaObject;
class QPixmap;
class QSize;
class QVariant;
class QWidget;
class QWizard;
class QWizardPage;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct QWizard QWizard;
typedef struct QWizardPage QWizardPage;
#endif

QWizard* QWizard_new(QWidget* parent);
QWizard* QWizard_new2();
QWizard* QWizard_new3(QWidget* parent, int flags);
QMetaObject* QWizard_MetaObject(const QWizard* self);
void* QWizard_Metacast(QWizard* self, const char* param1);
struct miqt_string QWizard_Tr(const char* s);
struct miqt_string QWizard_TrUtf8(const char* s);
int QWizard_AddPage(QWizard* self, QWizardPage* page);
void QWizard_SetPage(QWizard* self, int id, QWizardPage* page);
void QWizard_RemovePage(QWizard* self, int id);
QWizardPage* QWizard_Page(const QWizard* self, int id);
bool QWizard_HasVisitedPage(const QWizard* self, int id);
struct miqt_array /* of int */  QWizard_VisitedPages(const QWizard* self);
struct miqt_array /* of int */  QWizard_VisitedIds(const QWizard* self);
struct miqt_array /* of int */  QWizard_PageIds(const QWizard* self);
void QWizard_SetStartId(QWizard* self, int id);
int QWizard_StartId(const QWizard* self);
QWizardPage* QWizard_CurrentPage(const QWizard* self);
int QWizard_CurrentId(const QWizard* self);
bool QWizard_ValidateCurrentPage(QWizard* self);
int QWizard_NextId(const QWizard* self);
void QWizard_SetField(QWizard* self, struct miqt_string name, QVariant* value);
QVariant* QWizard_Field(const QWizard* self, struct miqt_string name);
void QWizard_SetWizardStyle(QWizard* self, int style);
int QWizard_WizardStyle(const QWizard* self);
void QWizard_SetOption(QWizard* self, int option);
bool QWizard_TestOption(const QWizard* self, int option);
void QWizard_SetOptions(QWizard* self, int options);
int QWizard_Options(const QWizard* self);
void QWizard_SetButtonText(QWizard* self, int which, struct miqt_string text);
struct miqt_string QWizard_ButtonText(const QWizard* self, int which);
void QWizard_SetButtonLayout(QWizard* self, struct miqt_array /* of int */  layout);
void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button);
QAbstractButton* QWizard_Button(const QWizard* self, int which);
void QWizard_SetTitleFormat(QWizard* self, int format);
int QWizard_TitleFormat(const QWizard* self);
void QWizard_SetSubTitleFormat(QWizard* self, int format);
int QWizard_SubTitleFormat(const QWizard* self);
void QWizard_SetPixmap(QWizard* self, int which, QPixmap* pixmap);
QPixmap* QWizard_Pixmap(const QWizard* self, int which);
void QWizard_SetSideWidget(QWizard* self, QWidget* widget);
QWidget* QWizard_SideWidget(const QWizard* self);
void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal);
void QWizard_SetVisible(QWizard* self, bool visible);
QSize* QWizard_SizeHint(const QWizard* self);
void QWizard_CurrentIdChanged(QWizard* self, int id);
void QWizard_connect_CurrentIdChanged(QWizard* self, intptr_t slot);
void QWizard_HelpRequested(QWizard* self);
void QWizard_connect_HelpRequested(QWizard* self, intptr_t slot);
void QWizard_CustomButtonClicked(QWizard* self, int which);
void QWizard_connect_CustomButtonClicked(QWizard* self, intptr_t slot);
void QWizard_PageAdded(QWizard* self, int id);
void QWizard_connect_PageAdded(QWizard* self, intptr_t slot);
void QWizard_PageRemoved(QWizard* self, int id);
void QWizard_connect_PageRemoved(QWizard* self, intptr_t slot);
void QWizard_Back(QWizard* self);
void QWizard_Next(QWizard* self);
void QWizard_Restart(QWizard* self);
struct miqt_string QWizard_Tr2(const char* s, const char* c);
struct miqt_string QWizard_Tr3(const char* s, const char* c, int n);
struct miqt_string QWizard_TrUtf82(const char* s, const char* c);
struct miqt_string QWizard_TrUtf83(const char* s, const char* c, int n);
void QWizard_SetOption2(QWizard* self, int option, bool on);
void QWizard_Delete(QWizard* self);

QWizardPage* QWizardPage_new(QWidget* parent);
QWizardPage* QWizardPage_new2();
QMetaObject* QWizardPage_MetaObject(const QWizardPage* self);
void* QWizardPage_Metacast(QWizardPage* self, const char* param1);
struct miqt_string QWizardPage_Tr(const char* s);
struct miqt_string QWizardPage_TrUtf8(const char* s);
void QWizardPage_SetTitle(QWizardPage* self, struct miqt_string title);
struct miqt_string QWizardPage_Title(const QWizardPage* self);
void QWizardPage_SetSubTitle(QWizardPage* self, struct miqt_string subTitle);
struct miqt_string QWizardPage_SubTitle(const QWizardPage* self);
void QWizardPage_SetPixmap(QWizardPage* self, int which, QPixmap* pixmap);
QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which);
void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage);
bool QWizardPage_IsFinalPage(const QWizardPage* self);
void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage);
bool QWizardPage_IsCommitPage(const QWizardPage* self);
void QWizardPage_SetButtonText(QWizardPage* self, int which, struct miqt_string text);
struct miqt_string QWizardPage_ButtonText(const QWizardPage* self, int which);
void QWizardPage_InitializePage(QWizardPage* self);
void QWizardPage_CleanupPage(QWizardPage* self);
bool QWizardPage_ValidatePage(QWizardPage* self);
bool QWizardPage_IsComplete(const QWizardPage* self);
int QWizardPage_NextId(const QWizardPage* self);
void QWizardPage_CompleteChanged(QWizardPage* self);
void QWizardPage_connect_CompleteChanged(QWizardPage* self, intptr_t slot);
struct miqt_string QWizardPage_Tr2(const char* s, const char* c);
struct miqt_string QWizardPage_Tr3(const char* s, const char* c, int n);
struct miqt_string QWizardPage_TrUtf82(const char* s, const char* c);
struct miqt_string QWizardPage_TrUtf83(const char* s, const char* c, int n);
void QWizardPage_Delete(QWizardPage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
