#include <QAbstractScrollArea>
#include <QByteArray>
#include <QChildEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPair>
#include <QRect>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRange
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRangeFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourRGBA
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourStop
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Fill
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FillStroke
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Font
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FontParameters
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IListBoxDelegate
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLine
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLineLayout
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Interval
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBox
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBoxEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListOptions
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Menu
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__PRectangle
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Point
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Stroke
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Surface
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__SurfaceMode
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Window
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotificationData
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotifyHeader
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormat
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormatFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Rectangle
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRange
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRangeFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFind
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFindFull
#include <ScintillaEdit.h>
#include "gen_ScintillaEdit.h"
#include "_cgo_export.h"

Scintilla__Internal__Point* Scintilla__Internal__Point_new() {
	return new Scintilla::Internal::Point();
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new2(Scintilla__Internal__Point* param1) {
	return new Scintilla::Internal::Point(*param1);
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new3(double x_) {
	return new Scintilla::Internal::Point(static_cast<Scintilla::Internal::XYPOSITION>(x_));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new4(double x_, double y_) {
	return new Scintilla::Internal::Point(static_cast<Scintilla::Internal::XYPOSITION>(x_), static_cast<Scintilla::Internal::XYPOSITION>(y_));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_FromInts(int x_, int y_) {
	return new Scintilla::Internal::Point(Scintilla::Internal::Point::FromInts(static_cast<int>(x_), static_cast<int>(y_)));
}

bool Scintilla__Internal__Point_OperatorEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return (*self == *other);
}

bool Scintilla__Internal__Point_OperatorNotEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return (*self != *other);
}

Scintilla__Internal__Point* Scintilla__Internal__Point_OperatorPlus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return new Scintilla::Internal::Point(self->operator+(*other));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_OperatorMinus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return new Scintilla::Internal::Point(self->operator-(*other));
}

void Scintilla__Internal__Point_Delete(Scintilla__Internal__Point* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Point*>( self );
	} else {
		delete self;
	}
}

bool Scintilla__Internal__Interval_OperatorEqual(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other) {
	return (*self == *other);
}

double Scintilla__Internal__Interval_Width(const Scintilla__Internal__Interval* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

bool Scintilla__Internal__Interval_Empty(const Scintilla__Internal__Interval* self) {
	return self->Empty();
}

bool Scintilla__Internal__Interval_Intersects(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other) {
	return self->Intersects(*other);
}

Scintilla__Internal__Interval* Scintilla__Internal__Interval_Offset(const Scintilla__Internal__Interval* self, double offset) {
	return new Scintilla::Internal::Interval(self->Offset(static_cast<Scintilla::Internal::XYPOSITION>(offset)));
}

void Scintilla__Internal__Interval_Delete(Scintilla__Internal__Interval* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Interval*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new() {
	return new Scintilla::Internal::PRectangle();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new2(Scintilla__Internal__PRectangle* param1) {
	return new Scintilla::Internal::PRectangle(*param1);
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new3(double left_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new4(double left_, double top_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new5(double left_, double top_, double right_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_), static_cast<Scintilla::Internal::XYPOSITION>(right_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new6(double left_, double top_, double right_, double bottom_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_), static_cast<Scintilla::Internal::XYPOSITION>(right_), static_cast<Scintilla::Internal::XYPOSITION>(bottom_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_FromInts(int left_, int top_, int right_, int bottom_) {
	return new Scintilla::Internal::PRectangle(Scintilla::Internal::PRectangle::FromInts(static_cast<int>(left_), static_cast<int>(top_), static_cast<int>(right_), static_cast<int>(bottom_)));
}

bool Scintilla__Internal__PRectangle_OperatorEqual(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc) {
	return (*self == *rc);
}

bool Scintilla__Internal__PRectangle_Contains(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt) {
	return self->Contains(*pt);
}

bool Scintilla__Internal__PRectangle_ContainsWholePixel(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt) {
	return self->ContainsWholePixel(*pt);
}

bool Scintilla__Internal__PRectangle_ContainsWithRc(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc) {
	return self->Contains(*rc);
}

bool Scintilla__Internal__PRectangle_Intersects(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* other) {
	return self->Intersects(*other);
}

bool Scintilla__Internal__PRectangle_IntersectsWithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontalBounds) {
	return self->Intersects(*horizontalBounds);
}

void Scintilla__Internal__PRectangle_Move(Scintilla__Internal__PRectangle* self, double xDelta, double yDelta) {
	self->Move(static_cast<Scintilla::Internal::XYPOSITION>(xDelta), static_cast<Scintilla::Internal::XYPOSITION>(yDelta));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_WithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontal) {
	return new Scintilla::Internal::PRectangle(self->WithHorizontalBounds(*horizontal));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_Inset(const Scintilla__Internal__PRectangle* self, double delta) {
	return new Scintilla::Internal::PRectangle(self->Inset(static_cast<Scintilla::Internal::XYPOSITION>(delta)));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_InsetWithDelta(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* delta) {
	return new Scintilla::Internal::PRectangle(self->Inset(*delta));
}

Scintilla__Internal__Point* Scintilla__Internal__PRectangle_Centre(const Scintilla__Internal__PRectangle* self) {
	return new Scintilla::Internal::Point(self->Centre());
}

double Scintilla__Internal__PRectangle_Width(const Scintilla__Internal__PRectangle* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__PRectangle_Height(const Scintilla__Internal__PRectangle* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Height();
	return static_cast<double>(_ret);
}

bool Scintilla__Internal__PRectangle_Empty(const Scintilla__Internal__PRectangle* self) {
	return self->Empty();
}

void Scintilla__Internal__PRectangle_Delete(Scintilla__Internal__PRectangle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::PRectangle*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new() {
	return new Scintilla::Internal::ColourRGBA();
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new2(unsigned int red, unsigned int green, unsigned int blue) {
	return new Scintilla::Internal::ColourRGBA(static_cast<unsigned int>(red), static_cast<unsigned int>(green), static_cast<unsigned int>(blue));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new3(Scintilla__Internal__ColourRGBA* cd, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(*cd, static_cast<unsigned int>(alpha));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new4(Scintilla__Internal__ColourRGBA* param1) {
	return new Scintilla::Internal::ColourRGBA(*param1);
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new5(int co_) {
	return new Scintilla::Internal::ColourRGBA(static_cast<int>(co_));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new6(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(static_cast<unsigned int>(red), static_cast<unsigned int>(green), static_cast<unsigned int>(blue), static_cast<unsigned int>(alpha));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromRGB(int co_) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::FromRGB(static_cast<int>(co_)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey(unsigned int grey) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::Grey(static_cast<unsigned int>(grey)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromIpRGB(intptr_t co_) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::FromIpRGB(static_cast<intptr_t>(co_)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_WithoutAlpha(const Scintilla__Internal__ColourRGBA* self) {
	return new Scintilla::Internal::ColourRGBA(self->WithoutAlpha());
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Opaque(const Scintilla__Internal__ColourRGBA* self) {
	return new Scintilla::Internal::ColourRGBA(self->Opaque());
}

int Scintilla__Internal__ColourRGBA_AsInteger(const Scintilla__Internal__ColourRGBA* self) {
	return self->AsInteger();
}

int Scintilla__Internal__ColourRGBA_OpaqueRGB(const Scintilla__Internal__ColourRGBA* self) {
	return self->OpaqueRGB();
}

unsigned char Scintilla__Internal__ColourRGBA_GetRed(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetRed();
}

unsigned char Scintilla__Internal__ColourRGBA_GetGreen(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetGreen();
}

unsigned char Scintilla__Internal__ColourRGBA_GetBlue(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetBlue();
}

unsigned char Scintilla__Internal__ColourRGBA_GetAlpha(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetAlpha();
}

float Scintilla__Internal__ColourRGBA_GetRedComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetRedComponent();
}

float Scintilla__Internal__ColourRGBA_GetGreenComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetGreenComponent();
}

float Scintilla__Internal__ColourRGBA_GetBlueComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetBlueComponent();
}

float Scintilla__Internal__ColourRGBA_GetAlphaComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetAlphaComponent();
}

bool Scintilla__Internal__ColourRGBA_OperatorEqual(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other) {
	return (*self == *other);
}

bool Scintilla__Internal__ColourRGBA_IsOpaque(const Scintilla__Internal__ColourRGBA* self) {
	return self->IsOpaque();
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other) {
	return new Scintilla::Internal::ColourRGBA(self->MixedWith(*other));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith2(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other, double proportion) {
	return new Scintilla::Internal::ColourRGBA(self->MixedWith(*other, static_cast<double>(proportion)));
}

void Scintilla__Internal__ColourRGBA_OperatorAssign(Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* param1) {
	self->operator=(*param1);
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey2(unsigned int grey, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::Grey(static_cast<unsigned int>(grey), static_cast<unsigned int>(alpha)));
}

void Scintilla__Internal__ColourRGBA_Delete(Scintilla__Internal__ColourRGBA* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::ColourRGBA*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new(Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::Stroke(*colour_);
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new2(Scintilla__Internal__Stroke* param1) {
	return new Scintilla::Internal::Stroke(*param1);
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new3(Scintilla__Internal__ColourRGBA* colour_, double width_) {
	return new Scintilla::Internal::Stroke(*colour_, static_cast<Scintilla::Internal::XYPOSITION>(width_));
}

float Scintilla__Internal__Stroke_WidthF(const Scintilla__Internal__Stroke* self) {
	return self->WidthF();
}

void Scintilla__Internal__Stroke_Delete(Scintilla__Internal__Stroke* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Stroke*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new(Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::Fill(*colour_);
}

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new2(Scintilla__Internal__Fill* param1) {
	return new Scintilla::Internal::Fill(*param1);
}

void Scintilla__Internal__Fill_Delete(Scintilla__Internal__Fill* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Fill*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_) {
	return new Scintilla::Internal::FillStroke(*colourFill_, *colourStroke_);
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new2(Scintilla__Internal__ColourRGBA* colourBoth) {
	return new Scintilla::Internal::FillStroke(*colourBoth);
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new3(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_, double widthStroke_) {
	return new Scintilla::Internal::FillStroke(*colourFill_, *colourStroke_, static_cast<Scintilla::Internal::XYPOSITION>(widthStroke_));
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new4(Scintilla__Internal__ColourRGBA* colourBoth, double widthStroke_) {
	return new Scintilla::Internal::FillStroke(*colourBoth, static_cast<Scintilla::Internal::XYPOSITION>(widthStroke_));
}

void Scintilla__Internal__FillStroke_Delete(Scintilla__Internal__FillStroke* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::FillStroke*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__ColourStop* Scintilla__Internal__ColourStop_new(double position_, Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::ColourStop(static_cast<Scintilla::Internal::XYPOSITION>(position_), *colour_);
}

void Scintilla__Internal__ColourStop_Delete(Scintilla__Internal__ColourStop* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::ColourStop*>( self );
	} else {
		delete self;
	}
}

void Scintilla__CharacterRange_Delete(Scintilla__CharacterRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::CharacterRange*>( self );
	} else {
		delete self;
	}
}

void Scintilla__CharacterRangeFull_Delete(Scintilla__CharacterRangeFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::CharacterRangeFull*>( self );
	} else {
		delete self;
	}
}

void Scintilla__TextRange_Delete(Scintilla__TextRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::TextRange*>( self );
	} else {
		delete self;
	}
}

void Scintilla__TextRangeFull_Delete(Scintilla__TextRangeFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::TextRangeFull*>( self );
	} else {
		delete self;
	}
}

void Scintilla__TextToFind_Delete(Scintilla__TextToFind* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::TextToFind*>( self );
	} else {
		delete self;
	}
}

void Scintilla__TextToFindFull_Delete(Scintilla__TextToFindFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::TextToFindFull*>( self );
	} else {
		delete self;
	}
}

void Scintilla__Rectangle_Delete(Scintilla__Rectangle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Rectangle*>( self );
	} else {
		delete self;
	}
}

void Scintilla__RangeToFormat_Delete(Scintilla__RangeToFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::RangeToFormat*>( self );
	} else {
		delete self;
	}
}

void Scintilla__RangeToFormatFull_Delete(Scintilla__RangeToFormatFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::RangeToFormatFull*>( self );
	} else {
		delete self;
	}
}

void Scintilla__NotifyHeader_Delete(Scintilla__NotifyHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::NotifyHeader*>( self );
	} else {
		delete self;
	}
}

void Scintilla__NotificationData_Delete(Scintilla__NotificationData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::NotificationData*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new(const char* faceName_) {
	return new Scintilla::Internal::FontParameters(faceName_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new2(const char* faceName_, double size_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new3(const char* faceName_, double size_, int weight_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new4(const char* faceName_, double size_, int weight_, bool italic_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new5(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new6(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new7(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new8(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_), localeName_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new9(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_, int stretch_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_), localeName_, static_cast<Scintilla::FontStretch>(stretch_));
}

void Scintilla__Internal__FontParameters_Delete(Scintilla__Internal__FontParameters* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::FontParameters*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__Font* Scintilla__Internal__Font_new() {
	return new Scintilla::Internal::Font();
}

void Scintilla__Internal__Font_Delete(Scintilla__Internal__Font* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Font*>( self );
	} else {
		delete self;
	}
}

size_t Scintilla__Internal__IScreenLine_Length(const Scintilla__Internal__IScreenLine* self) {
	return self->Length();
}

size_t Scintilla__Internal__IScreenLine_RepresentationCount(const Scintilla__Internal__IScreenLine* self) {
	return self->RepresentationCount();
}

double Scintilla__Internal__IScreenLine_Width(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_Height(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Height();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabWidth(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->TabWidth();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabWidthMinimumPixels(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->TabWidthMinimumPixels();
	return static_cast<double>(_ret);
}

Scintilla__Internal__Font* Scintilla__Internal__IScreenLine_FontOfPosition(const Scintilla__Internal__IScreenLine* self, size_t position) {
	return (Scintilla__Internal__Font*) self->FontOfPosition(static_cast<size_t>(position));
}

double Scintilla__Internal__IScreenLine_RepresentationWidth(const Scintilla__Internal__IScreenLine* self, size_t position) {
	Scintilla::Internal::XYPOSITION _ret = self->RepresentationWidth(static_cast<size_t>(position));
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabPositionAfter(const Scintilla__Internal__IScreenLine* self, double xPosition) {
	Scintilla::Internal::XYPOSITION _ret = self->TabPositionAfter(static_cast<Scintilla::Internal::XYPOSITION>(xPosition));
	return static_cast<double>(_ret);
}

void Scintilla__Internal__IScreenLine_OperatorAssign(Scintilla__Internal__IScreenLine* self, Scintilla__Internal__IScreenLine* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IScreenLine_Delete(Scintilla__Internal__IScreenLine* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::IScreenLine*>( self );
	} else {
		delete self;
	}
}

size_t Scintilla__Internal__IScreenLineLayout_PositionFromX(Scintilla__Internal__IScreenLineLayout* self, double xDistance, bool charPosition) {
	return self->PositionFromX(static_cast<Scintilla::Internal::XYPOSITION>(xDistance), charPosition);
}

double Scintilla__Internal__IScreenLineLayout_XFromPosition(Scintilla__Internal__IScreenLineLayout* self, size_t caretPosition) {
	Scintilla::Internal::XYPOSITION _ret = self->XFromPosition(static_cast<size_t>(caretPosition));
	return static_cast<double>(_ret);
}

void Scintilla__Internal__IScreenLineLayout_OperatorAssign(Scintilla__Internal__IScreenLineLayout* self, Scintilla__Internal__IScreenLineLayout* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IScreenLineLayout_Delete(Scintilla__Internal__IScreenLineLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::IScreenLineLayout*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new() {
	return new Scintilla::Internal::SurfaceMode();
}

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new2(int codePage_, bool bidiR2L_) {
	return new Scintilla::Internal::SurfaceMode(static_cast<int>(codePage_), bidiR2L_);
}

void Scintilla__Internal__SurfaceMode_Delete(Scintilla__Internal__SurfaceMode* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::SurfaceMode*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualScintillaInternalSurface : public virtual Scintilla::Internal::Surface {
public:

	MiqtVirtualScintillaInternalSurface(): Scintilla::Internal::Surface() {};

	virtual ~MiqtVirtualScintillaInternalSurface() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Init = 0;

	// Subclass to allow providing a Go implementation
	virtual void Init(Scintilla::Internal::WindowID wid) override {
		if (handle__Init == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::WindowID wid_ret = wid;
		void* sigval1 = static_cast<void*>(wid_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Init(this, handle__Init, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Init2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void Init(Scintilla::Internal::SurfaceID sid, Scintilla::Internal::WindowID wid) override {
		if (handle__Init2 == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::SurfaceID sid_ret = sid;
		void* sigval1 = static_cast<void*>(sid_ret);
		Scintilla::Internal::WindowID wid_ret = wid;
		void* sigval2 = static_cast<void*>(wid_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Init2(this, handle__Init2, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetMode(Scintilla::Internal::SurfaceMode mode) override {
		if (handle__SetMode == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__SurfaceMode* sigval1 = new Scintilla::Internal::SurfaceMode(mode);

		miqt_exec_callback_Scintilla__Internal__Surface_SetMode(this, handle__SetMode, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Release = 0;

	// Subclass to allow providing a Go implementation
	virtual void Release() override {
		if (handle__Release == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_Release(this, handle__Release);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsFeature = 0;

	// Subclass to allow providing a Go implementation
	virtual int SupportsFeature(Scintilla::Supports feature) override {
		if (handle__SupportsFeature == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Supports feature_ret = feature;
		int sigval1 = static_cast<int>(feature_ret);

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_SupportsFeature(this, handle__SupportsFeature, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Initialised = 0;

	// Subclass to allow providing a Go implementation
	virtual bool Initialised() override {
		if (handle__Initialised == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Initialised(this, handle__Initialised);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LogPixelsY = 0;

	// Subclass to allow providing a Go implementation
	virtual int LogPixelsY() override {
		if (handle__LogPixelsY == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_LogPixelsY(this, handle__LogPixelsY);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PixelDivisions = 0;

	// Subclass to allow providing a Go implementation
	virtual int PixelDivisions() override {
		if (handle__PixelDivisions == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_PixelDivisions(this, handle__PixelDivisions);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DeviceHeightFont = 0;

	// Subclass to allow providing a Go implementation
	virtual int DeviceHeightFont(int points) override {
		if (handle__DeviceHeightFont == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = points;

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_DeviceHeightFont(this, handle__DeviceHeightFont, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LineDraw = 0;

	// Subclass to allow providing a Go implementation
	virtual void LineDraw(Scintilla::Internal::Point start, Scintilla::Internal::Point end, Scintilla::Internal::Stroke stroke) override {
		if (handle__LineDraw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = new Scintilla::Internal::Point(start);
		Scintilla__Internal__Point* sigval2 = new Scintilla::Internal::Point(end);
		Scintilla__Internal__Stroke* sigval3 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_LineDraw(this, handle__LineDraw, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolyLine = 0;

	// Subclass to allow providing a Go implementation
	virtual void PolyLine(const Scintilla::Internal::Point* pts, size_t npts, Scintilla::Internal::Stroke stroke) override {
		if (handle__PolyLine == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = (Scintilla__Internal__Point*) pts;
		size_t sigval2 = npts;
		Scintilla__Internal__Stroke* sigval3 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_PolyLine(this, handle__PolyLine, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Polygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void Polygon(const Scintilla::Internal::Point* pts, size_t npts, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__Polygon == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = (Scintilla__Internal__Point*) pts;
		size_t sigval2 = npts;
		Scintilla__Internal__FillStroke* sigval3 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_Polygon(this, handle__Polygon, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RectangleDraw = 0;

	// Subclass to allow providing a Go implementation
	virtual void RectangleDraw(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__RectangleDraw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RectangleDraw(this, handle__RectangleDraw, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RectangleFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void RectangleFrame(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Stroke stroke) override {
		if (handle__RectangleFrame == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Stroke* sigval2 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RectangleFrame(this, handle__RectangleFrame, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Fill fill) override {
		if (handle__FillRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Fill* sigval2 = new Scintilla::Internal::Fill(fill);

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle(this, handle__FillRectangle, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangleAligned = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangleAligned(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Fill fill) override {
		if (handle__FillRectangleAligned == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Fill* sigval2 = new Scintilla::Internal::Fill(fill);

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangleAligned(this, handle__FillRectangleAligned, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangle2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Surface& surfacePattern) override {
		if (handle__FillRectangle2 == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla::Internal::Surface& surfacePattern_ret = surfacePattern;
		// Cast returned reference into pointer
		Scintilla__Internal__Surface* sigval2 = &surfacePattern_ret;

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle2(this, handle__FillRectangle2, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoundedRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void RoundedRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__RoundedRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RoundedRectangle(this, handle__RoundedRectangle, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AlphaRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void AlphaRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::XYPOSITION cornerSize, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__AlphaRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla::Internal::XYPOSITION cornerSize_ret = cornerSize;
		double sigval2 = static_cast<double>(cornerSize_ret);
		Scintilla__Internal__FillStroke* sigval3 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_AlphaRectangle(this, handle__AlphaRectangle, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRGBAImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void DrawRGBAImage(Scintilla::Internal::PRectangle rc, int width, int height, const unsigned char* pixelsImage) override {
		if (handle__DrawRGBAImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		int sigval2 = width;
		int sigval3 = height;
		const unsigned char* sigval4 = (const unsigned char*) pixelsImage;

		miqt_exec_callback_Scintilla__Internal__Surface_DrawRGBAImage(this, handle__DrawRGBAImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Ellipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void Ellipse(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__Ellipse == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_Ellipse(this, handle__Ellipse, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Stadium = 0;

	// Subclass to allow providing a Go implementation
	virtual void Stadium(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke, Scintilla::Internal::Surface::Ends ends) override {
		if (handle__Stadium == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);
		Scintilla::Internal::Surface::Ends ends_ret = ends;
		int sigval3 = static_cast<int>(ends_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Stadium(this, handle__Stadium, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Copy = 0;

	// Subclass to allow providing a Go implementation
	virtual void Copy(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Point from, Scintilla::Internal::Surface& surfaceSource) override {
		if (handle__Copy == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Point* sigval2 = new Scintilla::Internal::Point(from);
		Scintilla::Internal::Surface& surfaceSource_ret = surfaceSource;
		// Cast returned reference into pointer
		Scintilla__Internal__Surface* sigval3 = &surfaceSource_ret;

		miqt_exec_callback_Scintilla__Internal__Surface_Copy(this, handle__Copy, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Ascent = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Ascent(const Scintilla::Internal::Font* font_) override {
		if (handle__Ascent == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Ascent(this, handle__Ascent, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Descent = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Descent(const Scintilla::Internal::Font* font_) override {
		if (handle__Descent == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Descent(this, handle__Descent, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InternalLeading = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION InternalLeading(const Scintilla::Internal::Font* font_) override {
		if (handle__InternalLeading == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_InternalLeading(this, handle__InternalLeading, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Height = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Height(const Scintilla::Internal::Font* font_) override {
		if (handle__Height == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Height(this, handle__Height, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AverageCharWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION AverageCharWidth(const Scintilla::Internal::Font* font_) override {
		if (handle__AverageCharWidth == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_AverageCharWidth(this, handle__AverageCharWidth, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetClip = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetClip(Scintilla::Internal::PRectangle rc) override {
		if (handle__SetClip == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);

		miqt_exec_callback_Scintilla__Internal__Surface_SetClip(this, handle__SetClip, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PopClip = 0;

	// Subclass to allow providing a Go implementation
	virtual void PopClip() override {
		if (handle__PopClip == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_PopClip(this, handle__PopClip);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FlushCachedState = 0;

	// Subclass to allow providing a Go implementation
	virtual void FlushCachedState() override {
		if (handle__FlushCachedState == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_FlushCachedState(this, handle__FlushCachedState);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FlushDrawing = 0;

	// Subclass to allow providing a Go implementation
	virtual void FlushDrawing() override {
		if (handle__FlushDrawing == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_FlushDrawing(this, handle__FlushDrawing);

		
	}

};

Scintilla__Internal__Surface* Scintilla__Internal__Surface_new() {
	return new MiqtVirtualScintillaInternalSurface();
}

void Scintilla__Internal__Surface_Init(Scintilla__Internal__Surface* self, void* wid) {
	self->Init(wid);
}

void Scintilla__Internal__Surface_Init2(Scintilla__Internal__Surface* self, void* sid, void* wid) {
	self->Init(sid, wid);
}

void Scintilla__Internal__Surface_SetMode(Scintilla__Internal__Surface* self, Scintilla__Internal__SurfaceMode* mode) {
	self->SetMode(*mode);
}

void Scintilla__Internal__Surface_Release(Scintilla__Internal__Surface* self) {
	self->Release();
}

int Scintilla__Internal__Surface_SupportsFeature(Scintilla__Internal__Surface* self, int feature) {
	return self->SupportsFeature(static_cast<Scintilla::Supports>(feature));
}

bool Scintilla__Internal__Surface_Initialised(Scintilla__Internal__Surface* self) {
	return self->Initialised();
}

int Scintilla__Internal__Surface_LogPixelsY(Scintilla__Internal__Surface* self) {
	return self->LogPixelsY();
}

int Scintilla__Internal__Surface_PixelDivisions(Scintilla__Internal__Surface* self) {
	return self->PixelDivisions();
}

int Scintilla__Internal__Surface_DeviceHeightFont(Scintilla__Internal__Surface* self, int points) {
	return self->DeviceHeightFont(static_cast<int>(points));
}

void Scintilla__Internal__Surface_LineDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* start, Scintilla__Internal__Point* end, Scintilla__Internal__Stroke* stroke) {
	self->LineDraw(*start, *end, *stroke);
}

void Scintilla__Internal__Surface_PolyLine(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__Stroke* stroke) {
	self->PolyLine(pts, static_cast<size_t>(npts), *stroke);
}

void Scintilla__Internal__Surface_Polygon(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__FillStroke* fillStroke) {
	self->Polygon(pts, static_cast<size_t>(npts), *fillStroke);
}

void Scintilla__Internal__Surface_RectangleDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->RectangleDraw(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_RectangleFrame(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Stroke* stroke) {
	self->RectangleFrame(*rc, *stroke);
}

void Scintilla__Internal__Surface_FillRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill) {
	self->FillRectangle(*rc, *fill);
}

void Scintilla__Internal__Surface_FillRectangleAligned(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill) {
	self->FillRectangleAligned(*rc, *fill);
}

void Scintilla__Internal__Surface_FillRectangle2(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Surface* surfacePattern) {
	self->FillRectangle(*rc, *surfacePattern);
}

void Scintilla__Internal__Surface_RoundedRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->RoundedRectangle(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_AlphaRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, double cornerSize, Scintilla__Internal__FillStroke* fillStroke) {
	self->AlphaRectangle(*rc, static_cast<Scintilla::Internal::XYPOSITION>(cornerSize), *fillStroke);
}

void Scintilla__Internal__Surface_DrawRGBAImage(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, int width, int height, const unsigned char* pixelsImage) {
	self->DrawRGBAImage(*rc, static_cast<int>(width), static_cast<int>(height), static_cast<const unsigned char*>(pixelsImage));
}

void Scintilla__Internal__Surface_Ellipse(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->Ellipse(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_Stadium(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke, int ends) {
	self->Stadium(*rc, *fillStroke, static_cast<Scintilla::Internal::Surface::Ends>(ends));
}

void Scintilla__Internal__Surface_Copy(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Point* from, Scintilla__Internal__Surface* surfaceSource) {
	self->Copy(*rc, *from, *surfaceSource);
}

double Scintilla__Internal__Surface_Ascent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Ascent(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_Descent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Descent(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_InternalLeading(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->InternalLeading(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_Height(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Height(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_AverageCharWidth(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->AverageCharWidth(font_);
	return static_cast<double>(_ret);
}

void Scintilla__Internal__Surface_SetClip(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc) {
	self->SetClip(*rc);
}

void Scintilla__Internal__Surface_PopClip(Scintilla__Internal__Surface* self) {
	self->PopClip();
}

void Scintilla__Internal__Surface_FlushCachedState(Scintilla__Internal__Surface* self) {
	self->FlushCachedState();
}

void Scintilla__Internal__Surface_FlushDrawing(Scintilla__Internal__Surface* self) {
	self->FlushDrawing();
}

void Scintilla__Internal__Surface_override_virtual_Init(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Init = slot;
}

void Scintilla__Internal__Surface_override_virtual_Init2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Init2 = slot;
}

void Scintilla__Internal__Surface_override_virtual_SetMode(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__SetMode = slot;
}

void Scintilla__Internal__Surface_override_virtual_Release(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Release = slot;
}

void Scintilla__Internal__Surface_override_virtual_SupportsFeature(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__SupportsFeature = slot;
}

void Scintilla__Internal__Surface_override_virtual_Initialised(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Initialised = slot;
}

void Scintilla__Internal__Surface_override_virtual_LogPixelsY(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__LogPixelsY = slot;
}

void Scintilla__Internal__Surface_override_virtual_PixelDivisions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__PixelDivisions = slot;
}

void Scintilla__Internal__Surface_override_virtual_DeviceHeightFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__DeviceHeightFont = slot;
}

void Scintilla__Internal__Surface_override_virtual_LineDraw(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__LineDraw = slot;
}

void Scintilla__Internal__Surface_override_virtual_PolyLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__PolyLine = slot;
}

void Scintilla__Internal__Surface_override_virtual_Polygon(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Polygon = slot;
}

void Scintilla__Internal__Surface_override_virtual_RectangleDraw(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__RectangleDraw = slot;
}

void Scintilla__Internal__Surface_override_virtual_RectangleFrame(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__RectangleFrame = slot;
}

void Scintilla__Internal__Surface_override_virtual_FillRectangle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__FillRectangle = slot;
}

void Scintilla__Internal__Surface_override_virtual_FillRectangleAligned(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__FillRectangleAligned = slot;
}

void Scintilla__Internal__Surface_override_virtual_FillRectangle2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__FillRectangle2 = slot;
}

void Scintilla__Internal__Surface_override_virtual_RoundedRectangle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__RoundedRectangle = slot;
}

void Scintilla__Internal__Surface_override_virtual_AlphaRectangle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__AlphaRectangle = slot;
}

void Scintilla__Internal__Surface_override_virtual_DrawRGBAImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__DrawRGBAImage = slot;
}

void Scintilla__Internal__Surface_override_virtual_Ellipse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Ellipse = slot;
}

void Scintilla__Internal__Surface_override_virtual_Stadium(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Stadium = slot;
}

void Scintilla__Internal__Surface_override_virtual_Copy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Copy = slot;
}

void Scintilla__Internal__Surface_override_virtual_Ascent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Ascent = slot;
}

void Scintilla__Internal__Surface_override_virtual_Descent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Descent = slot;
}

void Scintilla__Internal__Surface_override_virtual_InternalLeading(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__InternalLeading = slot;
}

void Scintilla__Internal__Surface_override_virtual_Height(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__Height = slot;
}

void Scintilla__Internal__Surface_override_virtual_AverageCharWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__AverageCharWidth = slot;
}

void Scintilla__Internal__Surface_override_virtual_SetClip(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__SetClip = slot;
}

void Scintilla__Internal__Surface_override_virtual_PopClip(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__PopClip = slot;
}

void Scintilla__Internal__Surface_override_virtual_FlushCachedState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__FlushCachedState = slot;
}

void Scintilla__Internal__Surface_override_virtual_FlushDrawing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) )->handle__FlushDrawing = slot;
}

void Scintilla__Internal__Surface_Delete(Scintilla__Internal__Surface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualScintillaInternalSurface*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__Window* Scintilla__Internal__Window_new() {
	return new Scintilla::Internal::Window();
}

void Scintilla__Internal__Window_OperatorAssign(Scintilla__Internal__Window* self, void* wid_) {
	self->operator=(wid_);
}

void* Scintilla__Internal__Window_GetID(const Scintilla__Internal__Window* self) {
	Scintilla::Internal::WindowID _ret = self->GetID();
	return static_cast<void*>(_ret);
}

bool Scintilla__Internal__Window_Created(const Scintilla__Internal__Window* self) {
	return self->Created();
}

void Scintilla__Internal__Window_Destroy(Scintilla__Internal__Window* self) {
	self->Destroy();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetPosition(const Scintilla__Internal__Window* self) {
	return new Scintilla::Internal::PRectangle(self->GetPosition());
}

void Scintilla__Internal__Window_SetPosition(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc) {
	self->SetPosition(*rc);
}

void Scintilla__Internal__Window_SetPositionRelative(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Window* relativeTo) {
	self->SetPositionRelative(*rc, relativeTo);
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetClientPosition(const Scintilla__Internal__Window* self) {
	return new Scintilla::Internal::PRectangle(self->GetClientPosition());
}

void Scintilla__Internal__Window_Show(Scintilla__Internal__Window* self) {
	self->Show();
}

void Scintilla__Internal__Window_InvalidateAll(Scintilla__Internal__Window* self) {
	self->InvalidateAll();
}

void Scintilla__Internal__Window_InvalidateRectangle(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc) {
	self->InvalidateRectangle(*rc);
}

void Scintilla__Internal__Window_SetCursor(Scintilla__Internal__Window* self, int curs) {
	self->SetCursor(static_cast<Scintilla::Internal::Window::Cursor>(curs));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetMonitorRect(Scintilla__Internal__Window* self, Scintilla__Internal__Point* pt) {
	return new Scintilla::Internal::PRectangle(self->GetMonitorRect(*pt));
}

void Scintilla__Internal__Window_Show1(Scintilla__Internal__Window* self, bool show) {
	self->Show(show);
}

void Scintilla__Internal__Window_Delete(Scintilla__Internal__Window* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Window*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__ListBoxEvent* Scintilla__Internal__ListBoxEvent_new(int event_) {
	return new Scintilla::Internal::ListBoxEvent(static_cast<Scintilla::Internal::ListBoxEvent::EventType>(event_));
}

void Scintilla__Internal__ListBoxEvent_Delete(Scintilla__Internal__ListBoxEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::ListBoxEvent*>( self );
	} else {
		delete self;
	}
}

void Scintilla__Internal__IListBoxDelegate_ListNotify(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__ListBoxEvent* plbe) {
	self->ListNotify(plbe);
}

void Scintilla__Internal__IListBoxDelegate_OperatorAssign(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__IListBoxDelegate* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IListBoxDelegate_Delete(Scintilla__Internal__IListBoxDelegate* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::IListBoxDelegate*>( self );
	} else {
		delete self;
	}
}

void Scintilla__Internal__ListOptions_Delete(Scintilla__Internal__ListOptions* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::ListOptions*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualScintillaInternalListBox : public virtual Scintilla::Internal::ListBox {
public:

	MiqtVirtualScintillaInternalListBox(): Scintilla::Internal::ListBox() {};

	virtual ~MiqtVirtualScintillaInternalListBox() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetFont(const Scintilla::Internal::Font* font) override {
		if (handle__SetFont == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetFont(this, handle__SetFont, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual void Create(Scintilla::Internal::Window& parent, int ctrlID, Scintilla::Internal::Point location, int lineHeight_, bool unicodeMode_, Scintilla::Technology technology_) override {
		if (handle__Create == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::Window& parent_ret = parent;
		// Cast returned reference into pointer
		Scintilla__Internal__Window* sigval1 = &parent_ret;
		int sigval2 = ctrlID;
		Scintilla__Internal__Point* sigval3 = new Scintilla::Internal::Point(location);
		int sigval4 = lineHeight_;
		bool sigval5 = unicodeMode_;
		Scintilla::Technology technology__ret = technology_;
		int sigval6 = static_cast<int>(technology__ret);

		miqt_exec_callback_Scintilla__Internal__ListBox_Create(this, handle__Create, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAverageCharWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetAverageCharWidth(int width) override {
		if (handle__SetAverageCharWidth == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = width;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetAverageCharWidth(this, handle__SetAverageCharWidth, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisibleRows = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetVisibleRows(int rows) override {
		if (handle__SetVisibleRows == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = rows;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetVisibleRows(this, handle__SetVisibleRows, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetVisibleRows = 0;

	// Subclass to allow providing a Go implementation
	virtual int GetVisibleRows() const override {
		if (handle__GetVisibleRows == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetVisibleRows(const_cast<MiqtVirtualScintillaInternalListBox*>(this), handle__GetVisibleRows);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetDesiredRect = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::PRectangle GetDesiredRect() override {
		if (handle__GetDesiredRect == 0) {
			return Scintilla::Internal::PRectangle(); // Pure virtual, there is no base we can call
		}
		

		Scintilla__Internal__PRectangle* callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetDesiredRect(this, handle__GetDesiredRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaretFromEdge = 0;

	// Subclass to allow providing a Go implementation
	virtual int CaretFromEdge() override {
		if (handle__CaretFromEdge == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_CaretFromEdge(this, handle__CaretFromEdge);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void Clear() override {
		if (handle__Clear == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__ListBox_Clear(this, handle__Clear);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Append = 0;

	// Subclass to allow providing a Go implementation
	virtual void Append(char* s, int typeVal) override {
		if (handle__Append == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		char* sigval1 = s;
		int sigval2 = typeVal;

		miqt_exec_callback_Scintilla__Internal__ListBox_Append(this, handle__Append, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Length = 0;

	// Subclass to allow providing a Go implementation
	virtual int Length() override {
		if (handle__Length == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_Length(this, handle__Length);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Select = 0;

	// Subclass to allow providing a Go implementation
	virtual void Select(int n) override {
		if (handle__Select == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = n;

		miqt_exec_callback_Scintilla__Internal__ListBox_Select(this, handle__Select, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual int GetSelection() override {
		if (handle__GetSelection == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetSelection(this, handle__GetSelection);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Find = 0;

	// Subclass to allow providing a Go implementation
	virtual int Find(const char* prefix) override {
		if (handle__Find == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) prefix;

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_Find(this, handle__Find, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void RegisterImage(int typeVal, const char* xpm_data) override {
		if (handle__RegisterImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = typeVal;
		const char* sigval2 = (const char*) xpm_data;

		miqt_exec_callback_Scintilla__Internal__ListBox_RegisterImage(this, handle__RegisterImage, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterRGBAImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void RegisterRGBAImage(int typeVal, int width, int height, const unsigned char* pixelsImage) override {
		if (handle__RegisterRGBAImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = typeVal;
		int sigval2 = width;
		int sigval3 = height;
		const unsigned char* sigval4 = (const unsigned char*) pixelsImage;

		miqt_exec_callback_Scintilla__Internal__ListBox_RegisterRGBAImage(this, handle__RegisterRGBAImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearRegisteredImages = 0;

	// Subclass to allow providing a Go implementation
	virtual void ClearRegisteredImages() override {
		if (handle__ClearRegisteredImages == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__ListBox_ClearRegisteredImages(this, handle__ClearRegisteredImages);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetDelegate = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetDelegate(Scintilla::Internal::IListBoxDelegate* lbDelegate) override {
		if (handle__SetDelegate == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__IListBoxDelegate* sigval1 = lbDelegate;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetDelegate(this, handle__SetDelegate, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetList = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetList(const char* list, char separator, char typesep) override {
		if (handle__SetList == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) list;
		char sigval2 = separator;
		char sigval3 = typesep;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetList(this, handle__SetList, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetOptions(Scintilla::Internal::ListOptions options_) override {
		if (handle__SetOptions == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__ListOptions* sigval1 = new Scintilla::Internal::ListOptions(options_);

		miqt_exec_callback_Scintilla__Internal__ListBox_SetOptions(this, handle__SetOptions, sigval1);

		
	}

};

Scintilla__Internal__ListBox* Scintilla__Internal__ListBox_new() {
	return new MiqtVirtualScintillaInternalListBox();
}

void Scintilla__Internal__ListBox_virtbase(Scintilla__Internal__ListBox* src, Scintilla::Internal::Window** outptr_Scintilla__Internal__Window) {
	*outptr_Scintilla__Internal__Window = static_cast<Scintilla::Internal::Window*>(src);
}

void Scintilla__Internal__ListBox_SetFont(Scintilla__Internal__ListBox* self, Scintilla__Internal__Font* font) {
	self->SetFont(font);
}

void Scintilla__Internal__ListBox_Create(Scintilla__Internal__ListBox* self, Scintilla__Internal__Window* parent, int ctrlID, Scintilla__Internal__Point* location, int lineHeight_, bool unicodeMode_, int technology_) {
	self->Create(*parent, static_cast<int>(ctrlID), *location, static_cast<int>(lineHeight_), unicodeMode_, static_cast<Scintilla::Technology>(technology_));
}

void Scintilla__Internal__ListBox_SetAverageCharWidth(Scintilla__Internal__ListBox* self, int width) {
	self->SetAverageCharWidth(static_cast<int>(width));
}

void Scintilla__Internal__ListBox_SetVisibleRows(Scintilla__Internal__ListBox* self, int rows) {
	self->SetVisibleRows(static_cast<int>(rows));
}

int Scintilla__Internal__ListBox_GetVisibleRows(const Scintilla__Internal__ListBox* self) {
	return self->GetVisibleRows();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__ListBox_GetDesiredRect(Scintilla__Internal__ListBox* self) {
	return new Scintilla::Internal::PRectangle(self->GetDesiredRect());
}

int Scintilla__Internal__ListBox_CaretFromEdge(Scintilla__Internal__ListBox* self) {
	return self->CaretFromEdge();
}

void Scintilla__Internal__ListBox_Clear(Scintilla__Internal__ListBox* self) {
	self->Clear();
}

void Scintilla__Internal__ListBox_Append(Scintilla__Internal__ListBox* self, char* s, int typeVal) {
	self->Append(s, static_cast<int>(typeVal));
}

int Scintilla__Internal__ListBox_Length(Scintilla__Internal__ListBox* self) {
	return self->Length();
}

void Scintilla__Internal__ListBox_Select(Scintilla__Internal__ListBox* self, int n) {
	self->Select(static_cast<int>(n));
}

int Scintilla__Internal__ListBox_GetSelection(Scintilla__Internal__ListBox* self) {
	return self->GetSelection();
}

int Scintilla__Internal__ListBox_Find(Scintilla__Internal__ListBox* self, const char* prefix) {
	return self->Find(prefix);
}

void Scintilla__Internal__ListBox_RegisterImage(Scintilla__Internal__ListBox* self, int typeVal, const char* xpm_data) {
	self->RegisterImage(static_cast<int>(typeVal), xpm_data);
}

void Scintilla__Internal__ListBox_RegisterRGBAImage(Scintilla__Internal__ListBox* self, int typeVal, int width, int height, const unsigned char* pixelsImage) {
	self->RegisterRGBAImage(static_cast<int>(typeVal), static_cast<int>(width), static_cast<int>(height), static_cast<const unsigned char*>(pixelsImage));
}

void Scintilla__Internal__ListBox_ClearRegisteredImages(Scintilla__Internal__ListBox* self) {
	self->ClearRegisteredImages();
}

void Scintilla__Internal__ListBox_SetDelegate(Scintilla__Internal__ListBox* self, Scintilla__Internal__IListBoxDelegate* lbDelegate) {
	self->SetDelegate(lbDelegate);
}

void Scintilla__Internal__ListBox_SetList(Scintilla__Internal__ListBox* self, const char* list, char separator, char typesep) {
	self->SetList(list, static_cast<char>(separator), static_cast<char>(typesep));
}

void Scintilla__Internal__ListBox_SetOptions(Scintilla__Internal__ListBox* self, Scintilla__Internal__ListOptions* options_) {
	self->SetOptions(*options_);
}

void Scintilla__Internal__ListBox_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetFont = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Create(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Create = slot;
}

void Scintilla__Internal__ListBox_override_virtual_SetAverageCharWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetAverageCharWidth = slot;
}

void Scintilla__Internal__ListBox_override_virtual_SetVisibleRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetVisibleRows = slot;
}

void Scintilla__Internal__ListBox_override_virtual_GetVisibleRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__GetVisibleRows = slot;
}

void Scintilla__Internal__ListBox_override_virtual_GetDesiredRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__GetDesiredRect = slot;
}

void Scintilla__Internal__ListBox_override_virtual_CaretFromEdge(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__CaretFromEdge = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Clear = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Append(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Append = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Length(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Length = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Select(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Select = slot;
}

void Scintilla__Internal__ListBox_override_virtual_GetSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__GetSelection = slot;
}

void Scintilla__Internal__ListBox_override_virtual_Find(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__Find = slot;
}

void Scintilla__Internal__ListBox_override_virtual_RegisterImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__RegisterImage = slot;
}

void Scintilla__Internal__ListBox_override_virtual_RegisterRGBAImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__RegisterRGBAImage = slot;
}

void Scintilla__Internal__ListBox_override_virtual_ClearRegisteredImages(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__ClearRegisteredImages = slot;
}

void Scintilla__Internal__ListBox_override_virtual_SetDelegate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetDelegate = slot;
}

void Scintilla__Internal__ListBox_override_virtual_SetList(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetList = slot;
}

void Scintilla__Internal__ListBox_override_virtual_SetOptions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) )->handle__SetOptions = slot;
}

void Scintilla__Internal__ListBox_Delete(Scintilla__Internal__ListBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualScintillaInternalListBox*>( self );
	} else {
		delete self;
	}
}

Scintilla__Internal__Menu* Scintilla__Internal__Menu_new() {
	return new Scintilla::Internal::Menu();
}

void* Scintilla__Internal__Menu_GetID(const Scintilla__Internal__Menu* self) {
	Scintilla::Internal::MenuID _ret = self->GetID();
	return static_cast<void*>(_ret);
}

void Scintilla__Internal__Menu_CreatePopUp(Scintilla__Internal__Menu* self) {
	self->CreatePopUp();
}

void Scintilla__Internal__Menu_Destroy(Scintilla__Internal__Menu* self) {
	self->Destroy();
}

void Scintilla__Internal__Menu_Show(Scintilla__Internal__Menu* self, Scintilla__Internal__Point* pt, Scintilla__Internal__Window* w) {
	self->Show(*pt, *w);
}

void Scintilla__Internal__Menu_Delete(Scintilla__Internal__Menu* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Scintilla::Internal::Menu*>( self );
	} else {
		delete self;
	}
}

void Sci_CharacterRange_Delete(Sci_CharacterRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_CharacterRange*>( self );
	} else {
		delete self;
	}
}

void Sci_CharacterRangeFull_Delete(Sci_CharacterRangeFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_CharacterRangeFull*>( self );
	} else {
		delete self;
	}
}

void Sci_TextRange_Delete(Sci_TextRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_TextRange*>( self );
	} else {
		delete self;
	}
}

void Sci_TextRangeFull_Delete(Sci_TextRangeFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_TextRangeFull*>( self );
	} else {
		delete self;
	}
}

void Sci_TextToFind_Delete(Sci_TextToFind* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_TextToFind*>( self );
	} else {
		delete self;
	}
}

void Sci_TextToFindFull_Delete(Sci_TextToFindFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_TextToFindFull*>( self );
	} else {
		delete self;
	}
}

void Sci_Rectangle_Delete(Sci_Rectangle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_Rectangle*>( self );
	} else {
		delete self;
	}
}

void Sci_RangeToFormat_Delete(Sci_RangeToFormat* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_RangeToFormat*>( self );
	} else {
		delete self;
	}
}

void Sci_RangeToFormatFull_Delete(Sci_RangeToFormatFull* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_RangeToFormatFull*>( self );
	} else {
		delete self;
	}
}

void Sci_NotifyHeader_Delete(Sci_NotifyHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<Sci_NotifyHeader*>( self );
	} else {
		delete self;
	}
}

void SCNotification_Delete(SCNotification* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<SCNotification*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualScintillaEditBase : public virtual ScintillaEditBase {
public:

	MiqtVirtualScintillaEditBase(QWidget* parent): ScintillaEditBase(parent) {};
	MiqtVirtualScintillaEditBase(): ScintillaEditBase() {};

	virtual ~MiqtVirtualScintillaEditBase() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Send = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t send(unsigned int iMessage, uptr_t wParam, sptr_t lParam) const override {
		if (handle__Send == 0) {
			return ScintillaEditBase::send(iMessage, wParam, lParam);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEditBase_Send(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__Send, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_Send(unsigned int iMessage, uintptr_t wParam, intptr_t lParam) const {

		sptr_t _ret = ScintillaEditBase::send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sends = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t sends(unsigned int iMessage, uptr_t wParam, const char* s) const override {
		if (handle__Sends == 0) {
			return ScintillaEditBase::sends(iMessage, wParam, s);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		const char* sigval3 = (const char*) s;

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEditBase_Sends(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__Sends, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_Sends(unsigned int iMessage, uintptr_t wParam, const char* s) const {

		sptr_t _ret = ScintillaEditBase::sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return ScintillaEditBase::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return ScintillaEditBase::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			ScintillaEditBase::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		ScintillaEditBase::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			ScintillaEditBase::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		ScintillaEditBase::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			ScintillaEditBase::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		ScintillaEditBase::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			ScintillaEditBase::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		ScintillaEditBase::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			ScintillaEditBase::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		ScintillaEditBase::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			ScintillaEditBase::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		ScintillaEditBase::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			ScintillaEditBase::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		ScintillaEditBase::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			ScintillaEditBase::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		ScintillaEditBase::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			ScintillaEditBase::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		ScintillaEditBase::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			ScintillaEditBase::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		ScintillaEditBase::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			ScintillaEditBase::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		ScintillaEditBase::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			ScintillaEditBase::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		ScintillaEditBase::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			ScintillaEditBase::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		ScintillaEditBase::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			ScintillaEditBase::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		ScintillaEditBase::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			ScintillaEditBase::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		ScintillaEditBase::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			ScintillaEditBase::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		ScintillaEditBase::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return ScintillaEditBase::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_ScintillaEditBase_InputMethodQuery(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(ScintillaEditBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int param1, int param2) override {
		if (handle__ScrollContentsBy == 0) {
			ScintillaEditBase::scrollContentsBy(param1, param2);
			return;
		}
		
		int sigval1 = param1;
		int sigval2 = param2;

		miqt_exec_callback_ScintillaEditBase_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int param1, int param2) {

		ScintillaEditBase::scrollContentsBy(static_cast<int>(param1), static_cast<int>(param2));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return ScintillaEditBase::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_MinimumSizeHint(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(ScintillaEditBase::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return ScintillaEditBase::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_SizeHint(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(ScintillaEditBase::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			ScintillaEditBase::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_ScintillaEditBase_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		ScintillaEditBase::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return ScintillaEditBase::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return ScintillaEditBase::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return ScintillaEditBase::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return ScintillaEditBase::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return ScintillaEditBase::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_ViewportSizeHint(const_cast<MiqtVirtualScintillaEditBase*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(ScintillaEditBase::viewportSizeHint());

	}

};

ScintillaEditBase* ScintillaEditBase_new(QWidget* parent) {
	return new MiqtVirtualScintillaEditBase(parent);
}

ScintillaEditBase* ScintillaEditBase_new2() {
	return new MiqtVirtualScintillaEditBase();
}

void ScintillaEditBase_virtbase(ScintillaEditBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* ScintillaEditBase_MetaObject(const ScintillaEditBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaEditBase_Metacast(ScintillaEditBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaEditBase_Tr(const char* s) {
	QString _ret = ScintillaEditBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_TrUtf8(const char* s) {
	QString _ret = ScintillaEditBase::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEditBase_Send(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {
	sptr_t _ret = self->send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEditBase_Sends(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, const char* s) {
	sptr_t _ret = self->sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEditBase_ScrollHorizontal(ScintillaEditBase* self, int value) {
	self->scrollHorizontal(static_cast<int>(value));
}

void ScintillaEditBase_ScrollVertical(ScintillaEditBase* self, int value) {
	self->scrollVertical(static_cast<int>(value));
}

void ScintillaEditBase_NotifyParent(ScintillaEditBase* self, Scintilla__NotificationData* scn) {
	self->notifyParent(*scn);
}

void ScintillaEditBase_EventCommand(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam) {
	self->event_command(static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_HorizontalScrolled(ScintillaEditBase* self, int value) {
	self->horizontalScrolled(static_cast<int>(value));
}

void ScintillaEditBase_connect_HorizontalScrolled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::horizontalScrolled), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_ScintillaEditBase_HorizontalScrolled(slot, sigval1);
	});
}

void ScintillaEditBase_VerticalScrolled(ScintillaEditBase* self, int value) {
	self->verticalScrolled(static_cast<int>(value));
}

void ScintillaEditBase_connect_VerticalScrolled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::verticalScrolled), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_ScintillaEditBase_VerticalScrolled(slot, sigval1);
	});
}

void ScintillaEditBase_HorizontalRangeChanged(ScintillaEditBase* self, int max, int page) {
	self->horizontalRangeChanged(static_cast<int>(max), static_cast<int>(page));
}

void ScintillaEditBase_connect_HorizontalRangeChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::horizontalRangeChanged), self, [=](int max, int page) {
		int sigval1 = max;
		int sigval2 = page;
		miqt_exec_callback_ScintillaEditBase_HorizontalRangeChanged(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_VerticalRangeChanged(ScintillaEditBase* self, int max, int page) {
	self->verticalRangeChanged(static_cast<int>(max), static_cast<int>(page));
}

void ScintillaEditBase_connect_VerticalRangeChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::verticalRangeChanged), self, [=](int max, int page) {
		int sigval1 = max;
		int sigval2 = page;
		miqt_exec_callback_ScintillaEditBase_VerticalRangeChanged(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_NotifyChange(ScintillaEditBase* self) {
	self->notifyChange();
}

void ScintillaEditBase_connect_NotifyChange(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::notifyChange), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_NotifyChange(slot);
	});
}

void ScintillaEditBase_LinesAdded(ScintillaEditBase* self, intptr_t linesAdded) {
	self->linesAdded(static_cast<Scintilla::Position>(linesAdded));
}

void ScintillaEditBase_connect_LinesAdded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position)>(&ScintillaEditBase::linesAdded), self, [=](Scintilla::Position linesAdded) {
		Scintilla::Position linesAdded_ret = linesAdded;
		intptr_t sigval1 = static_cast<intptr_t>(linesAdded_ret);
		miqt_exec_callback_ScintillaEditBase_LinesAdded(slot, sigval1);
	});
}

void ScintillaEditBase_AboutToCopy(ScintillaEditBase* self, QMimeData* data) {
	self->aboutToCopy(data);
}

void ScintillaEditBase_connect_AboutToCopy(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMimeData*)>(&ScintillaEditBase::aboutToCopy), self, [=](QMimeData* data) {
		QMimeData* sigval1 = data;
		miqt_exec_callback_ScintillaEditBase_AboutToCopy(slot, sigval1);
	});
}

void ScintillaEditBase_StyleNeeded(ScintillaEditBase* self, intptr_t position) {
	self->styleNeeded(static_cast<Scintilla::Position>(position));
}

void ScintillaEditBase_connect_StyleNeeded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position)>(&ScintillaEditBase::styleNeeded), self, [=](Scintilla::Position position) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		miqt_exec_callback_ScintillaEditBase_StyleNeeded(slot, sigval1);
	});
}

void ScintillaEditBase_CharAdded(ScintillaEditBase* self, int ch) {
	self->charAdded(static_cast<int>(ch));
}

void ScintillaEditBase_connect_CharAdded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::charAdded), self, [=](int ch) {
		int sigval1 = ch;
		miqt_exec_callback_ScintillaEditBase_CharAdded(slot, sigval1);
	});
}

void ScintillaEditBase_SavePointChanged(ScintillaEditBase* self, bool dirty) {
	self->savePointChanged(dirty);
}

void ScintillaEditBase_connect_SavePointChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(bool)>(&ScintillaEditBase::savePointChanged), self, [=](bool dirty) {
		bool sigval1 = dirty;
		miqt_exec_callback_ScintillaEditBase_SavePointChanged(slot, sigval1);
	});
}

void ScintillaEditBase_ModifyAttemptReadOnly(ScintillaEditBase* self) {
	self->modifyAttemptReadOnly();
}

void ScintillaEditBase_connect_ModifyAttemptReadOnly(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::modifyAttemptReadOnly), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_ModifyAttemptReadOnly(slot);
	});
}

void ScintillaEditBase_Key(ScintillaEditBase* self, int key) {
	self->key(static_cast<int>(key));
}

void ScintillaEditBase_connect_Key(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::key), self, [=](int key) {
		int sigval1 = key;
		miqt_exec_callback_ScintillaEditBase_Key(slot, sigval1);
	});
}

void ScintillaEditBase_DoubleClick(ScintillaEditBase* self, intptr_t position, intptr_t line) {
	self->doubleClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(line));
}

void ScintillaEditBase_connect_DoubleClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::Position)>(&ScintillaEditBase::doubleClick), self, [=](Scintilla::Position position, Scintilla::Position line) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::Position line_ret = line;
		intptr_t sigval2 = static_cast<intptr_t>(line_ret);
		miqt_exec_callback_ScintillaEditBase_DoubleClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_UpdateUi(ScintillaEditBase* self, int updated) {
	self->updateUi(static_cast<Scintilla::Update>(updated));
}

void ScintillaEditBase_connect_UpdateUi(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Update)>(&ScintillaEditBase::updateUi), self, [=](Scintilla::Update updated) {
		Scintilla::Update updated_ret = updated;
		int sigval1 = static_cast<int>(updated_ret);
		miqt_exec_callback_ScintillaEditBase_UpdateUi(slot, sigval1);
	});
}

void ScintillaEditBase_Modified(ScintillaEditBase* self, int typeVal, intptr_t position, intptr_t length, intptr_t linesAdded, struct miqt_string text, intptr_t line, int foldNow, int foldPrev) {
	QByteArray text_QByteArray(text.data, text.len);
	self->modified(static_cast<Scintilla::ModificationFlags>(typeVal), static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(length), static_cast<Scintilla::Position>(linesAdded), text_QByteArray, static_cast<Scintilla::Position>(line), static_cast<Scintilla::FoldLevel>(foldNow), static_cast<Scintilla::FoldLevel>(foldPrev));
}

void ScintillaEditBase_connect_Modified(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::ModificationFlags, Scintilla::Position, Scintilla::Position, Scintilla::Position, const QByteArray&, Scintilla::Position, Scintilla::FoldLevel, Scintilla::FoldLevel)>(&ScintillaEditBase::modified), self, [=](Scintilla::ModificationFlags typeVal, Scintilla::Position position, Scintilla::Position length, Scintilla::Position linesAdded, const QByteArray& text, Scintilla::Position line, Scintilla::FoldLevel foldNow, Scintilla::FoldLevel foldPrev) {
		Scintilla::ModificationFlags typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);
		Scintilla::Position position_ret = position;
		intptr_t sigval2 = static_cast<intptr_t>(position_ret);
		Scintilla::Position length_ret = length;
		intptr_t sigval3 = static_cast<intptr_t>(length_ret);
		Scintilla::Position linesAdded_ret = linesAdded;
		intptr_t sigval4 = static_cast<intptr_t>(linesAdded_ret);
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval5 = text_ms;
		Scintilla::Position line_ret = line;
		intptr_t sigval6 = static_cast<intptr_t>(line_ret);
		Scintilla::FoldLevel foldNow_ret = foldNow;
		int sigval7 = static_cast<int>(foldNow_ret);
		Scintilla::FoldLevel foldPrev_ret = foldPrev;
		int sigval8 = static_cast<int>(foldPrev_ret);
		miqt_exec_callback_ScintillaEditBase_Modified(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);
	});
}

void ScintillaEditBase_MacroRecord(ScintillaEditBase* self, int message, uintptr_t wParam, intptr_t lParam) {
	self->macroRecord(static_cast<Scintilla::Message>(message), static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_connect_MacroRecord(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Message, Scintilla::uptr_t, Scintilla::sptr_t)>(&ScintillaEditBase::macroRecord), self, [=](Scintilla::Message message, Scintilla::uptr_t wParam, Scintilla::sptr_t lParam) {
		Scintilla::Message message_ret = message;
		int sigval1 = static_cast<int>(message_ret);
		Scintilla::uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		Scintilla::sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);
		miqt_exec_callback_ScintillaEditBase_MacroRecord(slot, sigval1, sigval2, sigval3);
	});
}

void ScintillaEditBase_MarginClicked(ScintillaEditBase* self, intptr_t position, int modifiers, int margin) {
	self->marginClicked(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers), static_cast<int>(margin));
}

void ScintillaEditBase_connect_MarginClicked(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod, int)>(&ScintillaEditBase::marginClicked), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers, int margin) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		int sigval3 = margin;
		miqt_exec_callback_ScintillaEditBase_MarginClicked(slot, sigval1, sigval2, sigval3);
	});
}

void ScintillaEditBase_TextAreaClicked(ScintillaEditBase* self, intptr_t line, int modifiers) {
	self->textAreaClicked(static_cast<Scintilla::Position>(line), static_cast<int>(modifiers));
}

void ScintillaEditBase_connect_TextAreaClicked(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, int)>(&ScintillaEditBase::textAreaClicked), self, [=](Scintilla::Position line, int modifiers) {
		Scintilla::Position line_ret = line;
		intptr_t sigval1 = static_cast<intptr_t>(line_ret);
		int sigval2 = modifiers;
		miqt_exec_callback_ScintillaEditBase_TextAreaClicked(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_NeedShown(ScintillaEditBase* self, intptr_t position, intptr_t length) {
	self->needShown(static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(length));
}

void ScintillaEditBase_connect_NeedShown(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::Position)>(&ScintillaEditBase::needShown), self, [=](Scintilla::Position position, Scintilla::Position length) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::Position length_ret = length;
		intptr_t sigval2 = static_cast<intptr_t>(length_ret);
		miqt_exec_callback_ScintillaEditBase_NeedShown(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_Painted(ScintillaEditBase* self) {
	self->painted();
}

void ScintillaEditBase_connect_Painted(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::painted), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_Painted(slot);
	});
}

void ScintillaEditBase_UserListSelection(ScintillaEditBase* self) {
	self->userListSelection();
}

void ScintillaEditBase_connect_UserListSelection(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::userListSelection), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_UserListSelection(slot);
	});
}

void ScintillaEditBase_UriDropped(ScintillaEditBase* self, struct miqt_string uri) {
	QString uri_QString = QString::fromUtf8(uri.data, uri.len);
	self->uriDropped(uri_QString);
}

void ScintillaEditBase_connect_UriDropped(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(const QString&)>(&ScintillaEditBase::uriDropped), self, [=](const QString& uri) {
		const QString uri_ret = uri;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray uri_b = uri_ret.toUtf8();
		struct miqt_string uri_ms;
		uri_ms.len = uri_b.length();
		uri_ms.data = static_cast<char*>(malloc(uri_ms.len));
		memcpy(uri_ms.data, uri_b.data(), uri_ms.len);
		struct miqt_string sigval1 = uri_ms;
		miqt_exec_callback_ScintillaEditBase_UriDropped(slot, sigval1);
	});
}

void ScintillaEditBase_DwellStart(ScintillaEditBase* self, int x, int y) {
	self->dwellStart(static_cast<int>(x), static_cast<int>(y));
}

void ScintillaEditBase_connect_DwellStart(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::dwellStart), self, [=](int x, int y) {
		int sigval1 = x;
		int sigval2 = y;
		miqt_exec_callback_ScintillaEditBase_DwellStart(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_DwellEnd(ScintillaEditBase* self, int x, int y) {
	self->dwellEnd(static_cast<int>(x), static_cast<int>(y));
}

void ScintillaEditBase_connect_DwellEnd(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::dwellEnd), self, [=](int x, int y) {
		int sigval1 = x;
		int sigval2 = y;
		miqt_exec_callback_ScintillaEditBase_DwellEnd(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_Zoom(ScintillaEditBase* self, int zoom) {
	self->zoom(static_cast<int>(zoom));
}

void ScintillaEditBase_connect_Zoom(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::zoom), self, [=](int zoom) {
		int sigval1 = zoom;
		miqt_exec_callback_ScintillaEditBase_Zoom(slot, sigval1);
	});
}

void ScintillaEditBase_HotSpotClick(ScintillaEditBase* self, intptr_t position, int modifiers) {
	self->hotSpotClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers));
}

void ScintillaEditBase_connect_HotSpotClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod)>(&ScintillaEditBase::hotSpotClick), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		miqt_exec_callback_ScintillaEditBase_HotSpotClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_HotSpotDoubleClick(ScintillaEditBase* self, intptr_t position, int modifiers) {
	self->hotSpotDoubleClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers));
}

void ScintillaEditBase_connect_HotSpotDoubleClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod)>(&ScintillaEditBase::hotSpotDoubleClick), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		miqt_exec_callback_ScintillaEditBase_HotSpotDoubleClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_CallTipClick(ScintillaEditBase* self) {
	self->callTipClick();
}

void ScintillaEditBase_connect_CallTipClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::callTipClick), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_CallTipClick(slot);
	});
}

void ScintillaEditBase_AutoCompleteSelection(ScintillaEditBase* self, intptr_t position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->autoCompleteSelection(static_cast<Scintilla::Position>(position), text_QString);
}

void ScintillaEditBase_connect_AutoCompleteSelection(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, const QString&)>(&ScintillaEditBase::autoCompleteSelection), self, [=](Scintilla::Position position, const QString& text) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval2 = text_ms;
		miqt_exec_callback_ScintillaEditBase_AutoCompleteSelection(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_AutoCompleteCancelled(ScintillaEditBase* self) {
	self->autoCompleteCancelled();
}

void ScintillaEditBase_connect_AutoCompleteCancelled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::autoCompleteCancelled), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_AutoCompleteCancelled(slot);
	});
}

void ScintillaEditBase_FocusChanged(ScintillaEditBase* self, bool focused) {
	self->focusChanged(focused);
}

void ScintillaEditBase_connect_FocusChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(bool)>(&ScintillaEditBase::focusChanged), self, [=](bool focused) {
		bool sigval1 = focused;
		miqt_exec_callback_ScintillaEditBase_FocusChanged(slot, sigval1);
	});
}

void ScintillaEditBase_Notify(ScintillaEditBase* self, Scintilla__NotificationData* pscn) {
	self->notify(pscn);
}

void ScintillaEditBase_connect_Notify(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::NotificationData*)>(&ScintillaEditBase::notify), self, [=](Scintilla::NotificationData* pscn) {
		Scintilla__NotificationData* sigval1 = pscn;
		miqt_exec_callback_ScintillaEditBase_Notify(slot, sigval1);
	});
}

void ScintillaEditBase_Command(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam) {
	self->command(static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_connect_Command(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::uptr_t, Scintilla::sptr_t)>(&ScintillaEditBase::command), self, [=](Scintilla::uptr_t wParam, Scintilla::sptr_t lParam) {
		Scintilla::uptr_t wParam_ret = wParam;
		uintptr_t sigval1 = static_cast<uintptr_t>(wParam_ret);
		Scintilla::sptr_t lParam_ret = lParam;
		intptr_t sigval2 = static_cast<intptr_t>(lParam_ret);
		miqt_exec_callback_ScintillaEditBase_Command(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_ButtonPressed(ScintillaEditBase* self, QMouseEvent* event) {
	self->buttonPressed(event);
}

void ScintillaEditBase_connect_ButtonPressed(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMouseEvent*)>(&ScintillaEditBase::buttonPressed), self, [=](QMouseEvent* event) {
		QMouseEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_ButtonPressed(slot, sigval1);
	});
}

void ScintillaEditBase_ButtonReleased(ScintillaEditBase* self, QMouseEvent* event) {
	self->buttonReleased(event);
}

void ScintillaEditBase_connect_ButtonReleased(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMouseEvent*)>(&ScintillaEditBase::buttonReleased), self, [=](QMouseEvent* event) {
		QMouseEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_ButtonReleased(slot, sigval1);
	});
}

void ScintillaEditBase_KeyPressed(ScintillaEditBase* self, QKeyEvent* event) {
	self->keyPressed(event);
}

void ScintillaEditBase_connect_KeyPressed(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QKeyEvent*)>(&ScintillaEditBase::keyPressed), self, [=](QKeyEvent* event) {
		QKeyEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_KeyPressed(slot, sigval1);
	});
}

void ScintillaEditBase_Resized(ScintillaEditBase* self) {
	self->resized();
}

void ScintillaEditBase_connect_Resized(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::resized), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_Resized(slot);
	});
}

struct miqt_string ScintillaEditBase_Tr2(const char* s, const char* c) {
	QString _ret = ScintillaEditBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_Tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaEditBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_TrUtf82(const char* s, const char* c) {
	QString _ret = ScintillaEditBase::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaEditBase::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void ScintillaEditBase_override_virtual_Send(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__Send = slot;
}

intptr_t ScintillaEditBase_virtualbase_Send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_Send(iMessage, wParam, lParam);
}

void ScintillaEditBase_override_virtual_Sends(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__Sends = slot;
}

intptr_t ScintillaEditBase_virtualbase_Sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_Sends(iMessage, wParam, s);
}

void ScintillaEditBase_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__Event = slot;
}

bool ScintillaEditBase_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_Event(event);
}

void ScintillaEditBase_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__PaintEvent = slot;
}

void ScintillaEditBase_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_PaintEvent(event);
}

void ScintillaEditBase_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__WheelEvent = slot;
}

void ScintillaEditBase_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_WheelEvent(event);
}

void ScintillaEditBase_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__FocusInEvent = slot;
}

void ScintillaEditBase_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_FocusInEvent(event);
}

void ScintillaEditBase_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__FocusOutEvent = slot;
}

void ScintillaEditBase_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_FocusOutEvent(event);
}

void ScintillaEditBase_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__ResizeEvent = slot;
}

void ScintillaEditBase_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_ResizeEvent(event);
}

void ScintillaEditBase_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__KeyPressEvent = slot;
}

void ScintillaEditBase_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_KeyPressEvent(event);
}

void ScintillaEditBase_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__MousePressEvent = slot;
}

void ScintillaEditBase_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_MousePressEvent(event);
}

void ScintillaEditBase_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__MouseReleaseEvent = slot;
}

void ScintillaEditBase_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void ScintillaEditBase_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void ScintillaEditBase_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void ScintillaEditBase_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__MouseMoveEvent = slot;
}

void ScintillaEditBase_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_MouseMoveEvent(event);
}

void ScintillaEditBase_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__ContextMenuEvent = slot;
}

void ScintillaEditBase_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_ContextMenuEvent(event);
}

void ScintillaEditBase_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__DragEnterEvent = slot;
}

void ScintillaEditBase_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_DragEnterEvent(event);
}

void ScintillaEditBase_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__DragLeaveEvent = slot;
}

void ScintillaEditBase_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_DragLeaveEvent(event);
}

void ScintillaEditBase_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__DragMoveEvent = slot;
}

void ScintillaEditBase_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_DragMoveEvent(event);
}

void ScintillaEditBase_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__DropEvent = slot;
}

void ScintillaEditBase_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_DropEvent(event);
}

void ScintillaEditBase_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__InputMethodEvent = slot;
}

void ScintillaEditBase_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_InputMethodEvent(event);
}

void ScintillaEditBase_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* ScintillaEditBase_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_InputMethodQuery(query);
}

void ScintillaEditBase_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__ScrollContentsBy = slot;
}

void ScintillaEditBase_virtualbase_ScrollContentsBy(void* self, int param1, int param2) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_ScrollContentsBy(param1, param2);
}

void ScintillaEditBase_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* ScintillaEditBase_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_MinimumSizeHint();
}

void ScintillaEditBase_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__SizeHint = slot;
}

QSize* ScintillaEditBase_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_SizeHint();
}

void ScintillaEditBase_override_virtual_SetupViewport(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__SetupViewport = slot;
}

void ScintillaEditBase_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_SetupViewport(viewport);
}

void ScintillaEditBase_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__EventFilter = slot;
}

bool ScintillaEditBase_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_EventFilter(param1, param2);
}

void ScintillaEditBase_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__ViewportEvent = slot;
}

bool ScintillaEditBase_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualScintillaEditBase*)(self) )->virtualbase_ViewportEvent(param1);
}

void ScintillaEditBase_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* ScintillaEditBase_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualScintillaEditBase*)(self) )->virtualbase_ViewportSizeHint();
}

void ScintillaEditBase_Delete(ScintillaEditBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualScintillaEditBase*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualScintillaDocument : public virtual ScintillaDocument {
public:

	MiqtVirtualScintillaDocument(): ScintillaDocument() {};
	MiqtVirtualScintillaDocument(QObject* parent): ScintillaDocument(parent) {};
	MiqtVirtualScintillaDocument(QObject* parent, void* pdoc_): ScintillaDocument(parent, pdoc_) {};

	virtual ~MiqtVirtualScintillaDocument() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return ScintillaDocument::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaDocument_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return ScintillaDocument::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return ScintillaDocument::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaDocument_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return ScintillaDocument::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			ScintillaDocument::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		ScintillaDocument::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			ScintillaDocument::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		ScintillaDocument::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			ScintillaDocument::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		ScintillaDocument::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			ScintillaDocument::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaDocument_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		ScintillaDocument::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			ScintillaDocument::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaDocument_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		ScintillaDocument::disconnectNotify(*signal);

	}

};

ScintillaDocument* ScintillaDocument_new() {
	return new MiqtVirtualScintillaDocument();
}

ScintillaDocument* ScintillaDocument_new2(QObject* parent) {
	return new MiqtVirtualScintillaDocument(parent);
}

ScintillaDocument* ScintillaDocument_new3(QObject* parent, void* pdoc_) {
	return new MiqtVirtualScintillaDocument(parent, pdoc_);
}

void ScintillaDocument_virtbase(ScintillaDocument* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* ScintillaDocument_MetaObject(const ScintillaDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaDocument_Metacast(ScintillaDocument* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaDocument_Tr(const char* s) {
	QString _ret = ScintillaDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_TrUtf8(const char* s) {
	QString _ret = ScintillaDocument::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void* ScintillaDocument_Pointer(ScintillaDocument* self) {
	return self->pointer();
}

int ScintillaDocument_LineFromPosition(ScintillaDocument* self, int pos) {
	return self->line_from_position(static_cast<int>(pos));
}

bool ScintillaDocument_IsCrLf(ScintillaDocument* self, int pos) {
	return self->is_cr_lf(static_cast<int>(pos));
}

bool ScintillaDocument_DeleteChars(ScintillaDocument* self, int pos, int lenVal) {
	return self->delete_chars(static_cast<int>(pos), static_cast<int>(lenVal));
}

int ScintillaDocument_Undo(ScintillaDocument* self) {
	return self->undo();
}

int ScintillaDocument_Redo(ScintillaDocument* self) {
	return self->redo();
}

bool ScintillaDocument_CanUndo(ScintillaDocument* self) {
	return self->can_undo();
}

bool ScintillaDocument_CanRedo(ScintillaDocument* self) {
	return self->can_redo();
}

void ScintillaDocument_DeleteUndoHistory(ScintillaDocument* self) {
	self->delete_undo_history();
}

bool ScintillaDocument_SetUndoCollection(ScintillaDocument* self, bool collect_undo) {
	return self->set_undo_collection(collect_undo);
}

bool ScintillaDocument_IsCollectingUndo(ScintillaDocument* self) {
	return self->is_collecting_undo();
}

void ScintillaDocument_BeginUndoAction(ScintillaDocument* self) {
	self->begin_undo_action();
}

void ScintillaDocument_EndUndoAction(ScintillaDocument* self) {
	self->end_undo_action();
}

void ScintillaDocument_SetSavePoint(ScintillaDocument* self) {
	self->set_save_point();
}

bool ScintillaDocument_IsSavePoint(ScintillaDocument* self) {
	return self->is_save_point();
}

void ScintillaDocument_SetReadOnly(ScintillaDocument* self, bool read_only) {
	self->set_read_only(read_only);
}

bool ScintillaDocument_IsReadOnly(ScintillaDocument* self) {
	return self->is_read_only();
}

void ScintillaDocument_InsertString(ScintillaDocument* self, int position, struct miqt_string str) {
	QByteArray str_QByteArray(str.data, str.len);
	self->insert_string(static_cast<int>(position), str_QByteArray);
}

struct miqt_string ScintillaDocument_GetCharRange(ScintillaDocument* self, int position, int length) {
	QByteArray _qb = self->get_char_range(static_cast<int>(position), static_cast<int>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

char ScintillaDocument_StyleAt(ScintillaDocument* self, int position) {
	return self->style_at(static_cast<int>(position));
}

int ScintillaDocument_LineStart(ScintillaDocument* self, int lineno) {
	return self->line_start(static_cast<int>(lineno));
}

int ScintillaDocument_LineEnd(ScintillaDocument* self, int lineno) {
	return self->line_end(static_cast<int>(lineno));
}

int ScintillaDocument_LineEndPosition(ScintillaDocument* self, int pos) {
	return self->line_end_position(static_cast<int>(pos));
}

int ScintillaDocument_Length(ScintillaDocument* self) {
	return self->length();
}

int ScintillaDocument_LinesTotal(ScintillaDocument* self) {
	return self->lines_total();
}

void ScintillaDocument_StartStyling(ScintillaDocument* self, int position) {
	self->start_styling(static_cast<int>(position));
}

bool ScintillaDocument_SetStyleFor(ScintillaDocument* self, int length, char style) {
	return self->set_style_for(static_cast<int>(length), static_cast<char>(style));
}

int ScintillaDocument_GetEndStyled(ScintillaDocument* self) {
	return self->get_end_styled();
}

void ScintillaDocument_EnsureStyledTo(ScintillaDocument* self, int position) {
	self->ensure_styled_to(static_cast<int>(position));
}

void ScintillaDocument_SetCurrentIndicator(ScintillaDocument* self, int indic) {
	self->set_current_indicator(static_cast<int>(indic));
}

void ScintillaDocument_DecorationFillRange(ScintillaDocument* self, int position, int value, int fillLength) {
	self->decoration_fill_range(static_cast<int>(position), static_cast<int>(value), static_cast<int>(fillLength));
}

int ScintillaDocument_DecorationsValueAt(ScintillaDocument* self, int indic, int position) {
	return self->decorations_value_at(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_DecorationsStart(ScintillaDocument* self, int indic, int position) {
	return self->decorations_start(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_DecorationsEnd(ScintillaDocument* self, int indic, int position) {
	return self->decorations_end(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_GetCodePage(ScintillaDocument* self) {
	return self->get_code_page();
}

void ScintillaDocument_SetCodePage(ScintillaDocument* self, int code_page) {
	self->set_code_page(static_cast<int>(code_page));
}

int ScintillaDocument_GetEolMode(ScintillaDocument* self) {
	return self->get_eol_mode();
}

void ScintillaDocument_SetEolMode(ScintillaDocument* self, int eol_mode) {
	self->set_eol_mode(static_cast<int>(eol_mode));
}

int ScintillaDocument_MovePositionOutsideChar(ScintillaDocument* self, int pos, int move_dir, bool check_line_end) {
	return self->move_position_outside_char(static_cast<int>(pos), static_cast<int>(move_dir), check_line_end);
}

int ScintillaDocument_GetCharacter(ScintillaDocument* self, int pos) {
	return self->get_character(static_cast<int>(pos));
}

void ScintillaDocument_ModifyAttempt(ScintillaDocument* self) {
	self->modify_attempt();
}

void ScintillaDocument_connect_ModifyAttempt(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)()>(&ScintillaDocument::modify_attempt), self, [=]() {
		miqt_exec_callback_ScintillaDocument_ModifyAttempt(slot);
	});
}

void ScintillaDocument_SavePoint(ScintillaDocument* self, bool atSavePoint) {
	self->save_point(atSavePoint);
}

void ScintillaDocument_connect_SavePoint(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(bool)>(&ScintillaDocument::save_point), self, [=](bool atSavePoint) {
		bool sigval1 = atSavePoint;
		miqt_exec_callback_ScintillaDocument_SavePoint(slot, sigval1);
	});
}

void ScintillaDocument_Modified(ScintillaDocument* self, int position, int modification_type, struct miqt_string text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev) {
	QByteArray text_QByteArray(text.data, text.len);
	self->modified(static_cast<int>(position), static_cast<int>(modification_type), text_QByteArray, static_cast<int>(length), static_cast<int>(linesAdded), static_cast<int>(line), static_cast<int>(foldLevelNow), static_cast<int>(foldLevelPrev));
}

void ScintillaDocument_connect_Modified(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int, int, const QByteArray&, int, int, int, int, int)>(&ScintillaDocument::modified), self, [=](int position, int modification_type, const QByteArray& text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev) {
		int sigval1 = position;
		int sigval2 = modification_type;
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		int sigval4 = length;
		int sigval5 = linesAdded;
		int sigval6 = line;
		int sigval7 = foldLevelNow;
		int sigval8 = foldLevelPrev;
		miqt_exec_callback_ScintillaDocument_Modified(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);
	});
}

void ScintillaDocument_StyleNeeded(ScintillaDocument* self, int pos) {
	self->style_needed(static_cast<int>(pos));
}

void ScintillaDocument_connect_StyleNeeded(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int)>(&ScintillaDocument::style_needed), self, [=](int pos) {
		int sigval1 = pos;
		miqt_exec_callback_ScintillaDocument_StyleNeeded(slot, sigval1);
	});
}

void ScintillaDocument_ErrorOccurred(ScintillaDocument* self, int status) {
	self->error_occurred(static_cast<int>(status));
}

void ScintillaDocument_connect_ErrorOccurred(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int)>(&ScintillaDocument::error_occurred), self, [=](int status) {
		int sigval1 = status;
		miqt_exec_callback_ScintillaDocument_ErrorOccurred(slot, sigval1);
	});
}

struct miqt_string ScintillaDocument_Tr2(const char* s, const char* c) {
	QString _ret = ScintillaDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_Tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_TrUtf82(const char* s, const char* c) {
	QString _ret = ScintillaDocument::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaDocument::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void ScintillaDocument_BeginUndoAction1(ScintillaDocument* self, bool coalesceWithPrior) {
	self->begin_undo_action(coalesceWithPrior);
}

void ScintillaDocument_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__Event = slot;
}

bool ScintillaDocument_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_Event(event);
}

void ScintillaDocument_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__EventFilter = slot;
}

bool ScintillaDocument_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_EventFilter(watched, event);
}

void ScintillaDocument_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__TimerEvent = slot;
}

void ScintillaDocument_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_TimerEvent(event);
}

void ScintillaDocument_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__ChildEvent = slot;
}

void ScintillaDocument_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_ChildEvent(event);
}

void ScintillaDocument_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__CustomEvent = slot;
}

void ScintillaDocument_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_CustomEvent(event);
}

void ScintillaDocument_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__ConnectNotify = slot;
}

void ScintillaDocument_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_ConnectNotify(signal);
}

void ScintillaDocument_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) )->handle__DisconnectNotify = slot;
}

void ScintillaDocument_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualScintillaDocument*)(self) )->virtualbase_DisconnectNotify(signal);
}

void ScintillaDocument_Delete(ScintillaDocument* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualScintillaDocument*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualScintillaEdit : public virtual ScintillaEdit {
public:

	MiqtVirtualScintillaEdit(QWidget* parent): ScintillaEdit(parent) {};
	MiqtVirtualScintillaEdit(): ScintillaEdit() {};

	virtual ~MiqtVirtualScintillaEdit() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Send = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t send(unsigned int iMessage, uptr_t wParam, sptr_t lParam) const override {
		if (handle__Send == 0) {
			return ScintillaEdit::send(iMessage, wParam, lParam);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEdit_Send(const_cast<MiqtVirtualScintillaEdit*>(this), handle__Send, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_Send(unsigned int iMessage, uintptr_t wParam, intptr_t lParam) const {

		sptr_t _ret = ScintillaEdit::send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sends = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t sends(unsigned int iMessage, uptr_t wParam, const char* s) const override {
		if (handle__Sends == 0) {
			return ScintillaEdit::sends(iMessage, wParam, s);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		const char* sigval3 = (const char*) s;

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEdit_Sends(const_cast<MiqtVirtualScintillaEdit*>(this), handle__Sends, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_Sends(unsigned int iMessage, uintptr_t wParam, const char* s) const {

		sptr_t _ret = ScintillaEdit::sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return ScintillaEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return ScintillaEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			ScintillaEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		ScintillaEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			ScintillaEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		ScintillaEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			ScintillaEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		ScintillaEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			ScintillaEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		ScintillaEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			ScintillaEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		ScintillaEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			ScintillaEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		ScintillaEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			ScintillaEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		ScintillaEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			ScintillaEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		ScintillaEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			ScintillaEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		ScintillaEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			ScintillaEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		ScintillaEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			ScintillaEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		ScintillaEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			ScintillaEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		ScintillaEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			ScintillaEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		ScintillaEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			ScintillaEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		ScintillaEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			ScintillaEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		ScintillaEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			ScintillaEdit::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		ScintillaEdit::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return ScintillaEdit::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_ScintillaEdit_InputMethodQuery(const_cast<MiqtVirtualScintillaEdit*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(ScintillaEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int param1, int param2) override {
		if (handle__ScrollContentsBy == 0) {
			ScintillaEdit::scrollContentsBy(param1, param2);
			return;
		}
		
		int sigval1 = param1;
		int sigval2 = param2;

		miqt_exec_callback_ScintillaEdit_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int param1, int param2) {

		ScintillaEdit::scrollContentsBy(static_cast<int>(param1), static_cast<int>(param2));

	}

};

ScintillaEdit* ScintillaEdit_new(QWidget* parent) {
	return new MiqtVirtualScintillaEdit(parent);
}

ScintillaEdit* ScintillaEdit_new2() {
	return new MiqtVirtualScintillaEdit();
}

void ScintillaEdit_virtbase(ScintillaEdit* src, ScintillaEditBase** outptr_ScintillaEditBase) {
	*outptr_ScintillaEditBase = static_cast<ScintillaEditBase*>(src);
}

QMetaObject* ScintillaEdit_MetaObject(const ScintillaEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaEdit_Metacast(ScintillaEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaEdit_Tr(const char* s) {
	QString _ret = ScintillaEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TrUtf8(const char* s) {
	QString _ret = ScintillaEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TextReturner(const ScintillaEdit* self, int message, uintptr_t wParam) {
	QByteArray _qb = self->TextReturner(static_cast<int>(message), static_cast<uptr_t>(wParam));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_map /* tuple of int and int */  ScintillaEdit_FindText(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax) {
	QPair<int, int> _ret = self->find_text(static_cast<int>(flags), text, static_cast<int>(cpMin), static_cast<int>(cpMax));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_string ScintillaEdit_GetTextRange(ScintillaEdit* self, int start, int end) {
	QByteArray _qb = self->get_text_range(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ScintillaDocument* ScintillaEdit_GetDoc(ScintillaEdit* self) {
	return self->get_doc();
}

void ScintillaEdit_SetDoc(ScintillaEdit* self, ScintillaDocument* pdoc_) {
	self->set_doc(pdoc_);
}

struct miqt_map /* tuple of int and int */  ScintillaEdit_FindText2(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax) {
	QPair<int, int> _ret = self->findText(static_cast<int>(flags), text, static_cast<int>(cpMin), static_cast<int>(cpMax));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_string ScintillaEdit_TextRange(ScintillaEdit* self, int start, int end) {
	QByteArray _qb = self->textRange(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long ScintillaEdit_FormatRange(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end) {
	return self->format_range(draw, target, measure, *print_rect, *page_rect, static_cast<long>(range_start), static_cast<long>(range_end));
}

long ScintillaEdit_FormatRange2(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end) {
	return self->formatRange(draw, target, measure, *print_rect, *page_rect, static_cast<long>(range_start), static_cast<long>(range_end));
}

void ScintillaEdit_AddText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->addText(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_AddStyledText(ScintillaEdit* self, intptr_t length, const char* c) {
	self->addStyledText(static_cast<sptr_t>(length), c);
}

void ScintillaEdit_InsertText(ScintillaEdit* self, intptr_t pos, const char* text) {
	self->insertText(static_cast<sptr_t>(pos), text);
}

void ScintillaEdit_ChangeInsertion(ScintillaEdit* self, intptr_t length, const char* text) {
	self->changeInsertion(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_ClearAll(ScintillaEdit* self) {
	self->clearAll();
}

void ScintillaEdit_DeleteRange(ScintillaEdit* self, intptr_t start, intptr_t lengthDelete) {
	self->deleteRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthDelete));
}

void ScintillaEdit_ClearDocumentStyle(ScintillaEdit* self) {
	self->clearDocumentStyle();
}

intptr_t ScintillaEdit_Length(const ScintillaEdit* self) {
	sptr_t _ret = self->length();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CharAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->charAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CurrentPos(const ScintillaEdit* self) {
	sptr_t _ret = self->currentPos();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_Anchor(const ScintillaEdit* self) {
	sptr_t _ret = self->anchor();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_StyleAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->styleAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_StyleIndexAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->styleIndexAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_Redo(ScintillaEdit* self) {
	self->redo();
}

void ScintillaEdit_SetUndoCollection(ScintillaEdit* self, bool collectUndo) {
	self->setUndoCollection(collectUndo);
}

void ScintillaEdit_SelectAll(ScintillaEdit* self) {
	self->selectAll();
}

void ScintillaEdit_SetSavePoint(ScintillaEdit* self) {
	self->setSavePoint();
}

bool ScintillaEdit_CanRedo(ScintillaEdit* self) {
	return self->canRedo();
}

intptr_t ScintillaEdit_MarkerLineFromHandle(ScintillaEdit* self, intptr_t markerHandle) {
	sptr_t _ret = self->markerLineFromHandle(static_cast<sptr_t>(markerHandle));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarkerDeleteHandle(ScintillaEdit* self, intptr_t markerHandle) {
	self->markerDeleteHandle(static_cast<sptr_t>(markerHandle));
}

intptr_t ScintillaEdit_MarkerHandleFromLine(ScintillaEdit* self, intptr_t line, intptr_t which) {
	sptr_t _ret = self->markerHandleFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_MarkerNumberFromLine(ScintillaEdit* self, intptr_t line, intptr_t which) {
	sptr_t _ret = self->markerNumberFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_UndoCollection(const ScintillaEdit* self) {
	return self->undoCollection();
}

intptr_t ScintillaEdit_ViewWS(const ScintillaEdit* self) {
	sptr_t _ret = self->viewWS();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetViewWS(ScintillaEdit* self, intptr_t viewWS) {
	self->setViewWS(static_cast<sptr_t>(viewWS));
}

intptr_t ScintillaEdit_TabDrawMode(const ScintillaEdit* self) {
	sptr_t _ret = self->tabDrawMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTabDrawMode(ScintillaEdit* self, intptr_t tabDrawMode) {
	self->setTabDrawMode(static_cast<sptr_t>(tabDrawMode));
}

intptr_t ScintillaEdit_PositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->positionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->positionFromPointClose(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_GotoLine(ScintillaEdit* self, intptr_t line) {
	self->gotoLine(static_cast<sptr_t>(line));
}

void ScintillaEdit_GotoPos(ScintillaEdit* self, intptr_t caret) {
	self->gotoPos(static_cast<sptr_t>(caret));
}

void ScintillaEdit_SetAnchor(ScintillaEdit* self, intptr_t anchor) {
	self->setAnchor(static_cast<sptr_t>(anchor));
}

struct miqt_string ScintillaEdit_GetCurLine(ScintillaEdit* self, intptr_t length) {
	QByteArray _qb = self->getCurLine(static_cast<sptr_t>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_EndStyled(const ScintillaEdit* self) {
	sptr_t _ret = self->endStyled();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ConvertEOLs(ScintillaEdit* self, intptr_t eolMode) {
	self->convertEOLs(static_cast<sptr_t>(eolMode));
}

intptr_t ScintillaEdit_EOLMode(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEOLMode(ScintillaEdit* self, intptr_t eolMode) {
	self->setEOLMode(static_cast<sptr_t>(eolMode));
}

void ScintillaEdit_StartStyling(ScintillaEdit* self, intptr_t start, intptr_t unused) {
	self->startStyling(static_cast<sptr_t>(start), static_cast<sptr_t>(unused));
}

void ScintillaEdit_SetStyling(ScintillaEdit* self, intptr_t length, intptr_t style) {
	self->setStyling(static_cast<sptr_t>(length), static_cast<sptr_t>(style));
}

bool ScintillaEdit_BufferedDraw(const ScintillaEdit* self) {
	return self->bufferedDraw();
}

void ScintillaEdit_SetBufferedDraw(ScintillaEdit* self, bool buffered) {
	self->setBufferedDraw(buffered);
}

void ScintillaEdit_SetTabWidth(ScintillaEdit* self, intptr_t tabWidth) {
	self->setTabWidth(static_cast<sptr_t>(tabWidth));
}

intptr_t ScintillaEdit_TabWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->tabWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTabMinimumWidth(ScintillaEdit* self, intptr_t pixels) {
	self->setTabMinimumWidth(static_cast<sptr_t>(pixels));
}

intptr_t ScintillaEdit_TabMinimumWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->tabMinimumWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ClearTabStops(ScintillaEdit* self, intptr_t line) {
	self->clearTabStops(static_cast<sptr_t>(line));
}

void ScintillaEdit_AddTabStop(ScintillaEdit* self, intptr_t line, intptr_t x) {
	self->addTabStop(static_cast<sptr_t>(line), static_cast<sptr_t>(x));
}

intptr_t ScintillaEdit_GetNextTabStop(ScintillaEdit* self, intptr_t line, intptr_t x) {
	sptr_t _ret = self->getNextTabStop(static_cast<sptr_t>(line), static_cast<sptr_t>(x));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCodePage(ScintillaEdit* self, intptr_t codePage) {
	self->setCodePage(static_cast<sptr_t>(codePage));
}

void ScintillaEdit_SetFontLocale(ScintillaEdit* self, const char* localeName) {
	self->setFontLocale(localeName);
}

struct miqt_string ScintillaEdit_FontLocale(const ScintillaEdit* self) {
	QByteArray _qb = self->fontLocale();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_IMEInteraction(const ScintillaEdit* self) {
	sptr_t _ret = self->iMEInteraction();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetIMEInteraction(ScintillaEdit* self, intptr_t imeInteraction) {
	self->setIMEInteraction(static_cast<sptr_t>(imeInteraction));
}

void ScintillaEdit_MarkerDefine(ScintillaEdit* self, intptr_t markerNumber, intptr_t markerSymbol) {
	self->markerDefine(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(markerSymbol));
}

void ScintillaEdit_MarkerSetFore(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore) {
	self->markerSetFore(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(fore));
}

void ScintillaEdit_MarkerSetBack(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBack(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_MarkerSetBackSelected(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackSelected(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_MarkerSetForeTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore) {
	self->markerSetForeTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(fore));
}

void ScintillaEdit_MarkerSetBackTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_MarkerSetBackSelectedTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackSelectedTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_MarkerSetStrokeWidth(ScintillaEdit* self, intptr_t markerNumber, intptr_t hundredths) {
	self->markerSetStrokeWidth(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(hundredths));
}

void ScintillaEdit_MarkerEnableHighlight(ScintillaEdit* self, bool enabled) {
	self->markerEnableHighlight(enabled);
}

intptr_t ScintillaEdit_MarkerAdd(ScintillaEdit* self, intptr_t line, intptr_t markerNumber) {
	sptr_t _ret = self->markerAdd(static_cast<sptr_t>(line), static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarkerDelete(ScintillaEdit* self, intptr_t line, intptr_t markerNumber) {
	self->markerDelete(static_cast<sptr_t>(line), static_cast<sptr_t>(markerNumber));
}

void ScintillaEdit_MarkerDeleteAll(ScintillaEdit* self, intptr_t markerNumber) {
	self->markerDeleteAll(static_cast<sptr_t>(markerNumber));
}

intptr_t ScintillaEdit_MarkerGet(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->markerGet(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_MarkerNext(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask) {
	sptr_t _ret = self->markerNext(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(markerMask));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_MarkerPrevious(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask) {
	sptr_t _ret = self->markerPrevious(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(markerMask));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarkerDefinePixmap(ScintillaEdit* self, intptr_t markerNumber, const char* pixmap) {
	self->markerDefinePixmap(static_cast<sptr_t>(markerNumber), pixmap);
}

void ScintillaEdit_MarkerAddSet(ScintillaEdit* self, intptr_t line, intptr_t markerSet) {
	self->markerAddSet(static_cast<sptr_t>(line), static_cast<sptr_t>(markerSet));
}

void ScintillaEdit_MarkerSetAlpha(ScintillaEdit* self, intptr_t markerNumber, intptr_t alpha) {
	self->markerSetAlpha(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_MarkerLayer(const ScintillaEdit* self, intptr_t markerNumber) {
	sptr_t _ret = self->markerLayer(static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarkerSetLayer(ScintillaEdit* self, intptr_t markerNumber, intptr_t layer) {
	self->markerSetLayer(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(layer));
}

void ScintillaEdit_SetMarginTypeN(ScintillaEdit* self, intptr_t margin, intptr_t marginType) {
	self->setMarginTypeN(static_cast<sptr_t>(margin), static_cast<sptr_t>(marginType));
}

intptr_t ScintillaEdit_MarginTypeN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginTypeN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginWidthN(ScintillaEdit* self, intptr_t margin, intptr_t pixelWidth) {
	self->setMarginWidthN(static_cast<sptr_t>(margin), static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_MarginWidthN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginWidthN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginMaskN(ScintillaEdit* self, intptr_t margin, intptr_t mask) {
	self->setMarginMaskN(static_cast<sptr_t>(margin), static_cast<sptr_t>(mask));
}

intptr_t ScintillaEdit_MarginMaskN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginMaskN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginSensitiveN(ScintillaEdit* self, intptr_t margin, bool sensitive) {
	self->setMarginSensitiveN(static_cast<sptr_t>(margin), sensitive);
}

bool ScintillaEdit_MarginSensitiveN(const ScintillaEdit* self, intptr_t margin) {
	return self->marginSensitiveN(static_cast<sptr_t>(margin));
}

void ScintillaEdit_SetMarginCursorN(ScintillaEdit* self, intptr_t margin, intptr_t cursor) {
	self->setMarginCursorN(static_cast<sptr_t>(margin), static_cast<sptr_t>(cursor));
}

intptr_t ScintillaEdit_MarginCursorN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginCursorN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginBackN(ScintillaEdit* self, intptr_t margin, intptr_t back) {
	self->setMarginBackN(static_cast<sptr_t>(margin), static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_MarginBackN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginBackN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMargins(ScintillaEdit* self, intptr_t margins) {
	self->setMargins(static_cast<sptr_t>(margins));
}

intptr_t ScintillaEdit_Margins(const ScintillaEdit* self) {
	sptr_t _ret = self->margins();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_StyleClearAll(ScintillaEdit* self) {
	self->styleClearAll();
}

void ScintillaEdit_StyleSetFore(ScintillaEdit* self, intptr_t style, intptr_t fore) {
	self->styleSetFore(static_cast<sptr_t>(style), static_cast<sptr_t>(fore));
}

void ScintillaEdit_StyleSetBack(ScintillaEdit* self, intptr_t style, intptr_t back) {
	self->styleSetBack(static_cast<sptr_t>(style), static_cast<sptr_t>(back));
}

void ScintillaEdit_StyleSetBold(ScintillaEdit* self, intptr_t style, bool bold) {
	self->styleSetBold(static_cast<sptr_t>(style), bold);
}

void ScintillaEdit_StyleSetItalic(ScintillaEdit* self, intptr_t style, bool italic) {
	self->styleSetItalic(static_cast<sptr_t>(style), italic);
}

void ScintillaEdit_StyleSetSize(ScintillaEdit* self, intptr_t style, intptr_t sizePoints) {
	self->styleSetSize(static_cast<sptr_t>(style), static_cast<sptr_t>(sizePoints));
}

void ScintillaEdit_StyleSetFont(ScintillaEdit* self, intptr_t style, const char* fontName) {
	self->styleSetFont(static_cast<sptr_t>(style), fontName);
}

void ScintillaEdit_StyleSetEOLFilled(ScintillaEdit* self, intptr_t style, bool eolFilled) {
	self->styleSetEOLFilled(static_cast<sptr_t>(style), eolFilled);
}

void ScintillaEdit_StyleResetDefault(ScintillaEdit* self) {
	self->styleResetDefault();
}

void ScintillaEdit_StyleSetUnderline(ScintillaEdit* self, intptr_t style, bool underline) {
	self->styleSetUnderline(static_cast<sptr_t>(style), underline);
}

intptr_t ScintillaEdit_StyleFore(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleFore(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_StyleBack(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleBack(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_StyleBold(const ScintillaEdit* self, intptr_t style) {
	return self->styleBold(static_cast<sptr_t>(style));
}

bool ScintillaEdit_StyleItalic(const ScintillaEdit* self, intptr_t style) {
	return self->styleItalic(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_StyleSize(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleSize(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_StyleFont(const ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->styleFont(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool ScintillaEdit_StyleEOLFilled(const ScintillaEdit* self, intptr_t style) {
	return self->styleEOLFilled(static_cast<sptr_t>(style));
}

bool ScintillaEdit_StyleUnderline(const ScintillaEdit* self, intptr_t style) {
	return self->styleUnderline(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_StyleCase(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleCase(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_StyleCharacterSet(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleCharacterSet(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_StyleVisible(const ScintillaEdit* self, intptr_t style) {
	return self->styleVisible(static_cast<sptr_t>(style));
}

bool ScintillaEdit_StyleChangeable(const ScintillaEdit* self, intptr_t style) {
	return self->styleChangeable(static_cast<sptr_t>(style));
}

bool ScintillaEdit_StyleHotSpot(const ScintillaEdit* self, intptr_t style) {
	return self->styleHotSpot(static_cast<sptr_t>(style));
}

void ScintillaEdit_StyleSetCase(ScintillaEdit* self, intptr_t style, intptr_t caseVisible) {
	self->styleSetCase(static_cast<sptr_t>(style), static_cast<sptr_t>(caseVisible));
}

void ScintillaEdit_StyleSetSizeFractional(ScintillaEdit* self, intptr_t style, intptr_t sizeHundredthPoints) {
	self->styleSetSizeFractional(static_cast<sptr_t>(style), static_cast<sptr_t>(sizeHundredthPoints));
}

intptr_t ScintillaEdit_StyleSizeFractional(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleSizeFractional(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_StyleSetWeight(ScintillaEdit* self, intptr_t style, intptr_t weight) {
	self->styleSetWeight(static_cast<sptr_t>(style), static_cast<sptr_t>(weight));
}

intptr_t ScintillaEdit_StyleWeight(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleWeight(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_StyleSetCharacterSet(ScintillaEdit* self, intptr_t style, intptr_t characterSet) {
	self->styleSetCharacterSet(static_cast<sptr_t>(style), static_cast<sptr_t>(characterSet));
}

void ScintillaEdit_StyleSetHotSpot(ScintillaEdit* self, intptr_t style, bool hotspot) {
	self->styleSetHotSpot(static_cast<sptr_t>(style), hotspot);
}

void ScintillaEdit_StyleSetCheckMonospaced(ScintillaEdit* self, intptr_t style, bool checkMonospaced) {
	self->styleSetCheckMonospaced(static_cast<sptr_t>(style), checkMonospaced);
}

bool ScintillaEdit_StyleCheckMonospaced(const ScintillaEdit* self, intptr_t style) {
	return self->styleCheckMonospaced(static_cast<sptr_t>(style));
}

void ScintillaEdit_StyleSetStretch(ScintillaEdit* self, intptr_t style, intptr_t stretch) {
	self->styleSetStretch(static_cast<sptr_t>(style), static_cast<sptr_t>(stretch));
}

intptr_t ScintillaEdit_StyleStretch(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleStretch(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_StyleSetInvisibleRepresentation(ScintillaEdit* self, intptr_t style, const char* representation) {
	self->styleSetInvisibleRepresentation(static_cast<sptr_t>(style), representation);
}

struct miqt_string ScintillaEdit_StyleInvisibleRepresentation(const ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->styleInvisibleRepresentation(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetElementColour(ScintillaEdit* self, intptr_t element, intptr_t colourElement) {
	self->setElementColour(static_cast<sptr_t>(element), static_cast<sptr_t>(colourElement));
}

intptr_t ScintillaEdit_ElementColour(const ScintillaEdit* self, intptr_t element) {
	sptr_t _ret = self->elementColour(static_cast<sptr_t>(element));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ResetElementColour(ScintillaEdit* self, intptr_t element) {
	self->resetElementColour(static_cast<sptr_t>(element));
}

bool ScintillaEdit_ElementIsSet(const ScintillaEdit* self, intptr_t element) {
	return self->elementIsSet(static_cast<sptr_t>(element));
}

bool ScintillaEdit_ElementAllowsTranslucent(const ScintillaEdit* self, intptr_t element) {
	return self->elementAllowsTranslucent(static_cast<sptr_t>(element));
}

intptr_t ScintillaEdit_ElementBaseColour(const ScintillaEdit* self, intptr_t element) {
	sptr_t _ret = self->elementBaseColour(static_cast<sptr_t>(element));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setSelFore(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_SetSelBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setSelBack(useSetting, static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_SelAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->selAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setSelAlpha(static_cast<sptr_t>(alpha));
}

bool ScintillaEdit_SelEOLFilled(const ScintillaEdit* self) {
	return self->selEOLFilled();
}

void ScintillaEdit_SetSelEOLFilled(ScintillaEdit* self, bool filled) {
	self->setSelEOLFilled(filled);
}

intptr_t ScintillaEdit_SelectionLayer(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionLayer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionLayer(ScintillaEdit* self, intptr_t layer) {
	self->setSelectionLayer(static_cast<sptr_t>(layer));
}

intptr_t ScintillaEdit_CaretLineLayer(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineLayer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretLineLayer(ScintillaEdit* self, intptr_t layer) {
	self->setCaretLineLayer(static_cast<sptr_t>(layer));
}

bool ScintillaEdit_CaretLineHighlightSubLine(const ScintillaEdit* self) {
	return self->caretLineHighlightSubLine();
}

void ScintillaEdit_SetCaretLineHighlightSubLine(ScintillaEdit* self, bool subLine) {
	self->setCaretLineHighlightSubLine(subLine);
}

void ScintillaEdit_SetCaretFore(ScintillaEdit* self, intptr_t fore) {
	self->setCaretFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_AssignCmdKey(ScintillaEdit* self, intptr_t keyDefinition, intptr_t sciCommand) {
	self->assignCmdKey(static_cast<sptr_t>(keyDefinition), static_cast<sptr_t>(sciCommand));
}

void ScintillaEdit_ClearCmdKey(ScintillaEdit* self, intptr_t keyDefinition) {
	self->clearCmdKey(static_cast<sptr_t>(keyDefinition));
}

void ScintillaEdit_ClearAllCmdKeys(ScintillaEdit* self) {
	self->clearAllCmdKeys();
}

void ScintillaEdit_SetStylingEx(ScintillaEdit* self, intptr_t length, const char* styles) {
	self->setStylingEx(static_cast<sptr_t>(length), styles);
}

void ScintillaEdit_StyleSetVisible(ScintillaEdit* self, intptr_t style, bool visible) {
	self->styleSetVisible(static_cast<sptr_t>(style), visible);
}

intptr_t ScintillaEdit_CaretPeriod(const ScintillaEdit* self) {
	sptr_t _ret = self->caretPeriod();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretPeriod(ScintillaEdit* self, intptr_t periodMilliseconds) {
	self->setCaretPeriod(static_cast<sptr_t>(periodMilliseconds));
}

void ScintillaEdit_SetWordChars(ScintillaEdit* self, const char* characters) {
	self->setWordChars(characters);
}

struct miqt_string ScintillaEdit_WordChars(const ScintillaEdit* self) {
	QByteArray _qb = self->wordChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetCharacterCategoryOptimization(ScintillaEdit* self, intptr_t countCharacters) {
	self->setCharacterCategoryOptimization(static_cast<sptr_t>(countCharacters));
}

intptr_t ScintillaEdit_CharacterCategoryOptimization(const ScintillaEdit* self) {
	sptr_t _ret = self->characterCategoryOptimization();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_BeginUndoAction(ScintillaEdit* self) {
	self->beginUndoAction();
}

void ScintillaEdit_EndUndoAction(ScintillaEdit* self) {
	self->endUndoAction();
}

intptr_t ScintillaEdit_UndoSequence(const ScintillaEdit* self) {
	sptr_t _ret = self->undoSequence();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_UndoActions(const ScintillaEdit* self) {
	sptr_t _ret = self->undoActions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetUndoSavePoint(ScintillaEdit* self, intptr_t action) {
	self->setUndoSavePoint(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_UndoSavePoint(const ScintillaEdit* self) {
	sptr_t _ret = self->undoSavePoint();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetUndoDetach(ScintillaEdit* self, intptr_t action) {
	self->setUndoDetach(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_UndoDetach(const ScintillaEdit* self) {
	sptr_t _ret = self->undoDetach();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetUndoTentative(ScintillaEdit* self, intptr_t action) {
	self->setUndoTentative(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_UndoTentative(const ScintillaEdit* self) {
	sptr_t _ret = self->undoTentative();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetUndoCurrent(ScintillaEdit* self, intptr_t action) {
	self->setUndoCurrent(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_UndoCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->undoCurrent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_PushUndoActionType(ScintillaEdit* self, intptr_t typeVal, intptr_t pos) {
	self->pushUndoActionType(static_cast<sptr_t>(typeVal), static_cast<sptr_t>(pos));
}

void ScintillaEdit_ChangeLastUndoActionText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->changeLastUndoActionText(static_cast<sptr_t>(length), text);
}

intptr_t ScintillaEdit_UndoActionType(const ScintillaEdit* self, intptr_t action) {
	sptr_t _ret = self->undoActionType(static_cast<sptr_t>(action));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_UndoActionPosition(const ScintillaEdit* self, intptr_t action) {
	sptr_t _ret = self->undoActionPosition(static_cast<sptr_t>(action));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_UndoActionText(const ScintillaEdit* self, intptr_t action) {
	QByteArray _qb = self->undoActionText(static_cast<sptr_t>(action));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_IndicSetStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle) {
	self->indicSetStyle(static_cast<sptr_t>(indicator), static_cast<sptr_t>(indicatorStyle));
}

intptr_t ScintillaEdit_IndicStyle(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicStyle(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore) {
	self->indicSetFore(static_cast<sptr_t>(indicator), static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_IndicFore(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicFore(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetUnder(ScintillaEdit* self, intptr_t indicator, bool under) {
	self->indicSetUnder(static_cast<sptr_t>(indicator), under);
}

bool ScintillaEdit_IndicUnder(const ScintillaEdit* self, intptr_t indicator) {
	return self->indicUnder(static_cast<sptr_t>(indicator));
}

void ScintillaEdit_IndicSetHoverStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle) {
	self->indicSetHoverStyle(static_cast<sptr_t>(indicator), static_cast<sptr_t>(indicatorStyle));
}

intptr_t ScintillaEdit_IndicHoverStyle(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicHoverStyle(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetHoverFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore) {
	self->indicSetHoverFore(static_cast<sptr_t>(indicator), static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_IndicHoverFore(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicHoverFore(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetFlags(ScintillaEdit* self, intptr_t indicator, intptr_t flags) {
	self->indicSetFlags(static_cast<sptr_t>(indicator), static_cast<sptr_t>(flags));
}

intptr_t ScintillaEdit_IndicFlags(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicFlags(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetStrokeWidth(ScintillaEdit* self, intptr_t indicator, intptr_t hundredths) {
	self->indicSetStrokeWidth(static_cast<sptr_t>(indicator), static_cast<sptr_t>(hundredths));
}

intptr_t ScintillaEdit_IndicStrokeWidth(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicStrokeWidth(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWhitespaceFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setWhitespaceFore(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_SetWhitespaceBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setWhitespaceBack(useSetting, static_cast<sptr_t>(back));
}

void ScintillaEdit_SetWhitespaceSize(ScintillaEdit* self, intptr_t size) {
	self->setWhitespaceSize(static_cast<sptr_t>(size));
}

intptr_t ScintillaEdit_WhitespaceSize(const ScintillaEdit* self) {
	sptr_t _ret = self->whitespaceSize();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetLineState(ScintillaEdit* self, intptr_t line, intptr_t state) {
	self->setLineState(static_cast<sptr_t>(line), static_cast<sptr_t>(state));
}

intptr_t ScintillaEdit_LineState(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineState(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_MaxLineState(const ScintillaEdit* self) {
	sptr_t _ret = self->maxLineState();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_CaretLineVisible(const ScintillaEdit* self) {
	return self->caretLineVisible();
}

void ScintillaEdit_SetCaretLineVisible(ScintillaEdit* self, bool show) {
	self->setCaretLineVisible(show);
}

intptr_t ScintillaEdit_CaretLineBack(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineBack();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretLineBack(ScintillaEdit* self, intptr_t back) {
	self->setCaretLineBack(static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_CaretLineFrame(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineFrame();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretLineFrame(ScintillaEdit* self, intptr_t width) {
	self->setCaretLineFrame(static_cast<sptr_t>(width));
}

void ScintillaEdit_StyleSetChangeable(ScintillaEdit* self, intptr_t style, bool changeable) {
	self->styleSetChangeable(static_cast<sptr_t>(style), changeable);
}

void ScintillaEdit_AutoCShow(ScintillaEdit* self, intptr_t lengthEntered, const char* itemList) {
	self->autoCShow(static_cast<sptr_t>(lengthEntered), itemList);
}

void ScintillaEdit_AutoCCancel(ScintillaEdit* self) {
	self->autoCCancel();
}

bool ScintillaEdit_AutoCActive(ScintillaEdit* self) {
	return self->autoCActive();
}

intptr_t ScintillaEdit_AutoCPosStart(ScintillaEdit* self) {
	sptr_t _ret = self->autoCPosStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCComplete(ScintillaEdit* self) {
	self->autoCComplete();
}

void ScintillaEdit_AutoCStops(ScintillaEdit* self, const char* characterSet) {
	self->autoCStops(characterSet);
}

void ScintillaEdit_AutoCSetSeparator(ScintillaEdit* self, intptr_t separatorCharacter) {
	self->autoCSetSeparator(static_cast<sptr_t>(separatorCharacter));
}

intptr_t ScintillaEdit_AutoCSeparator(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCSeparator();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSelect(ScintillaEdit* self, const char* selectVal) {
	self->autoCSelect(selectVal);
}

void ScintillaEdit_AutoCSetCancelAtStart(ScintillaEdit* self, bool cancel) {
	self->autoCSetCancelAtStart(cancel);
}

bool ScintillaEdit_AutoCCancelAtStart(const ScintillaEdit* self) {
	return self->autoCCancelAtStart();
}

void ScintillaEdit_AutoCSetFillUps(ScintillaEdit* self, const char* characterSet) {
	self->autoCSetFillUps(characterSet);
}

void ScintillaEdit_AutoCSetChooseSingle(ScintillaEdit* self, bool chooseSingle) {
	self->autoCSetChooseSingle(chooseSingle);
}

bool ScintillaEdit_AutoCChooseSingle(const ScintillaEdit* self) {
	return self->autoCChooseSingle();
}

void ScintillaEdit_AutoCSetIgnoreCase(ScintillaEdit* self, bool ignoreCase) {
	self->autoCSetIgnoreCase(ignoreCase);
}

bool ScintillaEdit_AutoCIgnoreCase(const ScintillaEdit* self) {
	return self->autoCIgnoreCase();
}

void ScintillaEdit_UserListShow(ScintillaEdit* self, intptr_t listType, const char* itemList) {
	self->userListShow(static_cast<sptr_t>(listType), itemList);
}

void ScintillaEdit_AutoCSetAutoHide(ScintillaEdit* self, bool autoHide) {
	self->autoCSetAutoHide(autoHide);
}

bool ScintillaEdit_AutoCAutoHide(const ScintillaEdit* self) {
	return self->autoCAutoHide();
}

void ScintillaEdit_AutoCSetOptions(ScintillaEdit* self, intptr_t options) {
	self->autoCSetOptions(static_cast<sptr_t>(options));
}

intptr_t ScintillaEdit_AutoCOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetDropRestOfWord(ScintillaEdit* self, bool dropRestOfWord) {
	self->autoCSetDropRestOfWord(dropRestOfWord);
}

bool ScintillaEdit_AutoCDropRestOfWord(const ScintillaEdit* self) {
	return self->autoCDropRestOfWord();
}

void ScintillaEdit_RegisterImage(ScintillaEdit* self, intptr_t typeVal, const char* xpmData) {
	self->registerImage(static_cast<sptr_t>(typeVal), xpmData);
}

void ScintillaEdit_ClearRegisteredImages(ScintillaEdit* self) {
	self->clearRegisteredImages();
}

intptr_t ScintillaEdit_AutoCTypeSeparator(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCTypeSeparator();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetTypeSeparator(ScintillaEdit* self, intptr_t separatorCharacter) {
	self->autoCSetTypeSeparator(static_cast<sptr_t>(separatorCharacter));
}

void ScintillaEdit_AutoCSetMaxWidth(ScintillaEdit* self, intptr_t characterCount) {
	self->autoCSetMaxWidth(static_cast<sptr_t>(characterCount));
}

intptr_t ScintillaEdit_AutoCMaxWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMaxWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetMaxHeight(ScintillaEdit* self, intptr_t rowCount) {
	self->autoCSetMaxHeight(static_cast<sptr_t>(rowCount));
}

intptr_t ScintillaEdit_AutoCMaxHeight(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMaxHeight();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetStyle(ScintillaEdit* self, intptr_t style) {
	self->autoCSetStyle(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_AutoCStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetIndent(ScintillaEdit* self, intptr_t indentSize) {
	self->setIndent(static_cast<sptr_t>(indentSize));
}

intptr_t ScintillaEdit_Indent(const ScintillaEdit* self) {
	sptr_t _ret = self->indent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetUseTabs(ScintillaEdit* self, bool useTabs) {
	self->setUseTabs(useTabs);
}

bool ScintillaEdit_UseTabs(const ScintillaEdit* self) {
	return self->useTabs();
}

void ScintillaEdit_SetLineIndentation(ScintillaEdit* self, intptr_t line, intptr_t indentation) {
	self->setLineIndentation(static_cast<sptr_t>(line), static_cast<sptr_t>(indentation));
}

intptr_t ScintillaEdit_LineIndentation(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineIndentation(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LineIndentPosition(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineIndentPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_Column(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->column(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CountCharacters(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->countCharacters(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CountCodeUnits(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->countCodeUnits(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetHScrollBar(ScintillaEdit* self, bool visible) {
	self->setHScrollBar(visible);
}

bool ScintillaEdit_HScrollBar(const ScintillaEdit* self) {
	return self->hScrollBar();
}

void ScintillaEdit_SetIndentationGuides(ScintillaEdit* self, intptr_t indentView) {
	self->setIndentationGuides(static_cast<sptr_t>(indentView));
}

intptr_t ScintillaEdit_IndentationGuides(const ScintillaEdit* self) {
	sptr_t _ret = self->indentationGuides();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetHighlightGuide(ScintillaEdit* self, intptr_t column) {
	self->setHighlightGuide(static_cast<sptr_t>(column));
}

intptr_t ScintillaEdit_HighlightGuide(const ScintillaEdit* self) {
	sptr_t _ret = self->highlightGuide();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LineEndPosition(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineEndPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CodePage(const ScintillaEdit* self) {
	sptr_t _ret = self->codePage();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CaretFore(const ScintillaEdit* self) {
	sptr_t _ret = self->caretFore();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_ReadOnly(const ScintillaEdit* self) {
	return self->readOnly();
}

void ScintillaEdit_SetCurrentPos(ScintillaEdit* self, intptr_t caret) {
	self->setCurrentPos(static_cast<sptr_t>(caret));
}

void ScintillaEdit_SetSelectionStart(ScintillaEdit* self, intptr_t anchor) {
	self->setSelectionStart(static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_SelectionStart(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionEnd(ScintillaEdit* self, intptr_t caret) {
	self->setSelectionEnd(static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_SelectionEnd(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionEnd();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEmptySelection(ScintillaEdit* self, intptr_t caret) {
	self->setEmptySelection(static_cast<sptr_t>(caret));
}

void ScintillaEdit_SetPrintMagnification(ScintillaEdit* self, intptr_t magnification) {
	self->setPrintMagnification(static_cast<sptr_t>(magnification));
}

intptr_t ScintillaEdit_PrintMagnification(const ScintillaEdit* self) {
	sptr_t _ret = self->printMagnification();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetPrintColourMode(ScintillaEdit* self, intptr_t mode) {
	self->setPrintColourMode(static_cast<sptr_t>(mode));
}

intptr_t ScintillaEdit_PrintColourMode(const ScintillaEdit* self) {
	sptr_t _ret = self->printColourMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetChangeHistory(ScintillaEdit* self, intptr_t changeHistory) {
	self->setChangeHistory(static_cast<sptr_t>(changeHistory));
}

intptr_t ScintillaEdit_ChangeHistory(const ScintillaEdit* self) {
	sptr_t _ret = self->changeHistory();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_FirstVisibleLine(const ScintillaEdit* self) {
	sptr_t _ret = self->firstVisibleLine();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_GetLine(ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->getLine(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_LineCount(const ScintillaEdit* self) {
	sptr_t _ret = self->lineCount();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AllocateLines(ScintillaEdit* self, intptr_t lines) {
	self->allocateLines(static_cast<sptr_t>(lines));
}

void ScintillaEdit_SetMarginLeft(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setMarginLeft(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_MarginLeft(const ScintillaEdit* self) {
	sptr_t _ret = self->marginLeft();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginRight(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setMarginRight(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_MarginRight(const ScintillaEdit* self) {
	sptr_t _ret = self->marginRight();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_Modify(const ScintillaEdit* self) {
	return self->modify();
}

void ScintillaEdit_SetSel(ScintillaEdit* self, intptr_t anchor, intptr_t caret) {
	self->setSel(static_cast<sptr_t>(anchor), static_cast<sptr_t>(caret));
}

struct miqt_string ScintillaEdit_GetSelText(ScintillaEdit* self) {
	QByteArray _qb = self->getSelText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_HideSelection(ScintillaEdit* self, bool hide) {
	self->hideSelection(hide);
}

bool ScintillaEdit_SelectionHidden(const ScintillaEdit* self) {
	return self->selectionHidden();
}

intptr_t ScintillaEdit_PointXFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->pointXFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PointYFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->pointYFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LineFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->lineFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PositionFromLine(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->positionFromLine(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_LineScroll(ScintillaEdit* self, intptr_t columns, intptr_t lines) {
	self->lineScroll(static_cast<sptr_t>(columns), static_cast<sptr_t>(lines));
}

void ScintillaEdit_ScrollCaret(ScintillaEdit* self) {
	self->scrollCaret();
}

void ScintillaEdit_ScrollRange(ScintillaEdit* self, intptr_t secondary, intptr_t primary) {
	self->scrollRange(static_cast<sptr_t>(secondary), static_cast<sptr_t>(primary));
}

void ScintillaEdit_ReplaceSel(ScintillaEdit* self, const char* text) {
	self->replaceSel(text);
}

void ScintillaEdit_SetReadOnly(ScintillaEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void ScintillaEdit_Null(ScintillaEdit* self) {
	self->null();
}

bool ScintillaEdit_CanPaste(ScintillaEdit* self) {
	return self->canPaste();
}

bool ScintillaEdit_CanUndo(ScintillaEdit* self) {
	return self->canUndo();
}

void ScintillaEdit_EmptyUndoBuffer(ScintillaEdit* self) {
	self->emptyUndoBuffer();
}

void ScintillaEdit_Undo(ScintillaEdit* self) {
	self->undo();
}

void ScintillaEdit_Cut(ScintillaEdit* self) {
	self->cut();
}

void ScintillaEdit_Copy(ScintillaEdit* self) {
	self->copy();
}

void ScintillaEdit_Paste(ScintillaEdit* self) {
	self->paste();
}

void ScintillaEdit_Clear(ScintillaEdit* self) {
	self->clear();
}

void ScintillaEdit_SetText(ScintillaEdit* self, const char* text) {
	self->setText(text);
}

struct miqt_string ScintillaEdit_GetText(ScintillaEdit* self, intptr_t length) {
	QByteArray _qb = self->getText(static_cast<sptr_t>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_TextLength(const ScintillaEdit* self) {
	sptr_t _ret = self->textLength();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_DirectFunction(const ScintillaEdit* self) {
	sptr_t _ret = self->directFunction();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_DirectStatusFunction(const ScintillaEdit* self) {
	sptr_t _ret = self->directStatusFunction();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_DirectPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->directPointer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetOvertype(ScintillaEdit* self, bool overType) {
	self->setOvertype(overType);
}

bool ScintillaEdit_Overtype(const ScintillaEdit* self) {
	return self->overtype();
}

void ScintillaEdit_SetCaretWidth(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setCaretWidth(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_CaretWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->caretWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTargetStart(ScintillaEdit* self, intptr_t start) {
	self->setTargetStart(static_cast<sptr_t>(start));
}

intptr_t ScintillaEdit_TargetStart(const ScintillaEdit* self) {
	sptr_t _ret = self->targetStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTargetStartVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setTargetStartVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_TargetStartVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->targetStartVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTargetEnd(ScintillaEdit* self, intptr_t end) {
	self->setTargetEnd(static_cast<sptr_t>(end));
}

intptr_t ScintillaEdit_TargetEnd(const ScintillaEdit* self) {
	sptr_t _ret = self->targetEnd();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTargetEndVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setTargetEndVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_TargetEndVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->targetEndVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetTargetRange(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->setTargetRange(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

struct miqt_string ScintillaEdit_TargetText(const ScintillaEdit* self) {
	QByteArray _qb = self->targetText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_TargetFromSelection(ScintillaEdit* self) {
	self->targetFromSelection();
}

void ScintillaEdit_TargetWholeDocument(ScintillaEdit* self) {
	self->targetWholeDocument();
}

intptr_t ScintillaEdit_ReplaceTarget(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTarget(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_ReplaceTargetRE(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTargetRE(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_ReplaceTargetMinimal(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTargetMinimal(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SearchInTarget(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->searchInTarget(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSearchFlags(ScintillaEdit* self, intptr_t searchFlags) {
	self->setSearchFlags(static_cast<sptr_t>(searchFlags));
}

intptr_t ScintillaEdit_SearchFlags(const ScintillaEdit* self) {
	sptr_t _ret = self->searchFlags();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_CallTipShow(ScintillaEdit* self, intptr_t pos, const char* definition) {
	self->callTipShow(static_cast<sptr_t>(pos), definition);
}

void ScintillaEdit_CallTipCancel(ScintillaEdit* self) {
	self->callTipCancel();
}

bool ScintillaEdit_CallTipActive(ScintillaEdit* self) {
	return self->callTipActive();
}

intptr_t ScintillaEdit_CallTipPosStart(ScintillaEdit* self) {
	sptr_t _ret = self->callTipPosStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_CallTipSetPosStart(ScintillaEdit* self, intptr_t posStart) {
	self->callTipSetPosStart(static_cast<sptr_t>(posStart));
}

void ScintillaEdit_CallTipSetHlt(ScintillaEdit* self, intptr_t highlightStart, intptr_t highlightEnd) {
	self->callTipSetHlt(static_cast<sptr_t>(highlightStart), static_cast<sptr_t>(highlightEnd));
}

void ScintillaEdit_CallTipSetBack(ScintillaEdit* self, intptr_t back) {
	self->callTipSetBack(static_cast<sptr_t>(back));
}

void ScintillaEdit_CallTipSetFore(ScintillaEdit* self, intptr_t fore) {
	self->callTipSetFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_CallTipSetForeHlt(ScintillaEdit* self, intptr_t fore) {
	self->callTipSetForeHlt(static_cast<sptr_t>(fore));
}

void ScintillaEdit_CallTipUseStyle(ScintillaEdit* self, intptr_t tabSize) {
	self->callTipUseStyle(static_cast<sptr_t>(tabSize));
}

void ScintillaEdit_CallTipSetPosition(ScintillaEdit* self, bool above) {
	self->callTipSetPosition(above);
}

intptr_t ScintillaEdit_VisibleFromDocLine(ScintillaEdit* self, intptr_t docLine) {
	sptr_t _ret = self->visibleFromDocLine(static_cast<sptr_t>(docLine));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_DocLineFromVisible(ScintillaEdit* self, intptr_t displayLine) {
	sptr_t _ret = self->docLineFromVisible(static_cast<sptr_t>(displayLine));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_WrapCount(ScintillaEdit* self, intptr_t docLine) {
	sptr_t _ret = self->wrapCount(static_cast<sptr_t>(docLine));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetFoldLevel(ScintillaEdit* self, intptr_t line, intptr_t level) {
	self->setFoldLevel(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
}

intptr_t ScintillaEdit_FoldLevel(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->foldLevel(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LastChild(const ScintillaEdit* self, intptr_t line, intptr_t level) {
	sptr_t _ret = self->lastChild(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_FoldParent(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->foldParent(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ShowLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd) {
	self->showLines(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(lineEnd));
}

void ScintillaEdit_HideLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd) {
	self->hideLines(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(lineEnd));
}

bool ScintillaEdit_LineVisible(const ScintillaEdit* self, intptr_t line) {
	return self->lineVisible(static_cast<sptr_t>(line));
}

bool ScintillaEdit_AllLinesVisible(const ScintillaEdit* self) {
	return self->allLinesVisible();
}

void ScintillaEdit_SetFoldExpanded(ScintillaEdit* self, intptr_t line, bool expanded) {
	self->setFoldExpanded(static_cast<sptr_t>(line), expanded);
}

bool ScintillaEdit_FoldExpanded(const ScintillaEdit* self, intptr_t line) {
	return self->foldExpanded(static_cast<sptr_t>(line));
}

void ScintillaEdit_ToggleFold(ScintillaEdit* self, intptr_t line) {
	self->toggleFold(static_cast<sptr_t>(line));
}

void ScintillaEdit_ToggleFoldShowText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->toggleFoldShowText(static_cast<sptr_t>(line), text);
}

void ScintillaEdit_FoldDisplayTextSetStyle(ScintillaEdit* self, intptr_t style) {
	self->foldDisplayTextSetStyle(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_FoldDisplayTextStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->foldDisplayTextStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetDefaultFoldDisplayText(ScintillaEdit* self, const char* text) {
	self->setDefaultFoldDisplayText(text);
}

struct miqt_string ScintillaEdit_GetDefaultFoldDisplayText(ScintillaEdit* self) {
	QByteArray _qb = self->getDefaultFoldDisplayText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_FoldLine(ScintillaEdit* self, intptr_t line, intptr_t action) {
	self->foldLine(static_cast<sptr_t>(line), static_cast<sptr_t>(action));
}

void ScintillaEdit_FoldChildren(ScintillaEdit* self, intptr_t line, intptr_t action) {
	self->foldChildren(static_cast<sptr_t>(line), static_cast<sptr_t>(action));
}

void ScintillaEdit_ExpandChildren(ScintillaEdit* self, intptr_t line, intptr_t level) {
	self->expandChildren(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
}

void ScintillaEdit_FoldAll(ScintillaEdit* self, intptr_t action) {
	self->foldAll(static_cast<sptr_t>(action));
}

void ScintillaEdit_EnsureVisible(ScintillaEdit* self, intptr_t line) {
	self->ensureVisible(static_cast<sptr_t>(line));
}

void ScintillaEdit_SetAutomaticFold(ScintillaEdit* self, intptr_t automaticFold) {
	self->setAutomaticFold(static_cast<sptr_t>(automaticFold));
}

intptr_t ScintillaEdit_AutomaticFold(const ScintillaEdit* self) {
	sptr_t _ret = self->automaticFold();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetFoldFlags(ScintillaEdit* self, intptr_t flags) {
	self->setFoldFlags(static_cast<sptr_t>(flags));
}

void ScintillaEdit_EnsureVisibleEnforcePolicy(ScintillaEdit* self, intptr_t line) {
	self->ensureVisibleEnforcePolicy(static_cast<sptr_t>(line));
}

void ScintillaEdit_SetTabIndents(ScintillaEdit* self, bool tabIndents) {
	self->setTabIndents(tabIndents);
}

bool ScintillaEdit_TabIndents(const ScintillaEdit* self) {
	return self->tabIndents();
}

void ScintillaEdit_SetBackSpaceUnIndents(ScintillaEdit* self, bool bsUnIndents) {
	self->setBackSpaceUnIndents(bsUnIndents);
}

bool ScintillaEdit_BackSpaceUnIndents(const ScintillaEdit* self) {
	return self->backSpaceUnIndents();
}

void ScintillaEdit_SetMouseDwellTime(ScintillaEdit* self, intptr_t periodMilliseconds) {
	self->setMouseDwellTime(static_cast<sptr_t>(periodMilliseconds));
}

intptr_t ScintillaEdit_MouseDwellTime(const ScintillaEdit* self) {
	sptr_t _ret = self->mouseDwellTime();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_WordStartPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters) {
	sptr_t _ret = self->wordStartPosition(static_cast<sptr_t>(pos), onlyWordCharacters);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_WordEndPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters) {
	sptr_t _ret = self->wordEndPosition(static_cast<sptr_t>(pos), onlyWordCharacters);
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_IsRangeWord(ScintillaEdit* self, intptr_t start, intptr_t end) {
	return self->isRangeWord(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_SetIdleStyling(ScintillaEdit* self, intptr_t idleStyling) {
	self->setIdleStyling(static_cast<sptr_t>(idleStyling));
}

intptr_t ScintillaEdit_IdleStyling(const ScintillaEdit* self) {
	sptr_t _ret = self->idleStyling();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWrapMode(ScintillaEdit* self, intptr_t wrapMode) {
	self->setWrapMode(static_cast<sptr_t>(wrapMode));
}

intptr_t ScintillaEdit_WrapMode(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWrapVisualFlags(ScintillaEdit* self, intptr_t wrapVisualFlags) {
	self->setWrapVisualFlags(static_cast<sptr_t>(wrapVisualFlags));
}

intptr_t ScintillaEdit_WrapVisualFlags(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapVisualFlags();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWrapVisualFlagsLocation(ScintillaEdit* self, intptr_t wrapVisualFlagsLocation) {
	self->setWrapVisualFlagsLocation(static_cast<sptr_t>(wrapVisualFlagsLocation));
}

intptr_t ScintillaEdit_WrapVisualFlagsLocation(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapVisualFlagsLocation();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWrapStartIndent(ScintillaEdit* self, intptr_t indent) {
	self->setWrapStartIndent(static_cast<sptr_t>(indent));
}

intptr_t ScintillaEdit_WrapStartIndent(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapStartIndent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetWrapIndentMode(ScintillaEdit* self, intptr_t wrapIndentMode) {
	self->setWrapIndentMode(static_cast<sptr_t>(wrapIndentMode));
}

intptr_t ScintillaEdit_WrapIndentMode(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapIndentMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetLayoutCache(ScintillaEdit* self, intptr_t cacheMode) {
	self->setLayoutCache(static_cast<sptr_t>(cacheMode));
}

intptr_t ScintillaEdit_LayoutCache(const ScintillaEdit* self) {
	sptr_t _ret = self->layoutCache();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetScrollWidth(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setScrollWidth(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_ScrollWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->scrollWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetScrollWidthTracking(ScintillaEdit* self, bool tracking) {
	self->setScrollWidthTracking(tracking);
}

bool ScintillaEdit_ScrollWidthTracking(const ScintillaEdit* self) {
	return self->scrollWidthTracking();
}

intptr_t ScintillaEdit_TextWidth(ScintillaEdit* self, intptr_t style, const char* text) {
	sptr_t _ret = self->textWidth(static_cast<sptr_t>(style), text);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEndAtLastLine(ScintillaEdit* self, bool endAtLastLine) {
	self->setEndAtLastLine(endAtLastLine);
}

bool ScintillaEdit_EndAtLastLine(const ScintillaEdit* self) {
	return self->endAtLastLine();
}

intptr_t ScintillaEdit_TextHeight(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->textHeight(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetVScrollBar(ScintillaEdit* self, bool visible) {
	self->setVScrollBar(visible);
}

bool ScintillaEdit_VScrollBar(const ScintillaEdit* self) {
	return self->vScrollBar();
}

void ScintillaEdit_AppendText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->appendText(static_cast<sptr_t>(length), text);
}

intptr_t ScintillaEdit_PhasesDraw(const ScintillaEdit* self) {
	sptr_t _ret = self->phasesDraw();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetPhasesDraw(ScintillaEdit* self, intptr_t phases) {
	self->setPhasesDraw(static_cast<sptr_t>(phases));
}

void ScintillaEdit_SetFontQuality(ScintillaEdit* self, intptr_t fontQuality) {
	self->setFontQuality(static_cast<sptr_t>(fontQuality));
}

intptr_t ScintillaEdit_FontQuality(const ScintillaEdit* self) {
	sptr_t _ret = self->fontQuality();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetFirstVisibleLine(ScintillaEdit* self, intptr_t displayLine) {
	self->setFirstVisibleLine(static_cast<sptr_t>(displayLine));
}

void ScintillaEdit_SetMultiPaste(ScintillaEdit* self, intptr_t multiPaste) {
	self->setMultiPaste(static_cast<sptr_t>(multiPaste));
}

intptr_t ScintillaEdit_MultiPaste(const ScintillaEdit* self) {
	sptr_t _ret = self->multiPaste();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_Tag(const ScintillaEdit* self, intptr_t tagNumber) {
	QByteArray _qb = self->tag(static_cast<sptr_t>(tagNumber));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_LinesJoin(ScintillaEdit* self) {
	self->linesJoin();
}

void ScintillaEdit_LinesSplit(ScintillaEdit* self, intptr_t pixelWidth) {
	self->linesSplit(static_cast<sptr_t>(pixelWidth));
}

void ScintillaEdit_SetFoldMarginColour(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setFoldMarginColour(useSetting, static_cast<sptr_t>(back));
}

void ScintillaEdit_SetFoldMarginHiColour(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setFoldMarginHiColour(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_SetAccessibility(ScintillaEdit* self, intptr_t accessibility) {
	self->setAccessibility(static_cast<sptr_t>(accessibility));
}

intptr_t ScintillaEdit_Accessibility(const ScintillaEdit* self) {
	sptr_t _ret = self->accessibility();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_LineDown(ScintillaEdit* self) {
	self->lineDown();
}

void ScintillaEdit_LineDownExtend(ScintillaEdit* self) {
	self->lineDownExtend();
}

void ScintillaEdit_LineUp(ScintillaEdit* self) {
	self->lineUp();
}

void ScintillaEdit_LineUpExtend(ScintillaEdit* self) {
	self->lineUpExtend();
}

void ScintillaEdit_CharLeft(ScintillaEdit* self) {
	self->charLeft();
}

void ScintillaEdit_CharLeftExtend(ScintillaEdit* self) {
	self->charLeftExtend();
}

void ScintillaEdit_CharRight(ScintillaEdit* self) {
	self->charRight();
}

void ScintillaEdit_CharRightExtend(ScintillaEdit* self) {
	self->charRightExtend();
}

void ScintillaEdit_WordLeft(ScintillaEdit* self) {
	self->wordLeft();
}

void ScintillaEdit_WordLeftExtend(ScintillaEdit* self) {
	self->wordLeftExtend();
}

void ScintillaEdit_WordRight(ScintillaEdit* self) {
	self->wordRight();
}

void ScintillaEdit_WordRightExtend(ScintillaEdit* self) {
	self->wordRightExtend();
}

void ScintillaEdit_Home(ScintillaEdit* self) {
	self->home();
}

void ScintillaEdit_HomeExtend(ScintillaEdit* self) {
	self->homeExtend();
}

void ScintillaEdit_LineEnd(ScintillaEdit* self) {
	self->lineEnd();
}

void ScintillaEdit_LineEndExtend(ScintillaEdit* self) {
	self->lineEndExtend();
}

void ScintillaEdit_DocumentStart(ScintillaEdit* self) {
	self->documentStart();
}

void ScintillaEdit_DocumentStartExtend(ScintillaEdit* self) {
	self->documentStartExtend();
}

void ScintillaEdit_DocumentEnd(ScintillaEdit* self) {
	self->documentEnd();
}

void ScintillaEdit_DocumentEndExtend(ScintillaEdit* self) {
	self->documentEndExtend();
}

void ScintillaEdit_PageUp(ScintillaEdit* self) {
	self->pageUp();
}

void ScintillaEdit_PageUpExtend(ScintillaEdit* self) {
	self->pageUpExtend();
}

void ScintillaEdit_PageDown(ScintillaEdit* self) {
	self->pageDown();
}

void ScintillaEdit_PageDownExtend(ScintillaEdit* self) {
	self->pageDownExtend();
}

void ScintillaEdit_EditToggleOvertype(ScintillaEdit* self) {
	self->editToggleOvertype();
}

void ScintillaEdit_Cancel(ScintillaEdit* self) {
	self->cancel();
}

void ScintillaEdit_DeleteBack(ScintillaEdit* self) {
	self->deleteBack();
}

void ScintillaEdit_Tab(ScintillaEdit* self) {
	self->tab();
}

void ScintillaEdit_LineIndent(ScintillaEdit* self) {
	self->lineIndent();
}

void ScintillaEdit_BackTab(ScintillaEdit* self) {
	self->backTab();
}

void ScintillaEdit_LineDedent(ScintillaEdit* self) {
	self->lineDedent();
}

void ScintillaEdit_NewLine(ScintillaEdit* self) {
	self->newLine();
}

void ScintillaEdit_FormFeed(ScintillaEdit* self) {
	self->formFeed();
}

void ScintillaEdit_VCHome(ScintillaEdit* self) {
	self->vCHome();
}

void ScintillaEdit_VCHomeExtend(ScintillaEdit* self) {
	self->vCHomeExtend();
}

void ScintillaEdit_ZoomIn(ScintillaEdit* self) {
	self->zoomIn();
}

void ScintillaEdit_ZoomOut(ScintillaEdit* self) {
	self->zoomOut();
}

void ScintillaEdit_DelWordLeft(ScintillaEdit* self) {
	self->delWordLeft();
}

void ScintillaEdit_DelWordRight(ScintillaEdit* self) {
	self->delWordRight();
}

void ScintillaEdit_DelWordRightEnd(ScintillaEdit* self) {
	self->delWordRightEnd();
}

void ScintillaEdit_LineCut(ScintillaEdit* self) {
	self->lineCut();
}

void ScintillaEdit_LineDelete(ScintillaEdit* self) {
	self->lineDelete();
}

void ScintillaEdit_LineTranspose(ScintillaEdit* self) {
	self->lineTranspose();
}

void ScintillaEdit_LineReverse(ScintillaEdit* self) {
	self->lineReverse();
}

void ScintillaEdit_LineDuplicate(ScintillaEdit* self) {
	self->lineDuplicate();
}

void ScintillaEdit_LowerCase(ScintillaEdit* self) {
	self->lowerCase();
}

void ScintillaEdit_UpperCase(ScintillaEdit* self) {
	self->upperCase();
}

void ScintillaEdit_LineScrollDown(ScintillaEdit* self) {
	self->lineScrollDown();
}

void ScintillaEdit_LineScrollUp(ScintillaEdit* self) {
	self->lineScrollUp();
}

void ScintillaEdit_DeleteBackNotLine(ScintillaEdit* self) {
	self->deleteBackNotLine();
}

void ScintillaEdit_HomeDisplay(ScintillaEdit* self) {
	self->homeDisplay();
}

void ScintillaEdit_HomeDisplayExtend(ScintillaEdit* self) {
	self->homeDisplayExtend();
}

void ScintillaEdit_LineEndDisplay(ScintillaEdit* self) {
	self->lineEndDisplay();
}

void ScintillaEdit_LineEndDisplayExtend(ScintillaEdit* self) {
	self->lineEndDisplayExtend();
}

void ScintillaEdit_HomeWrap(ScintillaEdit* self) {
	self->homeWrap();
}

void ScintillaEdit_HomeWrapExtend(ScintillaEdit* self) {
	self->homeWrapExtend();
}

void ScintillaEdit_LineEndWrap(ScintillaEdit* self) {
	self->lineEndWrap();
}

void ScintillaEdit_LineEndWrapExtend(ScintillaEdit* self) {
	self->lineEndWrapExtend();
}

void ScintillaEdit_VCHomeWrap(ScintillaEdit* self) {
	self->vCHomeWrap();
}

void ScintillaEdit_VCHomeWrapExtend(ScintillaEdit* self) {
	self->vCHomeWrapExtend();
}

void ScintillaEdit_LineCopy(ScintillaEdit* self) {
	self->lineCopy();
}

void ScintillaEdit_MoveCaretInsideView(ScintillaEdit* self) {
	self->moveCaretInsideView();
}

intptr_t ScintillaEdit_LineLength(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineLength(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_BraceHighlight(ScintillaEdit* self, intptr_t posA, intptr_t posB) {
	self->braceHighlight(static_cast<sptr_t>(posA), static_cast<sptr_t>(posB));
}

void ScintillaEdit_BraceHighlightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator) {
	self->braceHighlightIndicator(useSetting, static_cast<sptr_t>(indicator));
}

void ScintillaEdit_BraceBadLight(ScintillaEdit* self, intptr_t pos) {
	self->braceBadLight(static_cast<sptr_t>(pos));
}

void ScintillaEdit_BraceBadLightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator) {
	self->braceBadLightIndicator(useSetting, static_cast<sptr_t>(indicator));
}

intptr_t ScintillaEdit_BraceMatch(ScintillaEdit* self, intptr_t pos, intptr_t maxReStyle) {
	sptr_t _ret = self->braceMatch(static_cast<sptr_t>(pos), static_cast<sptr_t>(maxReStyle));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_BraceMatchNext(ScintillaEdit* self, intptr_t pos, intptr_t startPos) {
	sptr_t _ret = self->braceMatchNext(static_cast<sptr_t>(pos), static_cast<sptr_t>(startPos));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_ViewEOL(const ScintillaEdit* self) {
	return self->viewEOL();
}

void ScintillaEdit_SetViewEOL(ScintillaEdit* self, bool visible) {
	self->setViewEOL(visible);
}

intptr_t ScintillaEdit_DocPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->docPointer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetDocPointer(ScintillaEdit* self, intptr_t doc) {
	self->setDocPointer(static_cast<sptr_t>(doc));
}

void ScintillaEdit_SetModEventMask(ScintillaEdit* self, intptr_t eventMask) {
	self->setModEventMask(static_cast<sptr_t>(eventMask));
}

intptr_t ScintillaEdit_EdgeColumn(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeColumn();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEdgeColumn(ScintillaEdit* self, intptr_t column) {
	self->setEdgeColumn(static_cast<sptr_t>(column));
}

intptr_t ScintillaEdit_EdgeMode(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEdgeMode(ScintillaEdit* self, intptr_t edgeMode) {
	self->setEdgeMode(static_cast<sptr_t>(edgeMode));
}

intptr_t ScintillaEdit_EdgeColour(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeColour();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetEdgeColour(ScintillaEdit* self, intptr_t edgeColour) {
	self->setEdgeColour(static_cast<sptr_t>(edgeColour));
}

void ScintillaEdit_MultiEdgeAddLine(ScintillaEdit* self, intptr_t column, intptr_t edgeColour) {
	self->multiEdgeAddLine(static_cast<sptr_t>(column), static_cast<sptr_t>(edgeColour));
}

void ScintillaEdit_MultiEdgeClearAll(ScintillaEdit* self) {
	self->multiEdgeClearAll();
}

intptr_t ScintillaEdit_MultiEdgeColumn(const ScintillaEdit* self, intptr_t which) {
	sptr_t _ret = self->multiEdgeColumn(static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SearchAnchor(ScintillaEdit* self) {
	self->searchAnchor();
}

intptr_t ScintillaEdit_SearchNext(ScintillaEdit* self, intptr_t searchFlags, const char* text) {
	sptr_t _ret = self->searchNext(static_cast<sptr_t>(searchFlags), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SearchPrev(ScintillaEdit* self, intptr_t searchFlags, const char* text) {
	sptr_t _ret = self->searchPrev(static_cast<sptr_t>(searchFlags), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LinesOnScreen(const ScintillaEdit* self) {
	sptr_t _ret = self->linesOnScreen();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_UsePopUp(ScintillaEdit* self, intptr_t popUpMode) {
	self->usePopUp(static_cast<sptr_t>(popUpMode));
}

bool ScintillaEdit_SelectionIsRectangle(const ScintillaEdit* self) {
	return self->selectionIsRectangle();
}

void ScintillaEdit_SetZoom(ScintillaEdit* self, intptr_t zoomInPoints) {
	self->setZoom(static_cast<sptr_t>(zoomInPoints));
}

intptr_t ScintillaEdit_Zoom(const ScintillaEdit* self) {
	sptr_t _ret = self->zoom();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CreateDocument(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions) {
	sptr_t _ret = self->createDocument(static_cast<sptr_t>(bytes), static_cast<sptr_t>(documentOptions));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AddRefDocument(ScintillaEdit* self, intptr_t doc) {
	self->addRefDocument(static_cast<sptr_t>(doc));
}

void ScintillaEdit_ReleaseDocument(ScintillaEdit* self, intptr_t doc) {
	self->releaseDocument(static_cast<sptr_t>(doc));
}

intptr_t ScintillaEdit_DocumentOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->documentOptions();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_ModEventMask(const ScintillaEdit* self) {
	sptr_t _ret = self->modEventMask();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCommandEvents(ScintillaEdit* self, bool commandEvents) {
	self->setCommandEvents(commandEvents);
}

bool ScintillaEdit_CommandEvents(const ScintillaEdit* self) {
	return self->commandEvents();
}

void ScintillaEdit_SetFocus(ScintillaEdit* self, bool focus) {
	self->setFocus(focus);
}

bool ScintillaEdit_Focus(const ScintillaEdit* self) {
	return self->focus();
}

void ScintillaEdit_SetStatus(ScintillaEdit* self, intptr_t status) {
	self->setStatus(static_cast<sptr_t>(status));
}

intptr_t ScintillaEdit_Status(const ScintillaEdit* self) {
	sptr_t _ret = self->status();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMouseDownCaptures(ScintillaEdit* self, bool captures) {
	self->setMouseDownCaptures(captures);
}

bool ScintillaEdit_MouseDownCaptures(const ScintillaEdit* self) {
	return self->mouseDownCaptures();
}

void ScintillaEdit_SetMouseWheelCaptures(ScintillaEdit* self, bool captures) {
	self->setMouseWheelCaptures(captures);
}

bool ScintillaEdit_MouseWheelCaptures(const ScintillaEdit* self) {
	return self->mouseWheelCaptures();
}

void ScintillaEdit_SetCursor(ScintillaEdit* self, intptr_t cursorType) {
	self->setCursor(static_cast<sptr_t>(cursorType));
}

intptr_t ScintillaEdit_Cursor(const ScintillaEdit* self) {
	sptr_t _ret = self->cursor();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetControlCharSymbol(ScintillaEdit* self, intptr_t symbol) {
	self->setControlCharSymbol(static_cast<sptr_t>(symbol));
}

intptr_t ScintillaEdit_ControlCharSymbol(const ScintillaEdit* self) {
	sptr_t _ret = self->controlCharSymbol();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_WordPartLeft(ScintillaEdit* self) {
	self->wordPartLeft();
}

void ScintillaEdit_WordPartLeftExtend(ScintillaEdit* self) {
	self->wordPartLeftExtend();
}

void ScintillaEdit_WordPartRight(ScintillaEdit* self) {
	self->wordPartRight();
}

void ScintillaEdit_WordPartRightExtend(ScintillaEdit* self) {
	self->wordPartRightExtend();
}

void ScintillaEdit_SetVisiblePolicy(ScintillaEdit* self, intptr_t visiblePolicy, intptr_t visibleSlop) {
	self->setVisiblePolicy(static_cast<sptr_t>(visiblePolicy), static_cast<sptr_t>(visibleSlop));
}

void ScintillaEdit_DelLineLeft(ScintillaEdit* self) {
	self->delLineLeft();
}

void ScintillaEdit_DelLineRight(ScintillaEdit* self) {
	self->delLineRight();
}

void ScintillaEdit_SetXOffset(ScintillaEdit* self, intptr_t xOffset) {
	self->setXOffset(static_cast<sptr_t>(xOffset));
}

intptr_t ScintillaEdit_XOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->xOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ChooseCaretX(ScintillaEdit* self) {
	self->chooseCaretX();
}

void ScintillaEdit_GrabFocus(ScintillaEdit* self) {
	self->grabFocus();
}

void ScintillaEdit_SetXCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop) {
	self->setXCaretPolicy(static_cast<sptr_t>(caretPolicy), static_cast<sptr_t>(caretSlop));
}

void ScintillaEdit_SetYCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop) {
	self->setYCaretPolicy(static_cast<sptr_t>(caretPolicy), static_cast<sptr_t>(caretSlop));
}

void ScintillaEdit_SetPrintWrapMode(ScintillaEdit* self, intptr_t wrapMode) {
	self->setPrintWrapMode(static_cast<sptr_t>(wrapMode));
}

intptr_t ScintillaEdit_PrintWrapMode(const ScintillaEdit* self) {
	sptr_t _ret = self->printWrapMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetHotspotActiveFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setHotspotActiveFore(useSetting, static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_HotspotActiveFore(const ScintillaEdit* self) {
	sptr_t _ret = self->hotspotActiveFore();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetHotspotActiveBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setHotspotActiveBack(useSetting, static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_HotspotActiveBack(const ScintillaEdit* self) {
	sptr_t _ret = self->hotspotActiveBack();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetHotspotActiveUnderline(ScintillaEdit* self, bool underline) {
	self->setHotspotActiveUnderline(underline);
}

bool ScintillaEdit_HotspotActiveUnderline(const ScintillaEdit* self) {
	return self->hotspotActiveUnderline();
}

void ScintillaEdit_SetHotspotSingleLine(ScintillaEdit* self, bool singleLine) {
	self->setHotspotSingleLine(singleLine);
}

bool ScintillaEdit_HotspotSingleLine(const ScintillaEdit* self) {
	return self->hotspotSingleLine();
}

void ScintillaEdit_ParaDown(ScintillaEdit* self) {
	self->paraDown();
}

void ScintillaEdit_ParaDownExtend(ScintillaEdit* self) {
	self->paraDownExtend();
}

void ScintillaEdit_ParaUp(ScintillaEdit* self) {
	self->paraUp();
}

void ScintillaEdit_ParaUpExtend(ScintillaEdit* self) {
	self->paraUpExtend();
}

intptr_t ScintillaEdit_PositionBefore(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->positionBefore(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PositionAfter(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->positionAfter(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PositionRelative(ScintillaEdit* self, intptr_t pos, intptr_t relative) {
	sptr_t _ret = self->positionRelative(static_cast<sptr_t>(pos), static_cast<sptr_t>(relative));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PositionRelativeCodeUnits(ScintillaEdit* self, intptr_t pos, intptr_t relative) {
	sptr_t _ret = self->positionRelativeCodeUnits(static_cast<sptr_t>(pos), static_cast<sptr_t>(relative));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_CopyRange(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->copyRange(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_CopyText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->copyText(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_SetSelectionMode(ScintillaEdit* self, intptr_t selectionMode) {
	self->setSelectionMode(static_cast<sptr_t>(selectionMode));
}

void ScintillaEdit_ChangeSelectionMode(ScintillaEdit* self, intptr_t selectionMode) {
	self->changeSelectionMode(static_cast<sptr_t>(selectionMode));
}

intptr_t ScintillaEdit_SelectionMode(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMoveExtendsSelection(ScintillaEdit* self, bool moveExtendsSelection) {
	self->setMoveExtendsSelection(moveExtendsSelection);
}

bool ScintillaEdit_MoveExtendsSelection(const ScintillaEdit* self) {
	return self->moveExtendsSelection();
}

intptr_t ScintillaEdit_GetLineSelStartPosition(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->getLineSelStartPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_GetLineSelEndPosition(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->getLineSelEndPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_LineDownRectExtend(ScintillaEdit* self) {
	self->lineDownRectExtend();
}

void ScintillaEdit_LineUpRectExtend(ScintillaEdit* self) {
	self->lineUpRectExtend();
}

void ScintillaEdit_CharLeftRectExtend(ScintillaEdit* self) {
	self->charLeftRectExtend();
}

void ScintillaEdit_CharRightRectExtend(ScintillaEdit* self) {
	self->charRightRectExtend();
}

void ScintillaEdit_HomeRectExtend(ScintillaEdit* self) {
	self->homeRectExtend();
}

void ScintillaEdit_VCHomeRectExtend(ScintillaEdit* self) {
	self->vCHomeRectExtend();
}

void ScintillaEdit_LineEndRectExtend(ScintillaEdit* self) {
	self->lineEndRectExtend();
}

void ScintillaEdit_PageUpRectExtend(ScintillaEdit* self) {
	self->pageUpRectExtend();
}

void ScintillaEdit_PageDownRectExtend(ScintillaEdit* self) {
	self->pageDownRectExtend();
}

void ScintillaEdit_StutteredPageUp(ScintillaEdit* self) {
	self->stutteredPageUp();
}

void ScintillaEdit_StutteredPageUpExtend(ScintillaEdit* self) {
	self->stutteredPageUpExtend();
}

void ScintillaEdit_StutteredPageDown(ScintillaEdit* self) {
	self->stutteredPageDown();
}

void ScintillaEdit_StutteredPageDownExtend(ScintillaEdit* self) {
	self->stutteredPageDownExtend();
}

void ScintillaEdit_WordLeftEnd(ScintillaEdit* self) {
	self->wordLeftEnd();
}

void ScintillaEdit_WordLeftEndExtend(ScintillaEdit* self) {
	self->wordLeftEndExtend();
}

void ScintillaEdit_WordRightEnd(ScintillaEdit* self) {
	self->wordRightEnd();
}

void ScintillaEdit_WordRightEndExtend(ScintillaEdit* self) {
	self->wordRightEndExtend();
}

void ScintillaEdit_SetWhitespaceChars(ScintillaEdit* self, const char* characters) {
	self->setWhitespaceChars(characters);
}

struct miqt_string ScintillaEdit_WhitespaceChars(const ScintillaEdit* self) {
	QByteArray _qb = self->whitespaceChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetPunctuationChars(ScintillaEdit* self, const char* characters) {
	self->setPunctuationChars(characters);
}

struct miqt_string ScintillaEdit_PunctuationChars(const ScintillaEdit* self) {
	QByteArray _qb = self->punctuationChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetCharsDefault(ScintillaEdit* self) {
	self->setCharsDefault();
}

intptr_t ScintillaEdit_AutoCCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCCurrent();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_AutoCCurrentText(const ScintillaEdit* self) {
	QByteArray _qb = self->autoCCurrentText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_AutoCSetCaseInsensitiveBehaviour(ScintillaEdit* self, intptr_t behaviour) {
	self->autoCSetCaseInsensitiveBehaviour(static_cast<sptr_t>(behaviour));
}

intptr_t ScintillaEdit_AutoCCaseInsensitiveBehaviour(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCCaseInsensitiveBehaviour();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetMulti(ScintillaEdit* self, intptr_t multi) {
	self->autoCSetMulti(static_cast<sptr_t>(multi));
}

intptr_t ScintillaEdit_AutoCMulti(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMulti();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AutoCSetOrder(ScintillaEdit* self, intptr_t order) {
	self->autoCSetOrder(static_cast<sptr_t>(order));
}

intptr_t ScintillaEdit_AutoCOrder(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCOrder();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_Allocate(ScintillaEdit* self, intptr_t bytes) {
	self->allocate(static_cast<sptr_t>(bytes));
}

struct miqt_string ScintillaEdit_TargetAsUTF8(ScintillaEdit* self) {
	QByteArray _qb = self->targetAsUTF8();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetLengthForEncode(ScintillaEdit* self, intptr_t bytes) {
	self->setLengthForEncode(static_cast<sptr_t>(bytes));
}

struct miqt_string ScintillaEdit_EncodedFromUTF8(ScintillaEdit* self, const char* utf8) {
	QByteArray _qb = self->encodedFromUTF8(utf8);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_FindColumn(ScintillaEdit* self, intptr_t line, intptr_t column) {
	sptr_t _ret = self->findColumn(static_cast<sptr_t>(line), static_cast<sptr_t>(column));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CaretSticky(const ScintillaEdit* self) {
	sptr_t _ret = self->caretSticky();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretSticky(ScintillaEdit* self, intptr_t useCaretStickyBehaviour) {
	self->setCaretSticky(static_cast<sptr_t>(useCaretStickyBehaviour));
}

void ScintillaEdit_ToggleCaretSticky(ScintillaEdit* self) {
	self->toggleCaretSticky();
}

void ScintillaEdit_SetPasteConvertEndings(ScintillaEdit* self, bool convert) {
	self->setPasteConvertEndings(convert);
}

bool ScintillaEdit_PasteConvertEndings(const ScintillaEdit* self) {
	return self->pasteConvertEndings();
}

void ScintillaEdit_ReplaceRectangular(ScintillaEdit* self, intptr_t length, const char* text) {
	self->replaceRectangular(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_SelectionDuplicate(ScintillaEdit* self) {
	self->selectionDuplicate();
}

void ScintillaEdit_SetCaretLineBackAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setCaretLineBackAlpha(static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_CaretLineBackAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineBackAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetCaretStyle(ScintillaEdit* self, intptr_t caretStyle) {
	self->setCaretStyle(static_cast<sptr_t>(caretStyle));
}

intptr_t ScintillaEdit_CaretStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->caretStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetIndicatorCurrent(ScintillaEdit* self, intptr_t indicator) {
	self->setIndicatorCurrent(static_cast<sptr_t>(indicator));
}

intptr_t ScintillaEdit_IndicatorCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->indicatorCurrent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetIndicatorValue(ScintillaEdit* self, intptr_t value) {
	self->setIndicatorValue(static_cast<sptr_t>(value));
}

intptr_t ScintillaEdit_IndicatorValue(const ScintillaEdit* self) {
	sptr_t _ret = self->indicatorValue();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicatorFillRange(ScintillaEdit* self, intptr_t start, intptr_t lengthFill) {
	self->indicatorFillRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthFill));
}

void ScintillaEdit_IndicatorClearRange(ScintillaEdit* self, intptr_t start, intptr_t lengthClear) {
	self->indicatorClearRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthClear));
}

intptr_t ScintillaEdit_IndicatorAllOnFor(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->indicatorAllOnFor(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_IndicatorValueAt(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorValueAt(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_IndicatorStart(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorStart(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_IndicatorEnd(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorEnd(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetPositionCache(ScintillaEdit* self, intptr_t size) {
	self->setPositionCache(static_cast<sptr_t>(size));
}

intptr_t ScintillaEdit_PositionCache(const ScintillaEdit* self) {
	sptr_t _ret = self->positionCache();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetLayoutThreads(ScintillaEdit* self, intptr_t threads) {
	self->setLayoutThreads(static_cast<sptr_t>(threads));
}

intptr_t ScintillaEdit_LayoutThreads(const ScintillaEdit* self) {
	sptr_t _ret = self->layoutThreads();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_CopyAllowLine(ScintillaEdit* self) {
	self->copyAllowLine();
}

void ScintillaEdit_CutAllowLine(ScintillaEdit* self) {
	self->cutAllowLine();
}

void ScintillaEdit_SetCopySeparator(ScintillaEdit* self, const char* separator) {
	self->setCopySeparator(separator);
}

struct miqt_string ScintillaEdit_CopySeparator(const ScintillaEdit* self) {
	QByteArray _qb = self->copySeparator();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_CharacterPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->characterPointer();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_RangePointer(const ScintillaEdit* self, intptr_t start, intptr_t lengthRange) {
	sptr_t _ret = self->rangePointer(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthRange));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_GapPosition(const ScintillaEdit* self) {
	sptr_t _ret = self->gapPosition();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha) {
	self->indicSetAlpha(static_cast<sptr_t>(indicator), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_IndicAlpha(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicAlpha(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_IndicSetOutlineAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha) {
	self->indicSetOutlineAlpha(static_cast<sptr_t>(indicator), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_IndicOutlineAlpha(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicOutlineAlpha(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetExtraAscent(ScintillaEdit* self, intptr_t extraAscent) {
	self->setExtraAscent(static_cast<sptr_t>(extraAscent));
}

intptr_t ScintillaEdit_ExtraAscent(const ScintillaEdit* self) {
	sptr_t _ret = self->extraAscent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetExtraDescent(ScintillaEdit* self, intptr_t extraDescent) {
	self->setExtraDescent(static_cast<sptr_t>(extraDescent));
}

intptr_t ScintillaEdit_ExtraDescent(const ScintillaEdit* self) {
	sptr_t _ret = self->extraDescent();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_MarkerSymbolDefined(ScintillaEdit* self, intptr_t markerNumber) {
	sptr_t _ret = self->markerSymbolDefined(static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarginSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->marginSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_MarginText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->marginText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_MarginSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->marginSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_MarginStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->marginStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_MarginSetStyles(ScintillaEdit* self, intptr_t line, const char* styles) {
	self->marginSetStyles(static_cast<sptr_t>(line), styles);
}

struct miqt_string ScintillaEdit_MarginStyles(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->marginStyles(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_MarginTextClearAll(ScintillaEdit* self) {
	self->marginTextClearAll();
}

void ScintillaEdit_MarginSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->marginSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_MarginStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->marginStyleOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMarginOptions(ScintillaEdit* self, intptr_t marginOptions) {
	self->setMarginOptions(static_cast<sptr_t>(marginOptions));
}

intptr_t ScintillaEdit_MarginOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->marginOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->annotationSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_AnnotationText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->annotationText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_AnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->annotationSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_AnnotationStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->annotationStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AnnotationSetStyles(ScintillaEdit* self, intptr_t line, const char* styles) {
	self->annotationSetStyles(static_cast<sptr_t>(line), styles);
}

struct miqt_string ScintillaEdit_AnnotationStyles(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->annotationStyles(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_AnnotationLines(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->annotationLines(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AnnotationClearAll(ScintillaEdit* self) {
	self->annotationClearAll();
}

void ScintillaEdit_AnnotationSetVisible(ScintillaEdit* self, intptr_t visible) {
	self->annotationSetVisible(static_cast<sptr_t>(visible));
}

intptr_t ScintillaEdit_AnnotationVisible(const ScintillaEdit* self) {
	sptr_t _ret = self->annotationVisible();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->annotationSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_AnnotationStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->annotationStyleOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_ReleaseAllExtendedStyles(ScintillaEdit* self) {
	self->releaseAllExtendedStyles();
}

intptr_t ScintillaEdit_AllocateExtendedStyles(ScintillaEdit* self, intptr_t numberStyles) {
	sptr_t _ret = self->allocateExtendedStyles(static_cast<sptr_t>(numberStyles));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AddUndoAction(ScintillaEdit* self, intptr_t token, intptr_t flags) {
	self->addUndoAction(static_cast<sptr_t>(token), static_cast<sptr_t>(flags));
}

intptr_t ScintillaEdit_CharPositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->charPositionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CharPositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->charPositionFromPointClose(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetMouseSelectionRectangularSwitch(ScintillaEdit* self, bool mouseSelectionRectangularSwitch) {
	self->setMouseSelectionRectangularSwitch(mouseSelectionRectangularSwitch);
}

bool ScintillaEdit_MouseSelectionRectangularSwitch(const ScintillaEdit* self) {
	return self->mouseSelectionRectangularSwitch();
}

void ScintillaEdit_SetMultipleSelection(ScintillaEdit* self, bool multipleSelection) {
	self->setMultipleSelection(multipleSelection);
}

bool ScintillaEdit_MultipleSelection(const ScintillaEdit* self) {
	return self->multipleSelection();
}

void ScintillaEdit_SetAdditionalSelectionTyping(ScintillaEdit* self, bool additionalSelectionTyping) {
	self->setAdditionalSelectionTyping(additionalSelectionTyping);
}

bool ScintillaEdit_AdditionalSelectionTyping(const ScintillaEdit* self) {
	return self->additionalSelectionTyping();
}

void ScintillaEdit_SetAdditionalCaretsBlink(ScintillaEdit* self, bool additionalCaretsBlink) {
	self->setAdditionalCaretsBlink(additionalCaretsBlink);
}

bool ScintillaEdit_AdditionalCaretsBlink(const ScintillaEdit* self) {
	return self->additionalCaretsBlink();
}

void ScintillaEdit_SetAdditionalCaretsVisible(ScintillaEdit* self, bool additionalCaretsVisible) {
	self->setAdditionalCaretsVisible(additionalCaretsVisible);
}

bool ScintillaEdit_AdditionalCaretsVisible(const ScintillaEdit* self) {
	return self->additionalCaretsVisible();
}

intptr_t ScintillaEdit_Selections(const ScintillaEdit* self) {
	sptr_t _ret = self->selections();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_SelectionEmpty(const ScintillaEdit* self) {
	return self->selectionEmpty();
}

void ScintillaEdit_ClearSelections(ScintillaEdit* self) {
	self->clearSelections();
}

void ScintillaEdit_SetSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor) {
	self->setSelection(static_cast<sptr_t>(caret), static_cast<sptr_t>(anchor));
}

void ScintillaEdit_AddSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor) {
	self->addSelection(static_cast<sptr_t>(caret), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_SelectionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->selectionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_DropSelectionN(ScintillaEdit* self, intptr_t selection) {
	self->dropSelectionN(static_cast<sptr_t>(selection));
}

void ScintillaEdit_SetMainSelection(ScintillaEdit* self, intptr_t selection) {
	self->setMainSelection(static_cast<sptr_t>(selection));
}

intptr_t ScintillaEdit_MainSelection(const ScintillaEdit* self) {
	sptr_t _ret = self->mainSelection();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNCaret(ScintillaEdit* self, intptr_t selection, intptr_t caret) {
	self->setSelectionNCaret(static_cast<sptr_t>(selection), static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_SelectionNCaret(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNCaret(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNAnchor(ScintillaEdit* self, intptr_t selection, intptr_t anchor) {
	self->setSelectionNAnchor(static_cast<sptr_t>(selection), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_SelectionNAnchor(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNAnchor(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNCaretVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space) {
	self->setSelectionNCaretVirtualSpace(static_cast<sptr_t>(selection), static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_SelectionNCaretVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNCaretVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNAnchorVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space) {
	self->setSelectionNAnchorVirtualSpace(static_cast<sptr_t>(selection), static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_SelectionNAnchorVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNAnchorVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNStart(ScintillaEdit* self, intptr_t selection, intptr_t anchor) {
	self->setSelectionNStart(static_cast<sptr_t>(selection), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_SelectionNStart(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNStart(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SelectionNStartVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNStartVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetSelectionNEnd(ScintillaEdit* self, intptr_t selection, intptr_t caret) {
	self->setSelectionNEnd(static_cast<sptr_t>(selection), static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_SelectionNEndVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNEndVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SelectionNEnd(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNEnd(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRectangularSelectionCaret(ScintillaEdit* self, intptr_t caret) {
	self->setRectangularSelectionCaret(static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_RectangularSelectionCaret(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionCaret();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRectangularSelectionAnchor(ScintillaEdit* self, intptr_t anchor) {
	self->setRectangularSelectionAnchor(static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_RectangularSelectionAnchor(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionAnchor();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRectangularSelectionCaretVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setRectangularSelectionCaretVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_RectangularSelectionCaretVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionCaretVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRectangularSelectionAnchorVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setRectangularSelectionAnchorVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_RectangularSelectionAnchorVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionAnchorVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetVirtualSpaceOptions(ScintillaEdit* self, intptr_t virtualSpaceOptions) {
	self->setVirtualSpaceOptions(static_cast<sptr_t>(virtualSpaceOptions));
}

intptr_t ScintillaEdit_VirtualSpaceOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->virtualSpaceOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRectangularSelectionModifier(ScintillaEdit* self, intptr_t modifier) {
	self->setRectangularSelectionModifier(static_cast<sptr_t>(modifier));
}

intptr_t ScintillaEdit_RectangularSelectionModifier(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionModifier();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetAdditionalSelFore(ScintillaEdit* self, intptr_t fore) {
	self->setAdditionalSelFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_SetAdditionalSelBack(ScintillaEdit* self, intptr_t back) {
	self->setAdditionalSelBack(static_cast<sptr_t>(back));
}

void ScintillaEdit_SetAdditionalSelAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setAdditionalSelAlpha(static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_AdditionalSelAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->additionalSelAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetAdditionalCaretFore(ScintillaEdit* self, intptr_t fore) {
	self->setAdditionalCaretFore(static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_AdditionalCaretFore(const ScintillaEdit* self) {
	sptr_t _ret = self->additionalCaretFore();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_RotateSelection(ScintillaEdit* self) {
	self->rotateSelection();
}

void ScintillaEdit_SwapMainAnchorCaret(ScintillaEdit* self) {
	self->swapMainAnchorCaret();
}

void ScintillaEdit_MultipleSelectAddNext(ScintillaEdit* self) {
	self->multipleSelectAddNext();
}

void ScintillaEdit_MultipleSelectAddEach(ScintillaEdit* self) {
	self->multipleSelectAddEach();
}

intptr_t ScintillaEdit_ChangeLexerState(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->changeLexerState(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_ContractedFoldNext(ScintillaEdit* self, intptr_t lineStart) {
	sptr_t _ret = self->contractedFoldNext(static_cast<sptr_t>(lineStart));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_VerticalCentreCaret(ScintillaEdit* self) {
	self->verticalCentreCaret();
}

void ScintillaEdit_MoveSelectedLinesUp(ScintillaEdit* self) {
	self->moveSelectedLinesUp();
}

void ScintillaEdit_MoveSelectedLinesDown(ScintillaEdit* self) {
	self->moveSelectedLinesDown();
}

void ScintillaEdit_SetIdentifier(ScintillaEdit* self, intptr_t identifier) {
	self->setIdentifier(static_cast<sptr_t>(identifier));
}

intptr_t ScintillaEdit_Identifier(const ScintillaEdit* self) {
	sptr_t _ret = self->identifier();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_RGBAImageSetWidth(ScintillaEdit* self, intptr_t width) {
	self->rGBAImageSetWidth(static_cast<sptr_t>(width));
}

void ScintillaEdit_RGBAImageSetHeight(ScintillaEdit* self, intptr_t height) {
	self->rGBAImageSetHeight(static_cast<sptr_t>(height));
}

void ScintillaEdit_RGBAImageSetScale(ScintillaEdit* self, intptr_t scalePercent) {
	self->rGBAImageSetScale(static_cast<sptr_t>(scalePercent));
}

void ScintillaEdit_MarkerDefineRGBAImage(ScintillaEdit* self, intptr_t markerNumber, const char* pixels) {
	self->markerDefineRGBAImage(static_cast<sptr_t>(markerNumber), pixels);
}

void ScintillaEdit_RegisterRGBAImage(ScintillaEdit* self, intptr_t typeVal, const char* pixels) {
	self->registerRGBAImage(static_cast<sptr_t>(typeVal), pixels);
}

void ScintillaEdit_ScrollToStart(ScintillaEdit* self) {
	self->scrollToStart();
}

void ScintillaEdit_ScrollToEnd(ScintillaEdit* self) {
	self->scrollToEnd();
}

void ScintillaEdit_SetTechnology(ScintillaEdit* self, intptr_t technology) {
	self->setTechnology(static_cast<sptr_t>(technology));
}

intptr_t ScintillaEdit_Technology(const ScintillaEdit* self) {
	sptr_t _ret = self->technology();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_CreateLoader(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions) {
	sptr_t _ret = self->createLoader(static_cast<sptr_t>(bytes), static_cast<sptr_t>(documentOptions));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_FindIndicatorShow(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->findIndicatorShow(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_FindIndicatorFlash(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->findIndicatorFlash(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_FindIndicatorHide(ScintillaEdit* self) {
	self->findIndicatorHide();
}

void ScintillaEdit_VCHomeDisplay(ScintillaEdit* self) {
	self->vCHomeDisplay();
}

void ScintillaEdit_VCHomeDisplayExtend(ScintillaEdit* self) {
	self->vCHomeDisplayExtend();
}

bool ScintillaEdit_CaretLineVisibleAlways(const ScintillaEdit* self) {
	return self->caretLineVisibleAlways();
}

void ScintillaEdit_SetCaretLineVisibleAlways(ScintillaEdit* self, bool alwaysVisible) {
	self->setCaretLineVisibleAlways(alwaysVisible);
}

void ScintillaEdit_SetLineEndTypesAllowed(ScintillaEdit* self, intptr_t lineEndBitSet) {
	self->setLineEndTypesAllowed(static_cast<sptr_t>(lineEndBitSet));
}

intptr_t ScintillaEdit_LineEndTypesAllowed(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesAllowed();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_LineEndTypesActive(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesActive();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRepresentation(ScintillaEdit* self, const char* encodedCharacter, const char* representation) {
	self->setRepresentation(encodedCharacter, representation);
}

struct miqt_string ScintillaEdit_Representation(const ScintillaEdit* self, const char* encodedCharacter) {
	QByteArray _qb = self->representation(encodedCharacter);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_ClearRepresentation(ScintillaEdit* self, const char* encodedCharacter) {
	self->clearRepresentation(encodedCharacter);
}

void ScintillaEdit_ClearAllRepresentations(ScintillaEdit* self) {
	self->clearAllRepresentations();
}

void ScintillaEdit_SetRepresentationAppearance(ScintillaEdit* self, const char* encodedCharacter, intptr_t appearance) {
	self->setRepresentationAppearance(encodedCharacter, static_cast<sptr_t>(appearance));
}

intptr_t ScintillaEdit_RepresentationAppearance(const ScintillaEdit* self, const char* encodedCharacter) {
	sptr_t _ret = self->representationAppearance(encodedCharacter);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetRepresentationColour(ScintillaEdit* self, const char* encodedCharacter, intptr_t colour) {
	self->setRepresentationColour(encodedCharacter, static_cast<sptr_t>(colour));
}

intptr_t ScintillaEdit_RepresentationColour(const ScintillaEdit* self, const char* encodedCharacter) {
	sptr_t _ret = self->representationColour(encodedCharacter);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_EOLAnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->eOLAnnotationSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_EOLAnnotationText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->eOLAnnotationText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_EOLAnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->eOLAnnotationSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_EOLAnnotationStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->eOLAnnotationStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_EOLAnnotationClearAll(ScintillaEdit* self) {
	self->eOLAnnotationClearAll();
}

void ScintillaEdit_EOLAnnotationSetVisible(ScintillaEdit* self, intptr_t visible) {
	self->eOLAnnotationSetVisible(static_cast<sptr_t>(visible));
}

intptr_t ScintillaEdit_EOLAnnotationVisible(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLAnnotationVisible();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_EOLAnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->eOLAnnotationSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_EOLAnnotationStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLAnnotationStyleOffset();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_SupportsFeature(const ScintillaEdit* self, intptr_t feature) {
	return self->supportsFeature(static_cast<sptr_t>(feature));
}

intptr_t ScintillaEdit_LineCharacterIndex(const ScintillaEdit* self) {
	sptr_t _ret = self->lineCharacterIndex();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_AllocateLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex) {
	self->allocateLineCharacterIndex(static_cast<sptr_t>(lineCharacterIndex));
}

void ScintillaEdit_ReleaseLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex) {
	self->releaseLineCharacterIndex(static_cast<sptr_t>(lineCharacterIndex));
}

intptr_t ScintillaEdit_LineFromIndexPosition(ScintillaEdit* self, intptr_t pos, intptr_t lineCharacterIndex) {
	sptr_t _ret = self->lineFromIndexPosition(static_cast<sptr_t>(pos), static_cast<sptr_t>(lineCharacterIndex));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_IndexPositionFromLine(ScintillaEdit* self, intptr_t line, intptr_t lineCharacterIndex) {
	sptr_t _ret = self->indexPositionFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(lineCharacterIndex));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_StartRecord(ScintillaEdit* self) {
	self->startRecord();
}

void ScintillaEdit_StopRecord(ScintillaEdit* self) {
	self->stopRecord();
}

intptr_t ScintillaEdit_Lexer(const ScintillaEdit* self) {
	sptr_t _ret = self->lexer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_Colourise(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->colourise(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_SetProperty(ScintillaEdit* self, const char* key, const char* value) {
	self->setProperty(key, value);
}

void ScintillaEdit_SetKeyWords(ScintillaEdit* self, intptr_t keyWordSet, const char* keyWords) {
	self->setKeyWords(static_cast<sptr_t>(keyWordSet), keyWords);
}

struct miqt_string ScintillaEdit_Property(const ScintillaEdit* self, const char* key) {
	QByteArray _qb = self->property(key);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_PropertyExpanded(const ScintillaEdit* self, const char* key) {
	QByteArray _qb = self->propertyExpanded(key);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_PropertyInt(const ScintillaEdit* self, const char* key, intptr_t defaultValue) {
	sptr_t _ret = self->propertyInt(key, static_cast<sptr_t>(defaultValue));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_LexerLanguage(const ScintillaEdit* self) {
	QByteArray _qb = self->lexerLanguage();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_PrivateLexerCall(ScintillaEdit* self, intptr_t operation, intptr_t pointer) {
	sptr_t _ret = self->privateLexerCall(static_cast<sptr_t>(operation), static_cast<sptr_t>(pointer));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_PropertyNames(ScintillaEdit* self) {
	QByteArray _qb = self->propertyNames();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_PropertyType(ScintillaEdit* self, const char* name) {
	sptr_t _ret = self->propertyType(name);
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_DescribeProperty(ScintillaEdit* self, const char* name) {
	QByteArray _qb = self->describeProperty(name);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_DescribeKeyWordSets(ScintillaEdit* self) {
	QByteArray _qb = self->describeKeyWordSets();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_LineEndTypesSupported(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesSupported();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_AllocateSubStyles(ScintillaEdit* self, intptr_t styleBase, intptr_t numberStyles) {
	sptr_t _ret = self->allocateSubStyles(static_cast<sptr_t>(styleBase), static_cast<sptr_t>(numberStyles));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SubStylesStart(const ScintillaEdit* self, intptr_t styleBase) {
	sptr_t _ret = self->subStylesStart(static_cast<sptr_t>(styleBase));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_SubStylesLength(const ScintillaEdit* self, intptr_t styleBase) {
	sptr_t _ret = self->subStylesLength(static_cast<sptr_t>(styleBase));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_StyleFromSubStyle(const ScintillaEdit* self, intptr_t subStyle) {
	sptr_t _ret = self->styleFromSubStyle(static_cast<sptr_t>(subStyle));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_PrimaryStyleFromStyle(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->primaryStyleFromStyle(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_FreeSubStyles(ScintillaEdit* self) {
	self->freeSubStyles();
}

void ScintillaEdit_SetIdentifiers(ScintillaEdit* self, intptr_t style, const char* identifiers) {
	self->setIdentifiers(static_cast<sptr_t>(style), identifiers);
}

intptr_t ScintillaEdit_DistanceToSecondaryStyles(const ScintillaEdit* self) {
	sptr_t _ret = self->distanceToSecondaryStyles();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_SubStyleBases(const ScintillaEdit* self) {
	QByteArray _qb = self->subStyleBases();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_NamedStyles(const ScintillaEdit* self) {
	sptr_t _ret = self->namedStyles();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_NameOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->nameOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TagsOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->tagsOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_DescriptionOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->descriptionOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_SetILexer(ScintillaEdit* self, intptr_t ilexer) {
	self->setILexer(static_cast<sptr_t>(ilexer));
}

intptr_t ScintillaEdit_Bidirectional(const ScintillaEdit* self) {
	sptr_t _ret = self->bidirectional();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_SetBidirectional(ScintillaEdit* self, intptr_t bidirectional) {
	self->setBidirectional(static_cast<sptr_t>(bidirectional));
}

struct miqt_string ScintillaEdit_Tr2(const char* s, const char* c) {
	QString _ret = ScintillaEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = ScintillaEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_override_virtual_Send(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__Send = slot;
}

intptr_t ScintillaEdit_virtualbase_Send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {
	return ( (const MiqtVirtualScintillaEdit*)(self) )->virtualbase_Send(iMessage, wParam, lParam);
}

void ScintillaEdit_override_virtual_Sends(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__Sends = slot;
}

intptr_t ScintillaEdit_virtualbase_Sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s) {
	return ( (const MiqtVirtualScintillaEdit*)(self) )->virtualbase_Sends(iMessage, wParam, s);
}

void ScintillaEdit_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__Event = slot;
}

bool ScintillaEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_Event(event);
}

void ScintillaEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__PaintEvent = slot;
}

void ScintillaEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_PaintEvent(event);
}

void ScintillaEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__WheelEvent = slot;
}

void ScintillaEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_WheelEvent(event);
}

void ScintillaEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__FocusInEvent = slot;
}

void ScintillaEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_FocusInEvent(event);
}

void ScintillaEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__FocusOutEvent = slot;
}

void ScintillaEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

void ScintillaEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__ResizeEvent = slot;
}

void ScintillaEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_ResizeEvent(event);
}

void ScintillaEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__KeyPressEvent = slot;
}

void ScintillaEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

void ScintillaEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__MousePressEvent = slot;
}

void ScintillaEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_MousePressEvent(event);
}

void ScintillaEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__MouseReleaseEvent = slot;
}

void ScintillaEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void ScintillaEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void ScintillaEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void ScintillaEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__MouseMoveEvent = slot;
}

void ScintillaEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

void ScintillaEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__ContextMenuEvent = slot;
}

void ScintillaEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

void ScintillaEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__DragEnterEvent = slot;
}

void ScintillaEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_DragEnterEvent(event);
}

void ScintillaEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__DragLeaveEvent = slot;
}

void ScintillaEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_DragLeaveEvent(event);
}

void ScintillaEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__DragMoveEvent = slot;
}

void ScintillaEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_DragMoveEvent(event);
}

void ScintillaEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__DropEvent = slot;
}

void ScintillaEdit_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_DropEvent(event);
}

void ScintillaEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__InputMethodEvent = slot;
}

void ScintillaEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_InputMethodEvent(event);
}

void ScintillaEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* ScintillaEdit_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualScintillaEdit*)(self) )->virtualbase_InputMethodQuery(query);
}

void ScintillaEdit_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) )->handle__ScrollContentsBy = slot;
}

void ScintillaEdit_virtualbase_ScrollContentsBy(void* self, int param1, int param2) {
	( (MiqtVirtualScintillaEdit*)(self) )->virtualbase_ScrollContentsBy(param1, param2);
}

void ScintillaEdit_Delete(ScintillaEdit* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualScintillaEdit*>( self );
	} else {
		delete self;
	}
}

