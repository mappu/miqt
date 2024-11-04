#ifndef GEN_QTEXTBROWSER_H
#define GEN_QTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QTextBrowser;
class QUrl;
class QVariant;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QTextBrowser QTextBrowser;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTextBrowser* QTextBrowser_new(QWidget* parent);
QTextBrowser* QTextBrowser_new2();
QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self);
void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1);
struct miqt_string QTextBrowser_Tr(const char* s);
QUrl* QTextBrowser_Source(const QTextBrowser* self);
int QTextBrowser_SourceType(const QTextBrowser* self);
struct miqt_array QTextBrowser_SearchPaths(const QTextBrowser* self);
void QTextBrowser_SetSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */ paths);
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name);
bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self);
bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self);
void QTextBrowser_ClearHistory(QTextBrowser* self);
struct miqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1);
QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1);
int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self);
int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self);
bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_OpenLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name);
void QTextBrowser_Backward(QTextBrowser* self);
void QTextBrowser_Forward(QTextBrowser* self);
void QTextBrowser_Home(QTextBrowser* self);
void QTextBrowser_Reload(QTextBrowser* self);
void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_HistoryChanged(QTextBrowser* self);
void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_SourceChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_Highlighted(QTextBrowser* self, intptr_t slot);
void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, intptr_t slot);
struct miqt_string QTextBrowser_Tr2(const char* s, const char* c);
struct miqt_string QTextBrowser_Tr3(const char* s, const char* c, int n);
void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, int typeVal);
void QTextBrowser_Delete(QTextBrowser* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
