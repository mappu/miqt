#ifndef GEN_QFONT_H
#define GEN_QFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPaintDevice;
#else
typedef struct QFont QFont;
typedef struct QPaintDevice QPaintDevice;
#endif

QFont* QFont_new();
QFont* QFont_new2(const char* family, size_t family_Strlen);
QFont* QFont_new3(QFont* font, QPaintDevice* pd);
QFont* QFont_new4(QFont* font, QPaintDevice* pd);
QFont* QFont_new5(QFont* font);
QFont* QFont_new6(const char* family, size_t family_Strlen, int pointSize);
QFont* QFont_new7(const char* family, size_t family_Strlen, int pointSize, int weight);
QFont* QFont_new8(const char* family, size_t family_Strlen, int pointSize, int weight, bool italic);
void QFont_Swap(QFont* self, QFont* other);
void QFont_Family(const QFont* self, char** _out, int* _out_Strlen);
void QFont_SetFamily(QFont* self, const char* family, size_t family_Strlen);
void QFont_Families(const QFont* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFont_SetFamilies(QFont* self, char** families, uint64_t* families_Lengths, size_t families_len);
void QFont_StyleName(const QFont* self, char** _out, int* _out_Strlen);
void QFont_SetStyleName(QFont* self, const char* styleName, size_t styleName_Strlen);
int QFont_PointSize(const QFont* self);
void QFont_SetPointSize(QFont* self, int pointSize);
double QFont_PointSizeF(const QFont* self);
void QFont_SetPointSizeF(QFont* self, double pointSizeF);
int QFont_PixelSize(const QFont* self);
void QFont_SetPixelSize(QFont* self, int pixelSize);
int QFont_Weight(const QFont* self);
void QFont_SetWeight(QFont* self, int weight);
bool QFont_Bold(const QFont* self);
void QFont_SetBold(QFont* self, bool bold);
void QFont_SetStyle(QFont* self, uintptr_t style);
uintptr_t QFont_Style(const QFont* self);
bool QFont_Italic(const QFont* self);
void QFont_SetItalic(QFont* self, bool b);
bool QFont_Underline(const QFont* self);
void QFont_SetUnderline(QFont* self, bool underline);
bool QFont_Overline(const QFont* self);
void QFont_SetOverline(QFont* self, bool overline);
bool QFont_StrikeOut(const QFont* self);
void QFont_SetStrikeOut(QFont* self, bool strikeOut);
bool QFont_FixedPitch(const QFont* self);
void QFont_SetFixedPitch(QFont* self, bool fixedPitch);
bool QFont_Kerning(const QFont* self);
void QFont_SetKerning(QFont* self, bool kerning);
uintptr_t QFont_StyleHint(const QFont* self);
uintptr_t QFont_StyleStrategy(const QFont* self);
void QFont_SetStyleHint(QFont* self, uintptr_t param1);
void QFont_SetStyleStrategy(QFont* self, uintptr_t s);
int QFont_Stretch(const QFont* self);
void QFont_SetStretch(QFont* self, int stretch);
double QFont_LetterSpacing(const QFont* self);
uintptr_t QFont_LetterSpacingType(const QFont* self);
void QFont_SetLetterSpacing(QFont* self, uintptr_t typeVal, double spacing);
double QFont_WordSpacing(const QFont* self);
void QFont_SetWordSpacing(QFont* self, double spacing);
void QFont_SetCapitalization(QFont* self, uintptr_t capitalization);
uintptr_t QFont_Capitalization(const QFont* self);
void QFont_SetHintingPreference(QFont* self, uintptr_t hintingPreference);
uintptr_t QFont_HintingPreference(const QFont* self);
bool QFont_RawMode(const QFont* self);
void QFont_SetRawMode(QFont* self, bool rawMode);
bool QFont_ExactMatch(const QFont* self);
void QFont_OperatorAssign(QFont* self, QFont* param1);
bool QFont_OperatorEqual(const QFont* self, QFont* param1);
bool QFont_OperatorNotEqual(const QFont* self, QFont* param1);
bool QFont_OperatorLesser(const QFont* self, QFont* param1);
bool QFont_IsCopyOf(const QFont* self, QFont* param1);
void QFont_SetRawName(QFont* self, const char* rawName, size_t rawName_Strlen);
void QFont_RawName(const QFont* self, char** _out, int* _out_Strlen);
void QFont_Key(const QFont* self, char** _out, int* _out_Strlen);
void QFont_ToString(const QFont* self, char** _out, int* _out_Strlen);
bool QFont_FromString(QFont* self, const char* param1, size_t param1_Strlen);
void QFont_Substitute(const char* param1, size_t param1_Strlen, char** _out, int* _out_Strlen);
void QFont_Substitutes(const char* param1, size_t param1_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFont_Substitutions(char*** _out, int** _out_Lengths, size_t* _out_len);
void QFont_InsertSubstitution(const char* param1, size_t param1_Strlen, const char* param2, size_t param2_Strlen);
void QFont_InsertSubstitutions(const char* param1, size_t param1_Strlen, char** param2, uint64_t* param2_Lengths, size_t param2_len);
void QFont_RemoveSubstitutions(const char* param1, size_t param1_Strlen);
void QFont_Initialize();
void QFont_Cleanup();
void QFont_CacheStatistics();
void QFont_DefaultFamily(const QFont* self, char** _out, int* _out_Strlen);
void QFont_LastResortFamily(const QFont* self, char** _out, int* _out_Strlen);
void QFont_LastResortFont(const QFont* self, char** _out, int* _out_Strlen);
QFont* QFont_Resolve(const QFont* self, QFont* param1);
unsigned int QFont_Resolve2(const QFont* self);
void QFont_ResolveWithMask(QFont* self, unsigned int mask);
void QFont_SetStyleHint2(QFont* self, uintptr_t param1, uintptr_t param2);
void QFont_Delete(QFont* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
