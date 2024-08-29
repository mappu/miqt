#include <QBrush>
#include <QColor>
#include <QPalette>
#include "qpalette.h"

#include "gen_qpalette.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPalette* QPalette_new() {
	return new QPalette();
}

QPalette* QPalette_new2(QColor* button) {
	return new QPalette(*button);
}

QPalette* QPalette_new3(uintptr_t button) {
	return new QPalette(static_cast<Qt::GlobalColor>(button));
}

QPalette* QPalette_new4(QColor* button, QColor* window) {
	return new QPalette(*button, *window);
}

QPalette* QPalette_new5(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	return new QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

QPalette* QPalette_new6(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base) {
	return new QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}

QPalette* QPalette_new7(QPalette* palette) {
	return new QPalette(*palette);
}

void QPalette_OperatorAssign(QPalette* self, QPalette* palette) {
	self->operator=(*palette);
}

void QPalette_Swap(QPalette* self, QPalette* other) {
	self->swap(*other);
}

uintptr_t QPalette_CurrentColorGroup(QPalette* self) {
	QPalette::ColorGroup ret = const_cast<const QPalette*>(self)->currentColorGroup();
	return static_cast<uintptr_t>(ret);
}

void QPalette_SetCurrentColorGroup(QPalette* self, uintptr_t cg) {
	self->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}

QColor* QPalette_Color(QPalette* self, uintptr_t cg, uintptr_t cr) {
	const QColor& ret = const_cast<const QPalette*>(self)->color(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&ret);
}

QBrush* QPalette_Brush(QPalette* self, uintptr_t cg, uintptr_t cr) {
	const QBrush& ret = const_cast<const QPalette*>(self)->brush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

void QPalette_SetColor(QPalette* self, uintptr_t cg, uintptr_t cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_SetColor2(QPalette* self, uintptr_t cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_SetBrush(QPalette* self, uintptr_t cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorRole>(cr), *brush);
}

bool QPalette_IsBrushSet(QPalette* self, uintptr_t cg, uintptr_t cr) {
	return const_cast<const QPalette*>(self)->isBrushSet(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
}

void QPalette_SetBrush2(QPalette* self, uintptr_t cg, uintptr_t cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *brush);
}

void QPalette_SetColorGroup(QPalette* self, uintptr_t cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	self->setColorGroup(static_cast<QPalette::ColorGroup>(cr), *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

bool QPalette_IsEqual(QPalette* self, uintptr_t cr1, uintptr_t cr2) {
	return const_cast<const QPalette*>(self)->isEqual(static_cast<QPalette::ColorGroup>(cr1), static_cast<QPalette::ColorGroup>(cr2));
}

QColor* QPalette_ColorWithCr(QPalette* self, uintptr_t cr) {
	const QColor& ret = const_cast<const QPalette*>(self)->color(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&ret);
}

QBrush* QPalette_BrushWithCr(QPalette* self, uintptr_t cr) {
	const QBrush& ret = const_cast<const QPalette*>(self)->brush(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_WindowText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->windowText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Button(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->button();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Light(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->light();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Dark(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->dark();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Mid(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->mid();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Text(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->text();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Base(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->base();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_AlternateBase(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->alternateBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ToolTipBase(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->toolTipBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ToolTipText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->toolTipText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Window(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->window();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Midlight(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->midlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_BrightText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->brightText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ButtonText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->buttonText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Shadow(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->shadow();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Highlight(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->highlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_HighlightedText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->highlightedText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Link(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->link();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_LinkVisited(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->linkVisited();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_PlaceholderText(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->placeholderText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Foreground(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->foreground();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Background(QPalette* self) {
	const QBrush& ret = const_cast<const QPalette*>(self)->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

bool QPalette_OperatorEqual(QPalette* self, QPalette* p) {
	return const_cast<const QPalette*>(self)->operator==(*p);
}

bool QPalette_OperatorNotEqual(QPalette* self, QPalette* p) {
	return const_cast<const QPalette*>(self)->operator!=(*p);
}

bool QPalette_IsCopyOf(QPalette* self, QPalette* p) {
	return const_cast<const QPalette*>(self)->isCopyOf(*p);
}

long long QPalette_CacheKey(QPalette* self) {
	return const_cast<const QPalette*>(self)->cacheKey();
}

QPalette* QPalette_Resolve(QPalette* self, QPalette* param1) {
	QPalette ret = const_cast<const QPalette*>(self)->resolve(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

unsigned int QPalette_Resolve2(QPalette* self) {
	return const_cast<const QPalette*>(self)->resolve();
}

void QPalette_ResolveWithMask(QPalette* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QPalette_Delete(QPalette* self) {
	delete self;
}

