#pragma once
#ifndef MIQT_QT_GEN_QICON_H
#define MIQT_QT_GEN_QICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
class QVariant;
class QWindow;
#else
typedef struct QIcon QIcon;
typedef struct QIconEngine QIconEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWindow QWindow;
#endif

QIcon* QIcon_new();
QIcon* QIcon_new2(QPixmap* pixmap);
QIcon* QIcon_new3(QIcon* other);
QIcon* QIcon_new4(struct miqt_string fileName);
QIcon* QIcon_new5(QIconEngine* engine);
void QIcon_operatorAssign(QIcon* self, QIcon* other);
void QIcon_swap(QIcon* self, QIcon* other);
QVariant* QIcon_ToQVariant(const QIcon* self);
QPixmap* QIcon_pixmap(const QIcon* self, QSize* size);
QPixmap* QIcon_pixmap2(const QIcon* self, int w, int h);
QPixmap* QIcon_pixmapWithExtent(const QIcon* self, int extent);
QPixmap* QIcon_pixmap3(const QIcon* self, QWindow* window, QSize* size);
QSize* QIcon_actualSize(const QIcon* self, QSize* size);
QSize* QIcon_actualSize2(const QIcon* self, QWindow* window, QSize* size);
struct miqt_string QIcon_name(const QIcon* self);
void QIcon_paint(const QIcon* self, QPainter* painter, QRect* rect);
void QIcon_paint2(const QIcon* self, QPainter* painter, int x, int y, int w, int h);
bool QIcon_isNull(const QIcon* self);
bool QIcon_isDetached(const QIcon* self);
void QIcon_detach(QIcon* self);
long long QIcon_cacheKey(const QIcon* self);
void QIcon_addPixmap(QIcon* self, QPixmap* pixmap);
void QIcon_addFile(QIcon* self, struct miqt_string fileName);
struct miqt_array /* of QSize* */  QIcon_availableSizes(const QIcon* self);
void QIcon_setIsMask(QIcon* self, bool isMask);
bool QIcon_isMask(const QIcon* self);
QIcon* QIcon_fromTheme(struct miqt_string name);
QIcon* QIcon_fromTheme2(struct miqt_string name, QIcon* fallback);
bool QIcon_hasThemeIcon(struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QIcon_themeSearchPaths();
void QIcon_setThemeSearchPaths(struct miqt_array /* of struct miqt_string */  searchpath);
struct miqt_array /* of struct miqt_string */  QIcon_fallbackSearchPaths();
void QIcon_setFallbackSearchPaths(struct miqt_array /* of struct miqt_string */  paths);
struct miqt_string QIcon_themeName();
void QIcon_setThemeName(struct miqt_string path);
struct miqt_string QIcon_fallbackThemeName();
void QIcon_setFallbackThemeName(struct miqt_string name);
QPixmap* QIcon_pixmap4(const QIcon* self, QSize* size, int mode);
QPixmap* QIcon_pixmap5(const QIcon* self, QSize* size, int mode, int state);
QPixmap* QIcon_pixmap6(const QIcon* self, int w, int h, int mode);
QPixmap* QIcon_pixmap7(const QIcon* self, int w, int h, int mode, int state);
QPixmap* QIcon_pixmap8(const QIcon* self, int extent, int mode);
QPixmap* QIcon_pixmap9(const QIcon* self, int extent, int mode, int state);
QPixmap* QIcon_pixmap10(const QIcon* self, QWindow* window, QSize* size, int mode);
QPixmap* QIcon_pixmap11(const QIcon* self, QWindow* window, QSize* size, int mode, int state);
QSize* QIcon_actualSize3(const QIcon* self, QSize* size, int mode);
QSize* QIcon_actualSize4(const QIcon* self, QSize* size, int mode, int state);
QSize* QIcon_actualSize5(const QIcon* self, QWindow* window, QSize* size, int mode);
QSize* QIcon_actualSize6(const QIcon* self, QWindow* window, QSize* size, int mode, int state);
void QIcon_paint3(const QIcon* self, QPainter* painter, QRect* rect, int alignment);
void QIcon_paint4(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode);
void QIcon_paint5(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode, int state);
void QIcon_paint6(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment);
void QIcon_paint7(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode);
void QIcon_paint8(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode, int state);
void QIcon_addPixmap2(QIcon* self, QPixmap* pixmap, int mode);
void QIcon_addPixmap3(QIcon* self, QPixmap* pixmap, int mode, int state);
void QIcon_addFile2(QIcon* self, struct miqt_string fileName, QSize* size);
void QIcon_addFile3(QIcon* self, struct miqt_string fileName, QSize* size, int mode);
void QIcon_addFile4(QIcon* self, struct miqt_string fileName, QSize* size, int mode, int state);
struct miqt_array /* of QSize* */  QIcon_availableSizesWithMode(const QIcon* self, int mode);
struct miqt_array /* of QSize* */  QIcon_availableSizes2(const QIcon* self, int mode, int state);

void QIcon_delete(QIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
