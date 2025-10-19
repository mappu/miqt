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
class QAbstractScrollArea;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
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
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
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
double Scintilla__Internal__Point_x(const Scintilla__Internal__Point* self);
void Scintilla__Internal__Point_setX(Scintilla__Internal__Point* self, double x);
double Scintilla__Internal__Point_y(const Scintilla__Internal__Point* self);
void Scintilla__Internal__Point_setY(Scintilla__Internal__Point* self, double y);
Scintilla__Internal__Point* Scintilla__Internal__Point_FromInts(int x_, int y_);
bool Scintilla__Internal__Point_operatorEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
bool Scintilla__Internal__Point_operatorNotEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
Scintilla__Internal__Point* Scintilla__Internal__Point_operatorPlus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);
Scintilla__Internal__Point* Scintilla__Internal__Point_operatorMinus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other);

void Scintilla__Internal__Point_delete(Scintilla__Internal__Point* self);

double Scintilla__Internal__Interval_left(const Scintilla__Internal__Interval* self);
void Scintilla__Internal__Interval_setLeft(Scintilla__Internal__Interval* self, double left);
double Scintilla__Internal__Interval_right(const Scintilla__Internal__Interval* self);
void Scintilla__Internal__Interval_setRight(Scintilla__Internal__Interval* self, double right);
bool Scintilla__Internal__Interval_operatorEqual(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other);
double Scintilla__Internal__Interval_Width(const Scintilla__Internal__Interval* self);
bool Scintilla__Internal__Interval_Empty(const Scintilla__Internal__Interval* self);
bool Scintilla__Internal__Interval_Intersects(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other);
Scintilla__Internal__Interval* Scintilla__Internal__Interval_Offset(const Scintilla__Internal__Interval* self, double offset);

void Scintilla__Internal__Interval_delete(Scintilla__Internal__Interval* self);

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new();
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new2(Scintilla__Internal__PRectangle* param1);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new3(double left_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new4(double left_, double top_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new5(double left_, double top_, double right_);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new6(double left_, double top_, double right_, double bottom_);
double Scintilla__Internal__PRectangle_left(const Scintilla__Internal__PRectangle* self);
void Scintilla__Internal__PRectangle_setLeft(Scintilla__Internal__PRectangle* self, double left);
double Scintilla__Internal__PRectangle_top(const Scintilla__Internal__PRectangle* self);
void Scintilla__Internal__PRectangle_setTop(Scintilla__Internal__PRectangle* self, double top);
double Scintilla__Internal__PRectangle_right(const Scintilla__Internal__PRectangle* self);
void Scintilla__Internal__PRectangle_setRight(Scintilla__Internal__PRectangle* self, double right);
double Scintilla__Internal__PRectangle_bottom(const Scintilla__Internal__PRectangle* self);
void Scintilla__Internal__PRectangle_setBottom(Scintilla__Internal__PRectangle* self, double bottom);
Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_FromInts(int left_, int top_, int right_, int bottom_);
bool Scintilla__Internal__PRectangle_operatorEqual(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc);
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

void Scintilla__Internal__PRectangle_delete(Scintilla__Internal__PRectangle* self);

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
bool Scintilla__Internal__ColourRGBA_operatorEqual(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other);
bool Scintilla__Internal__ColourRGBA_IsOpaque(const Scintilla__Internal__ColourRGBA* self);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith2(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other, double proportion);
void Scintilla__Internal__ColourRGBA_operatorAssign(Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* param1);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey2(unsigned int grey, unsigned int alpha);

void Scintilla__Internal__ColourRGBA_delete(Scintilla__Internal__ColourRGBA* self);

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new(Scintilla__Internal__ColourRGBA* colour_);
Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new2(Scintilla__Internal__Stroke* param1);
Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new3(Scintilla__Internal__ColourRGBA* colour_, double width_);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__Stroke_colour(const Scintilla__Internal__Stroke* self);
void Scintilla__Internal__Stroke_setColour(Scintilla__Internal__Stroke* self, Scintilla__Internal__ColourRGBA* colour);
double Scintilla__Internal__Stroke_width(const Scintilla__Internal__Stroke* self);
void Scintilla__Internal__Stroke_setWidth(Scintilla__Internal__Stroke* self, double width);
float Scintilla__Internal__Stroke_WidthF(const Scintilla__Internal__Stroke* self);

void Scintilla__Internal__Stroke_delete(Scintilla__Internal__Stroke* self);

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new(Scintilla__Internal__ColourRGBA* colour_);
Scintilla__Internal__Fill* Scintilla__Internal__Fill_new2(Scintilla__Internal__Fill* param1);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__Fill_colour(const Scintilla__Internal__Fill* self);
void Scintilla__Internal__Fill_setColour(Scintilla__Internal__Fill* self, Scintilla__Internal__ColourRGBA* colour);

void Scintilla__Internal__Fill_delete(Scintilla__Internal__Fill* self);

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new2(Scintilla__Internal__ColourRGBA* colourBoth);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new3(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_, double widthStroke_);
Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new4(Scintilla__Internal__ColourRGBA* colourBoth, double widthStroke_);
Scintilla__Internal__Fill* Scintilla__Internal__FillStroke_fill(const Scintilla__Internal__FillStroke* self);
void Scintilla__Internal__FillStroke_setFill(Scintilla__Internal__FillStroke* self, Scintilla__Internal__Fill* fill);
Scintilla__Internal__Stroke* Scintilla__Internal__FillStroke_stroke(const Scintilla__Internal__FillStroke* self);
void Scintilla__Internal__FillStroke_setStroke(Scintilla__Internal__FillStroke* self, Scintilla__Internal__Stroke* stroke);

void Scintilla__Internal__FillStroke_delete(Scintilla__Internal__FillStroke* self);

Scintilla__Internal__ColourStop* Scintilla__Internal__ColourStop_new(double position_, Scintilla__Internal__ColourRGBA* colour_);
double Scintilla__Internal__ColourStop_position(const Scintilla__Internal__ColourStop* self);
void Scintilla__Internal__ColourStop_setPosition(Scintilla__Internal__ColourStop* self, double position);
Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourStop_colour(const Scintilla__Internal__ColourStop* self);
void Scintilla__Internal__ColourStop_setColour(Scintilla__Internal__ColourStop* self, Scintilla__Internal__ColourRGBA* colour);

void Scintilla__Internal__ColourStop_delete(Scintilla__Internal__ColourStop* self);

long Scintilla__CharacterRange_cpMin(const Scintilla__CharacterRange* self);
void Scintilla__CharacterRange_setCpMin(Scintilla__CharacterRange* self, long cpMin);
long Scintilla__CharacterRange_cpMax(const Scintilla__CharacterRange* self);
void Scintilla__CharacterRange_setCpMax(Scintilla__CharacterRange* self, long cpMax);

void Scintilla__CharacterRange_delete(Scintilla__CharacterRange* self);

intptr_t Scintilla__CharacterRangeFull_cpMin(const Scintilla__CharacterRangeFull* self);
void Scintilla__CharacterRangeFull_setCpMin(Scintilla__CharacterRangeFull* self, intptr_t cpMin);
intptr_t Scintilla__CharacterRangeFull_cpMax(const Scintilla__CharacterRangeFull* self);
void Scintilla__CharacterRangeFull_setCpMax(Scintilla__CharacterRangeFull* self, intptr_t cpMax);

void Scintilla__CharacterRangeFull_delete(Scintilla__CharacterRangeFull* self);

Scintilla__CharacterRange* Scintilla__TextRange_chrg(const Scintilla__TextRange* self);
void Scintilla__TextRange_setChrg(Scintilla__TextRange* self, Scintilla__CharacterRange* chrg);
char* Scintilla__TextRange_lpstrText(const Scintilla__TextRange* self);
void Scintilla__TextRange_setLpstrText(Scintilla__TextRange* self, char* lpstrText);

void Scintilla__TextRange_delete(Scintilla__TextRange* self);

Scintilla__CharacterRangeFull* Scintilla__TextRangeFull_chrg(const Scintilla__TextRangeFull* self);
void Scintilla__TextRangeFull_setChrg(Scintilla__TextRangeFull* self, Scintilla__CharacterRangeFull* chrg);
char* Scintilla__TextRangeFull_lpstrText(const Scintilla__TextRangeFull* self);
void Scintilla__TextRangeFull_setLpstrText(Scintilla__TextRangeFull* self, char* lpstrText);

void Scintilla__TextRangeFull_delete(Scintilla__TextRangeFull* self);

Scintilla__CharacterRange* Scintilla__TextToFind_chrg(const Scintilla__TextToFind* self);
void Scintilla__TextToFind_setChrg(Scintilla__TextToFind* self, Scintilla__CharacterRange* chrg);
const char* Scintilla__TextToFind_lpstrText(const Scintilla__TextToFind* self);
void Scintilla__TextToFind_setLpstrText(Scintilla__TextToFind* self, const char* lpstrText);
Scintilla__CharacterRange* Scintilla__TextToFind_chrgText(const Scintilla__TextToFind* self);
void Scintilla__TextToFind_setChrgText(Scintilla__TextToFind* self, Scintilla__CharacterRange* chrgText);

void Scintilla__TextToFind_delete(Scintilla__TextToFind* self);

Scintilla__CharacterRangeFull* Scintilla__TextToFindFull_chrg(const Scintilla__TextToFindFull* self);
void Scintilla__TextToFindFull_setChrg(Scintilla__TextToFindFull* self, Scintilla__CharacterRangeFull* chrg);
const char* Scintilla__TextToFindFull_lpstrText(const Scintilla__TextToFindFull* self);
void Scintilla__TextToFindFull_setLpstrText(Scintilla__TextToFindFull* self, const char* lpstrText);
Scintilla__CharacterRangeFull* Scintilla__TextToFindFull_chrgText(const Scintilla__TextToFindFull* self);
void Scintilla__TextToFindFull_setChrgText(Scintilla__TextToFindFull* self, Scintilla__CharacterRangeFull* chrgText);

void Scintilla__TextToFindFull_delete(Scintilla__TextToFindFull* self);

int Scintilla__Rectangle_left(const Scintilla__Rectangle* self);
void Scintilla__Rectangle_setLeft(Scintilla__Rectangle* self, int left);
int Scintilla__Rectangle_top(const Scintilla__Rectangle* self);
void Scintilla__Rectangle_setTop(Scintilla__Rectangle* self, int top);
int Scintilla__Rectangle_right(const Scintilla__Rectangle* self);
void Scintilla__Rectangle_setRight(Scintilla__Rectangle* self, int right);
int Scintilla__Rectangle_bottom(const Scintilla__Rectangle* self);
void Scintilla__Rectangle_setBottom(Scintilla__Rectangle* self, int bottom);

void Scintilla__Rectangle_delete(Scintilla__Rectangle* self);

void* Scintilla__RangeToFormat_hdc(const Scintilla__RangeToFormat* self);
void Scintilla__RangeToFormat_setHdc(Scintilla__RangeToFormat* self, void* hdc);
void* Scintilla__RangeToFormat_hdcTarget(const Scintilla__RangeToFormat* self);
void Scintilla__RangeToFormat_setHdcTarget(Scintilla__RangeToFormat* self, void* hdcTarget);
Scintilla__Rectangle* Scintilla__RangeToFormat_rc(const Scintilla__RangeToFormat* self);
void Scintilla__RangeToFormat_setRc(Scintilla__RangeToFormat* self, Scintilla__Rectangle* rc);
Scintilla__Rectangle* Scintilla__RangeToFormat_rcPage(const Scintilla__RangeToFormat* self);
void Scintilla__RangeToFormat_setRcPage(Scintilla__RangeToFormat* self, Scintilla__Rectangle* rcPage);
Scintilla__CharacterRange* Scintilla__RangeToFormat_chrg(const Scintilla__RangeToFormat* self);
void Scintilla__RangeToFormat_setChrg(Scintilla__RangeToFormat* self, Scintilla__CharacterRange* chrg);

void Scintilla__RangeToFormat_delete(Scintilla__RangeToFormat* self);

void* Scintilla__RangeToFormatFull_hdc(const Scintilla__RangeToFormatFull* self);
void Scintilla__RangeToFormatFull_setHdc(Scintilla__RangeToFormatFull* self, void* hdc);
void* Scintilla__RangeToFormatFull_hdcTarget(const Scintilla__RangeToFormatFull* self);
void Scintilla__RangeToFormatFull_setHdcTarget(Scintilla__RangeToFormatFull* self, void* hdcTarget);
Scintilla__Rectangle* Scintilla__RangeToFormatFull_rc(const Scintilla__RangeToFormatFull* self);
void Scintilla__RangeToFormatFull_setRc(Scintilla__RangeToFormatFull* self, Scintilla__Rectangle* rc);
Scintilla__Rectangle* Scintilla__RangeToFormatFull_rcPage(const Scintilla__RangeToFormatFull* self);
void Scintilla__RangeToFormatFull_setRcPage(Scintilla__RangeToFormatFull* self, Scintilla__Rectangle* rcPage);
Scintilla__CharacterRangeFull* Scintilla__RangeToFormatFull_chrg(const Scintilla__RangeToFormatFull* self);
void Scintilla__RangeToFormatFull_setChrg(Scintilla__RangeToFormatFull* self, Scintilla__CharacterRangeFull* chrg);

void Scintilla__RangeToFormatFull_delete(Scintilla__RangeToFormatFull* self);

uintptr_t Scintilla__NotifyHeader_idFrom(const Scintilla__NotifyHeader* self);
void Scintilla__NotifyHeader_setIdFrom(Scintilla__NotifyHeader* self, uintptr_t idFrom);
int Scintilla__NotifyHeader_code(const Scintilla__NotifyHeader* self);
void Scintilla__NotifyHeader_setCode(Scintilla__NotifyHeader* self, int code);

void Scintilla__NotifyHeader_delete(Scintilla__NotifyHeader* self);

Scintilla__NotifyHeader* Scintilla__NotificationData_nmhdr(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setNmhdr(Scintilla__NotificationData* self, Scintilla__NotifyHeader* nmhdr);
intptr_t Scintilla__NotificationData_position(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setPosition(Scintilla__NotificationData* self, intptr_t position);
int Scintilla__NotificationData_ch(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setCh(Scintilla__NotificationData* self, int ch);
int Scintilla__NotificationData_modifiers(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setModifiers(Scintilla__NotificationData* self, int modifiers);
int Scintilla__NotificationData_modificationType(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setModificationType(Scintilla__NotificationData* self, int modificationType);
const char* Scintilla__NotificationData_text(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setText(Scintilla__NotificationData* self, const char* text);
intptr_t Scintilla__NotificationData_length(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setLength(Scintilla__NotificationData* self, intptr_t length);
intptr_t Scintilla__NotificationData_linesAdded(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setLinesAdded(Scintilla__NotificationData* self, intptr_t linesAdded);
int Scintilla__NotificationData_message(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setMessage(Scintilla__NotificationData* self, int message);
uintptr_t Scintilla__NotificationData_wParam(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setWParam(Scintilla__NotificationData* self, uintptr_t wParam);
intptr_t Scintilla__NotificationData_lParam(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setLParam(Scintilla__NotificationData* self, intptr_t lParam);
intptr_t Scintilla__NotificationData_line(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setLine(Scintilla__NotificationData* self, intptr_t line);
int Scintilla__NotificationData_foldLevelNow(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setFoldLevelNow(Scintilla__NotificationData* self, int foldLevelNow);
int Scintilla__NotificationData_foldLevelPrev(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setFoldLevelPrev(Scintilla__NotificationData* self, int foldLevelPrev);
int Scintilla__NotificationData_margin(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setMargin(Scintilla__NotificationData* self, int margin);
int Scintilla__NotificationData_listType(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setListType(Scintilla__NotificationData* self, int listType);
int Scintilla__NotificationData_x(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setX(Scintilla__NotificationData* self, int x);
int Scintilla__NotificationData_y(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setY(Scintilla__NotificationData* self, int y);
int Scintilla__NotificationData_token(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setToken(Scintilla__NotificationData* self, int token);
intptr_t Scintilla__NotificationData_annotationLinesAdded(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setAnnotationLinesAdded(Scintilla__NotificationData* self, intptr_t annotationLinesAdded);
int Scintilla__NotificationData_updated(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setUpdated(Scintilla__NotificationData* self, int updated);
int Scintilla__NotificationData_listCompletionMethod(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setListCompletionMethod(Scintilla__NotificationData* self, int listCompletionMethod);
int Scintilla__NotificationData_characterSource(const Scintilla__NotificationData* self);
void Scintilla__NotificationData_setCharacterSource(Scintilla__NotificationData* self, int characterSource);

void Scintilla__NotificationData_delete(Scintilla__NotificationData* self);

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new(const char* faceName_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new2(const char* faceName_, double size_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new3(const char* faceName_, double size_, int weight_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new4(const char* faceName_, double size_, int weight_, bool italic_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new5(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new6(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new7(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new8(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_);
Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new9(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_, int stretch_);
const char* Scintilla__Internal__FontParameters_faceName(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setFaceName(Scintilla__Internal__FontParameters* self, const char* faceName);
double Scintilla__Internal__FontParameters_size(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setSize(Scintilla__Internal__FontParameters* self, double size);
int Scintilla__Internal__FontParameters_weight(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setWeight(Scintilla__Internal__FontParameters* self, int weight);
bool Scintilla__Internal__FontParameters_italic(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setItalic(Scintilla__Internal__FontParameters* self, bool italic);
int Scintilla__Internal__FontParameters_extraFontFlag(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setExtraFontFlag(Scintilla__Internal__FontParameters* self, int extraFontFlag);
int Scintilla__Internal__FontParameters_technology(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setTechnology(Scintilla__Internal__FontParameters* self, int technology);
int Scintilla__Internal__FontParameters_characterSet(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setCharacterSet(Scintilla__Internal__FontParameters* self, int characterSet);
const char* Scintilla__Internal__FontParameters_localeName(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setLocaleName(Scintilla__Internal__FontParameters* self, const char* localeName);
int Scintilla__Internal__FontParameters_stretch(const Scintilla__Internal__FontParameters* self);
void Scintilla__Internal__FontParameters_setStretch(Scintilla__Internal__FontParameters* self, int stretch);

void Scintilla__Internal__FontParameters_delete(Scintilla__Internal__FontParameters* self);

Scintilla__Internal__Font* Scintilla__Internal__Font_new();
void Scintilla__Internal__Font_delete(Scintilla__Internal__Font* self);

size_t Scintilla__Internal__IScreenLine_Length(const Scintilla__Internal__IScreenLine* self);
size_t Scintilla__Internal__IScreenLine_RepresentationCount(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_Width(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_Height(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_TabWidth(const Scintilla__Internal__IScreenLine* self);
double Scintilla__Internal__IScreenLine_TabWidthMinimumPixels(const Scintilla__Internal__IScreenLine* self);
Scintilla__Internal__Font* Scintilla__Internal__IScreenLine_FontOfPosition(const Scintilla__Internal__IScreenLine* self, size_t position);
double Scintilla__Internal__IScreenLine_RepresentationWidth(const Scintilla__Internal__IScreenLine* self, size_t position);
double Scintilla__Internal__IScreenLine_TabPositionAfter(const Scintilla__Internal__IScreenLine* self, double xPosition);
void Scintilla__Internal__IScreenLine_operatorAssign(Scintilla__Internal__IScreenLine* self, Scintilla__Internal__IScreenLine* param1);

void Scintilla__Internal__IScreenLine_delete(Scintilla__Internal__IScreenLine* self);

size_t Scintilla__Internal__IScreenLineLayout_PositionFromX(Scintilla__Internal__IScreenLineLayout* self, double xDistance, bool charPosition);
double Scintilla__Internal__IScreenLineLayout_XFromPosition(Scintilla__Internal__IScreenLineLayout* self, size_t caretPosition);
void Scintilla__Internal__IScreenLineLayout_operatorAssign(Scintilla__Internal__IScreenLineLayout* self, Scintilla__Internal__IScreenLineLayout* param1);

void Scintilla__Internal__IScreenLineLayout_delete(Scintilla__Internal__IScreenLineLayout* self);

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new();
Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new2(int codePage_, bool bidiR2L_);
int Scintilla__Internal__SurfaceMode_codePage(const Scintilla__Internal__SurfaceMode* self);
void Scintilla__Internal__SurfaceMode_setCodePage(Scintilla__Internal__SurfaceMode* self, int codePage);
bool Scintilla__Internal__SurfaceMode_bidiR2L(const Scintilla__Internal__SurfaceMode* self);
void Scintilla__Internal__SurfaceMode_setBidiR2L(Scintilla__Internal__SurfaceMode* self, bool bidiR2L);

void Scintilla__Internal__SurfaceMode_delete(Scintilla__Internal__SurfaceMode* self);

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

void Scintilla__Internal__Surface_delete(Scintilla__Internal__Surface* self);

Scintilla__Internal__Window* Scintilla__Internal__Window_new();
void Scintilla__Internal__Window_operatorAssign(Scintilla__Internal__Window* self, void* wid_);
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
void Scintilla__Internal__Window_ShowWithShow(Scintilla__Internal__Window* self, bool show);

void Scintilla__Internal__Window_delete(Scintilla__Internal__Window* self);

Scintilla__Internal__ListBoxEvent* Scintilla__Internal__ListBoxEvent_new(int event_);
void Scintilla__Internal__ListBoxEvent_delete(Scintilla__Internal__ListBoxEvent* self);

void Scintilla__Internal__IListBoxDelegate_ListNotify(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__ListBoxEvent* plbe);
void Scintilla__Internal__IListBoxDelegate_operatorAssign(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__IListBoxDelegate* param1);

void Scintilla__Internal__IListBoxDelegate_delete(Scintilla__Internal__IListBoxDelegate* self);

int Scintilla__Internal__ListOptions_options(const Scintilla__Internal__ListOptions* self);
void Scintilla__Internal__ListOptions_setOptions(Scintilla__Internal__ListOptions* self, int options);

void Scintilla__Internal__ListOptions_delete(Scintilla__Internal__ListOptions* self);

void Scintilla__Internal__ListBox_virtbase(Scintilla__Internal__ListBox* src, Scintilla__Internal__Window** outptr_Scintilla__Internal__Window);
void Scintilla__Internal__ListBox_SetFont(Scintilla__Internal__ListBox* self, Scintilla__Internal__Font* font);
void Scintilla__Internal__ListBox_Create(Scintilla__Internal__ListBox* self, Scintilla__Internal__Window* parent, int ctrlID, Scintilla__Internal__Point* location, int lineHeight_, bool unicodeMode_, int technology_);
void Scintilla__Internal__ListBox_SetAverageCharWidth(Scintilla__Internal__ListBox* self, int width);
void Scintilla__Internal__ListBox_SetVisibleRows(Scintilla__Internal__ListBox* self, int rows);
int Scintilla__Internal__ListBox_GetVisibleRows(const Scintilla__Internal__ListBox* self);
Scintilla__Internal__PRectangle* Scintilla__Internal__ListBox_GetDesiredRect(Scintilla__Internal__ListBox* self);
int Scintilla__Internal__ListBox_CaretFromEdge(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Clear(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Append(Scintilla__Internal__ListBox* self, char* s, int type);
int Scintilla__Internal__ListBox_Length(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_Select(Scintilla__Internal__ListBox* self, int n);
int Scintilla__Internal__ListBox_GetSelection(Scintilla__Internal__ListBox* self);
int Scintilla__Internal__ListBox_Find(Scintilla__Internal__ListBox* self, const char* prefix);
void Scintilla__Internal__ListBox_RegisterImage(Scintilla__Internal__ListBox* self, int type, const char* xpm_data);
void Scintilla__Internal__ListBox_RegisterRGBAImage(Scintilla__Internal__ListBox* self, int type, int width, int height, const unsigned char* pixelsImage);
void Scintilla__Internal__ListBox_ClearRegisteredImages(Scintilla__Internal__ListBox* self);
void Scintilla__Internal__ListBox_SetDelegate(Scintilla__Internal__ListBox* self, Scintilla__Internal__IListBoxDelegate* lbDelegate);
void Scintilla__Internal__ListBox_SetList(Scintilla__Internal__ListBox* self, const char* list, char separator, char typesep);
void Scintilla__Internal__ListBox_SetOptions(Scintilla__Internal__ListBox* self, Scintilla__Internal__ListOptions* options_);

void Scintilla__Internal__ListBox_delete(Scintilla__Internal__ListBox* self);

Scintilla__Internal__Menu* Scintilla__Internal__Menu_new();
void* Scintilla__Internal__Menu_GetID(const Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_CreatePopUp(Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_Destroy(Scintilla__Internal__Menu* self);
void Scintilla__Internal__Menu_Show(Scintilla__Internal__Menu* self, Scintilla__Internal__Point* pt, Scintilla__Internal__Window* w);

void Scintilla__Internal__Menu_delete(Scintilla__Internal__Menu* self);

long Sci_CharacterRange_cpMin(const Sci_CharacterRange* self);
void Sci_CharacterRange_setCpMin(Sci_CharacterRange* self, long cpMin);
long Sci_CharacterRange_cpMax(const Sci_CharacterRange* self);
void Sci_CharacterRange_setCpMax(Sci_CharacterRange* self, long cpMax);

void Sci_CharacterRange_delete(Sci_CharacterRange* self);

ptrdiff_t Sci_CharacterRangeFull_cpMin(const Sci_CharacterRangeFull* self);
void Sci_CharacterRangeFull_setCpMin(Sci_CharacterRangeFull* self, ptrdiff_t cpMin);
ptrdiff_t Sci_CharacterRangeFull_cpMax(const Sci_CharacterRangeFull* self);
void Sci_CharacterRangeFull_setCpMax(Sci_CharacterRangeFull* self, ptrdiff_t cpMax);

void Sci_CharacterRangeFull_delete(Sci_CharacterRangeFull* self);

char* Sci_TextRange_lpstrText(const Sci_TextRange* self);
void Sci_TextRange_setLpstrText(Sci_TextRange* self, char* lpstrText);

void Sci_TextRange_delete(Sci_TextRange* self);

char* Sci_TextRangeFull_lpstrText(const Sci_TextRangeFull* self);
void Sci_TextRangeFull_setLpstrText(Sci_TextRangeFull* self, char* lpstrText);

void Sci_TextRangeFull_delete(Sci_TextRangeFull* self);

const char* Sci_TextToFind_lpstrText(const Sci_TextToFind* self);
void Sci_TextToFind_setLpstrText(Sci_TextToFind* self, const char* lpstrText);

void Sci_TextToFind_delete(Sci_TextToFind* self);

const char* Sci_TextToFindFull_lpstrText(const Sci_TextToFindFull* self);
void Sci_TextToFindFull_setLpstrText(Sci_TextToFindFull* self, const char* lpstrText);

void Sci_TextToFindFull_delete(Sci_TextToFindFull* self);

int Sci_Rectangle_left(const Sci_Rectangle* self);
void Sci_Rectangle_setLeft(Sci_Rectangle* self, int left);
int Sci_Rectangle_top(const Sci_Rectangle* self);
void Sci_Rectangle_setTop(Sci_Rectangle* self, int top);
int Sci_Rectangle_right(const Sci_Rectangle* self);
void Sci_Rectangle_setRight(Sci_Rectangle* self, int right);
int Sci_Rectangle_bottom(const Sci_Rectangle* self);
void Sci_Rectangle_setBottom(Sci_Rectangle* self, int bottom);

void Sci_Rectangle_delete(Sci_Rectangle* self);

void* Sci_RangeToFormat_hdc(const Sci_RangeToFormat* self);
void Sci_RangeToFormat_setHdc(Sci_RangeToFormat* self, void* hdc);
void* Sci_RangeToFormat_hdcTarget(const Sci_RangeToFormat* self);
void Sci_RangeToFormat_setHdcTarget(Sci_RangeToFormat* self, void* hdcTarget);

void Sci_RangeToFormat_delete(Sci_RangeToFormat* self);

void* Sci_RangeToFormatFull_hdc(const Sci_RangeToFormatFull* self);
void Sci_RangeToFormatFull_setHdc(Sci_RangeToFormatFull* self, void* hdc);
void* Sci_RangeToFormatFull_hdcTarget(const Sci_RangeToFormatFull* self);
void Sci_RangeToFormatFull_setHdcTarget(Sci_RangeToFormatFull* self, void* hdcTarget);

void Sci_RangeToFormatFull_delete(Sci_RangeToFormatFull* self);

uintptr_t Sci_NotifyHeader_idFrom(const Sci_NotifyHeader* self);
void Sci_NotifyHeader_setIdFrom(Sci_NotifyHeader* self, uintptr_t idFrom);
unsigned int Sci_NotifyHeader_code(const Sci_NotifyHeader* self);
void Sci_NotifyHeader_setCode(Sci_NotifyHeader* self, unsigned int code);

void Sci_NotifyHeader_delete(Sci_NotifyHeader* self);

Sci_NotifyHeader* SCNotification_nmhdr(const SCNotification* self);
void SCNotification_setNmhdr(SCNotification* self, Sci_NotifyHeader* nmhdr);
ptrdiff_t SCNotification_position(const SCNotification* self);
void SCNotification_setPosition(SCNotification* self, ptrdiff_t position);
int SCNotification_ch(const SCNotification* self);
void SCNotification_setCh(SCNotification* self, int ch);
int SCNotification_modifiers(const SCNotification* self);
void SCNotification_setModifiers(SCNotification* self, int modifiers);
int SCNotification_modificationType(const SCNotification* self);
void SCNotification_setModificationType(SCNotification* self, int modificationType);
const char* SCNotification_text(const SCNotification* self);
void SCNotification_setText(SCNotification* self, const char* text);
ptrdiff_t SCNotification_length(const SCNotification* self);
void SCNotification_setLength(SCNotification* self, ptrdiff_t length);
ptrdiff_t SCNotification_linesAdded(const SCNotification* self);
void SCNotification_setLinesAdded(SCNotification* self, ptrdiff_t linesAdded);
int SCNotification_message(const SCNotification* self);
void SCNotification_setMessage(SCNotification* self, int message);
uintptr_t SCNotification_wParam(const SCNotification* self);
void SCNotification_setWParam(SCNotification* self, uintptr_t wParam);
intptr_t SCNotification_lParam(const SCNotification* self);
void SCNotification_setLParam(SCNotification* self, intptr_t lParam);
ptrdiff_t SCNotification_line(const SCNotification* self);
void SCNotification_setLine(SCNotification* self, ptrdiff_t line);
int SCNotification_foldLevelNow(const SCNotification* self);
void SCNotification_setFoldLevelNow(SCNotification* self, int foldLevelNow);
int SCNotification_foldLevelPrev(const SCNotification* self);
void SCNotification_setFoldLevelPrev(SCNotification* self, int foldLevelPrev);
int SCNotification_margin(const SCNotification* self);
void SCNotification_setMargin(SCNotification* self, int margin);
int SCNotification_listType(const SCNotification* self);
void SCNotification_setListType(SCNotification* self, int listType);
int SCNotification_x(const SCNotification* self);
void SCNotification_setX(SCNotification* self, int x);
int SCNotification_y(const SCNotification* self);
void SCNotification_setY(SCNotification* self, int y);
int SCNotification_token(const SCNotification* self);
void SCNotification_setToken(SCNotification* self, int token);
ptrdiff_t SCNotification_annotationLinesAdded(const SCNotification* self);
void SCNotification_setAnnotationLinesAdded(SCNotification* self, ptrdiff_t annotationLinesAdded);
int SCNotification_updated(const SCNotification* self);
void SCNotification_setUpdated(SCNotification* self, int updated);
int SCNotification_listCompletionMethod(const SCNotification* self);
void SCNotification_setListCompletionMethod(SCNotification* self, int listCompletionMethod);
int SCNotification_characterSource(const SCNotification* self);
void SCNotification_setCharacterSource(SCNotification* self, int characterSource);

void SCNotification_delete(SCNotification* self);

ScintillaEditBase* ScintillaEditBase_new(QWidget* parent);
ScintillaEditBase* ScintillaEditBase_new2();
void ScintillaEditBase_virtbase(ScintillaEditBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* ScintillaEditBase_metaObject(const ScintillaEditBase* self);
void* ScintillaEditBase_metacast(ScintillaEditBase* self, const char* param1);
struct miqt_string ScintillaEditBase_tr(const char* s);
struct miqt_string ScintillaEditBase_trUtf8(const char* s);
intptr_t ScintillaEditBase_send(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);
intptr_t ScintillaEditBase_sends(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, const char* s);
void ScintillaEditBase_scrollHorizontal(ScintillaEditBase* self, int value);
void ScintillaEditBase_scrollVertical(ScintillaEditBase* self, int value);
void ScintillaEditBase_notifyParent(ScintillaEditBase* self, Scintilla__NotificationData* scn);
void ScintillaEditBase_eventCommand(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_horizontalScrolled(ScintillaEditBase* self, int value);
void ScintillaEditBase_connect_horizontalScrolled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_verticalScrolled(ScintillaEditBase* self, int value);
void ScintillaEditBase_connect_verticalScrolled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_horizontalRangeChanged(ScintillaEditBase* self, int max, int page);
void ScintillaEditBase_connect_horizontalRangeChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_verticalRangeChanged(ScintillaEditBase* self, int max, int page);
void ScintillaEditBase_connect_verticalRangeChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_notifyChange(ScintillaEditBase* self);
void ScintillaEditBase_connect_notifyChange(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_linesAdded(ScintillaEditBase* self, intptr_t linesAdded);
void ScintillaEditBase_connect_linesAdded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_aboutToCopy(ScintillaEditBase* self, QMimeData* data);
void ScintillaEditBase_connect_aboutToCopy(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_styleNeeded(ScintillaEditBase* self, intptr_t position);
void ScintillaEditBase_connect_styleNeeded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_charAdded(ScintillaEditBase* self, int ch);
void ScintillaEditBase_connect_charAdded(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_savePointChanged(ScintillaEditBase* self, bool dirty);
void ScintillaEditBase_connect_savePointChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_modifyAttemptReadOnly(ScintillaEditBase* self);
void ScintillaEditBase_connect_modifyAttemptReadOnly(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_key(ScintillaEditBase* self, int key);
void ScintillaEditBase_connect_key(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_doubleClick(ScintillaEditBase* self, intptr_t position, intptr_t line);
void ScintillaEditBase_connect_doubleClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_updateUi(ScintillaEditBase* self, int updated);
void ScintillaEditBase_connect_updateUi(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_modified(ScintillaEditBase* self, int type, intptr_t position, intptr_t length, intptr_t linesAdded, struct miqt_string text, intptr_t line, int foldNow, int foldPrev);
void ScintillaEditBase_connect_modified(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_macroRecord(ScintillaEditBase* self, int message, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_connect_macroRecord(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_marginClicked(ScintillaEditBase* self, intptr_t position, int modifiers, int margin);
void ScintillaEditBase_connect_marginClicked(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_textAreaClicked(ScintillaEditBase* self, intptr_t line, int modifiers);
void ScintillaEditBase_connect_textAreaClicked(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_needShown(ScintillaEditBase* self, intptr_t position, intptr_t length);
void ScintillaEditBase_connect_needShown(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_painted(ScintillaEditBase* self);
void ScintillaEditBase_connect_painted(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_userListSelection(ScintillaEditBase* self);
void ScintillaEditBase_connect_userListSelection(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_uriDropped(ScintillaEditBase* self, struct miqt_string uri);
void ScintillaEditBase_connect_uriDropped(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_dwellStart(ScintillaEditBase* self, int x, int y);
void ScintillaEditBase_connect_dwellStart(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_dwellEnd(ScintillaEditBase* self, int x, int y);
void ScintillaEditBase_connect_dwellEnd(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_zoom(ScintillaEditBase* self, int zoom);
void ScintillaEditBase_connect_zoom(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_hotSpotClick(ScintillaEditBase* self, intptr_t position, int modifiers);
void ScintillaEditBase_connect_hotSpotClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_hotSpotDoubleClick(ScintillaEditBase* self, intptr_t position, int modifiers);
void ScintillaEditBase_connect_hotSpotDoubleClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_callTipClick(ScintillaEditBase* self);
void ScintillaEditBase_connect_callTipClick(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_autoCompleteSelection(ScintillaEditBase* self, intptr_t position, struct miqt_string text);
void ScintillaEditBase_connect_autoCompleteSelection(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_autoCompleteCancelled(ScintillaEditBase* self);
void ScintillaEditBase_connect_autoCompleteCancelled(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_focusChanged(ScintillaEditBase* self, bool focused);
void ScintillaEditBase_connect_focusChanged(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_notify(ScintillaEditBase* self, Scintilla__NotificationData* pscn);
void ScintillaEditBase_connect_notify(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_command(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam);
void ScintillaEditBase_connect_command(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_buttonPressed(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_connect_buttonPressed(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_buttonReleased(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_connect_buttonReleased(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_keyPressed(ScintillaEditBase* self, QKeyEvent* event);
void ScintillaEditBase_connect_keyPressed(ScintillaEditBase* self, intptr_t slot);
void ScintillaEditBase_resized(ScintillaEditBase* self);
void ScintillaEditBase_connect_resized(ScintillaEditBase* self, intptr_t slot);
bool ScintillaEditBase_event(ScintillaEditBase* self, QEvent* event);
void ScintillaEditBase_paintEvent(ScintillaEditBase* self, QPaintEvent* event);
void ScintillaEditBase_wheelEvent(ScintillaEditBase* self, QWheelEvent* event);
void ScintillaEditBase_focusInEvent(ScintillaEditBase* self, QFocusEvent* event);
void ScintillaEditBase_focusOutEvent(ScintillaEditBase* self, QFocusEvent* event);
void ScintillaEditBase_resizeEvent(ScintillaEditBase* self, QResizeEvent* event);
void ScintillaEditBase_keyPressEvent(ScintillaEditBase* self, QKeyEvent* event);
void ScintillaEditBase_mousePressEvent(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_mouseReleaseEvent(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_mouseDoubleClickEvent(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_mouseMoveEvent(ScintillaEditBase* self, QMouseEvent* event);
void ScintillaEditBase_contextMenuEvent(ScintillaEditBase* self, QContextMenuEvent* event);
void ScintillaEditBase_dragEnterEvent(ScintillaEditBase* self, QDragEnterEvent* event);
void ScintillaEditBase_dragLeaveEvent(ScintillaEditBase* self, QDragLeaveEvent* event);
void ScintillaEditBase_dragMoveEvent(ScintillaEditBase* self, QDragMoveEvent* event);
void ScintillaEditBase_dropEvent(ScintillaEditBase* self, QDropEvent* event);
void ScintillaEditBase_inputMethodEvent(ScintillaEditBase* self, QInputMethodEvent* event);
QVariant* ScintillaEditBase_inputMethodQuery(const ScintillaEditBase* self, int query);
void ScintillaEditBase_scrollContentsBy(ScintillaEditBase* self, int param1, int param2);
struct miqt_string ScintillaEditBase_tr2(const char* s, const char* c);
struct miqt_string ScintillaEditBase_tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaEditBase_trUtf82(const char* s, const char* c);
struct miqt_string ScintillaEditBase_trUtf83(const char* s, const char* c, int n);

bool ScintillaEditBase_override_virtual_send(void* self, intptr_t slot);
intptr_t ScintillaEditBase_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);
bool ScintillaEditBase_override_virtual_sends(void* self, intptr_t slot);
intptr_t ScintillaEditBase_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s);
bool ScintillaEditBase_override_virtual_event(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_event(void* self, QEvent* event);
bool ScintillaEditBase_override_virtual_paintEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool ScintillaEditBase_override_virtual_wheelEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool ScintillaEditBase_override_virtual_focusInEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool ScintillaEditBase_override_virtual_focusOutEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool ScintillaEditBase_override_virtual_resizeEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool ScintillaEditBase_override_virtual_keyPressEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool ScintillaEditBase_override_virtual_mousePressEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool ScintillaEditBase_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool ScintillaEditBase_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool ScintillaEditBase_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool ScintillaEditBase_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool ScintillaEditBase_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool ScintillaEditBase_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool ScintillaEditBase_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool ScintillaEditBase_override_virtual_dropEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_dropEvent(void* self, QDropEvent* event);
bool ScintillaEditBase_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool ScintillaEditBase_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* ScintillaEditBase_virtualbase_inputMethodQuery(const void* self, int query);
bool ScintillaEditBase_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_scrollContentsBy(void* self, int param1, int param2);
bool ScintillaEditBase_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* ScintillaEditBase_virtualbase_minimumSizeHint(const void* self);
bool ScintillaEditBase_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* ScintillaEditBase_virtualbase_sizeHint(const void* self);
bool ScintillaEditBase_override_virtual_setupViewport(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_setupViewport(void* self, QWidget* viewport);
bool ScintillaEditBase_override_virtual_eventFilter(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool ScintillaEditBase_override_virtual_viewportEvent(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_viewportEvent(void* self, QEvent* param1);
bool ScintillaEditBase_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* ScintillaEditBase_virtualbase_viewportSizeHint(const void* self);
bool ScintillaEditBase_override_virtual_changeEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_changeEvent(void* self, QEvent* param1);
bool ScintillaEditBase_override_virtual_devType(void* self, intptr_t slot);
int ScintillaEditBase_virtualbase_devType(const void* self);
bool ScintillaEditBase_override_virtual_setVisible(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_setVisible(void* self, bool visible);
bool ScintillaEditBase_override_virtual_heightForWidth(void* self, intptr_t slot);
int ScintillaEditBase_virtualbase_heightForWidth(const void* self, int param1);
bool ScintillaEditBase_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_hasHeightForWidth(const void* self);
bool ScintillaEditBase_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* ScintillaEditBase_virtualbase_paintEngine(const void* self);
bool ScintillaEditBase_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool ScintillaEditBase_override_virtual_enterEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_enterEvent(void* self, QEvent* event);
bool ScintillaEditBase_override_virtual_leaveEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_leaveEvent(void* self, QEvent* event);
bool ScintillaEditBase_override_virtual_moveEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool ScintillaEditBase_override_virtual_closeEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool ScintillaEditBase_override_virtual_tabletEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool ScintillaEditBase_override_virtual_actionEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_actionEvent(void* self, QActionEvent* event);
bool ScintillaEditBase_override_virtual_showEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_showEvent(void* self, QShowEvent* event);
bool ScintillaEditBase_override_virtual_hideEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_hideEvent(void* self, QHideEvent* event);
bool ScintillaEditBase_override_virtual_nativeEvent(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool ScintillaEditBase_override_virtual_metric(void* self, intptr_t slot);
int ScintillaEditBase_virtualbase_metric(const void* self, int param1);
bool ScintillaEditBase_override_virtual_initPainter(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_initPainter(const void* self, QPainter* painter);
bool ScintillaEditBase_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* ScintillaEditBase_virtualbase_redirected(const void* self, QPoint* offset);
bool ScintillaEditBase_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* ScintillaEditBase_virtualbase_sharedPainter(const void* self);
bool ScintillaEditBase_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool ScintillaEditBase_virtualbase_focusNextPrevChild(void* self, bool next);
bool ScintillaEditBase_override_virtual_timerEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool ScintillaEditBase_override_virtual_childEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_childEvent(void* self, QChildEvent* event);
bool ScintillaEditBase_override_virtual_customEvent(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_customEvent(void* self, QEvent* event);
bool ScintillaEditBase_override_virtual_connectNotify(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool ScintillaEditBase_override_virtual_disconnectNotify(void* self, intptr_t slot);
void ScintillaEditBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void ScintillaEditBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* ScintillaEditBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void ScintillaEditBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void ScintillaEditBase_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void ScintillaEditBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void ScintillaEditBase_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void ScintillaEditBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool ScintillaEditBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool ScintillaEditBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* ScintillaEditBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int ScintillaEditBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int ScintillaEditBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool ScintillaEditBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void ScintillaEditBase_delete(ScintillaEditBase* self);

ScintillaDocument* ScintillaDocument_new();
ScintillaDocument* ScintillaDocument_new2(QObject* parent);
ScintillaDocument* ScintillaDocument_new3(QObject* parent, void* pdoc_);
void ScintillaDocument_virtbase(ScintillaDocument* src, QObject** outptr_QObject);
QMetaObject* ScintillaDocument_metaObject(const ScintillaDocument* self);
void* ScintillaDocument_metacast(ScintillaDocument* self, const char* param1);
struct miqt_string ScintillaDocument_tr(const char* s);
struct miqt_string ScintillaDocument_trUtf8(const char* s);
void* ScintillaDocument_pointer(ScintillaDocument* self);
int ScintillaDocument_lineFromPosition(ScintillaDocument* self, int pos);
bool ScintillaDocument_isCrLf(ScintillaDocument* self, int pos);
bool ScintillaDocument_deleteChars(ScintillaDocument* self, int pos, int len);
int ScintillaDocument_undo(ScintillaDocument* self);
int ScintillaDocument_redo(ScintillaDocument* self);
bool ScintillaDocument_canUndo(ScintillaDocument* self);
bool ScintillaDocument_canRedo(ScintillaDocument* self);
void ScintillaDocument_deleteUndoHistory(ScintillaDocument* self);
bool ScintillaDocument_setUndoCollection(ScintillaDocument* self, bool collect_undo);
bool ScintillaDocument_isCollectingUndo(ScintillaDocument* self);
void ScintillaDocument_beginUndoAction(ScintillaDocument* self);
void ScintillaDocument_endUndoAction(ScintillaDocument* self);
void ScintillaDocument_setSavePoint(ScintillaDocument* self);
bool ScintillaDocument_isSavePoint(ScintillaDocument* self);
void ScintillaDocument_setReadOnly(ScintillaDocument* self, bool read_only);
bool ScintillaDocument_isReadOnly(ScintillaDocument* self);
void ScintillaDocument_insertString(ScintillaDocument* self, int position, struct miqt_string str);
struct miqt_string ScintillaDocument_getCharRange(ScintillaDocument* self, int position, int length);
char ScintillaDocument_styleAt(ScintillaDocument* self, int position);
int ScintillaDocument_lineStart(ScintillaDocument* self, int lineno);
int ScintillaDocument_lineEnd(ScintillaDocument* self, int lineno);
int ScintillaDocument_lineEndPosition(ScintillaDocument* self, int pos);
int ScintillaDocument_length(ScintillaDocument* self);
int ScintillaDocument_linesTotal(ScintillaDocument* self);
void ScintillaDocument_startStyling(ScintillaDocument* self, int position);
bool ScintillaDocument_setStyleFor(ScintillaDocument* self, int length, char style);
int ScintillaDocument_getEndStyled(ScintillaDocument* self);
void ScintillaDocument_ensureStyledTo(ScintillaDocument* self, int position);
void ScintillaDocument_setCurrentIndicator(ScintillaDocument* self, int indic);
void ScintillaDocument_decorationFillRange(ScintillaDocument* self, int position, int value, int fillLength);
int ScintillaDocument_decorationsValueAt(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_decorationsStart(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_decorationsEnd(ScintillaDocument* self, int indic, int position);
int ScintillaDocument_getCodePage(ScintillaDocument* self);
void ScintillaDocument_setCodePage(ScintillaDocument* self, int code_page);
int ScintillaDocument_getEolMode(ScintillaDocument* self);
void ScintillaDocument_setEolMode(ScintillaDocument* self, int eol_mode);
int ScintillaDocument_movePositionOutsideChar(ScintillaDocument* self, int pos, int move_dir, bool check_line_end);
int ScintillaDocument_getCharacter(ScintillaDocument* self, int pos);
void ScintillaDocument_modifyAttempt(ScintillaDocument* self);
void ScintillaDocument_connect_modifyAttempt(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_savePoint(ScintillaDocument* self, bool atSavePoint);
void ScintillaDocument_connect_savePoint(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_modified(ScintillaDocument* self, int position, int modification_type, struct miqt_string text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev);
void ScintillaDocument_connect_modified(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_styleNeeded(ScintillaDocument* self, int pos);
void ScintillaDocument_connect_styleNeeded(ScintillaDocument* self, intptr_t slot);
void ScintillaDocument_errorOccurred(ScintillaDocument* self, int status);
void ScintillaDocument_connect_errorOccurred(ScintillaDocument* self, intptr_t slot);
struct miqt_string ScintillaDocument_tr2(const char* s, const char* c);
struct miqt_string ScintillaDocument_tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaDocument_trUtf82(const char* s, const char* c);
struct miqt_string ScintillaDocument_trUtf83(const char* s, const char* c, int n);
void ScintillaDocument_beginUndoActionWithCoalesceWithPrior(ScintillaDocument* self, bool coalesceWithPrior);

bool ScintillaDocument_override_virtual_event(void* self, intptr_t slot);
bool ScintillaDocument_virtualbase_event(void* self, QEvent* event);
bool ScintillaDocument_override_virtual_eventFilter(void* self, intptr_t slot);
bool ScintillaDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool ScintillaDocument_override_virtual_timerEvent(void* self, intptr_t slot);
void ScintillaDocument_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool ScintillaDocument_override_virtual_childEvent(void* self, intptr_t slot);
void ScintillaDocument_virtualbase_childEvent(void* self, QChildEvent* event);
bool ScintillaDocument_override_virtual_customEvent(void* self, intptr_t slot);
void ScintillaDocument_virtualbase_customEvent(void* self, QEvent* event);
bool ScintillaDocument_override_virtual_connectNotify(void* self, intptr_t slot);
void ScintillaDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool ScintillaDocument_override_virtual_disconnectNotify(void* self, intptr_t slot);
void ScintillaDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* ScintillaDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int ScintillaDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int ScintillaDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool ScintillaDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void ScintillaDocument_delete(ScintillaDocument* self);

ScintillaEdit* ScintillaEdit_new(QWidget* parent);
ScintillaEdit* ScintillaEdit_new2();
void ScintillaEdit_virtbase(ScintillaEdit* src, ScintillaEditBase** outptr_ScintillaEditBase);
QMetaObject* ScintillaEdit_metaObject(const ScintillaEdit* self);
void* ScintillaEdit_metacast(ScintillaEdit* self, const char* param1);
struct miqt_string ScintillaEdit_tr(const char* s);
struct miqt_string ScintillaEdit_trUtf8(const char* s);
struct miqt_string ScintillaEdit_TextReturner(const ScintillaEdit* self, int message, uintptr_t wParam);
struct miqt_map /* tuple of int and int */  ScintillaEdit_findText(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax);
struct miqt_string ScintillaEdit_getTextRange(ScintillaEdit* self, int start, int end);
ScintillaDocument* ScintillaEdit_getDoc(ScintillaEdit* self);
void ScintillaEdit_setDoc(ScintillaEdit* self, ScintillaDocument* pdoc_);
struct miqt_map /* tuple of int and int */  ScintillaEdit_findText2(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax);
struct miqt_string ScintillaEdit_textRange(ScintillaEdit* self, int start, int end);
long ScintillaEdit_formatRange(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end);
long ScintillaEdit_formatRange2(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end);
void ScintillaEdit_addText(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_addStyledText(ScintillaEdit* self, intptr_t length, const char* c);
void ScintillaEdit_insertText(ScintillaEdit* self, intptr_t pos, const char* text);
void ScintillaEdit_changeInsertion(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_clearAll(ScintillaEdit* self);
void ScintillaEdit_deleteRange(ScintillaEdit* self, intptr_t start, intptr_t lengthDelete);
void ScintillaEdit_clearDocumentStyle(ScintillaEdit* self);
intptr_t ScintillaEdit_length(const ScintillaEdit* self);
intptr_t ScintillaEdit_charAt(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_currentPos(const ScintillaEdit* self);
intptr_t ScintillaEdit_anchor(const ScintillaEdit* self);
intptr_t ScintillaEdit_styleAt(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_styleIndexAt(const ScintillaEdit* self, intptr_t pos);
void ScintillaEdit_redo(ScintillaEdit* self);
void ScintillaEdit_setUndoCollection(ScintillaEdit* self, bool collectUndo);
void ScintillaEdit_selectAll(ScintillaEdit* self);
void ScintillaEdit_setSavePoint(ScintillaEdit* self);
bool ScintillaEdit_canRedo(ScintillaEdit* self);
intptr_t ScintillaEdit_markerLineFromHandle(ScintillaEdit* self, intptr_t markerHandle);
void ScintillaEdit_markerDeleteHandle(ScintillaEdit* self, intptr_t markerHandle);
intptr_t ScintillaEdit_markerHandleFromLine(ScintillaEdit* self, intptr_t line, intptr_t which);
intptr_t ScintillaEdit_markerNumberFromLine(ScintillaEdit* self, intptr_t line, intptr_t which);
bool ScintillaEdit_undoCollection(const ScintillaEdit* self);
intptr_t ScintillaEdit_viewWS(const ScintillaEdit* self);
void ScintillaEdit_setViewWS(ScintillaEdit* self, intptr_t viewWS);
intptr_t ScintillaEdit_tabDrawMode(const ScintillaEdit* self);
void ScintillaEdit_setTabDrawMode(ScintillaEdit* self, intptr_t tabDrawMode);
intptr_t ScintillaEdit_positionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
intptr_t ScintillaEdit_positionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_gotoLine(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_gotoPos(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_setAnchor(ScintillaEdit* self, intptr_t anchor);
struct miqt_string ScintillaEdit_getCurLine(ScintillaEdit* self, intptr_t length);
intptr_t ScintillaEdit_endStyled(const ScintillaEdit* self);
void ScintillaEdit_convertEOLs(ScintillaEdit* self, intptr_t eolMode);
intptr_t ScintillaEdit_eOLMode(const ScintillaEdit* self);
void ScintillaEdit_setEOLMode(ScintillaEdit* self, intptr_t eolMode);
void ScintillaEdit_startStyling(ScintillaEdit* self, intptr_t start, intptr_t unused);
void ScintillaEdit_setStyling(ScintillaEdit* self, intptr_t length, intptr_t style);
bool ScintillaEdit_bufferedDraw(const ScintillaEdit* self);
void ScintillaEdit_setBufferedDraw(ScintillaEdit* self, bool buffered);
void ScintillaEdit_setTabWidth(ScintillaEdit* self, intptr_t tabWidth);
intptr_t ScintillaEdit_tabWidth(const ScintillaEdit* self);
void ScintillaEdit_setTabMinimumWidth(ScintillaEdit* self, intptr_t pixels);
intptr_t ScintillaEdit_tabMinimumWidth(const ScintillaEdit* self);
void ScintillaEdit_clearTabStops(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_addTabStop(ScintillaEdit* self, intptr_t line, intptr_t x);
intptr_t ScintillaEdit_getNextTabStop(ScintillaEdit* self, intptr_t line, intptr_t x);
void ScintillaEdit_setCodePage(ScintillaEdit* self, intptr_t codePage);
void ScintillaEdit_setFontLocale(ScintillaEdit* self, const char* localeName);
struct miqt_string ScintillaEdit_fontLocale(const ScintillaEdit* self);
intptr_t ScintillaEdit_iMEInteraction(const ScintillaEdit* self);
void ScintillaEdit_setIMEInteraction(ScintillaEdit* self, intptr_t imeInteraction);
void ScintillaEdit_markerDefine(ScintillaEdit* self, intptr_t markerNumber, intptr_t markerSymbol);
void ScintillaEdit_markerSetFore(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore);
void ScintillaEdit_markerSetBack(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_markerSetBackSelected(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_markerSetForeTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore);
void ScintillaEdit_markerSetBackTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_markerSetBackSelectedTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back);
void ScintillaEdit_markerSetStrokeWidth(ScintillaEdit* self, intptr_t markerNumber, intptr_t hundredths);
void ScintillaEdit_markerEnableHighlight(ScintillaEdit* self, bool enabled);
intptr_t ScintillaEdit_markerAdd(ScintillaEdit* self, intptr_t line, intptr_t markerNumber);
void ScintillaEdit_markerDelete(ScintillaEdit* self, intptr_t line, intptr_t markerNumber);
void ScintillaEdit_markerDeleteAll(ScintillaEdit* self, intptr_t markerNumber);
intptr_t ScintillaEdit_markerGet(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_markerNext(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask);
intptr_t ScintillaEdit_markerPrevious(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask);
void ScintillaEdit_markerDefinePixmap(ScintillaEdit* self, intptr_t markerNumber, const char* pixmap);
void ScintillaEdit_markerAddSet(ScintillaEdit* self, intptr_t line, intptr_t markerSet);
void ScintillaEdit_markerSetAlpha(ScintillaEdit* self, intptr_t markerNumber, intptr_t alpha);
intptr_t ScintillaEdit_markerLayer(const ScintillaEdit* self, intptr_t markerNumber);
void ScintillaEdit_markerSetLayer(ScintillaEdit* self, intptr_t markerNumber, intptr_t layer);
void ScintillaEdit_setMarginTypeN(ScintillaEdit* self, intptr_t margin, intptr_t marginType);
intptr_t ScintillaEdit_marginTypeN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMarginWidthN(ScintillaEdit* self, intptr_t margin, intptr_t pixelWidth);
intptr_t ScintillaEdit_marginWidthN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMarginMaskN(ScintillaEdit* self, intptr_t margin, intptr_t mask);
intptr_t ScintillaEdit_marginMaskN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMarginSensitiveN(ScintillaEdit* self, intptr_t margin, bool sensitive);
bool ScintillaEdit_marginSensitiveN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMarginCursorN(ScintillaEdit* self, intptr_t margin, intptr_t cursor);
intptr_t ScintillaEdit_marginCursorN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMarginBackN(ScintillaEdit* self, intptr_t margin, intptr_t back);
intptr_t ScintillaEdit_marginBackN(const ScintillaEdit* self, intptr_t margin);
void ScintillaEdit_setMargins(ScintillaEdit* self, intptr_t margins);
intptr_t ScintillaEdit_margins(const ScintillaEdit* self);
void ScintillaEdit_styleClearAll(ScintillaEdit* self);
void ScintillaEdit_styleSetFore(ScintillaEdit* self, intptr_t style, intptr_t fore);
void ScintillaEdit_styleSetBack(ScintillaEdit* self, intptr_t style, intptr_t back);
void ScintillaEdit_styleSetBold(ScintillaEdit* self, intptr_t style, bool bold);
void ScintillaEdit_styleSetItalic(ScintillaEdit* self, intptr_t style, bool italic);
void ScintillaEdit_styleSetSize(ScintillaEdit* self, intptr_t style, intptr_t sizePoints);
void ScintillaEdit_styleSetFont(ScintillaEdit* self, intptr_t style, const char* fontName);
void ScintillaEdit_styleSetEOLFilled(ScintillaEdit* self, intptr_t style, bool eolFilled);
void ScintillaEdit_styleResetDefault(ScintillaEdit* self);
void ScintillaEdit_styleSetUnderline(ScintillaEdit* self, intptr_t style, bool underline);
intptr_t ScintillaEdit_styleFore(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_styleBack(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleBold(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleItalic(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_styleSize(const ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_styleFont(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleEOLFilled(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleUnderline(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_styleCase(const ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_styleCharacterSet(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleVisible(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleChangeable(const ScintillaEdit* self, intptr_t style);
bool ScintillaEdit_styleHotSpot(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_styleSetCase(ScintillaEdit* self, intptr_t style, intptr_t caseVisible);
void ScintillaEdit_styleSetSizeFractional(ScintillaEdit* self, intptr_t style, intptr_t sizeHundredthPoints);
intptr_t ScintillaEdit_styleSizeFractional(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_styleSetWeight(ScintillaEdit* self, intptr_t style, intptr_t weight);
intptr_t ScintillaEdit_styleWeight(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_styleSetCharacterSet(ScintillaEdit* self, intptr_t style, intptr_t characterSet);
void ScintillaEdit_styleSetHotSpot(ScintillaEdit* self, intptr_t style, bool hotspot);
void ScintillaEdit_styleSetCheckMonospaced(ScintillaEdit* self, intptr_t style, bool checkMonospaced);
bool ScintillaEdit_styleCheckMonospaced(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_styleSetStretch(ScintillaEdit* self, intptr_t style, intptr_t stretch);
intptr_t ScintillaEdit_styleStretch(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_styleSetInvisibleRepresentation(ScintillaEdit* self, intptr_t style, const char* representation);
struct miqt_string ScintillaEdit_styleInvisibleRepresentation(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_setElementColour(ScintillaEdit* self, intptr_t element, intptr_t colourElement);
intptr_t ScintillaEdit_elementColour(const ScintillaEdit* self, intptr_t element);
void ScintillaEdit_resetElementColour(ScintillaEdit* self, intptr_t element);
bool ScintillaEdit_elementIsSet(const ScintillaEdit* self, intptr_t element);
bool ScintillaEdit_elementAllowsTranslucent(const ScintillaEdit* self, intptr_t element);
intptr_t ScintillaEdit_elementBaseColour(const ScintillaEdit* self, intptr_t element);
void ScintillaEdit_setSelFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_setSelBack(ScintillaEdit* self, bool useSetting, intptr_t back);
intptr_t ScintillaEdit_selAlpha(const ScintillaEdit* self);
void ScintillaEdit_setSelAlpha(ScintillaEdit* self, intptr_t alpha);
bool ScintillaEdit_selEOLFilled(const ScintillaEdit* self);
void ScintillaEdit_setSelEOLFilled(ScintillaEdit* self, bool filled);
intptr_t ScintillaEdit_selectionLayer(const ScintillaEdit* self);
void ScintillaEdit_setSelectionLayer(ScintillaEdit* self, intptr_t layer);
intptr_t ScintillaEdit_caretLineLayer(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineLayer(ScintillaEdit* self, intptr_t layer);
bool ScintillaEdit_caretLineHighlightSubLine(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineHighlightSubLine(ScintillaEdit* self, bool subLine);
void ScintillaEdit_setCaretFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_assignCmdKey(ScintillaEdit* self, intptr_t keyDefinition, intptr_t sciCommand);
void ScintillaEdit_clearCmdKey(ScintillaEdit* self, intptr_t keyDefinition);
void ScintillaEdit_clearAllCmdKeys(ScintillaEdit* self);
void ScintillaEdit_setStylingEx(ScintillaEdit* self, intptr_t length, const char* styles);
void ScintillaEdit_styleSetVisible(ScintillaEdit* self, intptr_t style, bool visible);
intptr_t ScintillaEdit_caretPeriod(const ScintillaEdit* self);
void ScintillaEdit_setCaretPeriod(ScintillaEdit* self, intptr_t periodMilliseconds);
void ScintillaEdit_setWordChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_wordChars(const ScintillaEdit* self);
void ScintillaEdit_setCharacterCategoryOptimization(ScintillaEdit* self, intptr_t countCharacters);
intptr_t ScintillaEdit_characterCategoryOptimization(const ScintillaEdit* self);
void ScintillaEdit_beginUndoAction(ScintillaEdit* self);
void ScintillaEdit_endUndoAction(ScintillaEdit* self);
intptr_t ScintillaEdit_undoSequence(const ScintillaEdit* self);
intptr_t ScintillaEdit_undoActions(const ScintillaEdit* self);
void ScintillaEdit_setUndoSavePoint(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_undoSavePoint(const ScintillaEdit* self);
void ScintillaEdit_setUndoDetach(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_undoDetach(const ScintillaEdit* self);
void ScintillaEdit_setUndoTentative(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_undoTentative(const ScintillaEdit* self);
void ScintillaEdit_setUndoCurrent(ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_undoCurrent(const ScintillaEdit* self);
void ScintillaEdit_pushUndoActionType(ScintillaEdit* self, intptr_t type, intptr_t pos);
void ScintillaEdit_changeLastUndoActionText(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_undoActionType(const ScintillaEdit* self, intptr_t action);
intptr_t ScintillaEdit_undoActionPosition(const ScintillaEdit* self, intptr_t action);
struct miqt_string ScintillaEdit_undoActionText(const ScintillaEdit* self, intptr_t action);
void ScintillaEdit_indicSetStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle);
intptr_t ScintillaEdit_indicStyle(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore);
intptr_t ScintillaEdit_indicFore(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetUnder(ScintillaEdit* self, intptr_t indicator, bool under);
bool ScintillaEdit_indicUnder(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetHoverStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle);
intptr_t ScintillaEdit_indicHoverStyle(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetHoverFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore);
intptr_t ScintillaEdit_indicHoverFore(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetFlags(ScintillaEdit* self, intptr_t indicator, intptr_t flags);
intptr_t ScintillaEdit_indicFlags(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetStrokeWidth(ScintillaEdit* self, intptr_t indicator, intptr_t hundredths);
intptr_t ScintillaEdit_indicStrokeWidth(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_setWhitespaceFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_setWhitespaceBack(ScintillaEdit* self, bool useSetting, intptr_t back);
void ScintillaEdit_setWhitespaceSize(ScintillaEdit* self, intptr_t size);
intptr_t ScintillaEdit_whitespaceSize(const ScintillaEdit* self);
void ScintillaEdit_setLineState(ScintillaEdit* self, intptr_t line, intptr_t state);
intptr_t ScintillaEdit_lineState(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_maxLineState(const ScintillaEdit* self);
bool ScintillaEdit_caretLineVisible(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineVisible(ScintillaEdit* self, bool show);
intptr_t ScintillaEdit_caretLineBack(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineBack(ScintillaEdit* self, intptr_t back);
intptr_t ScintillaEdit_caretLineFrame(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineFrame(ScintillaEdit* self, intptr_t width);
void ScintillaEdit_styleSetChangeable(ScintillaEdit* self, intptr_t style, bool changeable);
void ScintillaEdit_autoCShow(ScintillaEdit* self, intptr_t lengthEntered, const char* itemList);
void ScintillaEdit_autoCCancel(ScintillaEdit* self);
bool ScintillaEdit_autoCActive(ScintillaEdit* self);
intptr_t ScintillaEdit_autoCPosStart(ScintillaEdit* self);
void ScintillaEdit_autoCComplete(ScintillaEdit* self);
void ScintillaEdit_autoCStops(ScintillaEdit* self, const char* characterSet);
void ScintillaEdit_autoCSetSeparator(ScintillaEdit* self, intptr_t separatorCharacter);
intptr_t ScintillaEdit_autoCSeparator(const ScintillaEdit* self);
void ScintillaEdit_autoCSelect(ScintillaEdit* self, const char* select);
void ScintillaEdit_autoCSetCancelAtStart(ScintillaEdit* self, bool cancel);
bool ScintillaEdit_autoCCancelAtStart(const ScintillaEdit* self);
void ScintillaEdit_autoCSetFillUps(ScintillaEdit* self, const char* characterSet);
void ScintillaEdit_autoCSetChooseSingle(ScintillaEdit* self, bool chooseSingle);
bool ScintillaEdit_autoCChooseSingle(const ScintillaEdit* self);
void ScintillaEdit_autoCSetIgnoreCase(ScintillaEdit* self, bool ignoreCase);
bool ScintillaEdit_autoCIgnoreCase(const ScintillaEdit* self);
void ScintillaEdit_userListShow(ScintillaEdit* self, intptr_t listType, const char* itemList);
void ScintillaEdit_autoCSetAutoHide(ScintillaEdit* self, bool autoHide);
bool ScintillaEdit_autoCAutoHide(const ScintillaEdit* self);
void ScintillaEdit_autoCSetOptions(ScintillaEdit* self, intptr_t options);
intptr_t ScintillaEdit_autoCOptions(const ScintillaEdit* self);
void ScintillaEdit_autoCSetDropRestOfWord(ScintillaEdit* self, bool dropRestOfWord);
bool ScintillaEdit_autoCDropRestOfWord(const ScintillaEdit* self);
void ScintillaEdit_registerImage(ScintillaEdit* self, intptr_t type, const char* xpmData);
void ScintillaEdit_clearRegisteredImages(ScintillaEdit* self);
intptr_t ScintillaEdit_autoCTypeSeparator(const ScintillaEdit* self);
void ScintillaEdit_autoCSetTypeSeparator(ScintillaEdit* self, intptr_t separatorCharacter);
void ScintillaEdit_autoCSetMaxWidth(ScintillaEdit* self, intptr_t characterCount);
intptr_t ScintillaEdit_autoCMaxWidth(const ScintillaEdit* self);
void ScintillaEdit_autoCSetMaxHeight(ScintillaEdit* self, intptr_t rowCount);
intptr_t ScintillaEdit_autoCMaxHeight(const ScintillaEdit* self);
void ScintillaEdit_autoCSetStyle(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_autoCStyle(const ScintillaEdit* self);
void ScintillaEdit_setIndent(ScintillaEdit* self, intptr_t indentSize);
intptr_t ScintillaEdit_indent(const ScintillaEdit* self);
void ScintillaEdit_setUseTabs(ScintillaEdit* self, bool useTabs);
bool ScintillaEdit_useTabs(const ScintillaEdit* self);
void ScintillaEdit_setLineIndentation(ScintillaEdit* self, intptr_t line, intptr_t indentation);
intptr_t ScintillaEdit_lineIndentation(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_lineIndentPosition(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_column(const ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_countCharacters(ScintillaEdit* self, intptr_t start, intptr_t end);
intptr_t ScintillaEdit_countCodeUnits(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_setHScrollBar(ScintillaEdit* self, bool visible);
bool ScintillaEdit_hScrollBar(const ScintillaEdit* self);
void ScintillaEdit_setIndentationGuides(ScintillaEdit* self, intptr_t indentView);
intptr_t ScintillaEdit_indentationGuides(const ScintillaEdit* self);
void ScintillaEdit_setHighlightGuide(ScintillaEdit* self, intptr_t column);
intptr_t ScintillaEdit_highlightGuide(const ScintillaEdit* self);
intptr_t ScintillaEdit_lineEndPosition(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_codePage(const ScintillaEdit* self);
intptr_t ScintillaEdit_caretFore(const ScintillaEdit* self);
bool ScintillaEdit_readOnly(const ScintillaEdit* self);
void ScintillaEdit_setCurrentPos(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_setSelectionStart(ScintillaEdit* self, intptr_t anchor);
intptr_t ScintillaEdit_selectionStart(const ScintillaEdit* self);
void ScintillaEdit_setSelectionEnd(ScintillaEdit* self, intptr_t caret);
intptr_t ScintillaEdit_selectionEnd(const ScintillaEdit* self);
void ScintillaEdit_setEmptySelection(ScintillaEdit* self, intptr_t caret);
void ScintillaEdit_setPrintMagnification(ScintillaEdit* self, intptr_t magnification);
intptr_t ScintillaEdit_printMagnification(const ScintillaEdit* self);
void ScintillaEdit_setPrintColourMode(ScintillaEdit* self, intptr_t mode);
intptr_t ScintillaEdit_printColourMode(const ScintillaEdit* self);
void ScintillaEdit_setChangeHistory(ScintillaEdit* self, intptr_t changeHistory);
intptr_t ScintillaEdit_changeHistory(const ScintillaEdit* self);
intptr_t ScintillaEdit_firstVisibleLine(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_getLine(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_lineCount(const ScintillaEdit* self);
void ScintillaEdit_allocateLines(ScintillaEdit* self, intptr_t lines);
void ScintillaEdit_setMarginLeft(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_marginLeft(const ScintillaEdit* self);
void ScintillaEdit_setMarginRight(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_marginRight(const ScintillaEdit* self);
bool ScintillaEdit_modify(const ScintillaEdit* self);
void ScintillaEdit_setSel(ScintillaEdit* self, intptr_t anchor, intptr_t caret);
struct miqt_string ScintillaEdit_getSelText(ScintillaEdit* self);
void ScintillaEdit_hideSelection(ScintillaEdit* self, bool hide);
bool ScintillaEdit_selectionHidden(const ScintillaEdit* self);
intptr_t ScintillaEdit_pointXFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_pointYFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_lineFromPosition(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_positionFromLine(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_lineScroll(ScintillaEdit* self, intptr_t columns, intptr_t lines);
void ScintillaEdit_scrollCaret(ScintillaEdit* self);
void ScintillaEdit_scrollRange(ScintillaEdit* self, intptr_t secondary, intptr_t primary);
void ScintillaEdit_replaceSel(ScintillaEdit* self, const char* text);
void ScintillaEdit_setReadOnly(ScintillaEdit* self, bool readOnly);
void ScintillaEdit_null(ScintillaEdit* self);
bool ScintillaEdit_canPaste(ScintillaEdit* self);
bool ScintillaEdit_canUndo(ScintillaEdit* self);
void ScintillaEdit_emptyUndoBuffer(ScintillaEdit* self);
void ScintillaEdit_undo(ScintillaEdit* self);
void ScintillaEdit_cut(ScintillaEdit* self);
void ScintillaEdit_copy(ScintillaEdit* self);
void ScintillaEdit_paste(ScintillaEdit* self);
void ScintillaEdit_clear(ScintillaEdit* self);
void ScintillaEdit_setText(ScintillaEdit* self, const char* text);
struct miqt_string ScintillaEdit_getText(ScintillaEdit* self, intptr_t length);
intptr_t ScintillaEdit_textLength(const ScintillaEdit* self);
intptr_t ScintillaEdit_directFunction(const ScintillaEdit* self);
intptr_t ScintillaEdit_directStatusFunction(const ScintillaEdit* self);
intptr_t ScintillaEdit_directPointer(const ScintillaEdit* self);
void ScintillaEdit_setOvertype(ScintillaEdit* self, bool overType);
bool ScintillaEdit_overtype(const ScintillaEdit* self);
void ScintillaEdit_setCaretWidth(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_caretWidth(const ScintillaEdit* self);
void ScintillaEdit_setTargetStart(ScintillaEdit* self, intptr_t start);
intptr_t ScintillaEdit_targetStart(const ScintillaEdit* self);
void ScintillaEdit_setTargetStartVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_targetStartVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_setTargetEnd(ScintillaEdit* self, intptr_t end);
intptr_t ScintillaEdit_targetEnd(const ScintillaEdit* self);
void ScintillaEdit_setTargetEndVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_targetEndVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_setTargetRange(ScintillaEdit* self, intptr_t start, intptr_t end);
struct miqt_string ScintillaEdit_targetText(const ScintillaEdit* self);
void ScintillaEdit_targetFromSelection(ScintillaEdit* self);
void ScintillaEdit_targetWholeDocument(ScintillaEdit* self);
intptr_t ScintillaEdit_replaceTarget(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_replaceTargetRE(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_replaceTargetMinimal(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_searchInTarget(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_setSearchFlags(ScintillaEdit* self, intptr_t searchFlags);
intptr_t ScintillaEdit_searchFlags(const ScintillaEdit* self);
void ScintillaEdit_callTipShow(ScintillaEdit* self, intptr_t pos, const char* definition);
void ScintillaEdit_callTipCancel(ScintillaEdit* self);
bool ScintillaEdit_callTipActive(ScintillaEdit* self);
intptr_t ScintillaEdit_callTipPosStart(ScintillaEdit* self);
void ScintillaEdit_callTipSetPosStart(ScintillaEdit* self, intptr_t posStart);
void ScintillaEdit_callTipSetHlt(ScintillaEdit* self, intptr_t highlightStart, intptr_t highlightEnd);
void ScintillaEdit_callTipSetBack(ScintillaEdit* self, intptr_t back);
void ScintillaEdit_callTipSetFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_callTipSetForeHlt(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_callTipUseStyle(ScintillaEdit* self, intptr_t tabSize);
void ScintillaEdit_callTipSetPosition(ScintillaEdit* self, bool above);
intptr_t ScintillaEdit_visibleFromDocLine(ScintillaEdit* self, intptr_t docLine);
intptr_t ScintillaEdit_docLineFromVisible(ScintillaEdit* self, intptr_t displayLine);
intptr_t ScintillaEdit_wrapCount(ScintillaEdit* self, intptr_t docLine);
void ScintillaEdit_setFoldLevel(ScintillaEdit* self, intptr_t line, intptr_t level);
intptr_t ScintillaEdit_foldLevel(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_lastChild(const ScintillaEdit* self, intptr_t line, intptr_t level);
intptr_t ScintillaEdit_foldParent(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_showLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd);
void ScintillaEdit_hideLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd);
bool ScintillaEdit_lineVisible(const ScintillaEdit* self, intptr_t line);
bool ScintillaEdit_allLinesVisible(const ScintillaEdit* self);
void ScintillaEdit_setFoldExpanded(ScintillaEdit* self, intptr_t line, bool expanded);
bool ScintillaEdit_foldExpanded(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_toggleFold(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_toggleFoldShowText(ScintillaEdit* self, intptr_t line, const char* text);
void ScintillaEdit_foldDisplayTextSetStyle(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_foldDisplayTextStyle(const ScintillaEdit* self);
void ScintillaEdit_setDefaultFoldDisplayText(ScintillaEdit* self, const char* text);
struct miqt_string ScintillaEdit_getDefaultFoldDisplayText(ScintillaEdit* self);
void ScintillaEdit_foldLine(ScintillaEdit* self, intptr_t line, intptr_t action);
void ScintillaEdit_foldChildren(ScintillaEdit* self, intptr_t line, intptr_t action);
void ScintillaEdit_expandChildren(ScintillaEdit* self, intptr_t line, intptr_t level);
void ScintillaEdit_foldAll(ScintillaEdit* self, intptr_t action);
void ScintillaEdit_ensureVisible(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_setAutomaticFold(ScintillaEdit* self, intptr_t automaticFold);
intptr_t ScintillaEdit_automaticFold(const ScintillaEdit* self);
void ScintillaEdit_setFoldFlags(ScintillaEdit* self, intptr_t flags);
void ScintillaEdit_ensureVisibleEnforcePolicy(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_setTabIndents(ScintillaEdit* self, bool tabIndents);
bool ScintillaEdit_tabIndents(const ScintillaEdit* self);
void ScintillaEdit_setBackSpaceUnIndents(ScintillaEdit* self, bool bsUnIndents);
bool ScintillaEdit_backSpaceUnIndents(const ScintillaEdit* self);
void ScintillaEdit_setMouseDwellTime(ScintillaEdit* self, intptr_t periodMilliseconds);
intptr_t ScintillaEdit_mouseDwellTime(const ScintillaEdit* self);
intptr_t ScintillaEdit_wordStartPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters);
intptr_t ScintillaEdit_wordEndPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters);
bool ScintillaEdit_isRangeWord(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_setIdleStyling(ScintillaEdit* self, intptr_t idleStyling);
intptr_t ScintillaEdit_idleStyling(const ScintillaEdit* self);
void ScintillaEdit_setWrapMode(ScintillaEdit* self, intptr_t wrapMode);
intptr_t ScintillaEdit_wrapMode(const ScintillaEdit* self);
void ScintillaEdit_setWrapVisualFlags(ScintillaEdit* self, intptr_t wrapVisualFlags);
intptr_t ScintillaEdit_wrapVisualFlags(const ScintillaEdit* self);
void ScintillaEdit_setWrapVisualFlagsLocation(ScintillaEdit* self, intptr_t wrapVisualFlagsLocation);
intptr_t ScintillaEdit_wrapVisualFlagsLocation(const ScintillaEdit* self);
void ScintillaEdit_setWrapStartIndent(ScintillaEdit* self, intptr_t indent);
intptr_t ScintillaEdit_wrapStartIndent(const ScintillaEdit* self);
void ScintillaEdit_setWrapIndentMode(ScintillaEdit* self, intptr_t wrapIndentMode);
intptr_t ScintillaEdit_wrapIndentMode(const ScintillaEdit* self);
void ScintillaEdit_setLayoutCache(ScintillaEdit* self, intptr_t cacheMode);
intptr_t ScintillaEdit_layoutCache(const ScintillaEdit* self);
void ScintillaEdit_setScrollWidth(ScintillaEdit* self, intptr_t pixelWidth);
intptr_t ScintillaEdit_scrollWidth(const ScintillaEdit* self);
void ScintillaEdit_setScrollWidthTracking(ScintillaEdit* self, bool tracking);
bool ScintillaEdit_scrollWidthTracking(const ScintillaEdit* self);
intptr_t ScintillaEdit_textWidth(ScintillaEdit* self, intptr_t style, const char* text);
void ScintillaEdit_setEndAtLastLine(ScintillaEdit* self, bool endAtLastLine);
bool ScintillaEdit_endAtLastLine(const ScintillaEdit* self);
intptr_t ScintillaEdit_textHeight(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_setVScrollBar(ScintillaEdit* self, bool visible);
bool ScintillaEdit_vScrollBar(const ScintillaEdit* self);
void ScintillaEdit_appendText(ScintillaEdit* self, intptr_t length, const char* text);
intptr_t ScintillaEdit_phasesDraw(const ScintillaEdit* self);
void ScintillaEdit_setPhasesDraw(ScintillaEdit* self, intptr_t phases);
void ScintillaEdit_setFontQuality(ScintillaEdit* self, intptr_t fontQuality);
intptr_t ScintillaEdit_fontQuality(const ScintillaEdit* self);
void ScintillaEdit_setFirstVisibleLine(ScintillaEdit* self, intptr_t displayLine);
void ScintillaEdit_setMultiPaste(ScintillaEdit* self, intptr_t multiPaste);
intptr_t ScintillaEdit_multiPaste(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_tag(const ScintillaEdit* self, intptr_t tagNumber);
void ScintillaEdit_linesJoin(ScintillaEdit* self);
void ScintillaEdit_linesSplit(ScintillaEdit* self, intptr_t pixelWidth);
void ScintillaEdit_setFoldMarginColour(ScintillaEdit* self, bool useSetting, intptr_t back);
void ScintillaEdit_setFoldMarginHiColour(ScintillaEdit* self, bool useSetting, intptr_t fore);
void ScintillaEdit_setAccessibility(ScintillaEdit* self, intptr_t accessibility);
intptr_t ScintillaEdit_accessibility(const ScintillaEdit* self);
void ScintillaEdit_lineDown(ScintillaEdit* self);
void ScintillaEdit_lineDownExtend(ScintillaEdit* self);
void ScintillaEdit_lineUp(ScintillaEdit* self);
void ScintillaEdit_lineUpExtend(ScintillaEdit* self);
void ScintillaEdit_charLeft(ScintillaEdit* self);
void ScintillaEdit_charLeftExtend(ScintillaEdit* self);
void ScintillaEdit_charRight(ScintillaEdit* self);
void ScintillaEdit_charRightExtend(ScintillaEdit* self);
void ScintillaEdit_wordLeft(ScintillaEdit* self);
void ScintillaEdit_wordLeftExtend(ScintillaEdit* self);
void ScintillaEdit_wordRight(ScintillaEdit* self);
void ScintillaEdit_wordRightExtend(ScintillaEdit* self);
void ScintillaEdit_home(ScintillaEdit* self);
void ScintillaEdit_homeExtend(ScintillaEdit* self);
void ScintillaEdit_lineEnd(ScintillaEdit* self);
void ScintillaEdit_lineEndExtend(ScintillaEdit* self);
void ScintillaEdit_documentStart(ScintillaEdit* self);
void ScintillaEdit_documentStartExtend(ScintillaEdit* self);
void ScintillaEdit_documentEnd(ScintillaEdit* self);
void ScintillaEdit_documentEndExtend(ScintillaEdit* self);
void ScintillaEdit_pageUp(ScintillaEdit* self);
void ScintillaEdit_pageUpExtend(ScintillaEdit* self);
void ScintillaEdit_pageDown(ScintillaEdit* self);
void ScintillaEdit_pageDownExtend(ScintillaEdit* self);
void ScintillaEdit_editToggleOvertype(ScintillaEdit* self);
void ScintillaEdit_cancel(ScintillaEdit* self);
void ScintillaEdit_deleteBack(ScintillaEdit* self);
void ScintillaEdit_tab(ScintillaEdit* self);
void ScintillaEdit_lineIndent(ScintillaEdit* self);
void ScintillaEdit_backTab(ScintillaEdit* self);
void ScintillaEdit_lineDedent(ScintillaEdit* self);
void ScintillaEdit_newLine(ScintillaEdit* self);
void ScintillaEdit_formFeed(ScintillaEdit* self);
void ScintillaEdit_vCHome(ScintillaEdit* self);
void ScintillaEdit_vCHomeExtend(ScintillaEdit* self);
void ScintillaEdit_zoomIn(ScintillaEdit* self);
void ScintillaEdit_zoomOut(ScintillaEdit* self);
void ScintillaEdit_delWordLeft(ScintillaEdit* self);
void ScintillaEdit_delWordRight(ScintillaEdit* self);
void ScintillaEdit_delWordRightEnd(ScintillaEdit* self);
void ScintillaEdit_lineCut(ScintillaEdit* self);
void ScintillaEdit_lineDelete(ScintillaEdit* self);
void ScintillaEdit_lineTranspose(ScintillaEdit* self);
void ScintillaEdit_lineReverse(ScintillaEdit* self);
void ScintillaEdit_lineDuplicate(ScintillaEdit* self);
void ScintillaEdit_lowerCase(ScintillaEdit* self);
void ScintillaEdit_upperCase(ScintillaEdit* self);
void ScintillaEdit_lineScrollDown(ScintillaEdit* self);
void ScintillaEdit_lineScrollUp(ScintillaEdit* self);
void ScintillaEdit_deleteBackNotLine(ScintillaEdit* self);
void ScintillaEdit_homeDisplay(ScintillaEdit* self);
void ScintillaEdit_homeDisplayExtend(ScintillaEdit* self);
void ScintillaEdit_lineEndDisplay(ScintillaEdit* self);
void ScintillaEdit_lineEndDisplayExtend(ScintillaEdit* self);
void ScintillaEdit_homeWrap(ScintillaEdit* self);
void ScintillaEdit_homeWrapExtend(ScintillaEdit* self);
void ScintillaEdit_lineEndWrap(ScintillaEdit* self);
void ScintillaEdit_lineEndWrapExtend(ScintillaEdit* self);
void ScintillaEdit_vCHomeWrap(ScintillaEdit* self);
void ScintillaEdit_vCHomeWrapExtend(ScintillaEdit* self);
void ScintillaEdit_lineCopy(ScintillaEdit* self);
void ScintillaEdit_moveCaretInsideView(ScintillaEdit* self);
intptr_t ScintillaEdit_lineLength(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_braceHighlight(ScintillaEdit* self, intptr_t posA, intptr_t posB);
void ScintillaEdit_braceHighlightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator);
void ScintillaEdit_braceBadLight(ScintillaEdit* self, intptr_t pos);
void ScintillaEdit_braceBadLightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator);
intptr_t ScintillaEdit_braceMatch(ScintillaEdit* self, intptr_t pos, intptr_t maxReStyle);
intptr_t ScintillaEdit_braceMatchNext(ScintillaEdit* self, intptr_t pos, intptr_t startPos);
bool ScintillaEdit_viewEOL(const ScintillaEdit* self);
void ScintillaEdit_setViewEOL(ScintillaEdit* self, bool visible);
intptr_t ScintillaEdit_docPointer(const ScintillaEdit* self);
void ScintillaEdit_setDocPointer(ScintillaEdit* self, intptr_t doc);
void ScintillaEdit_setModEventMask(ScintillaEdit* self, intptr_t eventMask);
intptr_t ScintillaEdit_edgeColumn(const ScintillaEdit* self);
void ScintillaEdit_setEdgeColumn(ScintillaEdit* self, intptr_t column);
intptr_t ScintillaEdit_edgeMode(const ScintillaEdit* self);
void ScintillaEdit_setEdgeMode(ScintillaEdit* self, intptr_t edgeMode);
intptr_t ScintillaEdit_edgeColour(const ScintillaEdit* self);
void ScintillaEdit_setEdgeColour(ScintillaEdit* self, intptr_t edgeColour);
void ScintillaEdit_multiEdgeAddLine(ScintillaEdit* self, intptr_t column, intptr_t edgeColour);
void ScintillaEdit_multiEdgeClearAll(ScintillaEdit* self);
intptr_t ScintillaEdit_multiEdgeColumn(const ScintillaEdit* self, intptr_t which);
void ScintillaEdit_searchAnchor(ScintillaEdit* self);
intptr_t ScintillaEdit_searchNext(ScintillaEdit* self, intptr_t searchFlags, const char* text);
intptr_t ScintillaEdit_searchPrev(ScintillaEdit* self, intptr_t searchFlags, const char* text);
intptr_t ScintillaEdit_linesOnScreen(const ScintillaEdit* self);
void ScintillaEdit_usePopUp(ScintillaEdit* self, intptr_t popUpMode);
bool ScintillaEdit_selectionIsRectangle(const ScintillaEdit* self);
void ScintillaEdit_setZoom(ScintillaEdit* self, intptr_t zoomInPoints);
intptr_t ScintillaEdit_zoom(const ScintillaEdit* self);
intptr_t ScintillaEdit_createDocument(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions);
void ScintillaEdit_addRefDocument(ScintillaEdit* self, intptr_t doc);
void ScintillaEdit_releaseDocument(ScintillaEdit* self, intptr_t doc);
intptr_t ScintillaEdit_documentOptions(const ScintillaEdit* self);
intptr_t ScintillaEdit_modEventMask(const ScintillaEdit* self);
void ScintillaEdit_setCommandEvents(ScintillaEdit* self, bool commandEvents);
bool ScintillaEdit_commandEvents(const ScintillaEdit* self);
void ScintillaEdit_setFocus(ScintillaEdit* self, bool focus);
bool ScintillaEdit_focus(const ScintillaEdit* self);
void ScintillaEdit_setStatus(ScintillaEdit* self, intptr_t status);
intptr_t ScintillaEdit_status(const ScintillaEdit* self);
void ScintillaEdit_setMouseDownCaptures(ScintillaEdit* self, bool captures);
bool ScintillaEdit_mouseDownCaptures(const ScintillaEdit* self);
void ScintillaEdit_setMouseWheelCaptures(ScintillaEdit* self, bool captures);
bool ScintillaEdit_mouseWheelCaptures(const ScintillaEdit* self);
void ScintillaEdit_setCursor(ScintillaEdit* self, intptr_t cursorType);
intptr_t ScintillaEdit_cursor(const ScintillaEdit* self);
void ScintillaEdit_setControlCharSymbol(ScintillaEdit* self, intptr_t symbol);
intptr_t ScintillaEdit_controlCharSymbol(const ScintillaEdit* self);
void ScintillaEdit_wordPartLeft(ScintillaEdit* self);
void ScintillaEdit_wordPartLeftExtend(ScintillaEdit* self);
void ScintillaEdit_wordPartRight(ScintillaEdit* self);
void ScintillaEdit_wordPartRightExtend(ScintillaEdit* self);
void ScintillaEdit_setVisiblePolicy(ScintillaEdit* self, intptr_t visiblePolicy, intptr_t visibleSlop);
void ScintillaEdit_delLineLeft(ScintillaEdit* self);
void ScintillaEdit_delLineRight(ScintillaEdit* self);
void ScintillaEdit_setXOffset(ScintillaEdit* self, intptr_t xOffset);
intptr_t ScintillaEdit_xOffset(const ScintillaEdit* self);
void ScintillaEdit_chooseCaretX(ScintillaEdit* self);
void ScintillaEdit_grabFocus(ScintillaEdit* self);
void ScintillaEdit_setXCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop);
void ScintillaEdit_setYCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop);
void ScintillaEdit_setPrintWrapMode(ScintillaEdit* self, intptr_t wrapMode);
intptr_t ScintillaEdit_printWrapMode(const ScintillaEdit* self);
void ScintillaEdit_setHotspotActiveFore(ScintillaEdit* self, bool useSetting, intptr_t fore);
intptr_t ScintillaEdit_hotspotActiveFore(const ScintillaEdit* self);
void ScintillaEdit_setHotspotActiveBack(ScintillaEdit* self, bool useSetting, intptr_t back);
intptr_t ScintillaEdit_hotspotActiveBack(const ScintillaEdit* self);
void ScintillaEdit_setHotspotActiveUnderline(ScintillaEdit* self, bool underline);
bool ScintillaEdit_hotspotActiveUnderline(const ScintillaEdit* self);
void ScintillaEdit_setHotspotSingleLine(ScintillaEdit* self, bool singleLine);
bool ScintillaEdit_hotspotSingleLine(const ScintillaEdit* self);
void ScintillaEdit_paraDown(ScintillaEdit* self);
void ScintillaEdit_paraDownExtend(ScintillaEdit* self);
void ScintillaEdit_paraUp(ScintillaEdit* self);
void ScintillaEdit_paraUpExtend(ScintillaEdit* self);
intptr_t ScintillaEdit_positionBefore(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_positionAfter(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_positionRelative(ScintillaEdit* self, intptr_t pos, intptr_t relative);
intptr_t ScintillaEdit_positionRelativeCodeUnits(ScintillaEdit* self, intptr_t pos, intptr_t relative);
void ScintillaEdit_copyRange(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_copyText(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_setSelectionMode(ScintillaEdit* self, intptr_t selectionMode);
void ScintillaEdit_changeSelectionMode(ScintillaEdit* self, intptr_t selectionMode);
intptr_t ScintillaEdit_selectionMode(const ScintillaEdit* self);
void ScintillaEdit_setMoveExtendsSelection(ScintillaEdit* self, bool moveExtendsSelection);
bool ScintillaEdit_moveExtendsSelection(const ScintillaEdit* self);
intptr_t ScintillaEdit_getLineSelStartPosition(ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_getLineSelEndPosition(ScintillaEdit* self, intptr_t line);
void ScintillaEdit_lineDownRectExtend(ScintillaEdit* self);
void ScintillaEdit_lineUpRectExtend(ScintillaEdit* self);
void ScintillaEdit_charLeftRectExtend(ScintillaEdit* self);
void ScintillaEdit_charRightRectExtend(ScintillaEdit* self);
void ScintillaEdit_homeRectExtend(ScintillaEdit* self);
void ScintillaEdit_vCHomeRectExtend(ScintillaEdit* self);
void ScintillaEdit_lineEndRectExtend(ScintillaEdit* self);
void ScintillaEdit_pageUpRectExtend(ScintillaEdit* self);
void ScintillaEdit_pageDownRectExtend(ScintillaEdit* self);
void ScintillaEdit_stutteredPageUp(ScintillaEdit* self);
void ScintillaEdit_stutteredPageUpExtend(ScintillaEdit* self);
void ScintillaEdit_stutteredPageDown(ScintillaEdit* self);
void ScintillaEdit_stutteredPageDownExtend(ScintillaEdit* self);
void ScintillaEdit_wordLeftEnd(ScintillaEdit* self);
void ScintillaEdit_wordLeftEndExtend(ScintillaEdit* self);
void ScintillaEdit_wordRightEnd(ScintillaEdit* self);
void ScintillaEdit_wordRightEndExtend(ScintillaEdit* self);
void ScintillaEdit_setWhitespaceChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_whitespaceChars(const ScintillaEdit* self);
void ScintillaEdit_setPunctuationChars(ScintillaEdit* self, const char* characters);
struct miqt_string ScintillaEdit_punctuationChars(const ScintillaEdit* self);
void ScintillaEdit_setCharsDefault(ScintillaEdit* self);
intptr_t ScintillaEdit_autoCCurrent(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_autoCCurrentText(const ScintillaEdit* self);
void ScintillaEdit_autoCSetCaseInsensitiveBehaviour(ScintillaEdit* self, intptr_t behaviour);
intptr_t ScintillaEdit_autoCCaseInsensitiveBehaviour(const ScintillaEdit* self);
void ScintillaEdit_autoCSetMulti(ScintillaEdit* self, intptr_t multi);
intptr_t ScintillaEdit_autoCMulti(const ScintillaEdit* self);
void ScintillaEdit_autoCSetOrder(ScintillaEdit* self, intptr_t order);
intptr_t ScintillaEdit_autoCOrder(const ScintillaEdit* self);
void ScintillaEdit_allocate(ScintillaEdit* self, intptr_t bytes);
struct miqt_string ScintillaEdit_targetAsUTF8(ScintillaEdit* self);
void ScintillaEdit_setLengthForEncode(ScintillaEdit* self, intptr_t bytes);
struct miqt_string ScintillaEdit_encodedFromUTF8(ScintillaEdit* self, const char* utf8);
intptr_t ScintillaEdit_findColumn(ScintillaEdit* self, intptr_t line, intptr_t column);
intptr_t ScintillaEdit_caretSticky(const ScintillaEdit* self);
void ScintillaEdit_setCaretSticky(ScintillaEdit* self, intptr_t useCaretStickyBehaviour);
void ScintillaEdit_toggleCaretSticky(ScintillaEdit* self);
void ScintillaEdit_setPasteConvertEndings(ScintillaEdit* self, bool convert);
bool ScintillaEdit_pasteConvertEndings(const ScintillaEdit* self);
void ScintillaEdit_replaceRectangular(ScintillaEdit* self, intptr_t length, const char* text);
void ScintillaEdit_selectionDuplicate(ScintillaEdit* self);
void ScintillaEdit_setCaretLineBackAlpha(ScintillaEdit* self, intptr_t alpha);
intptr_t ScintillaEdit_caretLineBackAlpha(const ScintillaEdit* self);
void ScintillaEdit_setCaretStyle(ScintillaEdit* self, intptr_t caretStyle);
intptr_t ScintillaEdit_caretStyle(const ScintillaEdit* self);
void ScintillaEdit_setIndicatorCurrent(ScintillaEdit* self, intptr_t indicator);
intptr_t ScintillaEdit_indicatorCurrent(const ScintillaEdit* self);
void ScintillaEdit_setIndicatorValue(ScintillaEdit* self, intptr_t value);
intptr_t ScintillaEdit_indicatorValue(const ScintillaEdit* self);
void ScintillaEdit_indicatorFillRange(ScintillaEdit* self, intptr_t start, intptr_t lengthFill);
void ScintillaEdit_indicatorClearRange(ScintillaEdit* self, intptr_t start, intptr_t lengthClear);
intptr_t ScintillaEdit_indicatorAllOnFor(ScintillaEdit* self, intptr_t pos);
intptr_t ScintillaEdit_indicatorValueAt(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
intptr_t ScintillaEdit_indicatorStart(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
intptr_t ScintillaEdit_indicatorEnd(ScintillaEdit* self, intptr_t indicator, intptr_t pos);
void ScintillaEdit_setPositionCache(ScintillaEdit* self, intptr_t size);
intptr_t ScintillaEdit_positionCache(const ScintillaEdit* self);
void ScintillaEdit_setLayoutThreads(ScintillaEdit* self, intptr_t threads);
intptr_t ScintillaEdit_layoutThreads(const ScintillaEdit* self);
void ScintillaEdit_copyAllowLine(ScintillaEdit* self);
void ScintillaEdit_cutAllowLine(ScintillaEdit* self);
void ScintillaEdit_setCopySeparator(ScintillaEdit* self, const char* separator);
struct miqt_string ScintillaEdit_copySeparator(const ScintillaEdit* self);
intptr_t ScintillaEdit_characterPointer(const ScintillaEdit* self);
intptr_t ScintillaEdit_rangePointer(const ScintillaEdit* self, intptr_t start, intptr_t lengthRange);
intptr_t ScintillaEdit_gapPosition(const ScintillaEdit* self);
void ScintillaEdit_indicSetAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha);
intptr_t ScintillaEdit_indicAlpha(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_indicSetOutlineAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha);
intptr_t ScintillaEdit_indicOutlineAlpha(const ScintillaEdit* self, intptr_t indicator);
void ScintillaEdit_setExtraAscent(ScintillaEdit* self, intptr_t extraAscent);
intptr_t ScintillaEdit_extraAscent(const ScintillaEdit* self);
void ScintillaEdit_setExtraDescent(ScintillaEdit* self, intptr_t extraDescent);
intptr_t ScintillaEdit_extraDescent(const ScintillaEdit* self);
intptr_t ScintillaEdit_markerSymbolDefined(ScintillaEdit* self, intptr_t markerNumber);
void ScintillaEdit_marginSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_marginText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_marginSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_marginStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_marginSetStyles(ScintillaEdit* self, intptr_t line, const char* styles);
struct miqt_string ScintillaEdit_marginStyles(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_marginTextClearAll(ScintillaEdit* self);
void ScintillaEdit_marginSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_marginStyleOffset(const ScintillaEdit* self);
void ScintillaEdit_setMarginOptions(ScintillaEdit* self, intptr_t marginOptions);
intptr_t ScintillaEdit_marginOptions(const ScintillaEdit* self);
void ScintillaEdit_annotationSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_annotationText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_annotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_annotationStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_annotationSetStyles(ScintillaEdit* self, intptr_t line, const char* styles);
struct miqt_string ScintillaEdit_annotationStyles(const ScintillaEdit* self, intptr_t line);
intptr_t ScintillaEdit_annotationLines(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_annotationClearAll(ScintillaEdit* self);
void ScintillaEdit_annotationSetVisible(ScintillaEdit* self, intptr_t visible);
intptr_t ScintillaEdit_annotationVisible(const ScintillaEdit* self);
void ScintillaEdit_annotationSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_annotationStyleOffset(const ScintillaEdit* self);
void ScintillaEdit_releaseAllExtendedStyles(ScintillaEdit* self);
intptr_t ScintillaEdit_allocateExtendedStyles(ScintillaEdit* self, intptr_t numberStyles);
void ScintillaEdit_addUndoAction(ScintillaEdit* self, intptr_t token, intptr_t flags);
intptr_t ScintillaEdit_charPositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
intptr_t ScintillaEdit_charPositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_setMouseSelectionRectangularSwitch(ScintillaEdit* self, bool mouseSelectionRectangularSwitch);
bool ScintillaEdit_mouseSelectionRectangularSwitch(const ScintillaEdit* self);
void ScintillaEdit_setMultipleSelection(ScintillaEdit* self, bool multipleSelection);
bool ScintillaEdit_multipleSelection(const ScintillaEdit* self);
void ScintillaEdit_setAdditionalSelectionTyping(ScintillaEdit* self, bool additionalSelectionTyping);
bool ScintillaEdit_additionalSelectionTyping(const ScintillaEdit* self);
void ScintillaEdit_setAdditionalCaretsBlink(ScintillaEdit* self, bool additionalCaretsBlink);
bool ScintillaEdit_additionalCaretsBlink(const ScintillaEdit* self);
void ScintillaEdit_setAdditionalCaretsVisible(ScintillaEdit* self, bool additionalCaretsVisible);
bool ScintillaEdit_additionalCaretsVisible(const ScintillaEdit* self);
intptr_t ScintillaEdit_selections(const ScintillaEdit* self);
bool ScintillaEdit_selectionEmpty(const ScintillaEdit* self);
void ScintillaEdit_clearSelections(ScintillaEdit* self);
void ScintillaEdit_setSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor);
void ScintillaEdit_addSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor);
intptr_t ScintillaEdit_selectionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y);
void ScintillaEdit_dropSelectionN(ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setMainSelection(ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_mainSelection(const ScintillaEdit* self);
void ScintillaEdit_setSelectionNCaret(ScintillaEdit* self, intptr_t selection, intptr_t caret);
intptr_t ScintillaEdit_selectionNCaret(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setSelectionNAnchor(ScintillaEdit* self, intptr_t selection, intptr_t anchor);
intptr_t ScintillaEdit_selectionNAnchor(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setSelectionNCaretVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space);
intptr_t ScintillaEdit_selectionNCaretVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setSelectionNAnchorVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space);
intptr_t ScintillaEdit_selectionNAnchorVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setSelectionNStart(ScintillaEdit* self, intptr_t selection, intptr_t anchor);
intptr_t ScintillaEdit_selectionNStart(const ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_selectionNStartVirtualSpace(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setSelectionNEnd(ScintillaEdit* self, intptr_t selection, intptr_t caret);
intptr_t ScintillaEdit_selectionNEndVirtualSpace(const ScintillaEdit* self, intptr_t selection);
intptr_t ScintillaEdit_selectionNEnd(const ScintillaEdit* self, intptr_t selection);
void ScintillaEdit_setRectangularSelectionCaret(ScintillaEdit* self, intptr_t caret);
intptr_t ScintillaEdit_rectangularSelectionCaret(const ScintillaEdit* self);
void ScintillaEdit_setRectangularSelectionAnchor(ScintillaEdit* self, intptr_t anchor);
intptr_t ScintillaEdit_rectangularSelectionAnchor(const ScintillaEdit* self);
void ScintillaEdit_setRectangularSelectionCaretVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_rectangularSelectionCaretVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_setRectangularSelectionAnchorVirtualSpace(ScintillaEdit* self, intptr_t space);
intptr_t ScintillaEdit_rectangularSelectionAnchorVirtualSpace(const ScintillaEdit* self);
void ScintillaEdit_setVirtualSpaceOptions(ScintillaEdit* self, intptr_t virtualSpaceOptions);
intptr_t ScintillaEdit_virtualSpaceOptions(const ScintillaEdit* self);
void ScintillaEdit_setRectangularSelectionModifier(ScintillaEdit* self, intptr_t modifier);
intptr_t ScintillaEdit_rectangularSelectionModifier(const ScintillaEdit* self);
void ScintillaEdit_setAdditionalSelFore(ScintillaEdit* self, intptr_t fore);
void ScintillaEdit_setAdditionalSelBack(ScintillaEdit* self, intptr_t back);
void ScintillaEdit_setAdditionalSelAlpha(ScintillaEdit* self, intptr_t alpha);
intptr_t ScintillaEdit_additionalSelAlpha(const ScintillaEdit* self);
void ScintillaEdit_setAdditionalCaretFore(ScintillaEdit* self, intptr_t fore);
intptr_t ScintillaEdit_additionalCaretFore(const ScintillaEdit* self);
void ScintillaEdit_rotateSelection(ScintillaEdit* self);
void ScintillaEdit_swapMainAnchorCaret(ScintillaEdit* self);
void ScintillaEdit_multipleSelectAddNext(ScintillaEdit* self);
void ScintillaEdit_multipleSelectAddEach(ScintillaEdit* self);
intptr_t ScintillaEdit_changeLexerState(ScintillaEdit* self, intptr_t start, intptr_t end);
intptr_t ScintillaEdit_contractedFoldNext(ScintillaEdit* self, intptr_t lineStart);
void ScintillaEdit_verticalCentreCaret(ScintillaEdit* self);
void ScintillaEdit_moveSelectedLinesUp(ScintillaEdit* self);
void ScintillaEdit_moveSelectedLinesDown(ScintillaEdit* self);
void ScintillaEdit_setIdentifier(ScintillaEdit* self, intptr_t identifier);
intptr_t ScintillaEdit_identifier(const ScintillaEdit* self);
void ScintillaEdit_rGBAImageSetWidth(ScintillaEdit* self, intptr_t width);
void ScintillaEdit_rGBAImageSetHeight(ScintillaEdit* self, intptr_t height);
void ScintillaEdit_rGBAImageSetScale(ScintillaEdit* self, intptr_t scalePercent);
void ScintillaEdit_markerDefineRGBAImage(ScintillaEdit* self, intptr_t markerNumber, const char* pixels);
void ScintillaEdit_registerRGBAImage(ScintillaEdit* self, intptr_t type, const char* pixels);
void ScintillaEdit_scrollToStart(ScintillaEdit* self);
void ScintillaEdit_scrollToEnd(ScintillaEdit* self);
void ScintillaEdit_setTechnology(ScintillaEdit* self, intptr_t technology);
intptr_t ScintillaEdit_technology(const ScintillaEdit* self);
intptr_t ScintillaEdit_createLoader(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions);
void ScintillaEdit_findIndicatorShow(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_findIndicatorFlash(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_findIndicatorHide(ScintillaEdit* self);
void ScintillaEdit_vCHomeDisplay(ScintillaEdit* self);
void ScintillaEdit_vCHomeDisplayExtend(ScintillaEdit* self);
bool ScintillaEdit_caretLineVisibleAlways(const ScintillaEdit* self);
void ScintillaEdit_setCaretLineVisibleAlways(ScintillaEdit* self, bool alwaysVisible);
void ScintillaEdit_setLineEndTypesAllowed(ScintillaEdit* self, intptr_t lineEndBitSet);
intptr_t ScintillaEdit_lineEndTypesAllowed(const ScintillaEdit* self);
intptr_t ScintillaEdit_lineEndTypesActive(const ScintillaEdit* self);
void ScintillaEdit_setRepresentation(ScintillaEdit* self, const char* encodedCharacter, const char* representation);
struct miqt_string ScintillaEdit_representation(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_clearRepresentation(ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_clearAllRepresentations(ScintillaEdit* self);
void ScintillaEdit_setRepresentationAppearance(ScintillaEdit* self, const char* encodedCharacter, intptr_t appearance);
intptr_t ScintillaEdit_representationAppearance(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_setRepresentationColour(ScintillaEdit* self, const char* encodedCharacter, intptr_t colour);
intptr_t ScintillaEdit_representationColour(const ScintillaEdit* self, const char* encodedCharacter);
void ScintillaEdit_eOLAnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text);
struct miqt_string ScintillaEdit_eOLAnnotationText(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_eOLAnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style);
intptr_t ScintillaEdit_eOLAnnotationStyle(const ScintillaEdit* self, intptr_t line);
void ScintillaEdit_eOLAnnotationClearAll(ScintillaEdit* self);
void ScintillaEdit_eOLAnnotationSetVisible(ScintillaEdit* self, intptr_t visible);
intptr_t ScintillaEdit_eOLAnnotationVisible(const ScintillaEdit* self);
void ScintillaEdit_eOLAnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style);
intptr_t ScintillaEdit_eOLAnnotationStyleOffset(const ScintillaEdit* self);
bool ScintillaEdit_supportsFeature(const ScintillaEdit* self, intptr_t feature);
intptr_t ScintillaEdit_lineCharacterIndex(const ScintillaEdit* self);
void ScintillaEdit_allocateLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex);
void ScintillaEdit_releaseLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex);
intptr_t ScintillaEdit_lineFromIndexPosition(ScintillaEdit* self, intptr_t pos, intptr_t lineCharacterIndex);
intptr_t ScintillaEdit_indexPositionFromLine(ScintillaEdit* self, intptr_t line, intptr_t lineCharacterIndex);
void ScintillaEdit_startRecord(ScintillaEdit* self);
void ScintillaEdit_stopRecord(ScintillaEdit* self);
intptr_t ScintillaEdit_lexer(const ScintillaEdit* self);
void ScintillaEdit_colourise(ScintillaEdit* self, intptr_t start, intptr_t end);
void ScintillaEdit_setProperty(ScintillaEdit* self, const char* key, const char* value);
void ScintillaEdit_setKeyWords(ScintillaEdit* self, intptr_t keyWordSet, const char* keyWords);
struct miqt_string ScintillaEdit_property(const ScintillaEdit* self, const char* key);
struct miqt_string ScintillaEdit_propertyExpanded(const ScintillaEdit* self, const char* key);
intptr_t ScintillaEdit_propertyInt(const ScintillaEdit* self, const char* key, intptr_t defaultValue);
struct miqt_string ScintillaEdit_lexerLanguage(const ScintillaEdit* self);
intptr_t ScintillaEdit_privateLexerCall(ScintillaEdit* self, intptr_t operation, intptr_t pointer);
struct miqt_string ScintillaEdit_propertyNames(ScintillaEdit* self);
intptr_t ScintillaEdit_propertyType(ScintillaEdit* self, const char* name);
struct miqt_string ScintillaEdit_describeProperty(ScintillaEdit* self, const char* name);
struct miqt_string ScintillaEdit_describeKeyWordSets(ScintillaEdit* self);
intptr_t ScintillaEdit_lineEndTypesSupported(const ScintillaEdit* self);
intptr_t ScintillaEdit_allocateSubStyles(ScintillaEdit* self, intptr_t styleBase, intptr_t numberStyles);
intptr_t ScintillaEdit_subStylesStart(const ScintillaEdit* self, intptr_t styleBase);
intptr_t ScintillaEdit_subStylesLength(const ScintillaEdit* self, intptr_t styleBase);
intptr_t ScintillaEdit_styleFromSubStyle(const ScintillaEdit* self, intptr_t subStyle);
intptr_t ScintillaEdit_primaryStyleFromStyle(const ScintillaEdit* self, intptr_t style);
void ScintillaEdit_freeSubStyles(ScintillaEdit* self);
void ScintillaEdit_setIdentifiers(ScintillaEdit* self, intptr_t style, const char* identifiers);
intptr_t ScintillaEdit_distanceToSecondaryStyles(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_subStyleBases(const ScintillaEdit* self);
intptr_t ScintillaEdit_namedStyles(const ScintillaEdit* self);
struct miqt_string ScintillaEdit_nameOfStyle(ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_tagsOfStyle(ScintillaEdit* self, intptr_t style);
struct miqt_string ScintillaEdit_descriptionOfStyle(ScintillaEdit* self, intptr_t style);
void ScintillaEdit_setILexer(ScintillaEdit* self, intptr_t ilexer);
intptr_t ScintillaEdit_bidirectional(const ScintillaEdit* self);
void ScintillaEdit_setBidirectional(ScintillaEdit* self, intptr_t bidirectional);
struct miqt_string ScintillaEdit_tr2(const char* s, const char* c);
struct miqt_string ScintillaEdit_tr3(const char* s, const char* c, int n);
struct miqt_string ScintillaEdit_trUtf82(const char* s, const char* c);
struct miqt_string ScintillaEdit_trUtf83(const char* s, const char* c, int n);

bool ScintillaEdit_override_virtual_send(void* self, intptr_t slot);
intptr_t ScintillaEdit_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);
bool ScintillaEdit_override_virtual_sends(void* self, intptr_t slot);
intptr_t ScintillaEdit_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s);
bool ScintillaEdit_override_virtual_event(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_event(void* self, QEvent* event);
bool ScintillaEdit_override_virtual_paintEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool ScintillaEdit_override_virtual_wheelEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool ScintillaEdit_override_virtual_focusInEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool ScintillaEdit_override_virtual_focusOutEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool ScintillaEdit_override_virtual_resizeEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool ScintillaEdit_override_virtual_keyPressEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool ScintillaEdit_override_virtual_mousePressEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool ScintillaEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool ScintillaEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool ScintillaEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool ScintillaEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool ScintillaEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool ScintillaEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool ScintillaEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool ScintillaEdit_override_virtual_dropEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_dropEvent(void* self, QDropEvent* event);
bool ScintillaEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool ScintillaEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* ScintillaEdit_virtualbase_inputMethodQuery(const void* self, int query);
bool ScintillaEdit_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_scrollContentsBy(void* self, int param1, int param2);
bool ScintillaEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* ScintillaEdit_virtualbase_minimumSizeHint(const void* self);
bool ScintillaEdit_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* ScintillaEdit_virtualbase_sizeHint(const void* self);
bool ScintillaEdit_override_virtual_setupViewport(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_setupViewport(void* self, QWidget* viewport);
bool ScintillaEdit_override_virtual_eventFilter(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool ScintillaEdit_override_virtual_viewportEvent(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_viewportEvent(void* self, QEvent* param1);
bool ScintillaEdit_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* ScintillaEdit_virtualbase_viewportSizeHint(const void* self);
bool ScintillaEdit_override_virtual_changeEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_changeEvent(void* self, QEvent* param1);
bool ScintillaEdit_override_virtual_devType(void* self, intptr_t slot);
int ScintillaEdit_virtualbase_devType(const void* self);
bool ScintillaEdit_override_virtual_setVisible(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_setVisible(void* self, bool visible);
bool ScintillaEdit_override_virtual_heightForWidth(void* self, intptr_t slot);
int ScintillaEdit_virtualbase_heightForWidth(const void* self, int param1);
bool ScintillaEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_hasHeightForWidth(const void* self);
bool ScintillaEdit_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* ScintillaEdit_virtualbase_paintEngine(const void* self);
bool ScintillaEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool ScintillaEdit_override_virtual_enterEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_enterEvent(void* self, QEvent* event);
bool ScintillaEdit_override_virtual_leaveEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_leaveEvent(void* self, QEvent* event);
bool ScintillaEdit_override_virtual_moveEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool ScintillaEdit_override_virtual_closeEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool ScintillaEdit_override_virtual_tabletEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool ScintillaEdit_override_virtual_actionEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_actionEvent(void* self, QActionEvent* event);
bool ScintillaEdit_override_virtual_showEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_showEvent(void* self, QShowEvent* event);
bool ScintillaEdit_override_virtual_hideEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_hideEvent(void* self, QHideEvent* event);
bool ScintillaEdit_override_virtual_nativeEvent(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool ScintillaEdit_override_virtual_metric(void* self, intptr_t slot);
int ScintillaEdit_virtualbase_metric(const void* self, int param1);
bool ScintillaEdit_override_virtual_initPainter(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_initPainter(const void* self, QPainter* painter);
bool ScintillaEdit_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* ScintillaEdit_virtualbase_redirected(const void* self, QPoint* offset);
bool ScintillaEdit_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* ScintillaEdit_virtualbase_sharedPainter(const void* self);
bool ScintillaEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool ScintillaEdit_virtualbase_focusNextPrevChild(void* self, bool next);
bool ScintillaEdit_override_virtual_timerEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool ScintillaEdit_override_virtual_childEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_childEvent(void* self, QChildEvent* event);
bool ScintillaEdit_override_virtual_customEvent(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_customEvent(void* self, QEvent* event);
bool ScintillaEdit_override_virtual_connectNotify(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool ScintillaEdit_override_virtual_disconnectNotify(void* self, intptr_t slot);
void ScintillaEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void ScintillaEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* ScintillaEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void ScintillaEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void ScintillaEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void ScintillaEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void ScintillaEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void ScintillaEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool ScintillaEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool ScintillaEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* ScintillaEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int ScintillaEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int ScintillaEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool ScintillaEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void ScintillaEdit_delete(ScintillaEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
