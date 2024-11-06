#include <QPainter>
#include <QRect>
#include <qsciprinter.h>
#include "gen_qsciprinter.h"
#include "_cgo_export.h"

QsciPrinter* QsciPrinter_new() {
	return new QsciPrinter();
}

QsciPrinter* QsciPrinter_new2(int mode) {
	return new QsciPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	self->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

int QsciPrinter_Magnification(const QsciPrinter* self) {
	return self->magnification();
}

void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification) {
	self->setMagnification(static_cast<int>(magnification));
}

int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter) {
	return self->printRange(qsb, *painter);
}

int QsciPrinter_PrintRangeWithQsb(QsciPrinter* self, QsciScintillaBase* qsb) {
	return self->printRange(qsb);
}

int QsciPrinter_WrapMode(const QsciPrinter* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

int QsciPrinter_PrintRange3(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from) {
	return self->printRange(qsb, *painter, static_cast<int>(from));
}

int QsciPrinter_PrintRange4(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return self->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from) {
	return self->printRange(qsb, static_cast<int>(from));
}

int QsciPrinter_PrintRange32(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
	return self->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

void QsciPrinter_Delete(QsciPrinter* self) {
	delete self;
}

