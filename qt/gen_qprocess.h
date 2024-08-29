#ifndef GEN_QPROCESS_H
#define GEN_QPROCESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
bool QProcessEnvironment_OperatorEqual(QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_OperatorNotEqual(QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_IsEmpty(QProcessEnvironment* self);
void QProcessEnvironment_Clear(QProcessEnvironment* self);
bool QProcessEnvironment_Contains(QProcessEnvironment* self, const char* name, size_t name_Strlen);
void QProcessEnvironment_Insert(QProcessEnvironment* self, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen);
void QProcessEnvironment_Remove(QProcessEnvironment* self, const char* name, size_t name_Strlen);
void QProcessEnvironment_Value(QProcessEnvironment* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QProcessEnvironment_ToStringList(QProcessEnvironment* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QProcessEnvironment_Keys(QProcessEnvironment* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e);
QProcessEnvironment* QProcessEnvironment_SystemEnvironment();
void QProcessEnvironment_Value2(QProcessEnvironment* self, const char* name, size_t name_Strlen, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen);
void QProcessEnvironment_Delete(QProcessEnvironment* self);

QProcess* QProcess_new();
QProcess* QProcess_new2(QObject* parent);
QMetaObject* QProcess_MetaObject(QProcess* self);
void QProcess_Tr(const char* s, char** _out, int* _out_Strlen);
void QProcess_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QProcess_Start(QProcess* self, const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
void QProcess_StartWithCommand(QProcess* self, const char* command, size_t command_Strlen);
void QProcess_Start2(QProcess* self);
bool QProcess_StartDetached(QProcess* self);
bool QProcess_Open(QProcess* self);
void QProcess_Program(QProcess* self, char** _out, int* _out_Strlen);
void QProcess_SetProgram(QProcess* self, const char* program, size_t program_Strlen);
void QProcess_Arguments(QProcess* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QProcess_SetArguments(QProcess* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
uintptr_t QProcess_ReadChannelMode(QProcess* self);
void QProcess_SetReadChannelMode(QProcess* self, uintptr_t mode);
uintptr_t QProcess_ProcessChannelMode(QProcess* self);
void QProcess_SetProcessChannelMode(QProcess* self, uintptr_t mode);
uintptr_t QProcess_InputChannelMode(QProcess* self);
void QProcess_SetInputChannelMode(QProcess* self, uintptr_t mode);
uintptr_t QProcess_ReadChannel(QProcess* self);
void QProcess_SetReadChannel(QProcess* self, uintptr_t channel);
void QProcess_CloseReadChannel(QProcess* self, uintptr_t channel);
void QProcess_CloseWriteChannel(QProcess* self);
void QProcess_SetStandardInputFile(QProcess* self, const char* fileName, size_t fileName_Strlen);
void QProcess_SetStandardOutputFile(QProcess* self, const char* fileName, size_t fileName_Strlen);
void QProcess_SetStandardErrorFile(QProcess* self, const char* fileName, size_t fileName_Strlen);
void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination);
void QProcess_WorkingDirectory(QProcess* self, char** _out, int* _out_Strlen);
void QProcess_SetWorkingDirectory(QProcess* self, const char* dir, size_t dir_Strlen);
void QProcess_SetEnvironment(QProcess* self, char** environment, uint64_t* environment_Lengths, size_t environment_len);
void QProcess_Environment(QProcess* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QProcess_SetProcessEnvironment(QProcess* self, QProcessEnvironment* environment);
QProcessEnvironment* QProcess_ProcessEnvironment(QProcess* self);
uintptr_t QProcess_Error(QProcess* self);
uintptr_t QProcess_State(QProcess* self);
int64_t QProcess_Pid(QProcess* self);
long long QProcess_ProcessId(QProcess* self);
bool QProcess_WaitForStarted(QProcess* self);
bool QProcess_WaitForReadyRead(QProcess* self);
bool QProcess_WaitForBytesWritten(QProcess* self);
bool QProcess_WaitForFinished(QProcess* self);
QByteArray* QProcess_ReadAllStandardOutput(QProcess* self);
QByteArray* QProcess_ReadAllStandardError(QProcess* self);
int QProcess_ExitCode(QProcess* self);
uintptr_t QProcess_ExitStatus(QProcess* self);
long long QProcess_BytesAvailable(QProcess* self);
long long QProcess_BytesToWrite(QProcess* self);
bool QProcess_IsSequential(QProcess* self);
bool QProcess_CanReadLine(QProcess* self);
void QProcess_Close(QProcess* self);
bool QProcess_AtEnd(QProcess* self);
int QProcess_Execute(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
int QProcess_ExecuteWithCommand(const char* command, size_t command_Strlen);
bool QProcess_StartDetached2(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, const char* workingDirectory, size_t workingDirectory_Strlen);
bool QProcess_StartDetached3(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len);
bool QProcess_StartDetachedWithCommand(const char* command, size_t command_Strlen);
void QProcess_SystemEnvironment(char*** _out, int** _out_Lengths, size_t* _out_len);
void QProcess_NullDevice(char** _out, int* _out_Strlen);
void QProcess_Terminate(QProcess* self);
void QProcess_Kill(QProcess* self);
void QProcess_Finished(QProcess* self, int exitCode);
void QProcess_connect_Finished(QProcess* self, void* slot);
void QProcess_Finished2(QProcess* self, int exitCode, uintptr_t exitStatus);
void QProcess_connect_Finished2(QProcess* self, void* slot);
void QProcess_ErrorWithError(QProcess* self, uintptr_t error);
void QProcess_connect_ErrorWithError(QProcess* self, void* slot);
void QProcess_ErrorOccurred(QProcess* self, uintptr_t error);
void QProcess_connect_ErrorOccurred(QProcess* self, void* slot);
void QProcess_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProcess_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProcess_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QProcess_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QProcess_Start3(QProcess* self, const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, int mode);
void QProcess_Start22(QProcess* self, const char* command, size_t command_Strlen, int mode);
void QProcess_Start1(QProcess* self, int mode);
bool QProcess_StartDetached1(QProcess* self, long long* pid);
bool QProcess_Open1(QProcess* self, int mode);
void QProcess_SetStandardOutputFile2(QProcess* self, const char* fileName, size_t fileName_Strlen, int mode);
void QProcess_SetStandardErrorFile2(QProcess* self, const char* fileName, size_t fileName_Strlen, int mode);
bool QProcess_WaitForStarted1(QProcess* self, int msecs);
bool QProcess_WaitForReadyRead1(QProcess* self, int msecs);
bool QProcess_WaitForBytesWritten1(QProcess* self, int msecs);
bool QProcess_WaitForFinished1(QProcess* self, int msecs);
bool QProcess_StartDetached4(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, const char* workingDirectory, size_t workingDirectory_Strlen, long long* pid);
void QProcess_Delete(QProcess* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
