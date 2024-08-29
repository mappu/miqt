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
class QPainter;
class QPixmap;
class QRect;
class QSize;
class QWindow;
#else
typedef struct QIcon QIcon;
typedef struct QIconEngine QIconEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWindow QWindow;
#endif

QIcon* QIcon_new();
QIcon* QIcon_new2(QPixmap* pixmap);
QIcon* QIcon_new3(QIcon* other);
QIcon* QIcon_new4(const char* fileName, size_t fileName_Strlen);
QIcon* QIcon_new5(QIconEngine* engine);
void QIcon_OperatorAssign(QIcon* self, QIcon* other);
void QIcon_Swap(QIcon* self, QIcon* other);
QPixmap* QIcon_Pixmap(QIcon* self, QSize* size);
QPixmap* QIcon_Pixmap2(QIcon* self, int w, int h);
QPixmap* QIcon_PixmapWithExtent(QIcon* self, int extent);
QPixmap* QIcon_Pixmap3(QIcon* self, QWindow* window, QSize* size);
QSize* QIcon_ActualSize(QIcon* self, QSize* size);
QSize* QIcon_ActualSize2(QIcon* self, QWindow* window, QSize* size);
void QIcon_Name(QIcon* self, char** _out, int* _out_Strlen);
void QIcon_Paint(QIcon* self, QPainter* painter, QRect* rect);
void QIcon_Paint2(QIcon* self, QPainter* painter, int x, int y, int w, int h);
bool QIcon_IsNull(QIcon* self);
bool QIcon_IsDetached(QIcon* self);
void QIcon_Detach(QIcon* self);
long long QIcon_CacheKey(QIcon* self);
void QIcon_AddPixmap(QIcon* self, QPixmap* pixmap);
void QIcon_AddFile(QIcon* self, const char* fileName, size_t fileName_Strlen);
void QIcon_AvailableSizes(QIcon* self, QSize*** _out, size_t* _out_len);
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
QPixmap* QIcon_Pixmap22(QIcon* self, QSize* size, uintptr_t mode);
QPixmap* QIcon_Pixmap32(QIcon* self, QSize* size, uintptr_t mode, uintptr_t state);
QPixmap* QIcon_Pixmap33(QIcon* self, int w, int h, uintptr_t mode);
QPixmap* QIcon_Pixmap4(QIcon* self, int w, int h, uintptr_t mode, uintptr_t state);
QPixmap* QIcon_Pixmap23(QIcon* self, int extent, uintptr_t mode);
QPixmap* QIcon_Pixmap34(QIcon* self, int extent, uintptr_t mode, uintptr_t state);
QPixmap* QIcon_Pixmap35(QIcon* self, QWindow* window, QSize* size, uintptr_t mode);
QPixmap* QIcon_Pixmap42(QIcon* self, QWindow* window, QSize* size, uintptr_t mode, uintptr_t state);
QSize* QIcon_ActualSize22(QIcon* self, QSize* size, uintptr_t mode);
QSize* QIcon_ActualSize3(QIcon* self, QSize* size, uintptr_t mode, uintptr_t state);
QSize* QIcon_ActualSize32(QIcon* self, QWindow* window, QSize* size, uintptr_t mode);
QSize* QIcon_ActualSize4(QIcon* self, QWindow* window, QSize* size, uintptr_t mode, uintptr_t state);
void QIcon_Paint3(QIcon* self, QPainter* painter, QRect* rect, int alignment);
void QIcon_Paint4(QIcon* self, QPainter* painter, QRect* rect, int alignment, uintptr_t mode);
void QIcon_Paint5(QIcon* self, QPainter* painter, QRect* rect, int alignment, uintptr_t mode, uintptr_t state);
void QIcon_Paint6(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment);
void QIcon_Paint7(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, uintptr_t mode);
void QIcon_Paint8(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, uintptr_t mode, uintptr_t state);
void QIcon_AddPixmap2(QIcon* self, QPixmap* pixmap, uintptr_t mode);
void QIcon_AddPixmap3(QIcon* self, QPixmap* pixmap, uintptr_t mode, uintptr_t state);
void QIcon_AddFile2(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size);
void QIcon_AddFile3(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode);
void QIcon_AddFile4(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode, uintptr_t state);
void QIcon_AvailableSizes1(QIcon* self, uintptr_t mode, QSize*** _out, size_t* _out_len);
void QIcon_AvailableSizes2(QIcon* self, uintptr_t mode, uintptr_t state, QSize*** _out, size_t* _out_len);
void QIcon_Delete(QIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
