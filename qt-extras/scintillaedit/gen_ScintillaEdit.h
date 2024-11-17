#pragma once
#ifndef MIQT_QT_EXTRAS_SCINTILLAEDIT_GEN_SCINTILLAEDIT_H
#define MIQT_QT_EXTRAS_SCINTILLAEDIT_GEN_SCINTILLAEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QKeyEvent;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QRect;
class QWidget;
class SCNotification;
class Sci_CharacterRange;
class Sci_CharacterRangeFull;
class Sci_NotifyHeader;
class Sci_RangeToFormat;
class Sci_RangeToFormatFull;
class Sci_Rectangle;
class Sci_TextRange;
class Sci_TextRangeFull;
class Sci_TextToFind;
class Sci_TextToFindFull;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRange)
typedef Scintilla::CharacterRange Scintilla__CharacterRange;
#else
class Scintilla__CharacterRange;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRangeFull)
typedef Scintilla::CharacterRangeFull Scintilla__CharacterRangeFull;
#else
class Scintilla__CharacterRangeFull;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourRGBA)
typedef Scintilla::Internal::ColourRGBA Scintilla__Internal__ColourRGBA;
#else
class Scintilla__Internal__ColourRGBA;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourStop)
typedef Scintilla::Internal::ColourStop Scintilla__Internal__ColourStop;
#else
class Scintilla__Internal__ColourStop;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Fill)
typedef Scintilla::Internal::Fill Scintilla__Internal__Fill;
#else
class Scintilla__Internal__Fill;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FillStroke)
typedef Scintilla::Internal::FillStroke Scintilla__Internal__FillStroke;
#else
class Scintilla__Internal__FillStroke;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Font)
typedef Scintilla::Internal::Font Scintilla__Internal__Font;
#else
class Scintilla__Internal__Font;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FontParameters)
typedef Scintilla::Internal::FontParameters Scintilla__Internal__FontParameters;
#else
class Scintilla__Internal__FontParameters;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IListBoxDelegate)
typedef Scintilla::Internal::IListBoxDelegate Scintilla__Internal__IListBoxDelegate;
#else
class Scintilla__Internal__IListBoxDelegate;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLine)
typedef Scintilla::Internal::IScreenLine Scintilla__Internal__IScreenLine;
#else
class Scintilla__Internal__IScreenLine;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLineLayout)
typedef Scintilla::Internal::IScreenLineLayout Scintilla__Internal__IScreenLineLayout;
#else
class Scintilla__Internal__IScreenLineLayout;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Interval)
typedef Scintilla::Internal::Interval Scintilla__Internal__Interval;
#else
class Scintilla__Internal__Interval;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBox)
typedef Scintilla::Internal::ListBox Scintilla__Internal__ListBox;
#else
class Scintilla__Internal__ListBox;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBoxEvent)
typedef Scintilla::Internal::ListBoxEvent Scintilla__Internal__ListBoxEvent;
#else
class Scintilla__Internal__ListBoxEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListOptions)
typedef Scintilla::Internal::ListOptions Scintilla__Internal__ListOptions;
#else
class Scintilla__Internal__ListOptions;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Menu)
typedef Scintilla::Internal::Menu Scintilla__Internal__Menu;
#else
class Scintilla__Internal__Menu;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__PRectangle)
typedef Scintilla::Internal::PRectangle Scintilla__Internal__PRectangle;
#else
class Scintilla__Internal__PRectangle;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Point)
typedef Scintilla::Internal::Point Scintilla__Internal__Point;
#else
class Scintilla__Internal__Point;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Stroke)
typedef Scintilla::Internal::Stroke Scintilla__Internal__Stroke;
#else
class Scintilla__Internal__Stroke;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Surface)
typedef Scintilla::Internal::Surface Scintilla__Internal__Surface;
#else
class Scintilla__Internal__Surface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__SurfaceMode)
typedef Scintilla::Internal::SurfaceMode Scintilla__Internal__SurfaceMode;
#else
class Scintilla__Internal__SurfaceMode;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Window)
typedef Scintilla::Internal::Window Scintilla__Internal__Window;
#else
class Scintilla__Internal__Window;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotificationData)
typedef Scintilla::NotificationData Scintilla__NotificationData;
#else
class Scintilla__NotificationData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotifyHeader)
typedef Scintilla::NotifyHeader Scintilla__NotifyHeader;
#else
class Scintilla__NotifyHeader;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormat)
typedef Scintilla::RangeToFormat Scintilla__RangeToFormat;
#else
class Scintilla__RangeToFormat;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormatFull)
typedef Scintilla::RangeToFormatFull Scintilla__RangeToFormatFull;
#else
class Scintilla__RangeToFormatFull;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Rectangle)
typedef Scintilla::Rectangle Scintilla__Rectangle;
#else
class Scintilla__Rectangle;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRange)
typedef Scintilla::TextRange Scintilla__TextRange;
#else
class Scintilla__TextRange;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRangeFull)
typedef Scintilla::TextRangeFull Scintilla__TextRangeFull;
#else
class Scintilla__TextRangeFull;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFind)
typedef Scintilla::TextToFind Scintilla__TextToFind;
#else
class Scintilla__TextToFind;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFindFull)
typedef Scintilla::TextToFindFull Scintilla__TextToFindFull;
#else
class Scintilla__TextToFindFull;
#endif
class ScintillaDocument;
class ScintillaEdit;
class ScintillaEditBase;
#else
typedef struct QByteArray QByteArray;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
typedef struct SCNotification SCNotification;
typedef struct Sci_CharacterRange Sci_CharacterRange;
typedef struct Sci_CharacterRangeFull Sci_CharacterRangeFull;
typedef struct Sci_NotifyHeader Sci_NotifyHeader;
typedef struct Sci_RangeToFormat Sci_RangeToFormat;
typedef struct Sci_RangeToFormatFull Sci_RangeToFormatFull;
typedef struct Sci_Rectangle Sci_Rectangle;
typedef struct Sci_TextRange Sci_TextRange;
typedef struct Sci_TextRangeFull Sci_TextRangeFull;
typedef struct Sci_TextToFind Sci_TextToFind;
typedef struct Sci_TextToFindFull Sci_TextToFindFull;
typedef struct Scintilla__CharacterRange Scintilla__CharacterRange;
typedef struct Scintilla__CharacterRangeFull Scintilla__CharacterRangeFull;
typedef struct Scintilla__Internal__ColourRGBA Scintilla__Internal__ColourRGBA;
typedef struct Scintilla__Internal__ColourStop Scintilla__Internal__ColourStop;
typedef struct Scintilla__Internal__Fill Scintilla__Internal__Fill;
typedef struct Scintilla__Internal__FillStroke Scintilla__Internal__FillStroke;
typedef struct Scintilla__Internal__Font Scintilla__Internal__Font;
typedef struct Scintilla__Internal__FontParameters Scintilla__Internal__FontParameters;
typedef struct Scintilla__Internal__IListBoxDelegate Scintilla__Internal__IListBoxDelegate;
typedef struct Scintilla__Internal__IScreenLine Scintilla__Internal__IScreenLine;
typedef struct Scintilla__Internal__IScreenLineLayout Scintilla__Internal__IScreenLineLayout;
typedef struct Scintilla__Internal__Interval Scintilla__Internal__Interval;
typedef struct Scintilla__Internal__ListBox Scintilla__Internal__ListBox;
typedef struct Scintilla__Internal__ListBoxEvent Scintilla__Internal__ListBoxEvent;
typedef struct Scintilla__Internal__ListOptions Scintilla__Internal__ListOptions;
typedef struct Scintilla__Internal__Menu Scintilla__Internal__Menu;
typedef struct Scintilla__Internal__PRectangle Scintilla__Internal__PRectangle;
typedef struct Scintilla__Internal__Point Scintilla__Internal__Point;
typedef struct Scintilla__Internal__Stroke Scintilla__Internal__Stroke;
typedef struct Scintilla__Internal__Surface Scintilla__Internal__Surface;
typedef struct Scintilla__Internal__SurfaceMode Scintilla__Internal__SurfaceMode;
typedef struct Scintilla__Internal__Window Scintilla__Internal__Window;
typedef struct Scintilla__NotificationData Scintilla__NotificationData;
typedef struct Scintilla__NotifyHeader Scintilla__NotifyHeader;
typedef struct Scintilla__RangeToFormat Scintilla__RangeToFormat;
typedef struct Scintilla__RangeToFormatFull Scintilla__RangeToFormatFull;
typedef struct Scintilla__Rectangle Scintilla__Rectangle;
typedef struct Scintilla__TextRange Scintilla__TextRange;
typedef struct Scintilla__TextRangeFull Scintilla__TextRangeFull;
typedef struct Scintilla__TextToFind Scintilla__TextToFind;
typedef struct Scintilla__TextToFindFull Scintilla__TextToFindFull;
typedef struct ScintillaDocument ScintillaDocument;
typedef struct ScintillaEdit ScintillaEdit;
typedef struct ScintillaEditBase ScintillaEditBase;
#endif

Scintilla__Internal__Point* Scintilla__Internal__Point_new();
Scintilla__Internal__Point* Scintilla__Internal__Point_new2(Scintilla__Internal__Point* param1);
Scintilla__Internal__Point* Scintilla__Internal__Point_new3(double x_);
Scintilla__Internal__Point* Scintilla__Internal__Point_new4(double x_, double y_);
Scintilla__Internal__Point* Scintilla__Internal__Point_FromInts(int x_, int y_);
bool Scintilla__Internal__Point_OperatorEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
bool Scintilla__Internal__Point_OperatorNotEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
Scintilla__Internal__Point* Scintilla__Internal__Point_OperatorPlus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
Scintilla__Internal__Point* Scintilla__Internal__Point_OperatorMinus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
void Scintilla__Internal__Point_Delete(Scintilla__Internal__Point* self);

bool Scintilla__Internal__Interval_OperatorEqual(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other);
double Scintilla__Internal__Interval_Width(const Scintilla__Internal__Interval* self);
bool Scintilla__Internal__Interval_Empty(const Scintilla__Internal__Interval* self);
bool Scintilla__Internal__Interval_Intersects(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other);
Scintilla__Internal__Interval* Scintilla__Internal__Interval_Offset(const Scintilla__Internal__Interval* self, double offset);
void Scintilla__Internal__Interval_Delete(Scintilla__Internal__Interval* self);

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new();
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new2(Scintilla__Internal__PRectangle* param1);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new3(double left_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new4(double left_, double top_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new5(double left_, double top_, double right_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new6(double left_, double top_, double right_, double bottom_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_FromInts(int left_, int top_, int right_, int bottom_);
bool Scintilla__Internal__PRectangle_OperatorEqual(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc);
bool Scintilla__Internal__PRectangle_Contains(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt);
bool Scintilla__Internal__PRectangle_ContainsWholePixel(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt);
bool Scintilla__Internal__PRectangle_ContainsWithRc(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc);
bool Scintilla__Internal__PRectangle_Intersects(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* other);
bool Scintilla__Internal__PRectangle_IntersectsWithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontalBounds);
void Scintilla__Internal__PRectangle_Move(Scintilla__Internal__PRectangle* self, double xDelta, double yDelta);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_WithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontal);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_Inset(const Scintilla__Internal__PRectangle* self, double delta);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_InsetWithDelta(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* delta);
Scintilla__Internal__Point* Scintilla__Internal__PRectangle_Centre(const Scintilla__Internal__PRectangle* self);
double Scintilla__Internal__PRectangle_Width(const Scintilla__Internal__PRectangle* self);
double Scintilla__Internal__PRectangle_Height(const Scintilla__Internal__PRectangle* self);
bool Scintilla__Internal__PRectangle_Empty(const Scintilla__Internal__PRectangle* self);
void Scintilla__Internal__PRectangle_Delete(Scintilla__Internal__PRectangle* self);

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new();
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new2(unsigned int red, unsigned int green, unsigned int blue);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new3(Scintilla__Internal__ColourRGBA* cd, unsigned int alpha);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new4(Scintilla__Internal__ColourRGBA* param1);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new5(int co_);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new6(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromRGB(int co_);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey(unsigned int grey);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromIpRGB(intptr_t co_);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_WithoutAlpha(const Scintilla__Internal__ColourRGBA* self);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Opaque(const Scintilla__Internal__ColourRGBA* self);
int Scintilla__Internal__ColourRGBA_AsInteger(const Scintilla__Internal__ColourRGBA* self);
int Scintilla__Internal__ColourRGBA_OpaqueRGB(const Scintilla__Internal__ColourRGBA* self);
unsigned char Scintilla__Internal__ColourRGBA_GetRed(const Scintilla__Internal__ColourRGBA* self);
unsigned char Scintilla__Internal__ColourRGBA_GetGreen(const Scintilla__Internal__ColourRGBA* self);
unsigned char Scintilla__Internal__ColourRGBA_GetBlue(const Scintilla__Internal__ColourRGBA* self);
unsigned char Scintilla__Internal__ColourRGBA_GetAlpha(const Scintilla__Internal__ColourRGBA* self);
float Scintilla__Internal__ColourRGBA_GetRedComponent(const Scintilla__Internal__ColourRGBA* self);
float Scintilla__Internal__ColourRGBA_GetGreenComponent(const Scintilla__Internal__ColourRGBA* self);
float Scintilla__Internal__ColourRGBA_GetBlueComponent(const Scintilla__Internal__ColourRGBA* self);
float Scintilla__Internal__ColourRGBA_GetAlphaComponent(const Scintilla__Internal__ColourRGBA* self);
bool Scintilla__Internal__ColourRGBA_OperatorEqual(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other);
bool Scintilla__Internal__ColourRGBA_IsOpaque(const Scintilla__Internal__ColourRGBA* self);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith2(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other, double proportion);
void Scintilla__Internal__ColourRGBA_OperatorAssign(Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* param1);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey2(unsigned int grey, unsigned int alpha);
void Scintilla__Internal__ColourRGBA_Delete(Scintilla__Internal__ColourRGBA* self);

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new(Scintilla__Internal__ColourRGBA* colour_);
Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new2(Scintilla__Internal__Stroke* param1);
Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new3(Scintilla__Internal__ColourRGBA* colour_, double width_);
float Scintilla__Internal__Stroke_WidthF(const Scintilla__Internal__Stroke* self);
void Scintilla__Internal__Stroke_Delete(Scintilla__Internal__Stroke* self);

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new(Scintilla__Internal__ColourRGBA* colour_);
Scintilla__Internal__Fill* Scintilla__Internal__Fill_new2(Scintilla__Internal__Fill* param1);
void Scintilla__Internal__Fill_Delete(Scintilla__Internal__Fill* self);

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new2(Scintilla__Internal__ColourRGBA* colourBoth);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new3(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_, double widthStroke_);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new4(Scintilla__Internal__ColourRGBA* colourBoth, double widthStroke_);
void Scintilla__Internal__FillStroke_Delete(Scintilla__Internal__FillStroke* self);

Scintilla__Internal__ColourStop* Scintilla__Internal__ColourStop_new(double position_, Scintilla__Internal__ColourRGBA* colour_);
void Scintilla__Internal__ColourStop_Delete(Scintilla__Internal__ColourStop* self);

void Scintilla__CharacterRange_Delete(Scintilla__CharacterRange* self);

void Scintilla__CharacterRangeFull_Delete(Scintilla__CharacterRangeFull* self);

void Scintilla__TextRange_Delete(Scintilla__TextRange* self);

void Scintilla__TextRangeFull_Delete(Scintilla__TextRangeFull* self);

void Scintilla__TextToFind_Delete(Scintilla__TextToFind* self);

void Scintilla__TextToFindFull_Delete(Scintilla__TextToFindFull* self);

void Scintilla__Rectangle_Delete(Scintilla__Rectangle* self);

void Scintilla__RangeToFormat_Delete(Scintilla__RangeToFormat* self);

void Scintilla__RangeToFormatFull_Delete(Scintilla__RangeToFormatFull* self);

void Scintilla__NotifyHeader_Delete(Scintilla__NotifyHeader* self);

void Scintilla__NotificationData_Delete(Scintilla__NotificationData* self);

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new(const char* faceName_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new2(const char* faceName_, double size_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new3(const char* faceName_, double size_, int weight_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new4(const char* faceName_, double size_, int weight_, bool italic_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new5(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new6(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new7(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new8(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new9(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_, int stretch_);
void Scintilla__Internal__FontParameters_Delete(Scintilla__Internal__FontParameters* self);

Scintilla__Internal__Font* Scintilla__Internal__Font_new();
void Scintilla__Internal__Font_Delete(Scintilla__Internal__Font* self);

size_t Scintilla__Internal__IScreenLine_Length(const Scintilla__Internal__IScreenLine* self);
size_t Scintilla__Internal__IScreenLine_RepresentationCount(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_Width(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_Height(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_TabWidth(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_TabWidthMinimumPixels(const Scintilla__Internal__IScreenLine* self);
Scintilla__Internal__Font* Scintilla__Internal__IScreenLine_FontOfPosition(const Scintilla__Internal__IScreenLine* self, size_t position);
double Scintilla__Internal__IScreenLine_RepresentationWidth(const Scintilla__Internal__IScreenLine* self, size_t position);
double Scintilla__Internal__IScreenLine_TabPositionAfter(const Scintilla__Internal__IScreenLine* self, double xPosition);
void Scintilla__Internal__IScreenLine_OperatorAssign(Scintilla__Internal__IScreenLine* self, Scintilla__Internal__IScreenLine* param1);
void Scintilla__Internal__IScreenLine_Delete(Scintilla__Internal__IScreenLine* self);

size_t Scintilla__Internal__IScreenLineLayout_PositionFromX(Scintilla__Internal__IScreenLineLayout* self, double xDistance, bool charPosition);
double Scintilla__Internal__IScreenLineLayout_XFromPosition(Scintilla__Internal__IScreenLineLayout* self, size_t caretPosition);
void Scintilla__Internal__IScreenLineLayout_OperatorAssign(Scintilla__Internal__IScreenLineLayout* self, Scintilla__Internal__IScreenLineLayout* param1);
void Scintilla__Internal__IScreenLineLayout_Delete(Scintilla__Internal__IScreenLineLayout* self);

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new();
Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new2(int codePage_, bool bidiR2L_);
void Scintilla__Internal__SurfaceMode_Delete(Scintilla__Internal__SurfaceMode* self);

void Scintilla__Internal__Surface_Init(Scintilla__Internal__Surface* self, void* wid);
void Scintilla__Internal__Surface_Init2(Scintilla__Internal__Surface* self, void* sid, void* wid);
void Scintilla__Internal__Surface_SetMode(Scintilla__Internal__Surface* self, Scintilla__Internal__SurfaceMode* mode);
void Scintilla__Internal__Surface_Release(Scintilla__Internal__Surface* self);
int Scintilla__Internal__Surface_SupportsFeature(Scintilla__Internal__Surface* self, int feature);
bool Scintilla__Internal__Surface_Initialised(Scintilla__Internal__Surface* self);
int Scintilla__Internal__Surface_LogPixelsY(Scintilla__Internal__Surface* self);
int Scintilla__Internal__Surface_PixelDivisions(Scintilla__Internal__Surface* self);
int Scintilla__Internal__Surface_DeviceHeightFont(Scintilla__Internal__Surface* self, int points);
void Scintilla__Internal__Surface_LineDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* start, Scintilla__Internal__Point* end, Scintilla__Internal__Stroke* stroke);
void Scintilla__Internal__Surface_PolyLine(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__Stroke* stroke);
void Scintilla__Internal__Surface_Polygon(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__FillStroke* fillStroke);
void Scintilla__Internal__Surface_RectangleDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke);
void Scintilla__Internal__Surface_RectangleFrame(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Stroke* stroke);
void Scintilla__Internal__Surface_FillRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill);
void Scintilla__Internal__Surface_FillRectangleAligned(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill);
void Scintilla__Internal__Surface_FillRectangle2(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Surface* surfacePattern);
void Scintilla__Internal__Surface_RoundedRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke);
void Scintilla__Internal__Surface_AlphaRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, double cornerSize, Scintilla__Internal__FillStroke* fillStroke);
void Scintilla__Internal__Surface_DrawRGBAImage(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, int width, int height, const unsigned char* pixelsImage);
void Scintilla__Internal__Surface_Ellipse(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke);
void Scintilla__Internal__Surface_Stadium(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke, int ends);
void Scintilla__Internal__Surface_Copy(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Point* from, Scintilla__Internal__Surface* surfaceSource);
double Scintilla__Internal__Surface_Ascent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_);
double Scintilla__Internal__Surface_Descent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_);
double Scintilla__Internal__Surface_InternalLeading(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_);
double Scintilla__Internal__Surface_Height(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_);
double Scintilla__Internal__Surface_AverageCharWidth(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_);
void Scintilla__Internal__Surface_SetClip(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc);
void Scintilla__Internal__Surface_PopClip(Scintilla__Internal__Surface* self);
void Scintilla__Internal__Surface_FlushCachedState(Scintilla__Internal__Surface* self);
void Scintilla__Internal__Surface_FlushDrawing(Scintilla__Internal__Surface* self);
void Scintilla__Internal__Surface_Delete(Scintilla__Internal__Surface* self);

Scintilla__Internal__Window* Scintilla__Internal__Window_new();
void Scintilla__Internal__Window_OperatorAssign(Scintilla__Internal__Window* self, void* wid_);
void* Scintilla__Internal__Window_GetID(const Scintilla__Internal__Window* self);
bool Scintilla__Internal__Window_Created(const Scintilla__Internal__Window* self);
void Scintilla__Internal__Window_Destroy(Scintilla__Internal__Window* self);
Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetPosition(const Scintilla__Internal__Window* self);
void Scintilla__Internal__Window_SetPosition(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc);
void Scintilla__Internal__Window_SetPositionRelative(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Window* relativeTo);
Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetClientPosition(const Scintilla__Internal__Window* self);
void Scintilla__Internal__Window_Show(Scintilla__Internal__Window* self);
void Scintilla__Internal__Window_InvalidateAll(Scintilla__Internal__Window* self);
void Scintilla__Internal__Window_InvalidateRectangle(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc);
void Scintilla__Internal__Window_SetCursor(Scintilla__Internal__Window* self, int curs);
Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetMonitorRect(Scintilla__Internal__Window* self, Scintilla__Internal__Point* pt);
void Scintilla__Internal__Window_Show1(Scintilla__Internal__Window* self, bool show);
void Scintilla__Internal__Window_Delete(Scintilla__Internal__Window* self);

Scintilla__Internal__ListBoxEvent* Scintilla__Internal__ListBoxEvent_new(int event_);
void Scintilla__Internal__ListBoxEvent_Delete(Scintilla__Internal__ListBoxEvent* self);

void Scintilla__Internal__IListBoxDelegate_ListNotify(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__ListBoxEvent* plbe);
void Scintilla__Internal__IListBoxDelegate_OperatorAssign(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__IListBoxDelegate* param1);
void Scintilla__Internal__IListBoxDelegate_Delete(Scintilla__Internal__IListBoxDelegate* self);

void Scintilla__Internal__ListOptions_Delete(Scintilla__Internal__ListOptions* self);

void Scintilla__Internal__ListBox_SetFont(Scintilla__Internal__ListBox* self, Scintilla__Internal__Font* font);
void Scintilla__Internal__ListBox_Create(Scintilla__Internal__ListBox* self, Scintilla__Internal__Window* parent, int ctrlID, Scintilla__Internal__Point* location, int lineHeight_, bool unicodeMode_, int technology_);
void Scintilla__Internal__ListBox_SetAverageCharWidth(Scintilla__Internal__ListBox* self, int width);
void Scintilla__Internal__ListBox_SetVisibleRows(Scintilla__Internal__ListBox* self, int rows);
int Scintilla__Internal__ListBox_GetVisibleRows(const Scintilla__Internal__ListBox* self);
Scintilla__Internal__PRectangle* Scintilla__Internal__ListBox_GetDesiredRect(Scintilla__Internal__ListBox* self);
int Scintilla__Internal__ListBox_CaretFromEdge(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Clear(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Append(Scintilla__Internal__ListBox* self, char* s);
int Scintilla__Internal__ListBox_Length(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Select(Scintilla__Internal__ListBox* self, int n);
int Scintilla__Internal__ListBox_GetSelection(Scintilla__Internal__ListBox* self);
int Scintilla__Internal__ListBox_Find(Scintilla__Internal__ListBox* self, const char* prefix);
void Scintilla__Internal__ListBox_RegisterImage(Scintilla__Internal__ListBox* self, int typeVal, const char* xpm_data);
void Scintilla__Internal__ListBox_RegisterRGBAImage(Scintilla__Internal__ListBox* self, int typeVal, int width, int height, const unsigned char* pixelsImage);
void Scintilla__Internal__ListBox_ClearRegisteredImages(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_SetDelegate(Scintilla__Internal__ListBox* self, Scintilla__Internal__IListBoxDelegate* lbDelegate);
void Scintilla__Internal__ListBox_SetList(Scintilla__Internal__ListBox* self, const char* list, char separator, char typesep);
void Scintilla__Internal__ListBox_SetOptions(Scintilla__Internal__ListBox* self, Scintilla__Internal__ListOptions* options_);
void Scintilla__Internal__ListBox_Append2(Scintilla__Internal__ListBox* self, char* s, int typeVal);
void Scintilla__Internal__ListBox_Delete(Scintilla__Internal__ListBox* self);

Scintilla__Internal__Menu* Scintilla__Internal__Menu_new();
void* Scintilla__Internal__Menu_GetID(const Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_CreatePopUp(Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_Destroy(Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_Show(Scintilla__Internal__Menu* self, Scintilla__Internal__Point* pt, Scintilla__Internal__Window* w);
void Scintilla__Internal__Menu_Delete(Scintilla__Internal__Menu* self);

void Sci_CharacterRange_Delete(Sci_CharacterRange* self);

void Sci_CharacterRangeFull_Delete(Sci_CharacterRangeFull* self);

void Sci_TextRange_Delete(Sci_TextRange* self);

void Sci_TextRangeFull_Delete(Sci_TextRangeFull* self);

void Sci_TextToFind_Delete(Sci_TextToFind* self);

void Sci_TextToFindFull_Delete(Sci_TextToFindFull* self);

void Sci_Rectangle_Delete(Sci_Rectangle* self);

void Sci_RangeToFormat_Delete(Sci_RangeToFormat* self);

void Sci_RangeToFormatFull_Delete(Sci_RangeToFormatFull* self);

void Sci_NotifyHeader_Delete(Sci_NotifyHeader* self);

void SCNotification_Delete(SCNotification* self);

ScintillaEditBase* ScintillaEditBase_new(QWidget* parent);
ScintillaEditBase* ScintillaEditBase_new2();
QMetaObject* ScintillaEditBase_MetaObject(const ScintillaEditBase* self);
void* ScintillaEditBase_Metacast(ScintillaEditBase* self, const char* param1);
struct miqt_string ScintillaEditBase_Tr(const char* s);
struct miqt_string ScintillaEditBase_TrUtf8(const char* s);
intptr_t ScintillaEditBase_Send(const ScintillaEditBase* self, unsigned int iMessage);
intptr_t ScintillaEditBase_Sends(const ScintillaEditBase* self, unsigned int iMessage);
void ScintillaEditBase_ScrollHorizontal(ScintillaEditBase* self, int value);
void ScintillaEditBase_ScrollVertical(ScintillaEditBase* self, int value);
void ScintillaEditBase_NotifyParent(ScintillaEditBase* self, Scintilla__NotificationData* scn);
void ScintillaEditBase_EventCommand(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_HorizontalScrolled(ScintillaEditBase* self, int value);
void ScintillaEditBase_connect_HorizontalScrolled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_VerticalScrolled(ScintillaEditBase* self, int value);
void ScintillaEditBase_connect_VerticalScrolled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_HorizontalRangeChanged(ScintillaEditBase* self, int max, int page);
void ScintillaEditBase_connect_HorizontalRangeChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_VerticalRangeChanged(ScintillaEditBase* self, int max, int page);
void ScintillaEditBase_connect_VerticalRangeChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_NotifyChange(ScintillaEditBase* self);
void ScintillaEditBase_connect_NotifyChange(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_LinesAdded(ScintillaEditBase* self, intptr_t linesAdded);
void ScintillaEditBase_connect_LinesAdded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_AboutToCopy(ScintillaEditBase* self, QMimeData* data);
void ScintillaEditBase_connect_AboutToCopy(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_StyleNeeded(ScintillaEditBase* self, intptr_t position);
void ScintillaEditBase_connect_StyleNeeded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_CharAdded(ScintillaEditBase* self, int ch);
void ScintillaEditBase_connect_CharAdded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_SavePointChanged(ScintillaEditBase* self, bool dirty);
void ScintillaEditBase_connect_SavePointChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_ModifyAttemptReadOnly(ScintillaEditBase* self);
void ScintillaEditBase_connect_ModifyAttemptReadOnly(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Key(ScintillaEditBase* self, int key);
void ScintillaEditBase_connect_Key(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_DoubleClick(ScintillaEditBase* self, intptr_t position, intptr_t line);
void ScintillaEditBase_connect_DoubleClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_UpdateUi(ScintillaEditBase* self, int updated);
void ScintillaEditBase_connect_UpdateUi(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Modified(ScintillaEditBase* self, int typeVal, intptr_t position, intptr_t length, intptr_t linesAdded, struct miqt_string text, intptr_t line, int foldNow, int foldPrev);
void ScintillaEditBase_connect_Modified(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_MacroRecord(ScintillaEditBase* self, int message, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_connect_MacroRecord(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_MarginClicked(ScintillaEditBase* self, intptr_t position, int modifiers, int margin);
void ScintillaEditBase_connect_MarginClicked(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_TextAreaClicked(ScintillaEditBase* self, intptr_t line, int modifiers);
void ScintillaEditBase_connect_TextAreaClicked(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_NeedShown(ScintillaEditBase* self, intptr_t position, intptr_t length);
void ScintillaEditBase_connect_NeedShown(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Painted(ScintillaEditBase* self);
void ScintillaEditBase_connect_Painted(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_UserListSelection(ScintillaEditBase* self);
void ScintillaEditBase_connect_UserListSelection(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_UriDropped(ScintillaEditBase* self, struct miqt_string uri);
void ScintillaEditBase_connect_UriDropped(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_DwellStart(ScintillaEditBase* self, int x, int y);
void ScintillaEditBase_connect_DwellStart(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_DwellEnd(ScintillaEditBase* self, int x, int y);
void ScintillaEditBase_connect_DwellEnd(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Zoom(ScintillaEditBase* self, int zoom);
void ScintillaEditBase_connect_Zoom(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_HotSpotClick(ScintillaEditBase* self, intptr_t position, int modifiers);
void ScintillaEditBase_connect_HotSpotClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_HotSpotDoubleClick(ScintillaEditBase* self, intptr_t position, int modifiers);
void ScintillaEditBase_connect_HotSpotDoubleClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_CallTipClick(ScintillaEditBase* self);
void ScintillaEditBase_connect_CallTipClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_AutoCompleteSelection(ScintillaEditBase* self, intptr_t position, struct miqt_string text);
void ScintillaEditBase_connect_AutoCompleteSelection(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_AutoCompleteCancelled(ScintillaEditBase* self);
void ScintillaEditBase_connect_AutoCompleteCancelled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_FocusChanged(ScintillaEditBase* self, bool focused);
void ScintillaEditBase_connect_FocusChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Notify(ScintillaEditBase* self, Scintilla__NotificationData* pscn);
void ScintillaEditBase_connect_Notify(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Command(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_connect_Command(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_ButtonPressed(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_connect_ButtonPressed(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_ButtonReleased(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_connect_ButtonReleased(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_KeyPressed(ScintillaEditBase* self, QKeyEvent* event);
void ScintillaEditBase_connect_KeyPressed(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_Resized(ScintillaEditBase* self);
void ScintillaEditBase_connect_Resized(ScintillaEditBase* self, intptr_t slot);
struct miqt_string ScintillaEditBase_Tr2(const char* s, const char* c);
struct miqt_string ScintillaEditBase_Tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaEditBase_TrUtf82(const char* s, const char* c);
struct miqt_string ScintillaEditBase_TrUtf83(const char* s, const char* c, int n);
intptr_t ScintillaEditBase_Send2(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam);
intptr_t ScintillaEditBase_Send3(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);
intptr_t ScintillaEditBase_Sends2(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam);
intptr_t ScintillaEditBase_Sends3(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, const char* s);
void ScintillaEditBase_Delete(ScintillaEditBase* self);

ScintillaDocument* ScintillaDocument_new();
ScintillaDocument* ScintillaDocument_new2(QObject* parent);
ScintillaDocument* ScintillaDocument_new3(QObject* parent, void* pdoc_);
QMetaObject* ScintillaDocument_MetaObject(const ScintillaDocument* self);
void* ScintillaDocument_Metacast(ScintillaDocument* self, const char* param1);
struct miqt_string ScintillaDocument_Tr(const char* s);
struct miqt_string ScintillaDocument_TrUtf8(const char* s);
void* ScintillaDocument_Pointer(ScintillaDocument* self);
int ScintillaDocument_LineFromPosition(ScintillaDocument* self, int pos);
bool ScintillaDocument_IsCrLf(ScintillaDocument* self, int pos);
bool ScintillaDocument_DeleteChars(ScintillaDocument* self, int pos, int lenVal);
int ScintillaDocument_Undo(ScintillaDocument* self);
int ScintillaDocument_Redo(ScintillaDocument* self);
bool ScintillaDocument_CanUndo(ScintillaDocument* self);
bool ScintillaDocument_CanRedo(ScintillaDocument* self);
void ScintillaDocument_DeleteUndoHistory(ScintillaDocument* self);
bool ScintillaDocument_SetUndoCollection(ScintillaDocument* self, bool collect_undo);
bool ScintillaDocument_IsCollectingUndo(ScintillaDocument* self);
void ScintillaDocument_BeginUndoAction(ScintillaDocument* self);
void ScintillaDocument_EndUndoAction(ScintillaDocument* self);
void ScintillaDocument_SetSavePoint(ScintillaDocument* self);
bool ScintillaDocument_IsSavePoint(ScintillaDocument* self);
void ScintillaDocument_SetReadOnly(ScintillaDocument* self, bool read_only);
bool ScintillaDocument_IsReadOnly(ScintillaDocument* self);
void ScintillaDocument_InsertString(ScintillaDocument* self, int position, struct miqt_string str);
struct miqt_string ScintillaDocument_GetCharRange(ScintillaDocument* self, int position, int length);
char ScintillaDocument_StyleAt(ScintillaDocument* self, int position);
int ScintillaDocument_LineStart(ScintillaDocument* self, int lineno);
int ScintillaDocument_LineEnd(ScintillaDocument* self, int lineno);
int ScintillaDocument_LineEndPosition(ScintillaDocument* self, int pos);
int ScintillaDocument_Length(ScintillaDocument* self);
int ScintillaDocument_LinesTotal(ScintillaDocument* self);
void ScintillaDocument_StartStyling(ScintillaDocument* self, int position);
bool ScintillaDocument_SetStyleFor(ScintillaDocument* self, int length, char style);
int ScintillaDocument_GetEndStyled(ScintillaDocument* self);
void ScintillaDocument_EnsureStyledTo(ScintillaDocument* self, int position);
void ScintillaDocument_SetCurrentIndicator(ScintillaDocument* self, int indic);
void ScintillaDocument_DecorationFillRange(ScintillaDocument* self, int position, int value, int fillLength);
int ScintillaDocument_DecorationsValueAt(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_DecorationsStart(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_DecorationsEnd(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_GetCodePage(ScintillaDocument* self);
void ScintillaDocument_SetCodePage(ScintillaDocument* self, int code_page);
int ScintillaDocument_GetEolMode(ScintillaDocument* self);
void ScintillaDocument_SetEolMode(ScintillaDocument* self, int eol_mode);
int ScintillaDocument_MovePositionOutsideChar(ScintillaDocument* self, int pos, int move_dir, bool check_line_end);
int ScintillaDocument_GetCharacter(ScintillaDocument* self, int pos);
void ScintillaDocument_ModifyAttempt(ScintillaDocument* self);
void ScintillaDocument_connect_ModifyAttempt(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_SavePoint(ScintillaDocument* self, bool atSavePoint);
void ScintillaDocument_connect_SavePoint(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_Modified(ScintillaDocument* self, int position, int modification_type, struct miqt_string text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev);
void ScintillaDocument_connect_Modified(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_StyleNeeded(ScintillaDocument* self, int pos);
void ScintillaDocument_connect_StyleNeeded(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_ErrorOccurred(ScintillaDocument* self, int status);
void ScintillaDocument_connect_ErrorOccurred(ScintillaDocument* self, intptr_t slot);
struct miqt_string ScintillaDocument_Tr2(const char* s, const char* c);
struct miqt_string ScintillaDocument_Tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaDocument_TrUtf82(const char* s, const char* c);
struct miqt_string ScintillaDocument_TrUtf83(const char* s, const char* c, int n);
void ScintillaDocument_BeginUndoAction1(ScintillaDocument* self, bool coalesceWithPrior);
void ScintillaDocument_Delete(ScintillaDocument* self);

ScintillaEdit* ScintillaEdit_new(QWidget* parent);
ScintillaEdit* ScintillaEdit_new2();
QMetaObject* ScintillaEdit_MetaObject(const ScintillaEdit* self);
void* ScintillaEdit_Metacast(ScintillaEdit* self, const char* param1);
struct miqt_string ScintillaEdit_Tr(const char* s);
struct miqt_string ScintillaEdit_TrUtf8(const char* s);
struct miqt_string ScintillaEdit_TextReturner(const ScintillaEdit* self, int message, uintptr_t wParam);
struct miqt_map /* tuple of int and int */  ScintillaEdit_FindText(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax);
struct miqt_string ScintillaEdit_GetTextRange(ScintillaEdit* self, int start, int end);
ScintillaDocument* ScintillaEdit_GetDoc(ScintillaEdit* self);
void ScintillaEdit_SetDoc(ScintillaEdit* self, ScintillaDocument* pdoc_);
struct miqt_map /* tuple of int and int */  ScintillaEdit_FindText2(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax);
struct miqt_string ScintillaEdit_TextRange(ScintillaEdit* self, int start, int end);
long ScintillaEdit_FormatRange(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end);
long ScintillaEdit_FormatRange2(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end);
void ScintillaEdit_AddText(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_AddStyledText(ScintillaEdit* self, intptr_t length, const char* c);
void ScintillaEdit_InsertText(ScintillaEdit* self, intptr_t pos, const char* text);
void ScintillaEdit_ChangeInsertion(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_ClearAll(ScintillaEdit* self);
void ScintillaEdit_DeleteRange(ScintillaEdit* self, intptr_t start, intptr_t lengthDelete);
void ScintillaEdit_ClearDocumentStyle(ScintillaEdit* self);
intptr_t ScintillaEdit_Length(const ScintillaEdit* self);
intptr_t ScintillaEdit_CharAt(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_CurrentPos(const ScintillaEdit* self);
intptr_t ScintillaEdit_Anchor(const ScintillaEdit* self);
intptr_t ScintillaEdit_StyleAt(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_StyleIndexAt(const ScintillaEdit* self, intptr_t pos);
void ScintillaEdit_Redo(ScintillaEdit* self);
void ScintillaEdit_SetUndoCollection(ScintillaEdit* self, bool collectUndo);
void ScintillaEdit_SelectAll(ScintillaEdit* self);
void ScintillaEdit_SetSavePoint(ScintillaEdit* self);
bool ScintillaEdit_CanRedo(ScintillaEdit* self);
intptr_t ScintillaEdit_MarkerLineFromHandle(ScintillaEdit* self, intptr_t markerHandle);
void ScintillaEdit_MarkerDeleteHandle(ScintillaEdit* self, intptr_t markerHandle);
intptr_t ScintillaEdit_MarkerHandleFromLine(ScintillaEdit* self, intptr_t line, intptr_t which);
intptr_t ScintillaEdit_MarkerNumberFromLine(ScintillaEdit* self, intptr_t line, intptr_t which);
bool ScintillaEdit_UndoCollection(const ScintillaEdit* self);
intptr_t ScintillaEdit_ViewWS(const ScintillaEdit* self);
void ScintillaEdit_SetViewWS(ScintillaEdit* self, intptr_t viewWS);
intptr_t ScintillaEdit_TabDrawMode(const ScintillaEdit* self);
void ScintillaEdit_SetTabDrawMode(ScintillaEdit* self, intptr_t tabDrawMode);
intptr_t ScintillaEdit_PositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
intptr_t ScintillaEdit_PositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_GotoLine(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_GotoPos(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_SetAnchor(ScintillaEdit* self, intptr_t anchor);
struct miqt_string ScintillaEdit_GetCurLine(ScintillaEdit* self, intptr_t length);
intptr_t ScintillaEdit_EndStyled(const ScintillaEdit* self);
void ScintillaEdit_ConvertEOLs(ScintillaEdit* self, intptr_t eolMode);
intptr_t ScintillaEdit_EOLMode(const ScintillaEdit* self);
void ScintillaEdit_SetEOLMode(ScintillaEdit* self, intptr_t eolMode);
void ScintillaEdit_StartStyling(ScintillaEdit* self, intptr_t start, intptr_t unused);
void ScintillaEdit_SetStyling(ScintillaEdit* self, intptr_t length, intptr_t style);
bool ScintillaEdit_BufferedDraw(const ScintillaEdit* self);
void ScintillaEdit_SetBufferedDraw(ScintillaEdit* self, bool buffered);
void ScintillaEdit_SetTabWidth(ScintillaEdit* self, intptr_t tabWidth);
intptr_t ScintillaEdit_TabWidth(const ScintillaEdit* self);
void ScintillaEdit_SetTabMinimumWidth(ScintillaEdit* self, intptr_t pixels);
intptr_t ScintillaEdit_TabMinimumWidth(const ScintillaEdit* self);
void ScintillaEdit_ClearTabStops(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_AddTabStop(ScintillaEdit* self, intptr_t line, intptr_t x);
intptr_t ScintillaEdit_GetNextTabStop(ScintillaEdit* self, intptr_t line, intptr_t x);
void ScintillaEdit_SetCodePage(ScintillaEdit* self, intptr_t codePage);
void ScintillaEdit_SetFontLocale(ScintillaEdit* self, const char* localeName);
struct miqt_string ScintillaEdit_FontLocale(const ScintillaEdit* self);
intptr_t ScintillaEdit_IMEInteraction(const ScintillaEdit* self);
void ScintillaEdit_SetIMEInteraction(ScintillaEdit* self, intptr_t imeInteraction);
void ScintillaEdit_MarkerDefine(ScintillaEdit* self, intptr_t markerNumber, intptr_t markerSymbol);
void ScintillaEdit_MarkerSetFore(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore);
void ScintillaEdit_MarkerSetBack(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_MarkerSetBackSelected(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_MarkerSetForeTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore);
void ScintillaEdit_MarkerSetBackTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_MarkerSetBackSelectedTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_MarkerSetStrokeWidth(ScintillaEdit* self, intptr_t markerNumber, intptr_t hundredths);
void ScintillaEdit_MarkerEnableHighlight(ScintillaEdit* self, bool enabled);
intptr_t ScintillaEdit_MarkerAdd(ScintillaEdit* self, intptr_t line, intptr_t markerNumber);
void ScintillaEdit_MarkerDelete(ScintillaEdit* self, intptr_t line, intptr_t markerNumber);
void ScintillaEdit_MarkerDeleteAll(ScintillaEdit* self, intptr_t markerNumber);
intptr_t ScintillaEdit_MarkerGet(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_MarkerNext(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask);
intptr_t ScintillaEdit_MarkerPrevious(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask);
void ScintillaEdit_MarkerDefinePixmap(ScintillaEdit* self, intptr_t markerNumber, const char* pixmap);
void ScintillaEdit_MarkerAddSet(ScintillaEdit* self, intptr_t line, intptr_t markerSet);
void ScintillaEdit_MarkerSetAlpha(ScintillaEdit* self, intptr_t markerNumber, intptr_t alpha);
intptr_t ScintillaEdit_MarkerLayer(const ScintillaEdit* self, intptr_t markerNumber);
void ScintillaEdit_MarkerSetLayer(ScintillaEdit* self, intptr_t markerNumber, intptr_t layer);
void ScintillaEdit_SetMarginTypeN(ScintillaEdit* self, intptr_t margin, intptr_t marginType);
intptr_t ScintillaEdit_MarginTypeN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMarginWidthN(ScintillaEdit* self, intptr_t margin, intptr_t pixelWidth);
intptr_t ScintillaEdit_MarginWidthN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMarginMaskN(ScintillaEdit* self, intptr_t margin, intptr_t mask);
intptr_t ScintillaEdit_MarginMaskN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMarginSensitiveN(ScintillaEdit* self, intptr_t margin, bool sensitive);
bool ScintillaEdit_MarginSensitiveN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMarginCursorN(ScintillaEdit* self, intptr_t margin, intptr_t cursor);
intptr_t ScintillaEdit_MarginCursorN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMarginBackN(ScintillaEdit* self, intptr_t margin, intptr_t back);
intptr_t ScintillaEdit_MarginBackN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_SetMargins(ScintillaEdit* self, intptr_t margins);
intptr_t ScintillaEdit_Margins(const ScintillaEdit* self);
void ScintillaEdit_StyleClearAll(ScintillaEdit* self);
void ScintillaEdit_StyleSetFore(ScintillaEdit* self, intptr_t style, intptr_t fore);
void ScintillaEdit_StyleSetBack(ScintillaEdit* self, intptr_t style, intptr_t back);
void ScintillaEdit_StyleSetBold(ScintillaEdit* self, intptr_t style, bool bold);
void ScintillaEdit_StyleSetItalic(ScintillaEdit* self, intptr_t style, bool italic);
void ScintillaEdit_StyleSetSize(ScintillaEdit* self, intptr_t style, intptr_t sizePoints);
void ScintillaEdit_StyleSetFont(ScintillaEdit* self, intptr_t style, const char* fontName);
void ScintillaEdit_StyleSetEOLFilled(ScintillaEdit* self, intptr_t style, bool eolFilled);
void ScintillaEdit_StyleResetDefault(ScintillaEdit* self);
void ScintillaEdit_StyleSetUnderline(ScintillaEdit* self, intptr_t style, bool underline);
intptr_t ScintillaEdit_StyleFore(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_StyleBack(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleBold(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleItalic(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_StyleSize(const ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_StyleFont(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleEOLFilled(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleUnderline(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_StyleCase(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_StyleCharacterSet(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleVisible(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleChangeable(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_StyleHotSpot(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_StyleSetCase(ScintillaEdit* self, intptr_t style, intptr_t caseVisible);
void ScintillaEdit_StyleSetSizeFractional(ScintillaEdit* self, intptr_t style, intptr_t sizeHundredthPoints);
intptr_t ScintillaEdit_StyleSizeFractional(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_StyleSetWeight(ScintillaEdit* self, intptr_t style, intptr_t weight);
intptr_t ScintillaEdit_StyleWeight(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_StyleSetCharacterSet(ScintillaEdit* self, intptr_t style, intptr_t characterSet);
void ScintillaEdit_StyleSetHotSpot(ScintillaEdit* self, intptr_t style, bool hotspot);
void ScintillaEdit_StyleSetCheckMonospaced(ScintillaEdit* self, intptr_t style, bool checkMonospaced);
bool ScintillaEdit_StyleCheckMonospaced(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_StyleSetStretch(ScintillaEdit* self, intptr_t style, intptr_t stretch);
intptr_t ScintillaEdit_StyleStretch(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_StyleSetInvisibleRepresentation(ScintillaEdit* self, intptr_t style, const char* representation);
struct miqt_string ScintillaEdit_StyleInvisibleRepresentation(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_SetElementColour(ScintillaEdit* self, intptr_t element, intptr_t colourElement);
intptr_t ScintillaEdit_ElementColour(const ScintillaEdit* self, intptr_t element);
void ScintillaEdit_ResetElementColour(ScintillaEdit* self, intptr_t element);
bool ScintillaEdit_ElementIsSet(const ScintillaEdit* self, intptr_t element);
bool ScintillaEdit_ElementAllowsTranslucent(const ScintillaEdit* self, intptr_t element);
intptr_t ScintillaEdit_ElementBaseColour(const ScintillaEdit* self, intptr_t element);
void ScintillaEdit_SetSelFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_SetSelBack(ScintillaEdit* self, bool useSetting, intptr_t back);
intptr_t ScintillaEdit_SelAlpha(const ScintillaEdit* self);
void ScintillaEdit_SetSelAlpha(ScintillaEdit* self, intptr_t alpha);
bool ScintillaEdit_SelEOLFilled(const ScintillaEdit* self);
void ScintillaEdit_SetSelEOLFilled(ScintillaEdit* self, bool filled);
intptr_t ScintillaEdit_SelectionLayer(const ScintillaEdit* self);
void ScintillaEdit_SetSelectionLayer(ScintillaEdit* self, intptr_t layer);
intptr_t ScintillaEdit_CaretLineLayer(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineLayer(ScintillaEdit* self, intptr_t layer);
bool ScintillaEdit_CaretLineHighlightSubLine(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineHighlightSubLine(ScintillaEdit* self, bool subLine);
void ScintillaEdit_SetCaretFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_AssignCmdKey(ScintillaEdit* self, intptr_t keyDefinition, intptr_t sciCommand);
void ScintillaEdit_ClearCmdKey(ScintillaEdit* self, intptr_t keyDefinition);
void ScintillaEdit_ClearAllCmdKeys(ScintillaEdit* self);
void ScintillaEdit_SetStylingEx(ScintillaEdit* self, intptr_t length, const char* styles);
void ScintillaEdit_StyleSetVisible(ScintillaEdit* self, intptr_t style, bool visible);
intptr_t ScintillaEdit_CaretPeriod(const ScintillaEdit* self);
void ScintillaEdit_SetCaretPeriod(ScintillaEdit* self, intptr_t periodMilliseconds);
void ScintillaEdit_SetWordChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_WordChars(const ScintillaEdit* self);
void ScintillaEdit_SetCharacterCategoryOptimization(ScintillaEdit* self, intptr_t countCharacters);
intptr_t ScintillaEdit_CharacterCategoryOptimization(const ScintillaEdit* self);
void ScintillaEdit_BeginUndoAction(ScintillaEdit* self);
void ScintillaEdit_EndUndoAction(ScintillaEdit* self);
intptr_t ScintillaEdit_UndoSequence(const ScintillaEdit* self);
intptr_t ScintillaEdit_UndoActions(const ScintillaEdit* self);
void ScintillaEdit_SetUndoSavePoint(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_UndoSavePoint(const ScintillaEdit* self);
void ScintillaEdit_SetUndoDetach(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_UndoDetach(const ScintillaEdit* self);
void ScintillaEdit_SetUndoTentative(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_UndoTentative(const ScintillaEdit* self);
void ScintillaEdit_SetUndoCurrent(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_UndoCurrent(const ScintillaEdit* self);
void ScintillaEdit_PushUndoActionType(ScintillaEdit* self, intptr_t typeVal, intptr_t pos);
void ScintillaEdit_ChangeLastUndoActionText(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_UndoActionType(const ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_UndoActionPosition(const ScintillaEdit* self, intptr_t action);
struct miqt_string ScintillaEdit_UndoActionText(const ScintillaEdit* self, intptr_t action);
void ScintillaEdit_IndicSetStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle);
intptr_t ScintillaEdit_IndicStyle(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore);
intptr_t ScintillaEdit_IndicFore(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetUnder(ScintillaEdit* self, intptr_t indicator, bool under);
bool ScintillaEdit_IndicUnder(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetHoverStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle);
intptr_t ScintillaEdit_IndicHoverStyle(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetHoverFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore);
intptr_t ScintillaEdit_IndicHoverFore(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetFlags(ScintillaEdit* self, intptr_t indicator, intptr_t flags);
intptr_t ScintillaEdit_IndicFlags(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetStrokeWidth(ScintillaEdit* self, intptr_t indicator, intptr_t hundredths);
intptr_t ScintillaEdit_IndicStrokeWidth(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_SetWhitespaceFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_SetWhitespaceBack(ScintillaEdit* self, bool useSetting, intptr_t back);
void ScintillaEdit_SetWhitespaceSize(ScintillaEdit* self, intptr_t size);
intptr_t ScintillaEdit_WhitespaceSize(const ScintillaEdit* self);
void ScintillaEdit_SetLineState(ScintillaEdit* self, intptr_t line, intptr_t state);
intptr_t ScintillaEdit_LineState(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_MaxLineState(const ScintillaEdit* self);
bool ScintillaEdit_CaretLineVisible(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineVisible(ScintillaEdit* self, bool show);
intptr_t ScintillaEdit_CaretLineBack(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineBack(ScintillaEdit* self, intptr_t back);
intptr_t ScintillaEdit_CaretLineFrame(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineFrame(ScintillaEdit* self, intptr_t width);
void ScintillaEdit_StyleSetChangeable(ScintillaEdit* self, intptr_t style, bool changeable);
void ScintillaEdit_AutoCShow(ScintillaEdit* self, intptr_t lengthEntered, const char* itemList);
void ScintillaEdit_AutoCCancel(ScintillaEdit* self);
bool ScintillaEdit_AutoCActive(ScintillaEdit* self);
intptr_t ScintillaEdit_AutoCPosStart(ScintillaEdit* self);
void ScintillaEdit_AutoCComplete(ScintillaEdit* self);
void ScintillaEdit_AutoCStops(ScintillaEdit* self, const char* characterSet);
void ScintillaEdit_AutoCSetSeparator(ScintillaEdit* self, intptr_t separatorCharacter);
intptr_t ScintillaEdit_AutoCSeparator(const ScintillaEdit* self);
void ScintillaEdit_AutoCSelect(ScintillaEdit* self, const char* selectVal);
void ScintillaEdit_AutoCSetCancelAtStart(ScintillaEdit* self, bool cancel);
bool ScintillaEdit_AutoCCancelAtStart(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetFillUps(ScintillaEdit* self, const char* characterSet);
void ScintillaEdit_AutoCSetChooseSingle(ScintillaEdit* self, bool chooseSingle);
bool ScintillaEdit_AutoCChooseSingle(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetIgnoreCase(ScintillaEdit* self, bool ignoreCase);
bool ScintillaEdit_AutoCIgnoreCase(const ScintillaEdit* self);
void ScintillaEdit_UserListShow(ScintillaEdit* self, intptr_t listType, const char* itemList);
void ScintillaEdit_AutoCSetAutoHide(ScintillaEdit* self, bool autoHide);
bool ScintillaEdit_AutoCAutoHide(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetOptions(ScintillaEdit* self, intptr_t options);
intptr_t ScintillaEdit_AutoCOptions(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetDropRestOfWord(ScintillaEdit* self, bool dropRestOfWord);
bool ScintillaEdit_AutoCDropRestOfWord(const ScintillaEdit* self);
void ScintillaEdit_RegisterImage(ScintillaEdit* self, intptr_t typeVal, const char* xpmData);
void ScintillaEdit_ClearRegisteredImages(ScintillaEdit* self);
intptr_t ScintillaEdit_AutoCTypeSeparator(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetTypeSeparator(ScintillaEdit* self, intptr_t separatorCharacter);
void ScintillaEdit_AutoCSetMaxWidth(ScintillaEdit* self, intptr_t characterCount);
intptr_t ScintillaEdit_AutoCMaxWidth(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetMaxHeight(ScintillaEdit* self, intptr_t rowCount);
intptr_t ScintillaEdit_AutoCMaxHeight(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetStyle(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_AutoCStyle(const ScintillaEdit* self);
void ScintillaEdit_SetIndent(ScintillaEdit* self, intptr_t indentSize);
intptr_t ScintillaEdit_Indent(const ScintillaEdit* self);
void ScintillaEdit_SetUseTabs(ScintillaEdit* self, bool useTabs);
bool ScintillaEdit_UseTabs(const ScintillaEdit* self);
void ScintillaEdit_SetLineIndentation(ScintillaEdit* self, intptr_t line, intptr_t indentation);
intptr_t ScintillaEdit_LineIndentation(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_LineIndentPosition(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_Column(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_CountCharacters(ScintillaEdit* self, intptr_t start, intptr_t end);
intptr_t ScintillaEdit_CountCodeUnits(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_SetHScrollBar(ScintillaEdit* self, bool visible);
bool ScintillaEdit_HScrollBar(const ScintillaEdit* self);
void ScintillaEdit_SetIndentationGuides(ScintillaEdit* self, intptr_t indentView);
intptr_t ScintillaEdit_IndentationGuides(const ScintillaEdit* self);
void ScintillaEdit_SetHighlightGuide(ScintillaEdit* self, intptr_t column);
intptr_t ScintillaEdit_HighlightGuide(const ScintillaEdit* self);
intptr_t ScintillaEdit_LineEndPosition(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_CodePage(const ScintillaEdit* self);
intptr_t ScintillaEdit_CaretFore(const ScintillaEdit* self);
bool ScintillaEdit_ReadOnly(const ScintillaEdit* self);
void ScintillaEdit_SetCurrentPos(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_SetSelectionStart(ScintillaEdit* self, intptr_t anchor);
intptr_t ScintillaEdit_SelectionStart(const ScintillaEdit* self);
void ScintillaEdit_SetSelectionEnd(ScintillaEdit* self, intptr_t caret);
intptr_t ScintillaEdit_SelectionEnd(const ScintillaEdit* self);
void ScintillaEdit_SetEmptySelection(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_SetPrintMagnification(ScintillaEdit* self, intptr_t magnification);
intptr_t ScintillaEdit_PrintMagnification(const ScintillaEdit* self);
void ScintillaEdit_SetPrintColourMode(ScintillaEdit* self, intptr_t mode);
intptr_t ScintillaEdit_PrintColourMode(const ScintillaEdit* self);
void ScintillaEdit_SetChangeHistory(ScintillaEdit* self, intptr_t changeHistory);
intptr_t ScintillaEdit_ChangeHistory(const ScintillaEdit* self);
intptr_t ScintillaEdit_FirstVisibleLine(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_GetLine(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_LineCount(const ScintillaEdit* self);
void ScintillaEdit_AllocateLines(ScintillaEdit* self, intptr_t lines);
void ScintillaEdit_SetMarginLeft(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_MarginLeft(const ScintillaEdit* self);
void ScintillaEdit_SetMarginRight(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_MarginRight(const ScintillaEdit* self);
bool ScintillaEdit_Modify(const ScintillaEdit* self);
void ScintillaEdit_SetSel(ScintillaEdit* self, intptr_t anchor, intptr_t caret);
struct miqt_string ScintillaEdit_GetSelText(ScintillaEdit* self);
void ScintillaEdit_HideSelection(ScintillaEdit* self, bool hide);
bool ScintillaEdit_SelectionHidden(const ScintillaEdit* self);
intptr_t ScintillaEdit_PointXFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_PointYFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_LineFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_PositionFromLine(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_LineScroll(ScintillaEdit* self, intptr_t columns, intptr_t lines);
void ScintillaEdit_ScrollCaret(ScintillaEdit* self);
void ScintillaEdit_ScrollRange(ScintillaEdit* self, intptr_t secondary, intptr_t primary);
void ScintillaEdit_ReplaceSel(ScintillaEdit* self, const char* text);
void ScintillaEdit_SetReadOnly(ScintillaEdit* self, bool readOnly);
void ScintillaEdit_Null(ScintillaEdit* self);
bool ScintillaEdit_CanPaste(ScintillaEdit* self);
bool ScintillaEdit_CanUndo(ScintillaEdit* self);
void ScintillaEdit_EmptyUndoBuffer(ScintillaEdit* self);
void ScintillaEdit_Undo(ScintillaEdit* self);
void ScintillaEdit_Cut(ScintillaEdit* self);
void ScintillaEdit_Copy(ScintillaEdit* self);
void ScintillaEdit_Paste(ScintillaEdit* self);
void ScintillaEdit_Clear(ScintillaEdit* self);
void ScintillaEdit_SetText(ScintillaEdit* self, const char* text);
struct miqt_string ScintillaEdit_GetText(ScintillaEdit* self, intptr_t length);
intptr_t ScintillaEdit_TextLength(const ScintillaEdit* self);
intptr_t ScintillaEdit_DirectFunction(const ScintillaEdit* self);
intptr_t ScintillaEdit_DirectStatusFunction(const ScintillaEdit* self);
intptr_t ScintillaEdit_DirectPointer(const ScintillaEdit* self);
void ScintillaEdit_SetOvertype(ScintillaEdit* self, bool overType);
bool ScintillaEdit_Overtype(const ScintillaEdit* self);
void ScintillaEdit_SetCaretWidth(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_CaretWidth(const ScintillaEdit* self);
void ScintillaEdit_SetTargetStart(ScintillaEdit* self, intptr_t start);
intptr_t ScintillaEdit_TargetStart(const ScintillaEdit* self);
void ScintillaEdit_SetTargetStartVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_TargetStartVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_SetTargetEnd(ScintillaEdit* self, intptr_t end);
intptr_t ScintillaEdit_TargetEnd(const ScintillaEdit* self);
void ScintillaEdit_SetTargetEndVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_TargetEndVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_SetTargetRange(ScintillaEdit* self, intptr_t start, intptr_t end);
struct miqt_string ScintillaEdit_TargetText(const ScintillaEdit* self);
void ScintillaEdit_TargetFromSelection(ScintillaEdit* self);
void ScintillaEdit_TargetWholeDocument(ScintillaEdit* self);
intptr_t ScintillaEdit_ReplaceTarget(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_ReplaceTargetRE(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_ReplaceTargetMinimal(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_SearchInTarget(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_SetSearchFlags(ScintillaEdit* self, intptr_t searchFlags);
intptr_t ScintillaEdit_SearchFlags(const ScintillaEdit* self);
void ScintillaEdit_CallTipShow(ScintillaEdit* self, intptr_t pos, const char* definition);
void ScintillaEdit_CallTipCancel(ScintillaEdit* self);
bool ScintillaEdit_CallTipActive(ScintillaEdit* self);
intptr_t ScintillaEdit_CallTipPosStart(ScintillaEdit* self);
void ScintillaEdit_CallTipSetPosStart(ScintillaEdit* self, intptr_t posStart);
void ScintillaEdit_CallTipSetHlt(ScintillaEdit* self, intptr_t highlightStart, intptr_t highlightEnd);
void ScintillaEdit_CallTipSetBack(ScintillaEdit* self, intptr_t back);
void ScintillaEdit_CallTipSetFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_CallTipSetForeHlt(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_CallTipUseStyle(ScintillaEdit* self, intptr_t tabSize);
void ScintillaEdit_CallTipSetPosition(ScintillaEdit* self, bool above);
intptr_t ScintillaEdit_VisibleFromDocLine(ScintillaEdit* self, intptr_t docLine);
intptr_t ScintillaEdit_DocLineFromVisible(ScintillaEdit* self, intptr_t displayLine);
intptr_t ScintillaEdit_WrapCount(ScintillaEdit* self, intptr_t docLine);
void ScintillaEdit_SetFoldLevel(ScintillaEdit* self, intptr_t line, intptr_t level);
intptr_t ScintillaEdit_FoldLevel(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_LastChild(const ScintillaEdit* self, intptr_t line, intptr_t level);
intptr_t ScintillaEdit_FoldParent(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_ShowLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd);
void ScintillaEdit_HideLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd);
bool ScintillaEdit_LineVisible(const ScintillaEdit* self, intptr_t line);
bool ScintillaEdit_AllLinesVisible(const ScintillaEdit* self);
void ScintillaEdit_SetFoldExpanded(ScintillaEdit* self, intptr_t line, bool expanded);
bool ScintillaEdit_FoldExpanded(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_ToggleFold(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_ToggleFoldShowText(ScintillaEdit* self, intptr_t line, const char* text);
void ScintillaEdit_FoldDisplayTextSetStyle(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_FoldDisplayTextStyle(const ScintillaEdit* self);
void ScintillaEdit_SetDefaultFoldDisplayText(ScintillaEdit* self, const char* text);
struct miqt_string ScintillaEdit_GetDefaultFoldDisplayText(ScintillaEdit* self);
void ScintillaEdit_FoldLine(ScintillaEdit* self, intptr_t line, intptr_t action);
void ScintillaEdit_FoldChildren(ScintillaEdit* self, intptr_t line, intptr_t action);
void ScintillaEdit_ExpandChildren(ScintillaEdit* self, intptr_t line, intptr_t level);
void ScintillaEdit_FoldAll(ScintillaEdit* self, intptr_t action);
void ScintillaEdit_EnsureVisible(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_SetAutomaticFold(ScintillaEdit* self, intptr_t automaticFold);
intptr_t ScintillaEdit_AutomaticFold(const ScintillaEdit* self);
void ScintillaEdit_SetFoldFlags(ScintillaEdit* self, intptr_t flags);
void ScintillaEdit_EnsureVisibleEnforcePolicy(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_SetTabIndents(ScintillaEdit* self, bool tabIndents);
bool ScintillaEdit_TabIndents(const ScintillaEdit* self);
void ScintillaEdit_SetBackSpaceUnIndents(ScintillaEdit* self, bool bsUnIndents);
bool ScintillaEdit_BackSpaceUnIndents(const ScintillaEdit* self);
void ScintillaEdit_SetMouseDwellTime(ScintillaEdit* self, intptr_t periodMilliseconds);
intptr_t ScintillaEdit_MouseDwellTime(const ScintillaEdit* self);
intptr_t ScintillaEdit_WordStartPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters);
intptr_t ScintillaEdit_WordEndPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters);
bool ScintillaEdit_IsRangeWord(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_SetIdleStyling(ScintillaEdit* self, intptr_t idleStyling);
intptr_t ScintillaEdit_IdleStyling(const ScintillaEdit* self);
void ScintillaEdit_SetWrapMode(ScintillaEdit* self, intptr_t wrapMode);
intptr_t ScintillaEdit_WrapMode(const ScintillaEdit* self);
void ScintillaEdit_SetWrapVisualFlags(ScintillaEdit* self, intptr_t wrapVisualFlags);
intptr_t ScintillaEdit_WrapVisualFlags(const ScintillaEdit* self);
void ScintillaEdit_SetWrapVisualFlagsLocation(ScintillaEdit* self, intptr_t wrapVisualFlagsLocation);
intptr_t ScintillaEdit_WrapVisualFlagsLocation(const ScintillaEdit* self);
void ScintillaEdit_SetWrapStartIndent(ScintillaEdit* self, intptr_t indent);
intptr_t ScintillaEdit_WrapStartIndent(const ScintillaEdit* self);
void ScintillaEdit_SetWrapIndentMode(ScintillaEdit* self, intptr_t wrapIndentMode);
intptr_t ScintillaEdit_WrapIndentMode(const ScintillaEdit* self);
void ScintillaEdit_SetLayoutCache(ScintillaEdit* self, intptr_t cacheMode);
intptr_t ScintillaEdit_LayoutCache(const ScintillaEdit* self);
void ScintillaEdit_SetScrollWidth(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_ScrollWidth(const ScintillaEdit* self);
void ScintillaEdit_SetScrollWidthTracking(ScintillaEdit* self, bool tracking);
bool ScintillaEdit_ScrollWidthTracking(const ScintillaEdit* self);
intptr_t ScintillaEdit_TextWidth(ScintillaEdit* self, intptr_t style, const char* text);
void ScintillaEdit_SetEndAtLastLine(ScintillaEdit* self, bool endAtLastLine);
bool ScintillaEdit_EndAtLastLine(const ScintillaEdit* self);
intptr_t ScintillaEdit_TextHeight(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_SetVScrollBar(ScintillaEdit* self, bool visible);
bool ScintillaEdit_VScrollBar(const ScintillaEdit* self);
void ScintillaEdit_AppendText(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_PhasesDraw(const ScintillaEdit* self);
void ScintillaEdit_SetPhasesDraw(ScintillaEdit* self, intptr_t phases);
void ScintillaEdit_SetFontQuality(ScintillaEdit* self, intptr_t fontQuality);
intptr_t ScintillaEdit_FontQuality(const ScintillaEdit* self);
void ScintillaEdit_SetFirstVisibleLine(ScintillaEdit* self, intptr_t displayLine);
void ScintillaEdit_SetMultiPaste(ScintillaEdit* self, intptr_t multiPaste);
intptr_t ScintillaEdit_MultiPaste(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_Tag(const ScintillaEdit* self, intptr_t tagNumber);
void ScintillaEdit_LinesJoin(ScintillaEdit* self);
void ScintillaEdit_LinesSplit(ScintillaEdit* self, intptr_t pixelWidth);
void ScintillaEdit_SetFoldMarginColour(ScintillaEdit* self, bool useSetting, intptr_t back);
void ScintillaEdit_SetFoldMarginHiColour(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_SetAccessibility(ScintillaEdit* self, intptr_t accessibility);
intptr_t ScintillaEdit_Accessibility(const ScintillaEdit* self);
void ScintillaEdit_LineDown(ScintillaEdit* self);
void ScintillaEdit_LineDownExtend(ScintillaEdit* self);
void ScintillaEdit_LineUp(ScintillaEdit* self);
void ScintillaEdit_LineUpExtend(ScintillaEdit* self);
void ScintillaEdit_CharLeft(ScintillaEdit* self);
void ScintillaEdit_CharLeftExtend(ScintillaEdit* self);
void ScintillaEdit_CharRight(ScintillaEdit* self);
void ScintillaEdit_CharRightExtend(ScintillaEdit* self);
void ScintillaEdit_WordLeft(ScintillaEdit* self);
void ScintillaEdit_WordLeftExtend(ScintillaEdit* self);
void ScintillaEdit_WordRight(ScintillaEdit* self);
void ScintillaEdit_WordRightExtend(ScintillaEdit* self);
void ScintillaEdit_Home(ScintillaEdit* self);
void ScintillaEdit_HomeExtend(ScintillaEdit* self);
void ScintillaEdit_LineEnd(ScintillaEdit* self);
void ScintillaEdit_LineEndExtend(ScintillaEdit* self);
void ScintillaEdit_DocumentStart(ScintillaEdit* self);
void ScintillaEdit_DocumentStartExtend(ScintillaEdit* self);
void ScintillaEdit_DocumentEnd(ScintillaEdit* self);
void ScintillaEdit_DocumentEndExtend(ScintillaEdit* self);
void ScintillaEdit_PageUp(ScintillaEdit* self);
void ScintillaEdit_PageUpExtend(ScintillaEdit* self);
void ScintillaEdit_PageDown(ScintillaEdit* self);
void ScintillaEdit_PageDownExtend(ScintillaEdit* self);
void ScintillaEdit_EditToggleOvertype(ScintillaEdit* self);
void ScintillaEdit_Cancel(ScintillaEdit* self);
void ScintillaEdit_DeleteBack(ScintillaEdit* self);
void ScintillaEdit_Tab(ScintillaEdit* self);
void ScintillaEdit_LineIndent(ScintillaEdit* self);
void ScintillaEdit_BackTab(ScintillaEdit* self);
void ScintillaEdit_LineDedent(ScintillaEdit* self);
void ScintillaEdit_NewLine(ScintillaEdit* self);
void ScintillaEdit_FormFeed(ScintillaEdit* self);
void ScintillaEdit_VCHome(ScintillaEdit* self);
void ScintillaEdit_VCHomeExtend(ScintillaEdit* self);
void ScintillaEdit_ZoomIn(ScintillaEdit* self);
void ScintillaEdit_ZoomOut(ScintillaEdit* self);
void ScintillaEdit_DelWordLeft(ScintillaEdit* self);
void ScintillaEdit_DelWordRight(ScintillaEdit* self);
void ScintillaEdit_DelWordRightEnd(ScintillaEdit* self);
void ScintillaEdit_LineCut(ScintillaEdit* self);
void ScintillaEdit_LineDelete(ScintillaEdit* self);
void ScintillaEdit_LineTranspose(ScintillaEdit* self);
void ScintillaEdit_LineReverse(ScintillaEdit* self);
void ScintillaEdit_LineDuplicate(ScintillaEdit* self);
void ScintillaEdit_LowerCase(ScintillaEdit* self);
void ScintillaEdit_UpperCase(ScintillaEdit* self);
void ScintillaEdit_LineScrollDown(ScintillaEdit* self);
void ScintillaEdit_LineScrollUp(ScintillaEdit* self);
void ScintillaEdit_DeleteBackNotLine(ScintillaEdit* self);
void ScintillaEdit_HomeDisplay(ScintillaEdit* self);
void ScintillaEdit_HomeDisplayExtend(ScintillaEdit* self);
void ScintillaEdit_LineEndDisplay(ScintillaEdit* self);
void ScintillaEdit_LineEndDisplayExtend(ScintillaEdit* self);
void ScintillaEdit_HomeWrap(ScintillaEdit* self);
void ScintillaEdit_HomeWrapExtend(ScintillaEdit* self);
void ScintillaEdit_LineEndWrap(ScintillaEdit* self);
void ScintillaEdit_LineEndWrapExtend(ScintillaEdit* self);
void ScintillaEdit_VCHomeWrap(ScintillaEdit* self);
void ScintillaEdit_VCHomeWrapExtend(ScintillaEdit* self);
void ScintillaEdit_LineCopy(ScintillaEdit* self);
void ScintillaEdit_MoveCaretInsideView(ScintillaEdit* self);
intptr_t ScintillaEdit_LineLength(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_BraceHighlight(ScintillaEdit* self, intptr_t posA, intptr_t posB);
void ScintillaEdit_BraceHighlightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator);
void ScintillaEdit_BraceBadLight(ScintillaEdit* self, intptr_t pos);
void ScintillaEdit_BraceBadLightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator);
intptr_t ScintillaEdit_BraceMatch(ScintillaEdit* self, intptr_t pos, intptr_t maxReStyle);
intptr_t ScintillaEdit_BraceMatchNext(ScintillaEdit* self, intptr_t pos, intptr_t startPos);
bool ScintillaEdit_ViewEOL(const ScintillaEdit* self);
void ScintillaEdit_SetViewEOL(ScintillaEdit* self, bool visible);
intptr_t ScintillaEdit_DocPointer(const ScintillaEdit* self);
void ScintillaEdit_SetDocPointer(ScintillaEdit* self, intptr_t doc);
void ScintillaEdit_SetModEventMask(ScintillaEdit* self, intptr_t eventMask);
intptr_t ScintillaEdit_EdgeColumn(const ScintillaEdit* self);
void ScintillaEdit_SetEdgeColumn(ScintillaEdit* self, intptr_t column);
intptr_t ScintillaEdit_EdgeMode(const ScintillaEdit* self);
void ScintillaEdit_SetEdgeMode(ScintillaEdit* self, intptr_t edgeMode);
intptr_t ScintillaEdit_EdgeColour(const ScintillaEdit* self);
void ScintillaEdit_SetEdgeColour(ScintillaEdit* self, intptr_t edgeColour);
void ScintillaEdit_MultiEdgeAddLine(ScintillaEdit* self, intptr_t column, intptr_t edgeColour);
void ScintillaEdit_MultiEdgeClearAll(ScintillaEdit* self);
intptr_t ScintillaEdit_MultiEdgeColumn(const ScintillaEdit* self, intptr_t which);
void ScintillaEdit_SearchAnchor(ScintillaEdit* self);
intptr_t ScintillaEdit_SearchNext(ScintillaEdit* self, intptr_t searchFlags, const char* text);
intptr_t ScintillaEdit_SearchPrev(ScintillaEdit* self, intptr_t searchFlags, const char* text);
intptr_t ScintillaEdit_LinesOnScreen(const ScintillaEdit* self);
void ScintillaEdit_UsePopUp(ScintillaEdit* self, intptr_t popUpMode);
bool ScintillaEdit_SelectionIsRectangle(const ScintillaEdit* self);
void ScintillaEdit_SetZoom(ScintillaEdit* self, intptr_t zoomInPoints);
intptr_t ScintillaEdit_Zoom(const ScintillaEdit* self);
intptr_t ScintillaEdit_CreateDocument(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions);
void ScintillaEdit_AddRefDocument(ScintillaEdit* self, intptr_t doc);
void ScintillaEdit_ReleaseDocument(ScintillaEdit* self, intptr_t doc);
intptr_t ScintillaEdit_DocumentOptions(const ScintillaEdit* self);
intptr_t ScintillaEdit_ModEventMask(const ScintillaEdit* self);
void ScintillaEdit_SetCommandEvents(ScintillaEdit* self, bool commandEvents);
bool ScintillaEdit_CommandEvents(const ScintillaEdit* self);
void ScintillaEdit_SetFocus(ScintillaEdit* self, bool focus);
bool ScintillaEdit_Focus(const ScintillaEdit* self);
void ScintillaEdit_SetStatus(ScintillaEdit* self, intptr_t status);
intptr_t ScintillaEdit_Status(const ScintillaEdit* self);
void ScintillaEdit_SetMouseDownCaptures(ScintillaEdit* self, bool captures);
bool ScintillaEdit_MouseDownCaptures(const ScintillaEdit* self);
void ScintillaEdit_SetMouseWheelCaptures(ScintillaEdit* self, bool captures);
bool ScintillaEdit_MouseWheelCaptures(const ScintillaEdit* self);
void ScintillaEdit_SetCursor(ScintillaEdit* self, intptr_t cursorType);
intptr_t ScintillaEdit_Cursor(const ScintillaEdit* self);
void ScintillaEdit_SetControlCharSymbol(ScintillaEdit* self, intptr_t symbol);
intptr_t ScintillaEdit_ControlCharSymbol(const ScintillaEdit* self);
void ScintillaEdit_WordPartLeft(ScintillaEdit* self);
void ScintillaEdit_WordPartLeftExtend(ScintillaEdit* self);
void ScintillaEdit_WordPartRight(ScintillaEdit* self);
void ScintillaEdit_WordPartRightExtend(ScintillaEdit* self);
void ScintillaEdit_SetVisiblePolicy(ScintillaEdit* self, intptr_t visiblePolicy, intptr_t visibleSlop);
void ScintillaEdit_DelLineLeft(ScintillaEdit* self);
void ScintillaEdit_DelLineRight(ScintillaEdit* self);
void ScintillaEdit_SetXOffset(ScintillaEdit* self, intptr_t xOffset);
intptr_t ScintillaEdit_XOffset(const ScintillaEdit* self);
void ScintillaEdit_ChooseCaretX(ScintillaEdit* self);
void ScintillaEdit_GrabFocus(ScintillaEdit* self);
void ScintillaEdit_SetXCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop);
void ScintillaEdit_SetYCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop);
void ScintillaEdit_SetPrintWrapMode(ScintillaEdit* self, intptr_t wrapMode);
intptr_t ScintillaEdit_PrintWrapMode(const ScintillaEdit* self);
void ScintillaEdit_SetHotspotActiveFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
intptr_t ScintillaEdit_HotspotActiveFore(const ScintillaEdit* self);
void ScintillaEdit_SetHotspotActiveBack(ScintillaEdit* self, bool useSetting, intptr_t back);
intptr_t ScintillaEdit_HotspotActiveBack(const ScintillaEdit* self);
void ScintillaEdit_SetHotspotActiveUnderline(ScintillaEdit* self, bool underline);
bool ScintillaEdit_HotspotActiveUnderline(const ScintillaEdit* self);
void ScintillaEdit_SetHotspotSingleLine(ScintillaEdit* self, bool singleLine);
bool ScintillaEdit_HotspotSingleLine(const ScintillaEdit* self);
void ScintillaEdit_ParaDown(ScintillaEdit* self);
void ScintillaEdit_ParaDownExtend(ScintillaEdit* self);
void ScintillaEdit_ParaUp(ScintillaEdit* self);
void ScintillaEdit_ParaUpExtend(ScintillaEdit* self);
intptr_t ScintillaEdit_PositionBefore(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_PositionAfter(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_PositionRelative(ScintillaEdit* self, intptr_t pos, intptr_t relative);
intptr_t ScintillaEdit_PositionRelativeCodeUnits(ScintillaEdit* self, intptr_t pos, intptr_t relative);
void ScintillaEdit_CopyRange(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_CopyText(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_SetSelectionMode(ScintillaEdit* self, intptr_t selectionMode);
void ScintillaEdit_ChangeSelectionMode(ScintillaEdit* self, intptr_t selectionMode);
intptr_t ScintillaEdit_SelectionMode(const ScintillaEdit* self);
void ScintillaEdit_SetMoveExtendsSelection(ScintillaEdit* self, bool moveExtendsSelection);
bool ScintillaEdit_MoveExtendsSelection(const ScintillaEdit* self);
intptr_t ScintillaEdit_GetLineSelStartPosition(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_GetLineSelEndPosition(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_LineDownRectExtend(ScintillaEdit* self);
void ScintillaEdit_LineUpRectExtend(ScintillaEdit* self);
void ScintillaEdit_CharLeftRectExtend(ScintillaEdit* self);
void ScintillaEdit_CharRightRectExtend(ScintillaEdit* self);
void ScintillaEdit_HomeRectExtend(ScintillaEdit* self);
void ScintillaEdit_VCHomeRectExtend(ScintillaEdit* self);
void ScintillaEdit_LineEndRectExtend(ScintillaEdit* self);
void ScintillaEdit_PageUpRectExtend(ScintillaEdit* self);
void ScintillaEdit_PageDownRectExtend(ScintillaEdit* self);
void ScintillaEdit_StutteredPageUp(ScintillaEdit* self);
void ScintillaEdit_StutteredPageUpExtend(ScintillaEdit* self);
void ScintillaEdit_StutteredPageDown(ScintillaEdit* self);
void ScintillaEdit_StutteredPageDownExtend(ScintillaEdit* self);
void ScintillaEdit_WordLeftEnd(ScintillaEdit* self);
void ScintillaEdit_WordLeftEndExtend(ScintillaEdit* self);
void ScintillaEdit_WordRightEnd(ScintillaEdit* self);
void ScintillaEdit_WordRightEndExtend(ScintillaEdit* self);
void ScintillaEdit_SetWhitespaceChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_WhitespaceChars(const ScintillaEdit* self);
void ScintillaEdit_SetPunctuationChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_PunctuationChars(const ScintillaEdit* self);
void ScintillaEdit_SetCharsDefault(ScintillaEdit* self);
intptr_t ScintillaEdit_AutoCCurrent(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_AutoCCurrentText(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetCaseInsensitiveBehaviour(ScintillaEdit* self, intptr_t behaviour);
intptr_t ScintillaEdit_AutoCCaseInsensitiveBehaviour(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetMulti(ScintillaEdit* self, intptr_t multi);
intptr_t ScintillaEdit_AutoCMulti(const ScintillaEdit* self);
void ScintillaEdit_AutoCSetOrder(ScintillaEdit* self, intptr_t order);
intptr_t ScintillaEdit_AutoCOrder(const ScintillaEdit* self);
void ScintillaEdit_Allocate(ScintillaEdit* self, intptr_t bytes);
struct miqt_string ScintillaEdit_TargetAsUTF8(ScintillaEdit* self);
void ScintillaEdit_SetLengthForEncode(ScintillaEdit* self, intptr_t bytes);
struct miqt_string ScintillaEdit_EncodedFromUTF8(ScintillaEdit* self, const char* utf8);
intptr_t ScintillaEdit_FindColumn(ScintillaEdit* self, intptr_t line, intptr_t column);
intptr_t ScintillaEdit_CaretSticky(const ScintillaEdit* self);
void ScintillaEdit_SetCaretSticky(ScintillaEdit* self, intptr_t useCaretStickyBehaviour);
void ScintillaEdit_ToggleCaretSticky(ScintillaEdit* self);
void ScintillaEdit_SetPasteConvertEndings(ScintillaEdit* self, bool convert);
bool ScintillaEdit_PasteConvertEndings(const ScintillaEdit* self);
void ScintillaEdit_ReplaceRectangular(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_SelectionDuplicate(ScintillaEdit* self);
void ScintillaEdit_SetCaretLineBackAlpha(ScintillaEdit* self, intptr_t alpha);
intptr_t ScintillaEdit_CaretLineBackAlpha(const ScintillaEdit* self);
void ScintillaEdit_SetCaretStyle(ScintillaEdit* self, intptr_t caretStyle);
intptr_t ScintillaEdit_CaretStyle(const ScintillaEdit* self);
void ScintillaEdit_SetIndicatorCurrent(ScintillaEdit* self, intptr_t indicator);
intptr_t ScintillaEdit_IndicatorCurrent(const ScintillaEdit* self);
void ScintillaEdit_SetIndicatorValue(ScintillaEdit* self, intptr_t value);
intptr_t ScintillaEdit_IndicatorValue(const ScintillaEdit* self);
void ScintillaEdit_IndicatorFillRange(ScintillaEdit* self, intptr_t start, intptr_t lengthFill);
void ScintillaEdit_IndicatorClearRange(ScintillaEdit* self, intptr_t start, intptr_t lengthClear);
intptr_t ScintillaEdit_IndicatorAllOnFor(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_IndicatorValueAt(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
intptr_t ScintillaEdit_IndicatorStart(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
intptr_t ScintillaEdit_IndicatorEnd(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
void ScintillaEdit_SetPositionCache(ScintillaEdit* self, intptr_t size);
intptr_t ScintillaEdit_PositionCache(const ScintillaEdit* self);
void ScintillaEdit_SetLayoutThreads(ScintillaEdit* self, intptr_t threads);
intptr_t ScintillaEdit_LayoutThreads(const ScintillaEdit* self);
void ScintillaEdit_CopyAllowLine(ScintillaEdit* self);
void ScintillaEdit_CutAllowLine(ScintillaEdit* self);
void ScintillaEdit_SetCopySeparator(ScintillaEdit* self, const char* separator);
struct miqt_string ScintillaEdit_CopySeparator(const ScintillaEdit* self);
intptr_t ScintillaEdit_CharacterPointer(const ScintillaEdit* self);
intptr_t ScintillaEdit_RangePointer(const ScintillaEdit* self, intptr_t start, intptr_t lengthRange);
intptr_t ScintillaEdit_GapPosition(const ScintillaEdit* self);
void ScintillaEdit_IndicSetAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha);
intptr_t ScintillaEdit_IndicAlpha(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_IndicSetOutlineAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha);
intptr_t ScintillaEdit_IndicOutlineAlpha(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_SetExtraAscent(ScintillaEdit* self, intptr_t extraAscent);
intptr_t ScintillaEdit_ExtraAscent(const ScintillaEdit* self);
void ScintillaEdit_SetExtraDescent(ScintillaEdit* self, intptr_t extraDescent);
intptr_t ScintillaEdit_ExtraDescent(const ScintillaEdit* self);
intptr_t ScintillaEdit_MarkerSymbolDefined(ScintillaEdit* self, intptr_t markerNumber);
void ScintillaEdit_MarginSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_MarginText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_MarginSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_MarginStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_MarginSetStyles(ScintillaEdit* self, intptr_t line, const char* styles);
struct miqt_string ScintillaEdit_MarginStyles(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_MarginTextClearAll(ScintillaEdit* self);
void ScintillaEdit_MarginSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_MarginStyleOffset(const ScintillaEdit* self);
void ScintillaEdit_SetMarginOptions(ScintillaEdit* self, intptr_t marginOptions);
intptr_t ScintillaEdit_MarginOptions(const ScintillaEdit* self);
void ScintillaEdit_AnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_AnnotationText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_AnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_AnnotationStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_AnnotationSetStyles(ScintillaEdit* self, intptr_t line, const char* styles);
struct miqt_string ScintillaEdit_AnnotationStyles(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_AnnotationLines(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_AnnotationClearAll(ScintillaEdit* self);
void ScintillaEdit_AnnotationSetVisible(ScintillaEdit* self, intptr_t visible);
intptr_t ScintillaEdit_AnnotationVisible(const ScintillaEdit* self);
void ScintillaEdit_AnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_AnnotationStyleOffset(const ScintillaEdit* self);
void ScintillaEdit_ReleaseAllExtendedStyles(ScintillaEdit* self);
intptr_t ScintillaEdit_AllocateExtendedStyles(ScintillaEdit* self, intptr_t numberStyles);
void ScintillaEdit_AddUndoAction(ScintillaEdit* self, intptr_t token, intptr_t flags);
intptr_t ScintillaEdit_CharPositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
intptr_t ScintillaEdit_CharPositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_SetMouseSelectionRectangularSwitch(ScintillaEdit* self, bool mouseSelectionRectangularSwitch);
bool ScintillaEdit_MouseSelectionRectangularSwitch(const ScintillaEdit* self);
void ScintillaEdit_SetMultipleSelection(ScintillaEdit* self, bool multipleSelection);
bool ScintillaEdit_MultipleSelection(const ScintillaEdit* self);
void ScintillaEdit_SetAdditionalSelectionTyping(ScintillaEdit* self, bool additionalSelectionTyping);
bool ScintillaEdit_AdditionalSelectionTyping(const ScintillaEdit* self);
void ScintillaEdit_SetAdditionalCaretsBlink(ScintillaEdit* self, bool additionalCaretsBlink);
bool ScintillaEdit_AdditionalCaretsBlink(const ScintillaEdit* self);
void ScintillaEdit_SetAdditionalCaretsVisible(ScintillaEdit* self, bool additionalCaretsVisible);
bool ScintillaEdit_AdditionalCaretsVisible(const ScintillaEdit* self);
intptr_t ScintillaEdit_Selections(const ScintillaEdit* self);
bool ScintillaEdit_SelectionEmpty(const ScintillaEdit* self);
void ScintillaEdit_ClearSelections(ScintillaEdit* self);
void ScintillaEdit_SetSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor);
void ScintillaEdit_AddSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor);
intptr_t ScintillaEdit_SelectionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_DropSelectionN(ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetMainSelection(ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_MainSelection(const ScintillaEdit* self);
void ScintillaEdit_SetSelectionNCaret(ScintillaEdit* self, intptr_t selection, intptr_t caret);
intptr_t ScintillaEdit_SelectionNCaret(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetSelectionNAnchor(ScintillaEdit* self, intptr_t selection, intptr_t anchor);
intptr_t ScintillaEdit_SelectionNAnchor(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetSelectionNCaretVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space);
intptr_t ScintillaEdit_SelectionNCaretVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetSelectionNAnchorVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space);
intptr_t ScintillaEdit_SelectionNAnchorVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetSelectionNStart(ScintillaEdit* self, intptr_t selection, intptr_t anchor);
intptr_t ScintillaEdit_SelectionNStart(const ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_SelectionNStartVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetSelectionNEnd(ScintillaEdit* self, intptr_t selection, intptr_t caret);
intptr_t ScintillaEdit_SelectionNEndVirtualSpace(const ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_SelectionNEnd(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_SetRectangularSelectionCaret(ScintillaEdit* self, intptr_t caret);
intptr_t ScintillaEdit_RectangularSelectionCaret(const ScintillaEdit* self);
void ScintillaEdit_SetRectangularSelectionAnchor(ScintillaEdit* self, intptr_t anchor);
intptr_t ScintillaEdit_RectangularSelectionAnchor(const ScintillaEdit* self);
void ScintillaEdit_SetRectangularSelectionCaretVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_RectangularSelectionCaretVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_SetRectangularSelectionAnchorVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_RectangularSelectionAnchorVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_SetVirtualSpaceOptions(ScintillaEdit* self, intptr_t virtualSpaceOptions);
intptr_t ScintillaEdit_VirtualSpaceOptions(const ScintillaEdit* self);
void ScintillaEdit_SetRectangularSelectionModifier(ScintillaEdit* self, intptr_t modifier);
intptr_t ScintillaEdit_RectangularSelectionModifier(const ScintillaEdit* self);
void ScintillaEdit_SetAdditionalSelFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_SetAdditionalSelBack(ScintillaEdit* self, intptr_t back);
void ScintillaEdit_SetAdditionalSelAlpha(ScintillaEdit* self, intptr_t alpha);
intptr_t ScintillaEdit_AdditionalSelAlpha(const ScintillaEdit* self);
void ScintillaEdit_SetAdditionalCaretFore(ScintillaEdit* self, intptr_t fore);
intptr_t ScintillaEdit_AdditionalCaretFore(const ScintillaEdit* self);
void ScintillaEdit_RotateSelection(ScintillaEdit* self);
void ScintillaEdit_SwapMainAnchorCaret(ScintillaEdit* self);
void ScintillaEdit_MultipleSelectAddNext(ScintillaEdit* self);
void ScintillaEdit_MultipleSelectAddEach(ScintillaEdit* self);
intptr_t ScintillaEdit_ChangeLexerState(ScintillaEdit* self, intptr_t start, intptr_t end);
intptr_t ScintillaEdit_ContractedFoldNext(ScintillaEdit* self, intptr_t lineStart);
void ScintillaEdit_VerticalCentreCaret(ScintillaEdit* self);
void ScintillaEdit_MoveSelectedLinesUp(ScintillaEdit* self);
void ScintillaEdit_MoveSelectedLinesDown(ScintillaEdit* self);
void ScintillaEdit_SetIdentifier(ScintillaEdit* self, intptr_t identifier);
intptr_t ScintillaEdit_Identifier(const ScintillaEdit* self);
void ScintillaEdit_RGBAImageSetWidth(ScintillaEdit* self, intptr_t width);
void ScintillaEdit_RGBAImageSetHeight(ScintillaEdit* self, intptr_t height);
void ScintillaEdit_RGBAImageSetScale(ScintillaEdit* self, intptr_t scalePercent);
void ScintillaEdit_MarkerDefineRGBAImage(ScintillaEdit* self, intptr_t markerNumber, const char* pixels);
void ScintillaEdit_RegisterRGBAImage(ScintillaEdit* self, intptr_t typeVal, const char* pixels);
void ScintillaEdit_ScrollToStart(ScintillaEdit* self);
void ScintillaEdit_ScrollToEnd(ScintillaEdit* self);
void ScintillaEdit_SetTechnology(ScintillaEdit* self, intptr_t technology);
intptr_t ScintillaEdit_Technology(const ScintillaEdit* self);
intptr_t ScintillaEdit_CreateLoader(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions);
void ScintillaEdit_FindIndicatorShow(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_FindIndicatorFlash(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_FindIndicatorHide(ScintillaEdit* self);
void ScintillaEdit_VCHomeDisplay(ScintillaEdit* self);
void ScintillaEdit_VCHomeDisplayExtend(ScintillaEdit* self);
bool ScintillaEdit_CaretLineVisibleAlways(const ScintillaEdit* self);
void ScintillaEdit_SetCaretLineVisibleAlways(ScintillaEdit* self, bool alwaysVisible);
void ScintillaEdit_SetLineEndTypesAllowed(ScintillaEdit* self, intptr_t lineEndBitSet);
intptr_t ScintillaEdit_LineEndTypesAllowed(const ScintillaEdit* self);
intptr_t ScintillaEdit_LineEndTypesActive(const ScintillaEdit* self);
void ScintillaEdit_SetRepresentation(ScintillaEdit* self, const char* encodedCharacter, const char* representation);
struct miqt_string ScintillaEdit_Representation(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_ClearRepresentation(ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_ClearAllRepresentations(ScintillaEdit* self);
void ScintillaEdit_SetRepresentationAppearance(ScintillaEdit* self, const char* encodedCharacter, intptr_t appearance);
intptr_t ScintillaEdit_RepresentationAppearance(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_SetRepresentationColour(ScintillaEdit* self, const char* encodedCharacter, intptr_t colour);
intptr_t ScintillaEdit_RepresentationColour(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_EOLAnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_EOLAnnotationText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_EOLAnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_EOLAnnotationStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_EOLAnnotationClearAll(ScintillaEdit* self);
void ScintillaEdit_EOLAnnotationSetVisible(ScintillaEdit* self, intptr_t visible);
intptr_t ScintillaEdit_EOLAnnotationVisible(const ScintillaEdit* self);
void ScintillaEdit_EOLAnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_EOLAnnotationStyleOffset(const ScintillaEdit* self);
bool ScintillaEdit_SupportsFeature(const ScintillaEdit* self, intptr_t feature);
intptr_t ScintillaEdit_LineCharacterIndex(const ScintillaEdit* self);
void ScintillaEdit_AllocateLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex);
void ScintillaEdit_ReleaseLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex);
intptr_t ScintillaEdit_LineFromIndexPosition(ScintillaEdit* self, intptr_t pos, intptr_t lineCharacterIndex);
intptr_t ScintillaEdit_IndexPositionFromLine(ScintillaEdit* self, intptr_t line, intptr_t lineCharacterIndex);
void ScintillaEdit_StartRecord(ScintillaEdit* self);
void ScintillaEdit_StopRecord(ScintillaEdit* self);
intptr_t ScintillaEdit_Lexer(const ScintillaEdit* self);
void ScintillaEdit_Colourise(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_SetProperty(ScintillaEdit* self, const char* key, const char* value);
void ScintillaEdit_SetKeyWords(ScintillaEdit* self, intptr_t keyWordSet, const char* keyWords);
struct miqt_string ScintillaEdit_Property(const ScintillaEdit* self, const char* key);
struct miqt_string ScintillaEdit_PropertyExpanded(const ScintillaEdit* self, const char* key);
intptr_t ScintillaEdit_PropertyInt(const ScintillaEdit* self, const char* key, intptr_t defaultValue);
struct miqt_string ScintillaEdit_LexerLanguage(const ScintillaEdit* self);
intptr_t ScintillaEdit_PrivateLexerCall(ScintillaEdit* self, intptr_t operation, intptr_t pointer);
struct miqt_string ScintillaEdit_PropertyNames(ScintillaEdit* self);
intptr_t ScintillaEdit_PropertyType(ScintillaEdit* self, const char* name);
struct miqt_string ScintillaEdit_DescribeProperty(ScintillaEdit* self, const char* name);
struct miqt_string ScintillaEdit_DescribeKeyWordSets(ScintillaEdit* self);
intptr_t ScintillaEdit_LineEndTypesSupported(const ScintillaEdit* self);
intptr_t ScintillaEdit_AllocateSubStyles(ScintillaEdit* self, intptr_t styleBase, intptr_t numberStyles);
intptr_t ScintillaEdit_SubStylesStart(const ScintillaEdit* self, intptr_t styleBase);
intptr_t ScintillaEdit_SubStylesLength(const ScintillaEdit* self, intptr_t styleBase);
intptr_t ScintillaEdit_StyleFromSubStyle(const ScintillaEdit* self, intptr_t subStyle);
intptr_t ScintillaEdit_PrimaryStyleFromStyle(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_FreeSubStyles(ScintillaEdit* self);
void ScintillaEdit_SetIdentifiers(ScintillaEdit* self, intptr_t style, const char* identifiers);
intptr_t ScintillaEdit_DistanceToSecondaryStyles(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_SubStyleBases(const ScintillaEdit* self);
intptr_t ScintillaEdit_NamedStyles(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_NameOfStyle(ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_TagsOfStyle(ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_DescriptionOfStyle(ScintillaEdit* self, intptr_t style);
void ScintillaEdit_SetILexer(ScintillaEdit* self, intptr_t ilexer);
intptr_t ScintillaEdit_Bidirectional(const ScintillaEdit* self);
void ScintillaEdit_SetBidirectional(ScintillaEdit* self, intptr_t bidirectional);
struct miqt_string ScintillaEdit_Tr2(const char* s, const char* c);
struct miqt_string ScintillaEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaEdit_TrUtf82(const char* s, const char* c);
struct miqt_string ScintillaEdit_TrUtf83(const char* s, const char* c, int n);
void ScintillaEdit_Delete(ScintillaEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
