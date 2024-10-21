#include <QList>
#include <QPaintEngine>
#include <QPrintEngine>
#include <QPrinter>
#include <QPrinterInfo>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinter.h>
#include "gen_qprinter.h"
#include "_cgo_export.h"

QPrinter* QPrinter_new() {
	return new QPrinter();
}

QPrinter* QPrinter_new2(QPrinterInfo* printer) {
	return new QPrinter(*printer);
}

QPrinter* QPrinter_new3(int mode) {
	return new QPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

QPrinter* QPrinter_new4(QPrinterInfo* printer, int mode) {
	return new QPrinter(*printer, static_cast<QPrinter::PrinterMode>(mode));
}

int QPrinter_DevType(const QPrinter* self) {
	return self->devType();
}

void QPrinter_SetOutputFormat(QPrinter* self, int format) {
	self->setOutputFormat(static_cast<QPrinter::OutputFormat>(format));
}

int QPrinter_OutputFormat(const QPrinter* self) {
	QPrinter::OutputFormat _ret = self->outputFormat();
	return static_cast<int>(_ret);
}

void QPrinter_SetPdfVersion(QPrinter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPrinter_PdfVersion(const QPrinter* self) {
	QPagedPaintDevice::PdfVersion _ret = self->pdfVersion();
	return static_cast<int>(_ret);
}

void QPrinter_SetPrinterName(QPrinter* self, struct miqt_string printerName) {
	QString printerName_QString = QString::fromUtf8(printerName.data, printerName.len);
	self->setPrinterName(printerName_QString);
}

struct miqt_string QPrinter_PrinterName(const QPrinter* self) {
	QString _ret = self->printerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPrinter_IsValid(const QPrinter* self) {
	return self->isValid();
}

void QPrinter_SetOutputFileName(QPrinter* self, struct miqt_string outputFileName) {
	QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
	self->setOutputFileName(outputFileName_QString);
}

struct miqt_string QPrinter_OutputFileName(const QPrinter* self) {
	QString _ret = self->outputFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_SetPrintProgram(QPrinter* self, struct miqt_string printProgram) {
	QString printProgram_QString = QString::fromUtf8(printProgram.data, printProgram.len);
	self->setPrintProgram(printProgram_QString);
}

struct miqt_string QPrinter_PrintProgram(const QPrinter* self) {
	QString _ret = self->printProgram();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_SetDocName(QPrinter* self, struct miqt_string docName) {
	QString docName_QString = QString::fromUtf8(docName.data, docName.len);
	self->setDocName(docName_QString);
}

struct miqt_string QPrinter_DocName(const QPrinter* self) {
	QString _ret = self->docName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_SetCreator(QPrinter* self, struct miqt_string creator) {
	QString creator_QString = QString::fromUtf8(creator.data, creator.len);
	self->setCreator(creator_QString);
}

struct miqt_string QPrinter_Creator(const QPrinter* self) {
	QString _ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_SetPageOrder(QPrinter* self, int pageOrder) {
	self->setPageOrder(static_cast<QPrinter::PageOrder>(pageOrder));
}

int QPrinter_PageOrder(const QPrinter* self) {
	QPrinter::PageOrder _ret = self->pageOrder();
	return static_cast<int>(_ret);
}

void QPrinter_SetResolution(QPrinter* self, int resolution) {
	self->setResolution(static_cast<int>(resolution));
}

int QPrinter_Resolution(const QPrinter* self) {
	return self->resolution();
}

void QPrinter_SetColorMode(QPrinter* self, int colorMode) {
	self->setColorMode(static_cast<QPrinter::ColorMode>(colorMode));
}

int QPrinter_ColorMode(const QPrinter* self) {
	QPrinter::ColorMode _ret = self->colorMode();
	return static_cast<int>(_ret);
}

void QPrinter_SetCollateCopies(QPrinter* self, bool collate) {
	self->setCollateCopies(collate);
}

bool QPrinter_CollateCopies(const QPrinter* self) {
	return self->collateCopies();
}

void QPrinter_SetFullPage(QPrinter* self, bool fullPage) {
	self->setFullPage(fullPage);
}

bool QPrinter_FullPage(const QPrinter* self) {
	return self->fullPage();
}

void QPrinter_SetCopyCount(QPrinter* self, int copyCount) {
	self->setCopyCount(static_cast<int>(copyCount));
}

int QPrinter_CopyCount(const QPrinter* self) {
	return self->copyCount();
}

bool QPrinter_SupportsMultipleCopies(const QPrinter* self) {
	return self->supportsMultipleCopies();
}

void QPrinter_SetPaperSource(QPrinter* self, int paperSource) {
	self->setPaperSource(static_cast<QPrinter::PaperSource>(paperSource));
}

int QPrinter_PaperSource(const QPrinter* self) {
	QPrinter::PaperSource _ret = self->paperSource();
	return static_cast<int>(_ret);
}

void QPrinter_SetDuplex(QPrinter* self, int duplex) {
	self->setDuplex(static_cast<QPrinter::DuplexMode>(duplex));
}

int QPrinter_Duplex(const QPrinter* self) {
	QPrinter::DuplexMode _ret = self->duplex();
	return static_cast<int>(_ret);
}

struct miqt_array* QPrinter_SupportedResolutions(const QPrinter* self) {
	QList<int> _ret = self->supportedResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable) {
	self->setFontEmbeddingEnabled(enable);
}

bool QPrinter_FontEmbeddingEnabled(const QPrinter* self) {
	return self->fontEmbeddingEnabled();
}

QRectF* QPrinter_PaperRect(const QPrinter* self, int param1) {
	return new QRectF(self->paperRect(static_cast<QPrinter::Unit>(param1)));
}

QRectF* QPrinter_PageRect(const QPrinter* self, int param1) {
	return new QRectF(self->pageRect(static_cast<QPrinter::Unit>(param1)));
}

struct miqt_string QPrinter_PrinterSelectionOption(const QPrinter* self) {
	QString _ret = self->printerSelectionOption();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_SetPrinterSelectionOption(QPrinter* self, struct miqt_string printerSelectionOption) {
	QString printerSelectionOption_QString = QString::fromUtf8(printerSelectionOption.data, printerSelectionOption.len);
	self->setPrinterSelectionOption(printerSelectionOption_QString);
}

bool QPrinter_NewPage(QPrinter* self) {
	return self->newPage();
}

bool QPrinter_Abort(QPrinter* self) {
	return self->abort();
}

int QPrinter_PrinterState(const QPrinter* self) {
	QPrinter::PrinterState _ret = self->printerState();
	return static_cast<int>(_ret);
}

QPaintEngine* QPrinter_PaintEngine(const QPrinter* self) {
	return self->paintEngine();
}

QPrintEngine* QPrinter_PrintEngine(const QPrinter* self) {
	return self->printEngine();
}

void QPrinter_SetFromTo(QPrinter* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QPrinter_FromPage(const QPrinter* self) {
	return self->fromPage();
}

int QPrinter_ToPage(const QPrinter* self) {
	return self->toPage();
}

void QPrinter_SetPrintRange(QPrinter* self, int rangeVal) {
	self->setPrintRange(static_cast<QPrinter::PrintRange>(rangeVal));
}

int QPrinter_PrintRange(const QPrinter* self) {
	QPrinter::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

void QPrinter_Delete(QPrinter* self) {
	delete self;
}

