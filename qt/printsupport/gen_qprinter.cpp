#include <QList>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPrintEngine>
#include <QPrinter>
#include <QPrinterInfo>
#include <QRect>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinter.h>
#include "gen_qprinter.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPrinter_DevType(void*, intptr_t);
void miqt_exec_callback_QPrinter_SetPageSize(void*, intptr_t, int);
void miqt_exec_callback_QPrinter_SetPageSizeMM(void*, intptr_t, QSizeF*);
bool miqt_exec_callback_QPrinter_NewPage(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrinter_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QPrinter_SetMargins(void*, intptr_t, QPagedPaintDevice__Margins*);
int miqt_exec_callback_QPrinter_Metric(void*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrinter final : public QPrinter {
public:

	MiqtVirtualQPrinter(): QPrinter() {};
	MiqtVirtualQPrinter(const QPrinterInfo& printer): QPrinter(printer) {};
	MiqtVirtualQPrinter(QPrinter::PrinterMode mode): QPrinter(mode) {};
	MiqtVirtualQPrinter(const QPrinterInfo& printer, QPrinter::PrinterMode mode): QPrinter(printer, mode) {};

	virtual ~MiqtVirtualQPrinter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPrinter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrinter_DevType(const_cast<MiqtVirtualQPrinter*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPrinter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize pageSize) override {
		if (handle__SetPageSize == 0) {
			QPrinter::setPageSize(pageSize);
			return;
		}
		
		QPagedPaintDevice::PageSize pageSize_ret = pageSize;
		int sigval1 = static_cast<int>(pageSize_ret);

		miqt_exec_callback_QPrinter_SetPageSize(this, handle__SetPageSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSize(int pageSize) {

		QPrinter::setPageSize(static_cast<QPagedPaintDevice::PageSize>(pageSize));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__SetPageSizeMM == 0) {
			QPrinter::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QPrinter_SetPageSizeMM(this, handle__SetPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSizeMM(QSizeF* size) {

		QPrinter::setPageSizeMM(*size);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NewPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__NewPage == 0) {
			return QPrinter::newPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrinter_NewPage(this, handle__NewPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NewPage() {

		return QPrinter::newPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPrinter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrinter_PaintEngine(const_cast<MiqtVirtualQPrinter*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPrinter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& m) override {
		if (handle__SetMargins == 0) {
			QPrinter::setMargins(m);
			return;
		}
		
		const QPagedPaintDevice::Margins& m_ret = m;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&m_ret);

		miqt_exec_callback_QPrinter_SetMargins(this, handle__SetMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMargins(QPagedPaintDevice__Margins* m) {

		QPrinter::setMargins(*m);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPrinter::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrinter_Metric(const_cast<MiqtVirtualQPrinter*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

};

QPrinter* QPrinter_new() {
	return new MiqtVirtualQPrinter();
}

QPrinter* QPrinter_new2(QPrinterInfo* printer) {
	return new MiqtVirtualQPrinter(*printer);
}

QPrinter* QPrinter_new3(int mode) {
	return new MiqtVirtualQPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

QPrinter* QPrinter_new4(QPrinterInfo* printer, int mode) {
	return new MiqtVirtualQPrinter(*printer, static_cast<QPrinter::PrinterMode>(mode));
}

void QPrinter_virtbase(QPrinter* src, QPagedPaintDevice** outptr_QPagedPaintDevice) {
	*outptr_QPagedPaintDevice = static_cast<QPagedPaintDevice*>(src);
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

void QPrinter_SetOrientation(QPrinter* self, int orientation) {
	self->setOrientation(static_cast<QPrinter::Orientation>(orientation));
}

int QPrinter_Orientation(const QPrinter* self) {
	QPrinter::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QPrinter_SetPageSize(QPrinter* self, int pageSize) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(pageSize));
}

int QPrinter_PageSize(const QPrinter* self) {
	QPagedPaintDevice::PageSize _ret = self->pageSize();
	return static_cast<int>(_ret);
}

void QPrinter_SetPageSizeMM(QPrinter* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

void QPrinter_SetPaperSize(QPrinter* self, int paperSize) {
	self->setPaperSize(static_cast<QPrinter::PaperSize>(paperSize));
}

int QPrinter_PaperSize(const QPrinter* self) {
	QPrinter::PaperSize _ret = self->paperSize();
	return static_cast<int>(_ret);
}

void QPrinter_SetPaperSize2(QPrinter* self, QSizeF* paperSize, int unit) {
	self->setPaperSize(*paperSize, static_cast<QPrinter::Unit>(unit));
}

QSizeF* QPrinter_PaperSizeWithUnit(const QPrinter* self, int unit) {
	return new QSizeF(self->paperSize(static_cast<QPrinter::Unit>(unit)));
}

void QPrinter_SetPaperName(QPrinter* self, struct miqt_string paperName) {
	QString paperName_QString = QString::fromUtf8(paperName.data, paperName.len);
	self->setPaperName(paperName_QString);
}

struct miqt_string QPrinter_PaperName(const QPrinter* self) {
	QString _ret = self->paperName();
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

void QPrinter_SetNumCopies(QPrinter* self, int numCopies) {
	self->setNumCopies(static_cast<int>(numCopies));
}

int QPrinter_NumCopies(const QPrinter* self) {
	return self->numCopies();
}

int QPrinter_ActualNumCopies(const QPrinter* self) {
	return self->actualNumCopies();
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

struct miqt_array /* of int */  QPrinter_SupportedResolutions(const QPrinter* self) {
	QList<int> _ret = self->supportedResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable) {
	self->setFontEmbeddingEnabled(enable);
}

bool QPrinter_FontEmbeddingEnabled(const QPrinter* self) {
	return self->fontEmbeddingEnabled();
}

void QPrinter_SetDoubleSidedPrinting(QPrinter* self, bool enable) {
	self->setDoubleSidedPrinting(enable);
}

bool QPrinter_DoubleSidedPrinting(const QPrinter* self) {
	return self->doubleSidedPrinting();
}

void QPrinter_SetWinPageSize(QPrinter* self, int winPageSize) {
	self->setWinPageSize(static_cast<int>(winPageSize));
}

int QPrinter_WinPageSize(const QPrinter* self) {
	return self->winPageSize();
}

QRect* QPrinter_PaperRect(const QPrinter* self) {
	return new QRect(self->paperRect());
}

QRect* QPrinter_PageRect(const QPrinter* self) {
	return new QRect(self->pageRect());
}

QRectF* QPrinter_PaperRectWithQPrinterUnit(const QPrinter* self, int param1) {
	return new QRectF(self->paperRect(static_cast<QPrinter::Unit>(param1)));
}

QRectF* QPrinter_PageRectWithQPrinterUnit(const QPrinter* self, int param1) {
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

void QPrinter_SetMargins(QPrinter* self, QPagedPaintDevice__Margins* m) {
	self->setMargins(*m);
}

void QPrinter_SetPageMargins(QPrinter* self, double left, double top, double right, double bottom, int unit) {
	self->setPageMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom), static_cast<QPrinter::Unit>(unit));
}

void QPrinter_GetPageMargins(const QPrinter* self, double* left, double* top, double* right, double* bottom, int unit) {
	self->getPageMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom), static_cast<QPrinter::Unit>(unit));
}

void QPrinter_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__DevType = slot;
}

int QPrinter_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_DevType();
}

void QPrinter_override_virtual_SetPageSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__SetPageSize = slot;
}

void QPrinter_virtualbase_SetPageSize(void* self, int pageSize) {
	( (MiqtVirtualQPrinter*)(self) )->virtualbase_SetPageSize(pageSize);
}

void QPrinter_override_virtual_SetPageSizeMM(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__SetPageSizeMM = slot;
}

void QPrinter_virtualbase_SetPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQPrinter*)(self) )->virtualbase_SetPageSizeMM(size);
}

void QPrinter_override_virtual_NewPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__NewPage = slot;
}

bool QPrinter_virtualbase_NewPage(void* self) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_NewPage();
}

void QPrinter_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QPrinter_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_PaintEngine();
}

void QPrinter_override_virtual_SetMargins(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__SetMargins = slot;
}

void QPrinter_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* m) {
	( (MiqtVirtualQPrinter*)(self) )->virtualbase_SetMargins(m);
}

void QPrinter_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) )->handle__Metric = slot;
}

int QPrinter_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_Metric(param1);
}

void QPrinter_Delete(QPrinter* self) {
	delete self;
}

