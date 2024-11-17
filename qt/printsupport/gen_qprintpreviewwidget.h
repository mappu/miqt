#pragma once
#ifndef MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H
#define MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPrintPreviewWidget;
class QPrinter;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPrintPreviewWidget QPrintPreviewWidget;
typedef struct QPrinter QPrinter;
typedef struct QWidget QWidget;
#endif

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer);
QPrintPreviewWidget* QPrintPreviewWidget_new3();
QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags);
QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags);
QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self);
void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1);
struct miqt_string QPrintPreviewWidget_Tr(const char* s);
struct miqt_string QPrintPreviewWidget_TrUtf8(const char* s);
double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_Print(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self);
void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor);
void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation);
void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode);
void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode);
void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber);
void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self);
void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self);
void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer);
void QPrintPreviewWidget_connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self);
void QPrintPreviewWidget_connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot);
struct miqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c);
struct miqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QPrintPreviewWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QPrintPreviewWidget_TrUtf83(const char* s, const char* c, int n);
void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
