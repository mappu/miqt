#include <QBrush>
#include <QColor>
#include <QPalette>
#include <QVariant>
#include <qpalette.h>
#include "gen_qpalette.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QPalette* QPalette_new() {
	return new QPalette();
}

QPalette* QPalette_new2(QColor* button) {
	return new QPalette(*button);
}

QPalette* QPalette_new3(int button) {
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

QVariant* QPalette_ToQVariant(const QPalette* self) {
	return new QVariant(self->operator QVariant());
}

int QPalette_CurrentColorGroup(const QPalette* self) {
	QPalette::ColorGroup _ret = self->currentColorGroup();
	return static_cast<int>(_ret);
}

void QPalette_SetCurrentColorGroup(QPalette* self, int cg) {
	self->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}

QColor* QPalette_Color(const QPalette* self, int cg, int cr) {
	const QColor& _ret = self->color(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_Brush(const QPalette* self, int cg, int cr) {
	const QBrush& _ret = self->brush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPalette_SetColor(QPalette* self, int cg, int cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_SetColor2(QPalette* self, int cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_SetBrush(QPalette* self, int cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorRole>(cr), *brush);
}

bool QPalette_IsBrushSet(const QPalette* self, int cg, int cr) {
	return self->isBrushSet(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
}

void QPalette_SetBrush2(QPalette* self, int cg, int cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *brush);
}

void QPalette_SetColorGroup(QPalette* self, int cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	self->setColorGroup(static_cast<QPalette::ColorGroup>(cr), *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

bool QPalette_IsEqual(const QPalette* self, int cr1, int cr2) {
	return self->isEqual(static_cast<QPalette::ColorGroup>(cr1), static_cast<QPalette::ColorGroup>(cr2));
}

QColor* QPalette_ColorWithCr(const QPalette* self, int cr) {
	const QColor& _ret = self->color(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_BrushWithCr(const QPalette* self, int cr) {
	const QBrush& _ret = self->brush(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_WindowText(const QPalette* self) {
	const QBrush& _ret = self->windowText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Button(const QPalette* self) {
	const QBrush& _ret = self->button();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Light(const QPalette* self) {
	const QBrush& _ret = self->light();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Dark(const QPalette* self) {
	const QBrush& _ret = self->dark();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Mid(const QPalette* self) {
	const QBrush& _ret = self->mid();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Text(const QPalette* self) {
	const QBrush& _ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Base(const QPalette* self) {
	const QBrush& _ret = self->base();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_AlternateBase(const QPalette* self) {
	const QBrush& _ret = self->alternateBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_ToolTipBase(const QPalette* self) {
	const QBrush& _ret = self->toolTipBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_ToolTipText(const QPalette* self) {
	const QBrush& _ret = self->toolTipText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Window(const QPalette* self) {
	const QBrush& _ret = self->window();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Midlight(const QPalette* self) {
	const QBrush& _ret = self->midlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_BrightText(const QPalette* self) {
	const QBrush& _ret = self->brightText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_ButtonText(const QPalette* self) {
	const QBrush& _ret = self->buttonText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Shadow(const QPalette* self) {
	const QBrush& _ret = self->shadow();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Highlight(const QPalette* self) {
	const QBrush& _ret = self->highlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_HighlightedText(const QPalette* self) {
	const QBrush& _ret = self->highlightedText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Link(const QPalette* self) {
	const QBrush& _ret = self->link();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_LinkVisited(const QPalette* self) {
	const QBrush& _ret = self->linkVisited();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_PlaceholderText(const QPalette* self) {
	const QBrush& _ret = self->placeholderText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Foreground(const QPalette* self) {
	const QBrush& _ret = self->foreground();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_Background(const QPalette* self) {
	const QBrush& _ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

bool QPalette_OperatorEqual(const QPalette* self, QPalette* p) {
	return (*self == *p);
}

bool QPalette_OperatorNotEqual(const QPalette* self, QPalette* p) {
	return (*self != *p);
}

bool QPalette_IsCopyOf(const QPalette* self, QPalette* p) {
	return self->isCopyOf(*p);
}

long long QPalette_CacheKey(const QPalette* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

QPalette* QPalette_Resolve(const QPalette* self, QPalette* param1) {
	return new QPalette(self->resolve(*param1));
}

unsigned int QPalette_Resolve2(const QPalette* self) {
	uint _ret = self->resolve();
	return static_cast<unsigned int>(_ret);
}

void QPalette_ResolveWithMask(QPalette* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QPalette_Delete(QPalette* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPalette*>( self );
	} else {
		delete self;
	}
}

