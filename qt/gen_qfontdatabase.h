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

void QFontDatabase_new(QFontDatabase** outptr_QFontDatabase);
struct miqt_array /* of int */  QFontDatabase_StandardSizes();
struct miqt_array /* of int */  QFontDatabase_WritingSystems(const QFontDatabase* self);
struct miqt_array /* of int */  QFontDatabase_WritingSystemsWithFamily(const QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of struct miqt_string */  QFontDatabase_Families(const QFontDatabase* self);
struct miqt_array /* of struct miqt_string */  QFontDatabase_Styles(const QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_PointSizes(QFontDatabase* self, struct miqt_string family);
struct miqt_array /* of int */  QFontDatabase_SmoothSizes(QFontDatabase* self, struct miqt_string family, struct miqt_string style);
struct miqt_string QFontDatabase_StyleString(QFontDatabase* self, QFont* font);
struct miqt_string QFontDatabase_StyleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo);
QFont* QFontDatabase_Font(const QFontDatabase* self, struct miqt_string family, struct miqt_string style, int pointSize);
bool QFontDatabase_IsBitmapScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_IsSmoothlyScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_IsScalable(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_IsFixedPitch(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_Italic(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_Bold(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
int QFontDatabase_Weight(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_HasFamily(const QFontDatabase* self, struct miqt_string family);
bool QFontDatabase_IsPrivateFamily(const QFontDatabase* self, struct miqt_string family);
struct miqt_string QFontDatabase_WritingSystemName(int writingSystem);
struct miqt_string QFontDatabase_WritingSystemSample(int writingSystem);
int QFontDatabase_AddApplicationFont(struct miqt_string fileName);
int QFontDatabase_AddApplicationFontFromData(struct miqt_string fontData);
struct miqt_array /* of struct miqt_string */  QFontDatabase_ApplicationFontFamilies(int id);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
bool QFontDatabase_SupportsThreadedFontRendering();
QFont* QFontDatabase_SystemFont(int typeVal);
struct miqt_array /* of struct miqt_string */  QFontDatabase_Families1(const QFontDatabase* self, int writingSystem);
struct miqt_array /* of int */  QFontDatabase_PointSizes2(QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsBitmapScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsSmoothlyScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsFixedPitch2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style);
void QFontDatabase_Delete(QFontDatabase* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
