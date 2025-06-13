#include <QList>
#include <QPageSize>
#include <QPrinter>
#include <QPrinterInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinterinfo.h>
#include "gen_qprinterinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPrinterInfo* QPrinterInfo_new() {
	return new (std::nothrow) QPrinterInfo();
}

QPrinterInfo* QPrinterInfo_new2(QPrinterInfo* other) {
	return new (std::nothrow) QPrinterInfo(*other);
}

QPrinterInfo* QPrinterInfo_new3(QPrinter* printer) {
	return new (std::nothrow) QPrinterInfo(*printer);
}

void QPrinterInfo_operatorAssign(QPrinterInfo* self, QPrinterInfo* other) {
	self->operator=(*other);
}

struct miqt_string QPrinterInfo_printerName(const QPrinterInfo* self) {
	QString _ret = self->printerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrinterInfo_description(const QPrinterInfo* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrinterInfo_location(const QPrinterInfo* self) {
	QString _ret = self->location();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrinterInfo_makeAndModel(const QPrinterInfo* self) {
	QString _ret = self->makeAndModel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPrinterInfo_isNull(const QPrinterInfo* self) {
	return self->isNull();
}

bool QPrinterInfo_isDefault(const QPrinterInfo* self) {
	return self->isDefault();
}

bool QPrinterInfo_isRemote(const QPrinterInfo* self) {
	return self->isRemote();
}

int QPrinterInfo_state(const QPrinterInfo* self) {
	QPrinter::PrinterState _ret = self->state();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QPageSize* */  QPrinterInfo_supportedPageSizes(const QPrinterInfo* self) {
	QList<QPageSize> _ret = self->supportedPageSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPageSize** _arr = static_cast<QPageSize**>(malloc(sizeof(QPageSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPageSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QPageSize* QPrinterInfo_defaultPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->defaultPageSize());
}

bool QPrinterInfo_supportsCustomPageSizes(const QPrinterInfo* self) {
	return self->supportsCustomPageSizes();
}

QPageSize* QPrinterInfo_minimumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->minimumPhysicalPageSize());
}

QPageSize* QPrinterInfo_maximumPhysicalPageSize(const QPrinterInfo* self) {
	return new QPageSize(self->maximumPhysicalPageSize());
}

struct miqt_array /* of int */  QPrinterInfo_supportedResolutions(const QPrinterInfo* self) {
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

int QPrinterInfo_defaultDuplexMode(const QPrinterInfo* self) {
	QPrinter::DuplexMode _ret = self->defaultDuplexMode();
	return static_cast<int>(_ret);
}

struct miqt_array /* of int */  QPrinterInfo_supportedDuplexModes(const QPrinterInfo* self) {
	QList<QPrinter::DuplexMode> _ret = self->supportedDuplexModes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPrinter::DuplexMode _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QPrinterInfo_defaultColorMode(const QPrinterInfo* self) {
	QPrinter::ColorMode _ret = self->defaultColorMode();
	return static_cast<int>(_ret);
}

struct miqt_array /* of int */  QPrinterInfo_supportedColorModes(const QPrinterInfo* self) {
	QList<QPrinter::ColorMode> _ret = self->supportedColorModes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPrinter::ColorMode _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QPrinterInfo_availablePrinterNames() {
	QStringList _ret = QPrinterInfo::availablePrinterNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QPrinterInfo* */  QPrinterInfo_availablePrinters() {
	QList<QPrinterInfo> _ret = QPrinterInfo::availablePrinters();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPrinterInfo** _arr = static_cast<QPrinterInfo**>(malloc(sizeof(QPrinterInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPrinterInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QPrinterInfo_defaultPrinterName() {
	QString _ret = QPrinterInfo::defaultPrinterName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPrinterInfo* QPrinterInfo_defaultPrinter() {
	return new QPrinterInfo(QPrinterInfo::defaultPrinter());
}

QPrinterInfo* QPrinterInfo_printerInfo(struct miqt_string printerName) {
	QString printerName_QString = QString::fromUtf8(printerName.data, printerName.len);
	return new QPrinterInfo(QPrinterInfo::printerInfo(printerName_QString));
}

void QPrinterInfo_delete(QPrinterInfo* self) {
	delete self;
}

