#ifndef GEN_QPROCESS_H
#define GEN_QPROCESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QObject;
class QProcess;
class QProcessEnvironment;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QProcess QProcess;
typedef struct QProcessEnvironment QProcessEnvironment;
#endif

QProcessEnvironment* QProcessEnvironment_new();
QProcessEnvironment* QProcessEnvironment_new2(QProcessEnvironment* other);
void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, QProcessEnvironment* other);
void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_OperatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_OperatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self);
void QProcessEnvironment_Clear(QProcessEnvironment* self);
bool QProcessEnvironment_Contains(const QProcessEnvironment* self, struct miqt_string* name);
void QProcessEnvironment_Insert(QProcessEnvironment* self, struct miqt_string* name, struct miqt_string* value);
void QProcessEnvironment_Remove(QProcessEnvironment* self, struct miqt_string* name);
struct miqt_string* QProcessEnvironment_Value(const QProcessEnvironment* self, struct miqt_string* name);
struct miqt_array* QProcessEnvironment_ToStringList(const QProcessEnvironment* self);
struct miqt_array* QProcessEnvironment_Keys(const QProcessEnvironment* self);
void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e);
QProcessEnvironment* QProcessEnvironment_SystemEnvironment();
struct miqt_string* QProcessEnvironment_Value2(const QProcessEnvironment* self, struct miqt_string* name, struct miqt_string* defaultValue);
void QProcessEnvironment_Delete(QProcessEnvironment* self);

QProcess* QProcess_new();
QProcess* QProcess_new2(QObject* parent);
QMetaObject* QProcess_MetaObject(const QProcess* self);
void* QProcess_Metacast(QProcess* self, const char* param1);
struct miqt_string* QProcess_Tr(const char* s);
struct miqt_string* QProcess_TrUtf8(const char* s);
void QProcess_Start(QProcess* self, struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments);
void QProcess_StartWithCommand(QProcess* self, struct miqt_string* command);
void QProcess_Start2(QProcess* self);
bool QProcess_StartDetached(QProcess* self);
bool QProcess_Open(QProcess* self);
struct miqt_string* QProcess_Program(const QProcess* self);
void QProcess_SetProgram(QProcess* self, struct miqt_string* program);
struct miqt_array* QProcess_Arguments(const QProcess* self);
void QProcess_SetArguments(QProcess* self, struct miqt_array* /* of struct miqt_string* */ arguments);
int QProcess_ReadChannelMode(const QProcess* self);
void QProcess_SetReadChannelMode(QProcess* self, int mode);
int QProcess_ProcessChannelMode(const QProcess* self);
void QProcess_SetProcessChannelMode(QProcess* self, int mode);
int QProcess_InputChannelMode(const QProcess* self);
void QProcess_SetInputChannelMode(QProcess* self, int mode);
int QProcess_ReadChannel(const QProcess* self);
void QProcess_SetReadChannel(QProcess* self, int channel);
void QProcess_CloseReadChannel(QProcess* self, int channel);
void QProcess_CloseWriteChannel(QProcess* self);
void QProcess_SetStandardInputFile(QProcess* self, struct miqt_string* fileName);
void QProcess_SetStandardOutputFile(QProcess* self, struct miqt_string* fileName);
void QProcess_SetStandardErrorFile(QProcess* self, struct miqt_string* fileName);
void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination);
struct miqt_string* QProcess_WorkingDirectory(const QProcess* self);
void QProcess_SetWorkingDirectory(QProcess* self, struct miqt_string* dir);
void QProcess_SetEnvironment(QProcess* self, struct miqt_array* /* of struct miqt_string* */ environment);
struct miqt_array* QProcess_Environment(const QProcess* self);
void QProcess_SetProcessEnvironment(QProcess* self, QProcessEnvironment* environment);
QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self);
int QProcess_Error(const QProcess* self);
int QProcess_State(const QProcess* self);
long long QProcess_Pid(const QProcess* self);
long long QProcess_ProcessId(const QProcess* self);
bool QProcess_WaitForStarted(QProcess* self);
bool QProcess_WaitForReadyRead(QProcess* self);
bool QProcess_WaitForBytesWritten(QProcess* self);
bool QProcess_WaitForFinished(QProcess* self);
QByteArray* QProcess_ReadAllStandardOutput(QProcess* self);
QByteArray* QProcess_ReadAllStandardError(QProcess* self);
int QProcess_ExitCode(const QProcess* self);
int QProcess_ExitStatus(const QProcess* self);
long long QProcess_BytesAvailable(const QProcess* self);
long long QProcess_BytesToWrite(const QProcess* self);
bool QProcess_IsSequential(const QProcess* self);
bool QProcess_CanReadLine(const QProcess* self);
void QProcess_Close(QProcess* self);
bool QProcess_AtEnd(const QProcess* self);
int QProcess_Execute(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments);
int QProcess_ExecuteWithCommand(struct miqt_string* command);
bool QProcess_StartDetached2(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, struct miqt_string* workingDirectory);
bool QProcess_StartDetached3(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments);
bool QProcess_StartDetachedWithCommand(struct miqt_string* command);
struct miqt_array* QProcess_SystemEnvironment();
struct miqt_string* QProcess_NullDevice();
void QProcess_Terminate(QProcess* self);
void QProcess_Kill(QProcess* self);
void QProcess_Finished(QProcess* self, int exitCode);
void QProcess_connect_Finished(QProcess* self, intptr_t slot);
void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus);
void QProcess_connect_Finished2(QProcess* self, intptr_t slot);
void QProcess_ErrorWithError(QProcess* self, int error);
void QProcess_connect_ErrorWithError(QProcess* self, intptr_t slot);
void QProcess_ErrorOccurred(QProcess* self, int error);
void QProcess_connect_ErrorOccurred(QProcess* self, intptr_t slot);
struct miqt_string* QProcess_Tr2(const char* s, const char* c);
struct miqt_string* QProcess_Tr3(const char* s, const char* c, int n);
struct miqt_string* QProcess_TrUtf82(const char* s, const char* c);
struct miqt_string* QProcess_TrUtf83(const char* s, const char* c, int n);
void QProcess_Start3(QProcess* self, struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, int mode);
void QProcess_Start22(QProcess* self, struct miqt_string* command, int mode);
void QProcess_Start1(QProcess* self, int mode);
bool QProcess_StartDetached1(QProcess* self, long long* pid);
bool QProcess_Open1(QProcess* self, int mode);
void QProcess_SetStandardOutputFile2(QProcess* self, struct miqt_string* fileName, int mode);
void QProcess_SetStandardErrorFile2(QProcess* self, struct miqt_string* fileName, int mode);
bool QProcess_WaitForStarted1(QProcess* self, int msecs);
bool QProcess_WaitForReadyRead1(QProcess* self, int msecs);
bool QProcess_WaitForBytesWritten1(QProcess* self, int msecs);
bool QProcess_WaitForFinished1(QProcess* self, int msecs);
bool QProcess_StartDetached4(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, struct miqt_string* workingDirectory, long long* pid);
void QProcess_Delete(QProcess* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
