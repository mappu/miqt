#include "gen_qpalette.h"
#include "qpalette.h"

#include <QBrush>
#include <QColor>
#include <QPalette>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPalette* QPalette_new() {
	return new QPalette();
}

QPalette* QPalette_new2(QColor* button) {
	return new QPalette(*button);
}

QPalette* QPalette_new3(QColor* button, QColor* window) {
	return new QPalette(*button, *window);
}

QPalette* QPalette_new4(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	return new QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

QPalette* QPalette_new5(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base) {
	return new QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}

QPalette* QPalette_new6(QPalette* palette) {
	return new QPalette(*palette);
}

void QPalette_OperatorAssign(QPalette* self, QPalette* palette) {
	self->operator=(*palette);
}

void QPalette_Swap(QPalette* self, QPalette* other) {
	self->swap(*other);
}

QBrush* QPalette_WindowText(QPalette* self) {
	const QBrush& ret = self->windowText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Button(QPalette* self) {
	const QBrush& ret = self->button();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Light(QPalette* self) {
	const QBrush& ret = self->light();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Dark(QPalette* self) {
	const QBrush& ret = self->dark();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Mid(QPalette* self) {
	const QBrush& ret = self->mid();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Text(QPalette* self) {
	const QBrush& ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Base(QPalette* self) {
	const QBrush& ret = self->base();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_AlternateBase(QPalette* self) {
	const QBrush& ret = self->alternateBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ToolTipBase(QPalette* self) {
	const QBrush& ret = self->toolTipBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ToolTipText(QPalette* self) {
	const QBrush& ret = self->toolTipText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Window(QPalette* self) {
	const QBrush& ret = self->window();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Midlight(QPalette* self) {
	const QBrush& ret = self->midlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_BrightText(QPalette* self) {
	const QBrush& ret = self->brightText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_ButtonText(QPalette* self) {
	const QBrush& ret = self->buttonText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Shadow(QPalette* self) {
	const QBrush& ret = self->shadow();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Highlight(QPalette* self) {
	const QBrush& ret = self->highlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_HighlightedText(QPalette* self) {
	const QBrush& ret = self->highlightedText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Link(QPalette* self) {
	const QBrush& ret = self->link();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_LinkVisited(QPalette* self) {
	const QBrush& ret = self->linkVisited();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_PlaceholderText(QPalette* self) {
	const QBrush& ret = self->placeholderText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Foreground(QPalette* self) {
	const QBrush& ret = self->foreground();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QBrush* QPalette_Background(QPalette* self) {
	const QBrush& ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

bool QPalette_OperatorEqual(QPalette* self, QPalette* p) {
	return self->operator==(*p);
}

bool QPalette_OperatorNotEqual(QPalette* self, QPalette* p) {
	return self->operator!=(*p);
}

bool QPalette_IsCopyOf(QPalette* self, QPalette* p) {
	return self->isCopyOf(*p);
}

int64_t QPalette_CacheKey(QPalette* self) {
	return self->cacheKey();
}

QPalette* QPalette_Resolve(QPalette* self, QPalette* param1) {
	QPalette ret = self->resolve(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

unsigned int QPalette_Resolve2(QPalette* self) {
	return self->resolve();
}

void QPalette_ResolveWithMask(QPalette* self, unsigned int mask) {
	self->resolve(static_cast<uint>(mask));
}

void QPalette_Delete(QPalette* self) {
	delete self;
}

