#ifndef GEN_QCOREAPPLICATION_H
#define GEN_QCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractEventDispatcher;
class QAbstractNativeEventFilter;
class QCoreApplication;
class QEvent;
class QMetaObject;
class QObject;
class QTranslator;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QCoreApplication QCoreApplication;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTranslator QTranslator;
#endif

QCoreApplication* QCoreApplication_new(int* argc, char** argv);
QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QCoreApplication_MetaObject(const QCoreApplication* self);
struct miqt_string* QCoreApplication_Tr(const char* s);
struct miqt_string* QCoreApplication_TrUtf8(const char* s);
struct miqt_array* QCoreApplication_Arguments();
void QCoreApplication_SetAttribute(uintptr_t attribute);
bool QCoreApplication_TestAttribute(uintptr_t attribute);
void QCoreApplication_SetOrganizationDomain(struct miqt_string* orgDomain);
struct miqt_string* QCoreApplication_OrganizationDomain();
void QCoreApplication_SetOrganizationName(struct miqt_string* orgName);
struct miqt_string* QCoreApplication_OrganizationName();
void QCoreApplication_SetApplicationName(struct miqt_string* application);
struct miqt_string* QCoreApplication_ApplicationName();
void QCoreApplication_SetApplicationVersion(struct miqt_string* version);
struct miqt_string* QCoreApplication_ApplicationVersion();
void QCoreApplication_SetSetuidAllowed(bool allow);
bool QCoreApplication_IsSetuidAllowed();
QCoreApplication* QCoreApplication_Instance();
int QCoreApplication_Exec();
void QCoreApplication_ProcessEvents();
void QCoreApplication_ProcessEvents2(int flags, int maxtime);
void QCoreApplication_Exit();
bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event);
void QCoreApplication_PostEvent(QObject* receiver, QEvent* event);
void QCoreApplication_SendPostedEvents();
void QCoreApplication_RemovePostedEvents(QObject* receiver);
bool QCoreApplication_HasPendingEvents();
QAbstractEventDispatcher* QCoreApplication_EventDispatcher();
void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher);
bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2);
bool QCoreApplication_StartingUp();
bool QCoreApplication_ClosingDown();
struct miqt_string* QCoreApplication_ApplicationDirPath();
struct miqt_string* QCoreApplication_ApplicationFilePath();
long long QCoreApplication_ApplicationPid();
void QCoreApplication_SetLibraryPaths(struct miqt_array* /* of QString */ libraryPaths);
struct miqt_array* QCoreApplication_LibraryPaths();
void QCoreApplication_AddLibraryPath(struct miqt_string* param1);
void QCoreApplication_RemoveLibraryPath(struct miqt_string* param1);
bool QCoreApplication_InstallTranslator(QTranslator* messageFile);
bool QCoreApplication_RemoveTranslator(QTranslator* messageFile);
struct miqt_string* QCoreApplication_Translate(const char* context, const char* key);
void QCoreApplication_Flush();
void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
bool QCoreApplication_IsQuitLockEnabled();
void QCoreApplication_SetQuitLockEnabled(bool enabled);
void QCoreApplication_Quit();
void QCoreApplication_OrganizationNameChanged(QCoreApplication* self);
void QCoreApplication_connect_OrganizationNameChanged(QCoreApplication* self, void* slot);
void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self);
void QCoreApplication_connect_OrganizationDomainChanged(QCoreApplication* self, void* slot);
void QCoreApplication_ApplicationNameChanged(QCoreApplication* self);
void QCoreApplication_connect_ApplicationNameChanged(QCoreApplication* self, void* slot);
void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self);
void QCoreApplication_connect_ApplicationVersionChanged(QCoreApplication* self, void* slot);
struct miqt_string* QCoreApplication_Tr2(const char* s, const char* c);
struct miqt_string* QCoreApplication_Tr3(const char* s, const char* c, int n);
struct miqt_string* QCoreApplication_TrUtf82(const char* s, const char* c);
struct miqt_string* QCoreApplication_TrUtf83(const char* s, const char* c, int n);
void QCoreApplication_SetAttribute2(uintptr_t attribute, bool on);
void QCoreApplication_ProcessEvents1(int flags);
void QCoreApplication_Exit1(int retcode);
void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority);
void QCoreApplication_SendPostedEvents1(QObject* receiver);
void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type);
void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType);
struct miqt_string* QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation);
struct miqt_string* QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n);
void QCoreApplication_Delete(QCoreApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
