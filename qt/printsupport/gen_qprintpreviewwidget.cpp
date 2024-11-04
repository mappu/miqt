#include <QMetaObject>
#include <QPrintPreviewWidget>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprintpreviewwidget.h>
#include "gen_qprintpreviewwidget.h"
#include "_cgo_export.h"

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
	return new QPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
	return new QPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
	return new QPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
	return new QPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
	return new QPrintPreviewWidget(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
	return new QPrintPreviewWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewWidget_Tr(const char* s) {
	QString _ret = QPrintPreviewWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_TrUtf8(const char* s) {
	QString _ret = QPrintPreviewWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self) {
	QPrinter::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ZoomMode _ret = self->zoomMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self) {
	return self->currentPage();
}

int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self) {
	return self->pageCount();
}

void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewWidget_Print(QPrintPreviewWidget* self) {
	self->print();
}

void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self) {
	self->zoomIn();
}

void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self) {
	self->zoomOut();
}

void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation) {
	self->setOrientation(static_cast<QPrinter::Orientation>(orientation));
}

void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode) {
	self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode) {
	self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
	self->setCurrentPage(static_cast<int>(pageNumber));
}

void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self) {
	self->fitToWidth();
}

void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self) {
	self->fitInView();
}

void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self) {
	self->setLandscapeOrientation();
}

void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self) {
	self->setPortraitOrientation();
}

void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self) {
	self->setSinglePageViewMode();
}

void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self) {
	self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self) {
	self->setAllPagesViewMode();
}

void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self) {
	self->updatePreview();
}

void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewWidget_connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot) {
	QPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)(QPrinter*)>(&QPrintPreviewWidget::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewWidget_PaintRequested(slot, sigval1);
	});
}

void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self) {
	self->previewChanged();
}

void QPrintPreviewWidget_connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot) {
	QPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)()>(&QPrintPreviewWidget::previewChanged), self, [=]() {
		miqt_exec_callback_QPrintPreviewWidget_PreviewChanged(slot);
	});
}

struct miqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom) {
	self->zoomIn(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom) {
	self->zoomOut(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self) {
	delete self;
}

