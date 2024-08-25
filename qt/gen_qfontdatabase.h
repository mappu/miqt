#ifndef GEN_QFONTDATABASE_H
#define GEN_QFONTDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QFontDatabase_StandardSizes(int** _out, size_t* _out_len);
void QFontDatabase_Styles(QFontDatabase* self, const char* family, size_t family_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFontDatabase_PointSizes(QFontDatabase* self, const char* family, size_t family_Strlen, int** _out, size_t* _out_len);
void QFontDatabase_SmoothSizes(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int** _out, size_t* _out_len);
void QFontDatabase_StyleString(QFontDatabase* self, QFont* font, char** _out, int* _out_Strlen);
void QFontDatabase_StyleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo, char** _out, int* _out_Strlen);
QFont* QFontDatabase_Font(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int pointSize);
bool QFontDatabase_IsBitmapScalable(QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsSmoothlyScalable(QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsScalable(QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsFixedPitch(QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_Italic(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_Bold(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
int QFontDatabase_Weight(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_HasFamily(QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsPrivateFamily(QFontDatabase* self, const char* family, size_t family_Strlen);
int QFontDatabase_AddApplicationFont(const char* fileName, size_t fileName_Strlen);
int QFontDatabase_AddApplicationFontFromData(QByteArray* fontData);
void QFontDatabase_ApplicationFontFamilies(int id, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
bool QFontDatabase_SupportsThreadedFontRendering();
void QFontDatabase_PointSizes2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int** _out, size_t* _out_len);
bool QFontDatabase_IsBitmapScalable2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsSmoothlyScalable2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsScalable2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsFixedPitch2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
void QFontDatabase_Delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
