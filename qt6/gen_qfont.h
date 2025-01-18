#pragma once
#ifndef MIQT_QT6_GEN_QFONT_H
#define MIQT_QT6_GEN_QFONT_H

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
class QVariant;
#else
typedef struct QFont QFont;
typedef struct QPaintDevice QPaintDevice;
typedef struct QVariant QVariant;
#endif

QFont* QFont_new();
QFont* QFont_new2(struct miqt_string family);
QFont* QFont_new3(struct miqt_array /* of struct miqt_string */  families);
QFont* QFont_new4(QFont* font, QPaintDevice* pd);
QFont* QFont_new5(QFont* font);
QFont* QFont_new6(struct miqt_string family, int pointSize);
QFont* QFont_new7(struct miqt_string family, int pointSize, int weight);
QFont* QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic);
QFont* QFont_new9(struct miqt_array /* of struct miqt_string */  families, int pointSize);
QFont* QFont_new10(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight);
QFont* QFont_new11(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight, bool italic);
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
bool QFont_ExactMatch(const QFont* self);
void QFont_OperatorAssign(QFont* self, QFont* param1);
bool QFont_OperatorEqual(const QFont* self, QFont* param1);
bool QFont_OperatorNotEqual(const QFont* self, QFont* param1);
bool QFont_OperatorLesser(const QFont* self, QFont* param1);
QVariant* QFont_ToQVariant(const QFont* self);
bool QFont_IsCopyOf(const QFont* self, QFont* param1);
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
QFont* QFont_Resolve(const QFont* self, QFont* param1);
unsigned int QFont_ResolveMask(const QFont* self);
void QFont_SetResolveMask(QFont* self, unsigned int mask);
void QFont_SetLegacyWeight(QFont* self, int legacyWeight);
int QFont_LegacyWeight(const QFont* self);
void QFont_SetStyleHint2(QFont* self, int param1, int param2);
void QFont_Delete(QFont* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
