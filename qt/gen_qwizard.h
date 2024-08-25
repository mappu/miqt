#ifndef GEN_QWIZARD_H
#define GEN_QWIZARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSize;
class QVariant;
class QWidget;
class QWizard;
class QWizardPage;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct QWizard QWizard;
typedef struct QWizardPage QWizardPage;
#endif

QMetaObject* QWizard_MetaObject(QWizard* self);
void QWizard_Tr(char* s, char** _out, int* _out_Strlen);
void QWizard_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QWizard_AddPage(QWizard* self, QWizardPage* page);
void QWizard_SetPage(QWizard* self, int id, QWizardPage* page);
void QWizard_RemovePage(QWizard* self, int id);
QWizardPage* QWizard_Page(QWizard* self, int id);
bool QWizard_HasVisitedPage(QWizard* self, int id);
void QWizard_VisitedPages(QWizard* self, int** _out, size_t* _out_len);
void QWizard_VisitedIds(QWizard* self, int** _out, size_t* _out_len);
void QWizard_PageIds(QWizard* self, int** _out, size_t* _out_len);
void QWizard_SetStartId(QWizard* self, int id);
int QWizard_StartId(QWizard* self);
QWizardPage* QWizard_CurrentPage(QWizard* self);
int QWizard_CurrentId(QWizard* self);
bool QWizard_ValidateCurrentPage(QWizard* self);
int QWizard_NextId(QWizard* self);
void QWizard_SetField(QWizard* self, const char* name, size_t name_Strlen, QVariant* value);
QVariant* QWizard_Field(QWizard* self, const char* name, size_t name_Strlen);
void QWizard_SetSideWidget(QWizard* self, QWidget* widget);
QWidget* QWizard_SideWidget(QWizard* self);
void QWizard_SetDefaultProperty(QWizard* self, char* className, char* property, char* changedSignal);
void QWizard_SetVisible(QWizard* self, bool visible);
QSize* QWizard_SizeHint(QWizard* self);
void QWizard_CurrentIdChanged(QWizard* self, int id);
void QWizard_connect_CurrentIdChanged(QWizard* self, void* slot);
void QWizard_HelpRequested(QWizard* self);
void QWizard_connect_HelpRequested(QWizard* self, void* slot);
void QWizard_CustomButtonClicked(QWizard* self, int which);
void QWizard_connect_CustomButtonClicked(QWizard* self, void* slot);
void QWizard_PageAdded(QWizard* self, int id);
void QWizard_connect_PageAdded(QWizard* self, void* slot);
void QWizard_PageRemoved(QWizard* self, int id);
void QWizard_connect_PageRemoved(QWizard* self, void* slot);
void QWizard_Back(QWizard* self);
void QWizard_Next(QWizard* self);
void QWizard_Restart(QWizard* self);
void QWizard_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QWizard_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWizard_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QWizard_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWizard_Delete(QWizard* self);

QWizardPage* QWizardPage_new();
QWizardPage* QWizardPage_new2(QWidget* parent);
QMetaObject* QWizardPage_MetaObject(QWizardPage* self);
void QWizardPage_Tr(char* s, char** _out, int* _out_Strlen);
void QWizardPage_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QWizardPage_SetTitle(QWizardPage* self, const char* title, size_t title_Strlen);
void QWizardPage_Title(QWizardPage* self, char** _out, int* _out_Strlen);
void QWizardPage_SetSubTitle(QWizardPage* self, const char* subTitle, size_t subTitle_Strlen);
void QWizardPage_SubTitle(QWizardPage* self, char** _out, int* _out_Strlen);
void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage);
bool QWizardPage_IsFinalPage(QWizardPage* self);
void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage);
bool QWizardPage_IsCommitPage(QWizardPage* self);
void QWizardPage_InitializePage(QWizardPage* self);
void QWizardPage_CleanupPage(QWizardPage* self);
bool QWizardPage_ValidatePage(QWizardPage* self);
bool QWizardPage_IsComplete(QWizardPage* self);
int QWizardPage_NextId(QWizardPage* self);
void QWizardPage_CompleteChanged(QWizardPage* self);
void QWizardPage_connect_CompleteChanged(QWizardPage* self, void* slot);
void QWizardPage_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QWizardPage_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWizardPage_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QWizardPage_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWizardPage_Delete(QWizardPage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
