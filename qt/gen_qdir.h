#ifndef GEN_QDIR_H
#define GEN_QDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QDir;
class QFileInfo;
#else
typedef struct QChar QChar;
typedef struct QDir QDir;
typedef struct QFileInfo QFileInfo;
#endif

QDir* QDir_new(QDir* param1);
QDir* QDir_new2();
QDir* QDir_new3(struct miqt_string* path, struct miqt_string* nameFilter);
QDir* QDir_new4(struct miqt_string* path);
QDir* QDir_new5(struct miqt_string* path, struct miqt_string* nameFilter, int sort);
QDir* QDir_new6(struct miqt_string* path, struct miqt_string* nameFilter, int sort, int filter);
void QDir_OperatorAssign(QDir* self, QDir* param1);
void QDir_OperatorAssignWithPath(QDir* self, struct miqt_string* path);
void QDir_Swap(QDir* self, QDir* other);
void QDir_SetPath(QDir* self, struct miqt_string* path);
struct miqt_string* QDir_Path(const QDir* self);
struct miqt_string* QDir_AbsolutePath(const QDir* self);
struct miqt_string* QDir_CanonicalPath(const QDir* self);
void QDir_AddResourceSearchPath(struct miqt_string* path);
void QDir_SetSearchPaths(struct miqt_string* prefix, struct miqt_array* /* of struct miqt_string* */ searchPaths);
void QDir_AddSearchPath(struct miqt_string* prefix, struct miqt_string* path);
struct miqt_array* QDir_SearchPaths(struct miqt_string* prefix);
struct miqt_string* QDir_DirName(const QDir* self);
struct miqt_string* QDir_FilePath(const QDir* self, struct miqt_string* fileName);
struct miqt_string* QDir_AbsoluteFilePath(const QDir* self, struct miqt_string* fileName);
struct miqt_string* QDir_RelativeFilePath(const QDir* self, struct miqt_string* fileName);
struct miqt_string* QDir_ToNativeSeparators(struct miqt_string* pathName);
struct miqt_string* QDir_FromNativeSeparators(struct miqt_string* pathName);
bool QDir_Cd(QDir* self, struct miqt_string* dirName);
bool QDir_CdUp(QDir* self);
struct miqt_array* QDir_NameFilters(const QDir* self);
void QDir_SetNameFilters(QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters);
int QDir_Filter(const QDir* self);
void QDir_SetFilter(QDir* self, int filter);
int QDir_Sorting(const QDir* self);
void QDir_SetSorting(QDir* self, int sort);
unsigned int QDir_Count(const QDir* self);
bool QDir_IsEmpty(const QDir* self);
struct miqt_string* QDir_OperatorSubscript(const QDir* self, int param1);
struct miqt_array* QDir_NameFiltersFromString(struct miqt_string* nameFilter);
struct miqt_array* QDir_EntryList(const QDir* self);
struct miqt_array* QDir_EntryListWithNameFilters(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters);
struct miqt_array* QDir_EntryInfoList(const QDir* self);
struct miqt_array* QDir_EntryInfoListWithNameFilters(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters);
bool QDir_Mkdir(const QDir* self, struct miqt_string* dirName);
bool QDir_Rmdir(const QDir* self, struct miqt_string* dirName);
bool QDir_Mkpath(const QDir* self, struct miqt_string* dirPath);
bool QDir_Rmpath(const QDir* self, struct miqt_string* dirPath);
bool QDir_RemoveRecursively(QDir* self);
bool QDir_IsReadable(const QDir* self);
bool QDir_Exists(const QDir* self);
bool QDir_IsRoot(const QDir* self);
bool QDir_IsRelativePath(struct miqt_string* path);
bool QDir_IsAbsolutePath(struct miqt_string* path);
bool QDir_IsRelative(const QDir* self);
bool QDir_IsAbsolute(const QDir* self);
bool QDir_MakeAbsolute(QDir* self);
bool QDir_OperatorEqual(const QDir* self, QDir* dir);
bool QDir_OperatorNotEqual(const QDir* self, QDir* dir);
bool QDir_Remove(QDir* self, struct miqt_string* fileName);
bool QDir_Rename(QDir* self, struct miqt_string* oldName, struct miqt_string* newName);
bool QDir_ExistsWithName(const QDir* self, struct miqt_string* name);
struct miqt_array* QDir_Drives();
QChar* QDir_ListSeparator();
QChar* QDir_Separator();
bool QDir_SetCurrent(struct miqt_string* path);
QDir* QDir_Current();
struct miqt_string* QDir_CurrentPath();
QDir* QDir_Home();
struct miqt_string* QDir_HomePath();
QDir* QDir_Root();
struct miqt_string* QDir_RootPath();
QDir* QDir_Temp();
struct miqt_string* QDir_TempPath();
bool QDir_Match(struct miqt_array* /* of struct miqt_string* */ filters, struct miqt_string* fileName);
bool QDir_Match2(struct miqt_string* filter, struct miqt_string* fileName);
struct miqt_string* QDir_CleanPath(struct miqt_string* path);
void QDir_Refresh(const QDir* self);
bool QDir_IsEmpty1(const QDir* self, int filters);
struct miqt_array* QDir_EntryList1(const QDir* self, int filters);
struct miqt_array* QDir_EntryList2(const QDir* self, int filters, int sort);
struct miqt_array* QDir_EntryList22(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters);
struct miqt_array* QDir_EntryList3(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort);
struct miqt_array* QDir_EntryInfoList1(const QDir* self, int filters);
struct miqt_array* QDir_EntryInfoList2(const QDir* self, int filters, int sort);
struct miqt_array* QDir_EntryInfoList22(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters);
struct miqt_array* QDir_EntryInfoList3(const QDir* self, struct miqt_array* /* of struct miqt_string* */ nameFilters, int filters, int sort);
void QDir_Delete(QDir* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
