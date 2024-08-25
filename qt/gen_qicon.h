#ifndef GEN_QICON_H
#define GEN_QICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QIconEngine;
class QPixmap;
#else
typedef struct QIcon QIcon;
typedef struct QIconEngine QIconEngine;
typedef struct QPixmap QPixmap;
#endif

QIcon* QIcon_new();
QIcon* QIcon_new2(QPixmap* pixmap);
QIcon* QIcon_new3(QIcon* other);
QIcon* QIcon_new4(const char* fileName, size_t fileName_Strlen);
QIcon* QIcon_new5(QIconEngine* engine);
void QIcon_OperatorAssign(QIcon* self, QIcon* other);
void QIcon_Swap(QIcon* self, QIcon* other);
void QIcon_Name(QIcon* self, char** _out, int* _out_Strlen);
bool QIcon_IsNull(QIcon* self);
bool QIcon_IsDetached(QIcon* self);
void QIcon_Detach(QIcon* self);
int64_t QIcon_CacheKey(QIcon* self);
void QIcon_SetIsMask(QIcon* self, bool isMask);
bool QIcon_IsMask(QIcon* self);
QIcon* QIcon_FromTheme(const char* name, size_t name_Strlen);
QIcon* QIcon_FromTheme2(const char* name, size_t name_Strlen, QIcon* fallback);
bool QIcon_HasThemeIcon(const char* name, size_t name_Strlen);
void QIcon_ThemeSearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len);
void QIcon_SetThemeSearchPaths(char** searchpath, uint64_t* searchpath_Lengths, size_t searchpath_len);
void QIcon_FallbackSearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len);
void QIcon_SetFallbackSearchPaths(char** paths, uint64_t* paths_Lengths, size_t paths_len);
void QIcon_ThemeName(char** _out, int* _out_Strlen);
void QIcon_SetThemeName(const char* path, size_t path_Strlen);
void QIcon_FallbackThemeName(char** _out, int* _out_Strlen);
void QIcon_SetFallbackThemeName(const char* name, size_t name_Strlen);
void QIcon_Delete(QIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
