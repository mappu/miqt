#pragma once
#ifndef MIQT_QT_GEN_QFONTDATABASE_H
#define MIQT_QT_GEN_QFONTDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QFontDatabase;
class QFontInfo;
#else
typedef struct QFont QFont;
typedef struct QFontDatabase QFontDatabase;
typedef struct QFontInfo QFontInfo;
#endif

QFontDatabase* QFontDatabase_new();
struct miqt_array /* of int */  QFontDatabase_standardSizes();
struct miqt_array /* of int */  QFontDatabase_writingSystems(const QFontDatabase* self);
struct miqt_array /* of int */  QFontDatabase_writingSystemsWithFamily(const QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of struct miqt_string */  QFontDatabase_families(const QFontDatabase* self);
struct miqt_array /* of struct miqt_string */  QFontDatabase_styles(const QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_pointSizes(QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_smoothSizes(QFontDatabase* self, struct miqt_string family, struct miqt_string style);
struct miqt_string QFontDatabase_styleString(QFontDatabase* self, QFont* font);
struct miqt_string QFontDatabase_styleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo);
QFont* QFontDatabase_font(const QFontDatabase* self, struct miqt_string family, struct miqt_string style, int pointSize);
bool QFontDatabase_isBitmapScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_isSmoothlyScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_isScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_isFixedPitch(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_italic(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_bold(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
int QFontDatabase_weight(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_hasFamily(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_isPrivateFamily(const QFontDatabase* self, struct miqt_string family);
struct miqt_string QFontDatabase_writingSystemName(int writingSystem);
struct miqt_string QFontDatabase_writingSystemSample(int writingSystem);
int QFontDatabase_addApplicationFont(struct miqt_string fileName);
int QFontDatabase_addApplicationFontFromData(struct miqt_string fontData);
struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFontFamilies(int id);
bool QFontDatabase_removeApplicationFont(int id);
bool QFontDatabase_removeAllApplicationFonts();
bool QFontDatabase_supportsThreadedFontRendering();
QFont* QFontDatabase_systemFont(int type);
struct miqt_array /* of struct miqt_string */  QFontDatabase_families1(const QFontDatabase* self, int writingSystem);
struct miqt_array /* of int */  QFontDatabase_pointSizes2(QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isBitmapScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isSmoothlyScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_isFixedPitch2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
void QFontDatabase_delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
