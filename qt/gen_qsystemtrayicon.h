#ifndef GEN_QSYSTEMTRAYICON_H
#define GEN_QSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMenu;
class QMetaObject;
class QObject;
class QRect;
class QSystemTrayIcon;
#else
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSystemTrayIcon QSystemTrayIcon;
#endif

QSystemTrayIcon* QSystemTrayIcon_new();
QSystemTrayIcon* QSystemTrayIcon_new2(QIcon* icon);
QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent);
QSystemTrayIcon* QSystemTrayIcon_new4(QIcon* icon, QObject* parent);
QMetaObject* QSystemTrayIcon_MetaObject(QSystemTrayIcon* self);
void QSystemTrayIcon_Tr(char* s, char** _out, int* _out_Strlen);
void QSystemTrayIcon_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu);
QMenu* QSystemTrayIcon_ContextMenu(QSystemTrayIcon* self);
QIcon* QSystemTrayIcon_Icon(QSystemTrayIcon* self);
void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, QIcon* icon);
void QSystemTrayIcon_ToolTip(QSystemTrayIcon* self, char** _out, int* _out_Strlen);
void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const char* tip, size_t tip_Strlen);
bool QSystemTrayIcon_IsSystemTrayAvailable();
bool QSystemTrayIcon_SupportsMessages();
QRect* QSystemTrayIcon_Geometry(QSystemTrayIcon* self);
bool QSystemTrayIcon_IsVisible(QSystemTrayIcon* self);
void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible);
void QSystemTrayIcon_Show(QSystemTrayIcon* self);
void QSystemTrayIcon_Hide(QSystemTrayIcon* self);
void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, QIcon* icon);
void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self);
void QSystemTrayIcon_connect_MessageClicked(QSystemTrayIcon* self, void* slot);
void QSystemTrayIcon_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSystemTrayIcon_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSystemTrayIcon_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSystemTrayIcon_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const char* title, size_t title_Strlen, const char* msg, size_t msg_Strlen, QIcon* icon, int msecs);
void QSystemTrayIcon_Delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
