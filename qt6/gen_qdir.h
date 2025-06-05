#pragma once
#ifndef MIQT_QT6_GEN_QDIR_H
#define MIQT_QT6_GEN_QDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QDir* QDir_new3(struct miqt_string path, struct miqt_string nameFilter);
QDir* QDir_new4(struct miqt_string path);
QDir* QDir_new5(struct miqt_string path, struct miqt_string nameFilter, int sort);
QDir* QDir_new6(struct miqt_string path, struct miqt_string nameFilter, int sort, int filter);
void QDir_operatorAssign(QDir* self, QDir* param1);
void QDir_swap(QDir* self, QDir* other);
void QDir_setPath(QDir* self, struct miqt_string path);
struct miqt_string QDir_path(const QDir* self);
struct miqt_string QDir_absolutePath(const QDir* self);
struct miqt_string QDir_canonicalPath(const QDir* self);
void QDir_setSearchPaths(struct miqt_string prefix, struct miqt_array /* of struct miqt_string */  searchPaths);
void QDir_addSearchPath(struct miqt_string prefix, struct miqt_string path);
struct miqt_array /* of struct miqt_string */  QDir_searchPaths(struct miqt_string prefix);
struct miqt_string QDir_dirName(const QDir* self);
struct miqt_string QDir_filePath(const QDir* self, struct miqt_string fileName);
struct miqt_string QDir_absoluteFilePath(const QDir* self, struct miqt_string fileName);
struct miqt_string QDir_relativeFilePath(const QDir* self, struct miqt_string fileName);
struct miqt_string QDir_toNativeSeparators(struct miqt_string pathName);
struct miqt_string QDir_fromNativeSeparators(struct miqt_string pathName);
bool QDir_cd(QDir* self, struct miqt_string dirName);
bool QDir_cdUp(QDir* self);
struct miqt_array /* of struct miqt_string */  QDir_nameFilters(const QDir* self);
void QDir_setNameFilters(QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
int QDir_filter(const QDir* self);
void QDir_setFilter(QDir* self, int filter);
int QDir_sorting(const QDir* self);
void QDir_setSorting(QDir* self, int sort);
unsigned int QDir_count(const QDir* self);
bool QDir_isEmpty(const QDir* self);
struct miqt_string QDir_operatorSubscript(const QDir* self, int param1);
struct miqt_array /* of struct miqt_string */  QDir_nameFiltersFromString(struct miqt_string nameFilter);
struct miqt_array /* of struct miqt_string */  QDir_entryList(const QDir* self);
struct miqt_array /* of struct miqt_string */  QDir_entryListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoList(const QDir* self);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
bool QDir_mkdir(const QDir* self, struct miqt_string dirName);
bool QDir_mkdir2(const QDir* self, struct miqt_string dirName, int permissions);
bool QDir_rmdir(const QDir* self, struct miqt_string dirName);
bool QDir_mkpath(const QDir* self, struct miqt_string dirPath);
bool QDir_rmpath(const QDir* self, struct miqt_string dirPath);
bool QDir_removeRecursively(QDir* self);
bool QDir_isReadable(const QDir* self);
bool QDir_exists(const QDir* self);
bool QDir_isRoot(const QDir* self);
bool QDir_isRelativePath(struct miqt_string path);
bool QDir_isAbsolutePath(struct miqt_string path);
bool QDir_isRelative(const QDir* self);
bool QDir_isAbsolute(const QDir* self);
bool QDir_makeAbsolute(QDir* self);
bool QDir_operatorEqual(const QDir* self, QDir* dir);
bool QDir_operatorNotEqual(const QDir* self, QDir* dir);
bool QDir_remove(QDir* self, struct miqt_string fileName);
bool QDir_rename(QDir* self, struct miqt_string oldName, struct miqt_string newName);
bool QDir_existsWithName(const QDir* self, struct miqt_string name);
struct miqt_array /* of QFileInfo* */  QDir_drives();
QChar* QDir_listSeparator();
QChar* QDir_separator();
bool QDir_setCurrent(struct miqt_string path);
QDir* QDir_current();
struct miqt_string QDir_currentPath();
QDir* QDir_home();
struct miqt_string QDir_homePath();
QDir* QDir_root();
struct miqt_string QDir_rootPath();
QDir* QDir_temp();
struct miqt_string QDir_tempPath();
bool QDir_match(struct miqt_array /* of struct miqt_string */  filters, struct miqt_string fileName);
bool QDir_match2(struct miqt_string filter, struct miqt_string fileName);
struct miqt_string QDir_cleanPath(struct miqt_string path);
void QDir_refresh(const QDir* self);
bool QDir_isEmptyWithFilters(const QDir* self, int filters);
struct miqt_array /* of struct miqt_string */  QDir_entryListWithFilters(const QDir* self, int filters);
struct miqt_array /* of struct miqt_string */  QDir_entryList2(const QDir* self, int filters, int sort);
struct miqt_array /* of struct miqt_string */  QDir_entryList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters);
struct miqt_array /* of struct miqt_string */  QDir_entryList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithFilters(const QDir* self, int filters);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoList2(const QDir* self, int filters, int sort);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters);
struct miqt_array /* of QFileInfo* */  QDir_entryInfoList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort);

void QDir_delete(QDir* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
