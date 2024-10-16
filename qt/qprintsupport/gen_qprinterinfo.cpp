#include <QList>
#include <QPageSize>
#include <QPrinter>
#include <QPrinterInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinterinfo.h>
#include "gen_qprinterinfo.h"
#include "_cgo_export.h"

QPrinterInfo* QPrinterInfo_new() {
	return new QPrinterInfo();
}

QPrinterInfo* QPrinterInfo_new2(QPrinterInfo* other) {
	return new QPrinterInfo(*other);
}

QPrinterInfo* QPrinterInfo_new3(QPrinter* printer) {
	return new QPrinterInfo(*printer);
}

void QPrinterInfo_OperatorAssign(QPrinterInfo* self, QPrinterInfo* other) {
	self->operator=(*other);
}

struct miqt_string* QPrinterInfo_PrinterName(const QPrinterInfo* self) {
	QString _ret = self->printerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPrinterInfo_Description(const QPrinterInfo* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPrinterInfo_Location(const QPrinterInfo* self) {
	QString _ret = self->location();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPrinterInfo_MakeAndModel(const QPrinterInfo* self) {
	QString _ret = self->makeAndModel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QPrinterInfo_IsNull(const QPrinterInfo* self) {
	return self->isNull();
}

bool QPrinterInfo_IsDefault(const QPrinterInfo* self) {
	return self->isDefault();
}

bool QPrinterInfo_IsRemote(const QPrinterInfo* self) {
	return self->isRemote();
}

int QPrinterInfo_State(const QPrinterInfo* self) {
	QPrinter::PrinterState _ret = self->state();
	return static_cast<int>(_ret);
}

struct miqt_array* QPrinterInfo_SupportedPageSizes(const QPrinterInfo* self) {
	QList<QPageSize> _ret = self->supportedPageSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPageSize** _arr = static_cast<QPageSize**>(malloc(sizeof(QPageSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPageSize(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QPageSize* QPrinterInfo_DefaultPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->defaultPageSize());
}

bool QPrinterInfo_SupportsCustomPageSizes(const QPrinterInfo* self) {
	return self->supportsCustomPageSizes();
}

QPageSize* QPrinterInfo_MinimumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->minimumPhysicalPageSize());
}

QPageSize* QPrinterInfo_MaximumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->maximumPhysicalPageSize());
}

struct miqt_array* QPrinterInfo_SupportedPaperSizes(const QPrinterInfo* self) {
	QList<QPrinter::PaperSize> _ret = self->supportedPaperSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPagedPaintDevice::PageSize _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QPrinterInfo_SupportedResolutions(const QPrinterInfo* self) {
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

int QPrinterInfo_DefaultDuplexMode(const QPrinterInfo* self) {
	QPrinter::DuplexMode _ret = self->defaultDuplexMode();
	return static_cast<int>(_ret);
}

struct miqt_array* QPrinterInfo_SupportedDuplexModes(const QPrinterInfo* self) {
	QList<QPrinter::DuplexMode> _ret = self->supportedDuplexModes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPrinter::DuplexMode _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QPrinterInfo_DefaultColorMode(const QPrinterInfo* self) {
	QPrinter::ColorMode _ret = self->defaultColorMode();
	return static_cast<int>(_ret);
}

struct miqt_array* QPrinterInfo_SupportedColorModes(const QPrinterInfo* self) {
	QList<QPrinter::ColorMode> _ret = self->supportedColorModes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPrinter::ColorMode _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QPrinterInfo_AvailablePrinterNames() {
	QStringList _ret = QPrinterInfo::availablePrinterNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QPrinterInfo_AvailablePrinters() {
	QList<QPrinterInfo> _ret = QPrinterInfo::availablePrinters();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPrinterInfo** _arr = static_cast<QPrinterInfo**>(malloc(sizeof(QPrinterInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPrinterInfo(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QPrinterInfo_DefaultPrinterName() {
	QString _ret = QPrinterInfo::defaultPrinterName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QPrinterInfo* QPrinterInfo_DefaultPrinter() {
	return new QPrinterInfo(QPrinterInfo::defaultPrinter());
}

QPrinterInfo* QPrinterInfo_PrinterInfo(struct miqt_string* printerName) {
	QString printerName_QString = QString::fromUtf8(&printerName->data, printerName->len);
	return new QPrinterInfo(QPrinterInfo::printerInfo(printerName_QString));
}

void QPrinterInfo_Delete(QPrinterInfo* self) {
	delete self;
}

