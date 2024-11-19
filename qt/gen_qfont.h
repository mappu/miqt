#pragma once
#ifndef MIQT_QT_GEN_QFONT_H
#define MIQT_QT_GEN_QFONT_H

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
class QPaintDevice;
#else
typedef struct QFont QFont;
typedef struct QPaintDevice QPaintDevice;
#endif

void QFont_new(QFont** outptr_QFont);
void QFont_new2(struct miqt_string family, QFont** outptr_QFont);
void QFont_new3(QFont* font, QPaintDevice* pd, QFont** outptr_QFont);
void QFont_new4(QFont* font, QPaintDevice* pd, QFont** outptr_QFont);
void QFont_new5(QFont* font, QFont** outptr_QFont);
void QFont_new6(struct miqt_string family, int pointSize, QFont** outptr_QFont);
void QFont_new7(struct miqt_string family, int pointSize, int weight, QFont** outptr_QFont);
void QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic, QFont** outptr_QFont);
void QFont_Swap(QFont* self, QFont* other);
struct miqt_string QFont_Family(const QFont* self);
void QFont_SetFamily(QFont* self, struct miqt_string family);
struct miqt_array /* of struct miqt_string */  QFont_Families(const QFont* self);
void QFont_SetFamilies(QFont* self, struct miqt_array /* of struct miqt_string */  families);
struct miqt_string QFont_StyleName(const QFont* self);
void QFont_SetStyleName(QFont* self, struct miqt_string styleName);
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
void QFont_SetStyle(QFont* self, int style);
int QFont_Style(const QFont* self);
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
int QFont_StyleHint(const QFont* self);
int QFont_StyleStrategy(const QFont* self);
void QFont_SetStyleHint(QFont* self, int param1);
void QFont_SetStyleStrategy(QFont* self, int s);
int QFont_Stretch(const QFont* self);
void QFont_SetStretch(QFont* self, int stretch);
double QFont_LetterSpacing(const QFont* self);
int QFont_LetterSpacingType(const QFont* self);
void QFont_SetLetterSpacing(QFont* self, int typeVal, double spacing);
double QFont_WordSpacing(const QFont* self);
void QFont_SetWordSpacing(QFont* self, double spacing);
void QFont_SetCapitalization(QFont* self, int capitalization);
int QFont_Capitalization(const QFont* self);
void QFont_SetHintingPreference(QFont* self, int hintingPreference);
int QFont_HintingPreference(const QFont* self);
bool QFont_RawMode(const QFont* self);
void QFont_SetRawMode(QFont* self, bool rawMode);
bool QFont_ExactMatch(const QFont* self);
void QFont_OperatorAssign(QFont* self, QFont* param1);
bool QFont_OperatorEqual(const QFont* self, QFont* param1);
bool QFont_OperatorNotEqual(const QFont* self, QFont* param1);
bool QFont_OperatorLesser(const QFont* self, QFont* param1);
bool QFont_IsCopyOf(const QFont* self, QFont* param1);
void QFont_SetRawName(QFont* self, struct miqt_string rawName);
struct miqt_string QFont_RawName(const QFont* self);
struct miqt_string QFont_Key(const QFont* self);
struct miqt_string QFont_ToString(const QFont* self);
bool QFont_FromString(QFont* self, struct miqt_string param1);
struct miqt_string QFont_Substitute(struct miqt_string param1);
struct miqt_array /* of struct miqt_string */  QFont_Substitutes(struct miqt_string param1);
struct miqt_array /* of struct miqt_string */  QFont_Substitutions();
void QFont_InsertSubstitution(struct miqt_string param1, struct miqt_string param2);
void QFont_InsertSubstitutions(struct miqt_string param1, struct miqt_array /* of struct miqt_string */  param2);
void QFont_RemoveSubstitutions(struct miqt_string param1);
void QFont_Initialize();
void QFont_Cleanup();
void QFont_CacheStatistics();
struct miqt_string QFont_DefaultFamily(const QFont* self);
struct miqt_string QFont_LastResortFamily(const QFont* self);
struct miqt_string QFont_LastResortFont(const QFont* self);
QFont* QFont_Resolve(const QFont* self, QFont* param1);
unsigned int QFont_Resolve2(const QFont* self);
void QFont_ResolveWithMask(QFont* self, unsigned int mask);
void QFont_SetStyleHint2(QFont* self, int param1, int param2);
void QFont_Delete(QFont* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
