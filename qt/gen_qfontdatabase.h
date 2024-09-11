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
void QFontDatabase_WritingSystems(const QFontDatabase* self, uintptr_t** _out, size_t* _out_len);
void QFontDatabase_WritingSystemsWithFamily(const QFontDatabase* self, const char* family, size_t family_Strlen, uintptr_t** _out, size_t* _out_len);
void QFontDatabase_Families(const QFontDatabase* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFontDatabase_Styles(const QFontDatabase* self, const char* family, size_t family_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFontDatabase_PointSizes(QFontDatabase* self, const char* family, size_t family_Strlen, int** _out, size_t* _out_len);
void QFontDatabase_SmoothSizes(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int** _out, size_t* _out_len);
void QFontDatabase_StyleString(QFontDatabase* self, QFont* font, char** _out, int* _out_Strlen);
void QFontDatabase_StyleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo, char** _out, int* _out_Strlen);
QFont* QFontDatabase_Font(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int pointSize);
bool QFontDatabase_IsBitmapScalable(const QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsSmoothlyScalable(const QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsScalable(const QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsFixedPitch(const QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_Italic(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_Bold(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
int QFontDatabase_Weight(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_HasFamily(const QFontDatabase* self, const char* family, size_t family_Strlen);
bool QFontDatabase_IsPrivateFamily(const QFontDatabase* self, const char* family, size_t family_Strlen);
void QFontDatabase_WritingSystemName(uintptr_t writingSystem, char** _out, int* _out_Strlen);
void QFontDatabase_WritingSystemSample(uintptr_t writingSystem, char** _out, int* _out_Strlen);
int QFontDatabase_AddApplicationFont(const char* fileName, size_t fileName_Strlen);
int QFontDatabase_AddApplicationFontFromData(QByteArray* fontData);
void QFontDatabase_ApplicationFontFamilies(int id, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QFontDatabase_RemoveApplicationFont(int id);
bool QFontDatabase_RemoveAllApplicationFonts();
bool QFontDatabase_SupportsThreadedFontRendering();
QFont* QFontDatabase_SystemFont(uintptr_t typeVal);
void QFontDatabase_Families1(const QFontDatabase* self, uintptr_t writingSystem, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFontDatabase_PointSizes2(QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen, int** _out, size_t* _out_len);
bool QFontDatabase_IsBitmapScalable2(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsSmoothlyScalable2(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsScalable2(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
bool QFontDatabase_IsFixedPitch2(const QFontDatabase* self, const char* family, size_t family_Strlen, const char* style, size_t style_Strlen);
void QFontDatabase_Delete(QFontDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
