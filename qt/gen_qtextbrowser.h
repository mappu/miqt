#ifndef GEN_QTEXTBROWSER_H
#define GEN_QTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QTextBrowser* QTextBrowser_new();
QTextBrowser* QTextBrowser_new2(QWidget* parent);
QMetaObject* QTextBrowser_MetaObject(QTextBrowser* self);
void QTextBrowser_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextBrowser_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QUrl* QTextBrowser_Source(QTextBrowser* self);
uintptr_t QTextBrowser_SourceType(QTextBrowser* self);
void QTextBrowser_SearchPaths(QTextBrowser* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QTextBrowser_SetSearchPaths(QTextBrowser* self, char** paths, uint64_t* paths_Lengths, size_t paths_len);
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name);
bool QTextBrowser_IsBackwardAvailable(QTextBrowser* self);
bool QTextBrowser_IsForwardAvailable(QTextBrowser* self);
void QTextBrowser_ClearHistory(QTextBrowser* self);
void QTextBrowser_HistoryTitle(QTextBrowser* self, int param1, char** _out, int* _out_Strlen);
QUrl* QTextBrowser_HistoryUrl(QTextBrowser* self, int param1);
int QTextBrowser_BackwardHistoryCount(QTextBrowser* self);
int QTextBrowser_ForwardHistoryCount(QTextBrowser* self);
bool QTextBrowser_OpenExternalLinks(QTextBrowser* self);
void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_OpenLinks(QTextBrowser* self);
void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name);
void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, uintptr_t typeVal);
void QTextBrowser_Backward(QTextBrowser* self);
void QTextBrowser_Forward(QTextBrowser* self);
void QTextBrowser_Home(QTextBrowser* self);
void QTextBrowser_Reload(QTextBrowser* self);
void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, void* slot);
void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, void* slot);
void QTextBrowser_HistoryChanged(QTextBrowser* self);
void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, void* slot);
void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_SourceChanged(QTextBrowser* self, void* slot);
void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_Highlighted(QTextBrowser* self, void* slot);
void QTextBrowser_HighlightedWithQString(QTextBrowser* self, const char* param1, size_t param1_Strlen);
void QTextBrowser_connect_HighlightedWithQString(QTextBrowser* self, void* slot);
void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, void* slot);
void QTextBrowser_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextBrowser_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextBrowser_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextBrowser_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextBrowser_Delete(QTextBrowser* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
