#ifndef GEN_QFONTDATABASE_H
#define GEN_QFONTDATABASE_H

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
class QFont;
class QFontDatabase;
class QFontInfo;
#else
typedef struct QByteArray QByteArray;
typedef struct QFont QFont;
typedef struct QFontDatabase QFontDatabase;
typedef struct QFontInfo QFontInfo;
#endif

QFontDatabase* QFontDatabase_new();
struct miqt_array QFontDatabase_StandardSizes();
struct miqt_array QFontDatabase_WritingSystems();
struct miqt_array QFontDatabase_WritingSystemsWithFamily(struct miqt_string family);
struct miqt_array QFontDatabase_Families();
struct miqt_array QFontDatabase_Styles(struct miqt_string family);
struct miqt_array QFontDatabase_PointSizes(struct miqt_string family);
struct miqt_array QFontDatabase_SmoothSizes(struct miqt_string family, struct miqt_string style);
struct miqt_string QFontDatabase_StyleString(QFont* font);
struct miqt_string QFontDatabase_StyleStringWithFontInfo(QFontInfo* fontInfo);
QFont* QFontDatabase_Font(struct miqt_string family, struct miqt_string style, int pointSize);
bool QFontDatabase_IsBitmapScalable(struct miqt_string family);
bool QFontDatabase_IsSmoothlyScalable(struct miqt_string family);
bool QFontDatabase_IsScalable(struct miqt_string family);
bool QFontDatabase_IsFixedPitch(struct miqt_string family);
bool QFontDatabase_Italic(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_Bold(struct miqt_string family, struct miqt_string style);
int QFontDatabase_Weight(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_HasFamily(struct miqt_string family);
bool QFontDatabase_IsPrivateFamily(struct miqt_string family);
struct miqt_string QFontDatabase_WritingSystemName(int writingSystem);
struct miqt_string QFontDatabase_WritingSystemSample(int writingSystem);
int QFontDatabase_AddApplicationFont(struct miqt_string fileName);
int QFontDatabase_AddApplicationFontFromData(struct miqt_string fontData);
struct miqt_array QFontDatabase_ApplicationFontFamilies(int id);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
QFont* QFontDatabase_SystemFont(int typeVal);
struct miqt_array QFontDatabase_Families1(int writingSystem);
struct miqt_array QFontDatabase_PointSizes2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsBitmapScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsSmoothlyScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsScalable2(struct miqt_string family, struct miqt_string style);
bool QFontDatabase_IsFixedPitch2(struct miqt_string family, struct miqt_string style);
void QFontDatabase_Delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
