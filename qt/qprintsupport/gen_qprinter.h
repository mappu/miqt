#ifndef GEN_QPRINTER_H
#define GEN_QPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins)
typedef QPagedPaintDevice::Margins QPagedPaintDevice__Margins;
#else
class QPagedPaintDevice__Margins;
#endif
class QPaintEngine;
class QPrintEngine;
class QPrinter;
class QPrinterInfo;
class QRect;
class QRectF;
class QSizeF;
#else
typedef struct QPagedPaintDevice__Margins QPagedPaintDevice__Margins;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPrintEngine QPrintEngine;
typedef struct QPrinter QPrinter;
typedef struct QPrinterInfo QPrinterInfo;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
#endif

QPrinter* QPrinter_new();
QPrinter* QPrinter_new2(QPrinterInfo* printer);
QPrinter* QPrinter_new3(int mode);
QPrinter* QPrinter_new4(QPrinterInfo* printer, int mode);
int QPrinter_DevType(const QPrinter* self);
void QPrinter_SetOutputFormat(QPrinter* self, int format);
int QPrinter_OutputFormat(const QPrinter* self);
void QPrinter_SetPdfVersion(QPrinter* self, int version);
int QPrinter_PdfVersion(const QPrinter* self);
void QPrinter_SetPrinterName(QPrinter* self, struct miqt_string* printerName);
struct miqt_string* QPrinter_PrinterName(const QPrinter* self);
bool QPrinter_IsValid(const QPrinter* self);
void QPrinter_SetOutputFileName(QPrinter* self, struct miqt_string* outputFileName);
struct miqt_string* QPrinter_OutputFileName(const QPrinter* self);
void QPrinter_SetPrintProgram(QPrinter* self, struct miqt_string* printProgram);
struct miqt_string* QPrinter_PrintProgram(const QPrinter* self);
void QPrinter_SetDocName(QPrinter* self, struct miqt_string* docName);
struct miqt_string* QPrinter_DocName(const QPrinter* self);
void QPrinter_SetCreator(QPrinter* self, struct miqt_string* creator);
struct miqt_string* QPrinter_Creator(const QPrinter* self);
void QPrinter_SetOrientation(QPrinter* self, int orientation);
int QPrinter_Orientation(const QPrinter* self);
void QPrinter_SetPageSize(QPrinter* self, int pageSize);
int QPrinter_PageSize(const QPrinter* self);
void QPrinter_SetPageSizeMM(QPrinter* self, QSizeF* size);
void QPrinter_SetPaperSize(QPrinter* self, int paperSize);
int QPrinter_PaperSize(const QPrinter* self);
void QPrinter_SetPaperSize2(QPrinter* self, QSizeF* paperSize, int unit);
QSizeF* QPrinter_PaperSizeWithUnit(const QPrinter* self, int unit);
void QPrinter_SetPaperName(QPrinter* self, struct miqt_string* paperName);
struct miqt_string* QPrinter_PaperName(const QPrinter* self);
void QPrinter_SetPageOrder(QPrinter* self, int pageOrder);
int QPrinter_PageOrder(const QPrinter* self);
void QPrinter_SetResolution(QPrinter* self, int resolution);
int QPrinter_Resolution(const QPrinter* self);
void QPrinter_SetColorMode(QPrinter* self, int colorMode);
int QPrinter_ColorMode(const QPrinter* self);
void QPrinter_SetCollateCopies(QPrinter* self, bool collate);
bool QPrinter_CollateCopies(const QPrinter* self);
void QPrinter_SetFullPage(QPrinter* self, bool fullPage);
bool QPrinter_FullPage(const QPrinter* self);
void QPrinter_SetNumCopies(QPrinter* self, int numCopies);
int QPrinter_NumCopies(const QPrinter* self);
int QPrinter_ActualNumCopies(const QPrinter* self);
void QPrinter_SetCopyCount(QPrinter* self, int copyCount);
int QPrinter_CopyCount(const QPrinter* self);
bool QPrinter_SupportsMultipleCopies(const QPrinter* self);
void QPrinter_SetPaperSource(QPrinter* self, int paperSource);
int QPrinter_PaperSource(const QPrinter* self);
void QPrinter_SetDuplex(QPrinter* self, int duplex);
int QPrinter_Duplex(const QPrinter* self);
struct miqt_array* QPrinter_SupportedResolutions(const QPrinter* self);
void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable);
bool QPrinter_FontEmbeddingEnabled(const QPrinter* self);
void QPrinter_SetDoubleSidedPrinting(QPrinter* self, bool enable);
bool QPrinter_DoubleSidedPrinting(const QPrinter* self);
void QPrinter_SetWinPageSize(QPrinter* self, int winPageSize);
int QPrinter_WinPageSize(const QPrinter* self);
QRect* QPrinter_PaperRect(const QPrinter* self);
QRect* QPrinter_PageRect(const QPrinter* self);
QRectF* QPrinter_PaperRectWithQPrinterUnit(const QPrinter* self, int param1);
QRectF* QPrinter_PageRectWithQPrinterUnit(const QPrinter* self, int param1);
struct miqt_string* QPrinter_PrinterSelectionOption(const QPrinter* self);
void QPrinter_SetPrinterSelectionOption(QPrinter* self, struct miqt_string* printerSelectionOption);
bool QPrinter_NewPage(QPrinter* self);
bool QPrinter_Abort(QPrinter* self);
int QPrinter_PrinterState(const QPrinter* self);
QPaintEngine* QPrinter_PaintEngine(const QPrinter* self);
QPrintEngine* QPrinter_PrintEngine(const QPrinter* self);
void QPrinter_SetFromTo(QPrinter* self, int fromPage, int toPage);
int QPrinter_FromPage(const QPrinter* self);
int QPrinter_ToPage(const QPrinter* self);
void QPrinter_SetPrintRange(QPrinter* self, int rangeVal);
int QPrinter_PrintRange(const QPrinter* self);
void QPrinter_SetMargins(QPrinter* self, QPagedPaintDevice__Margins* m);
void QPrinter_SetPageMargins(QPrinter* self, double left, double top, double right, double bottom, int unit);
void QPrinter_GetPageMargins(const QPrinter* self, double* left, double* top, double* right, double* bottom, int unit);
void QPrinter_Delete(QPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
