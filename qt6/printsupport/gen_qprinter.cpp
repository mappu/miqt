#include <QList>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrintEngine>
#include <QPrinter>
#include <QPrinterInfo>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinter.h>
#include "gen_qprinter.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPrinter_devType(const QPrinter*, intptr_t);
bool miqt_exec_callback_QPrinter_newPage(QPrinter*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrinter_paintEngine(const QPrinter*, intptr_t);
int miqt_exec_callback_QPrinter_metric(const QPrinter*, intptr_t, int);
bool miqt_exec_callback_QPrinter_setPageLayout(QPrinter*, intptr_t, QPageLayout*);
bool miqt_exec_callback_QPrinter_setPageSize(QPrinter*, intptr_t, QPageSize*);
bool miqt_exec_callback_QPrinter_setPageOrientation(QPrinter*, intptr_t, int);
bool miqt_exec_callback_QPrinter_setPageMargins(QPrinter*, intptr_t, QMarginsF*, int);
void miqt_exec_callback_QPrinter_setPageRanges(QPrinter*, intptr_t, QPageRanges*);
void miqt_exec_callback_QPrinter_initPainter(const QPrinter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrinter_redirected(const QPrinter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrinter_sharedPainter(const QPrinter*, intptr_t);
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
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPrinter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrinter_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPrinter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__newPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__newPage == 0) {
			return QPrinter::newPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrinter_newPage(this, handle__newPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_newPage() {

		return QPrinter::newPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPrinter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrinter_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPrinter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPrinter::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrinter_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageLayout(const QPageLayout& pageLayout) override {
		if (handle__setPageLayout == 0) {
			return QPrinter::setPageLayout(pageLayout);
		}
		
		const QPageLayout& pageLayout_ret = pageLayout;
		// Cast returned reference into pointer
		QPageLayout* sigval1 = const_cast<QPageLayout*>(&pageLayout_ret);

		bool callback_return_value = miqt_exec_callback_QPrinter_setPageLayout(this, handle__setPageLayout, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setPageLayout(QPageLayout* pageLayout) {

		return QPrinter::setPageLayout(*pageLayout);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageSize(const QPageSize& pageSize) override {
		if (handle__setPageSize == 0) {
			return QPrinter::setPageSize(pageSize);
		}
		
		const QPageSize& pageSize_ret = pageSize;
		// Cast returned reference into pointer
		QPageSize* sigval1 = const_cast<QPageSize*>(&pageSize_ret);

		bool callback_return_value = miqt_exec_callback_QPrinter_setPageSize(this, handle__setPageSize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setPageSize(QPageSize* pageSize) {

		return QPrinter::setPageSize(*pageSize);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageOrientation = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
		if (handle__setPageOrientation == 0) {
			return QPrinter::setPageOrientation(orientation);
		}
		
		QPageLayout::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);

		bool callback_return_value = miqt_exec_callback_QPrinter_setPageOrientation(this, handle__setPageOrientation, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setPageOrientation(int orientation) {

		return QPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
		if (handle__setPageMargins == 0) {
			return QPrinter::setPageMargins(margins, units);
		}
		
		const QMarginsF& margins_ret = margins;
		// Cast returned reference into pointer
		QMarginsF* sigval1 = const_cast<QMarginsF*>(&margins_ret);
		QPageLayout::Unit units_ret = units;
		int sigval2 = static_cast<int>(units_ret);

		bool callback_return_value = miqt_exec_callback_QPrinter_setPageMargins(this, handle__setPageMargins, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setPageMargins(QMarginsF* margins, int units) {

		return QPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageRanges = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageRanges(const QPageRanges& ranges) override {
		if (handle__setPageRanges == 0) {
			QPrinter::setPageRanges(ranges);
			return;
		}
		
		const QPageRanges& ranges_ret = ranges;
		// Cast returned reference into pointer
		QPageRanges* sigval1 = const_cast<QPageRanges*>(&ranges_ret);

		miqt_exec_callback_QPrinter_setPageRanges(this, handle__setPageRanges, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageRanges(QPageRanges* ranges) {

		QPrinter::setPageRanges(*ranges);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPrinter::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrinter_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPrinter::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPrinter::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrinter_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPrinter::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPrinter::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrinter_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPrinter::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend void QPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
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

int QPrinter_devType(const QPrinter* self) {
	return self->devType();
}

void QPrinter_setOutputFormat(QPrinter* self, int format) {
	self->setOutputFormat(static_cast<QPrinter::OutputFormat>(format));
}

int QPrinter_outputFormat(const QPrinter* self) {
	QPrinter::OutputFormat _ret = self->outputFormat();
	return static_cast<int>(_ret);
}

void QPrinter_setPdfVersion(QPrinter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPrinter_pdfVersion(const QPrinter* self) {
	QPagedPaintDevice::PdfVersion _ret = self->pdfVersion();
	return static_cast<int>(_ret);
}

void QPrinter_setPrinterName(QPrinter* self, struct miqt_string printerName) {
	QString printerName_QString = QString::fromUtf8(printerName.data, printerName.len);
	self->setPrinterName(printerName_QString);
}

struct miqt_string QPrinter_printerName(const QPrinter* self) {
	QString _ret = self->printerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPrinter_isValid(const QPrinter* self) {
	return self->isValid();
}

void QPrinter_setOutputFileName(QPrinter* self, struct miqt_string outputFileName) {
	QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
	self->setOutputFileName(outputFileName_QString);
}

struct miqt_string QPrinter_outputFileName(const QPrinter* self) {
	QString _ret = self->outputFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_setPrintProgram(QPrinter* self, struct miqt_string printProgram) {
	QString printProgram_QString = QString::fromUtf8(printProgram.data, printProgram.len);
	self->setPrintProgram(printProgram_QString);
}

struct miqt_string QPrinter_printProgram(const QPrinter* self) {
	QString _ret = self->printProgram();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_setDocName(QPrinter* self, struct miqt_string docName) {
	QString docName_QString = QString::fromUtf8(docName.data, docName.len);
	self->setDocName(docName_QString);
}

struct miqt_string QPrinter_docName(const QPrinter* self) {
	QString _ret = self->docName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_setCreator(QPrinter* self, struct miqt_string creator) {
	QString creator_QString = QString::fromUtf8(creator.data, creator.len);
	self->setCreator(creator_QString);
}

struct miqt_string QPrinter_creator(const QPrinter* self) {
	QString _ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_setPageOrder(QPrinter* self, int pageOrder) {
	self->setPageOrder(static_cast<QPrinter::PageOrder>(pageOrder));
}

int QPrinter_pageOrder(const QPrinter* self) {
	QPrinter::PageOrder _ret = self->pageOrder();
	return static_cast<int>(_ret);
}

void QPrinter_setResolution(QPrinter* self, int resolution) {
	self->setResolution(static_cast<int>(resolution));
}

int QPrinter_resolution(const QPrinter* self) {
	return self->resolution();
}

void QPrinter_setColorMode(QPrinter* self, int colorMode) {
	self->setColorMode(static_cast<QPrinter::ColorMode>(colorMode));
}

int QPrinter_colorMode(const QPrinter* self) {
	QPrinter::ColorMode _ret = self->colorMode();
	return static_cast<int>(_ret);
}

void QPrinter_setCollateCopies(QPrinter* self, bool collate) {
	self->setCollateCopies(collate);
}

bool QPrinter_collateCopies(const QPrinter* self) {
	return self->collateCopies();
}

void QPrinter_setFullPage(QPrinter* self, bool fullPage) {
	self->setFullPage(fullPage);
}

bool QPrinter_fullPage(const QPrinter* self) {
	return self->fullPage();
}

void QPrinter_setCopyCount(QPrinter* self, int copyCount) {
	self->setCopyCount(static_cast<int>(copyCount));
}

int QPrinter_copyCount(const QPrinter* self) {
	return self->copyCount();
}

bool QPrinter_supportsMultipleCopies(const QPrinter* self) {
	return self->supportsMultipleCopies();
}

void QPrinter_setPaperSource(QPrinter* self, int paperSource) {
	self->setPaperSource(static_cast<QPrinter::PaperSource>(paperSource));
}

int QPrinter_paperSource(const QPrinter* self) {
	QPrinter::PaperSource _ret = self->paperSource();
	return static_cast<int>(_ret);
}

void QPrinter_setDuplex(QPrinter* self, int duplex) {
	self->setDuplex(static_cast<QPrinter::DuplexMode>(duplex));
}

int QPrinter_duplex(const QPrinter* self) {
	QPrinter::DuplexMode _ret = self->duplex();
	return static_cast<int>(_ret);
}

struct miqt_array /* of int */  QPrinter_supportedResolutions(const QPrinter* self) {
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

void QPrinter_setFontEmbeddingEnabled(QPrinter* self, bool enable) {
	self->setFontEmbeddingEnabled(enable);
}

bool QPrinter_fontEmbeddingEnabled(const QPrinter* self) {
	return self->fontEmbeddingEnabled();
}

QRectF* QPrinter_paperRect(const QPrinter* self, int param1) {
	return new QRectF(self->paperRect(static_cast<QPrinter::Unit>(param1)));
}

QRectF* QPrinter_pageRect(const QPrinter* self, int param1) {
	return new QRectF(self->pageRect(static_cast<QPrinter::Unit>(param1)));
}

struct miqt_string QPrinter_printerSelectionOption(const QPrinter* self) {
	QString _ret = self->printerSelectionOption();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrinter_setPrinterSelectionOption(QPrinter* self, struct miqt_string printerSelectionOption) {
	QString printerSelectionOption_QString = QString::fromUtf8(printerSelectionOption.data, printerSelectionOption.len);
	self->setPrinterSelectionOption(printerSelectionOption_QString);
}

bool QPrinter_newPage(QPrinter* self) {
	return self->newPage();
}

bool QPrinter_abort(QPrinter* self) {
	return self->abort();
}

int QPrinter_printerState(const QPrinter* self) {
	QPrinter::PrinterState _ret = self->printerState();
	return static_cast<int>(_ret);
}

QPaintEngine* QPrinter_paintEngine(const QPrinter* self) {
	return self->paintEngine();
}

QPrintEngine* QPrinter_printEngine(const QPrinter* self) {
	return self->printEngine();
}

void QPrinter_setFromTo(QPrinter* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QPrinter_fromPage(const QPrinter* self) {
	return self->fromPage();
}

int QPrinter_toPage(const QPrinter* self) {
	return self->toPage();
}

void QPrinter_setPrintRange(QPrinter* self, int range) {
	self->setPrintRange(static_cast<QPrinter::PrintRange>(range));
}

int QPrinter_printRange(const QPrinter* self) {
	QPrinter::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

bool QPrinter_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPrinter_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_devType();
}

bool QPrinter_override_virtual_newPage(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__newPage = slot;
	return true;
}

bool QPrinter_virtualbase_newPage(void* self) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_newPage();
}

bool QPrinter_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPrinter_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_paintEngine();
}

bool QPrinter_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPrinter_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_metric(param1);
}

bool QPrinter_override_virtual_setPageLayout(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageLayout = slot;
	return true;
}

bool QPrinter_virtualbase_setPageLayout(void* self, QPageLayout* pageLayout) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_setPageLayout(pageLayout);
}

bool QPrinter_override_virtual_setPageSize(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSize = slot;
	return true;
}

bool QPrinter_virtualbase_setPageSize(void* self, QPageSize* pageSize) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_setPageSize(pageSize);
}

bool QPrinter_override_virtual_setPageOrientation(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageOrientation = slot;
	return true;
}

bool QPrinter_virtualbase_setPageOrientation(void* self, int orientation) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_setPageOrientation(orientation);
}

bool QPrinter_override_virtual_setPageMargins(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageMargins = slot;
	return true;
}

bool QPrinter_virtualbase_setPageMargins(void* self, QMarginsF* margins, int units) {
	return ( (MiqtVirtualQPrinter*)(self) )->virtualbase_setPageMargins(margins, units);
}

bool QPrinter_override_virtual_setPageRanges(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageRanges = slot;
	return true;
}

void QPrinter_virtualbase_setPageRanges(void* self, QPageRanges* ranges) {
	( (MiqtVirtualQPrinter*)(self) )->virtualbase_setPageRanges(ranges);
}

bool QPrinter_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPrinter_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrinter*)(self) )->virtualbase_initPainter(painter);
}

bool QPrinter_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPrinter_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_redirected(offset);
}

bool QPrinter_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPrinter_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrinter*)(self) )->virtualbase_sharedPainter();
}

void QPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
	MiqtVirtualQPrinter* self_cast = dynamic_cast<MiqtVirtualQPrinter*>( (QPrinter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setEngines(printEngine, paintEngine);

}

void QPrinter_delete(QPrinter* self) {
	delete self;
}

