#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgGenerator>
#include <qsvggenerator.h>
#include "gen_qsvggenerator.h"
#include "_cgo_export.h"

class MiqtVirtualQSvgGenerator : public virtual QSvgGenerator {
public:

	MiqtVirtualQSvgGenerator(): QSvgGenerator() {};

	virtual ~MiqtVirtualQSvgGenerator() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSvgGenerator::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSvgGenerator_PaintEngine(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSvgGenerator::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__Metric == 0) {
			return QSvgGenerator::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QSvgGenerator_Metric(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int metric) const {

		return QSvgGenerator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSvgGenerator::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSvgGenerator_DevType(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSvgGenerator::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSvgGenerator::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSvgGenerator_InitPainter(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSvgGenerator::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSvgGenerator::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSvgGenerator_Redirected(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSvgGenerator::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSvgGenerator::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSvgGenerator_SharedPainter(const_cast<MiqtVirtualQSvgGenerator*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSvgGenerator::sharedPainter();

	}

};

QSvgGenerator* QSvgGenerator_new() {
	return new MiqtVirtualQSvgGenerator();
}

void QSvgGenerator_virtbase(QSvgGenerator* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

struct miqt_string QSvgGenerator_Title(const QSvgGenerator* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_SetTitle(QSvgGenerator* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QSvgGenerator_Description(const QSvgGenerator* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_SetDescription(QSvgGenerator* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

QSize* QSvgGenerator_Size(const QSvgGenerator* self) {
	return new QSize(self->size());
}

void QSvgGenerator_SetSize(QSvgGenerator* self, QSize* size) {
	self->setSize(*size);
}

QRect* QSvgGenerator_ViewBox(const QSvgGenerator* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgGenerator_ViewBoxF(const QSvgGenerator* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgGenerator_SetViewBox(QSvgGenerator* self, QRect* viewBox) {
	self->setViewBox(*viewBox);
}

void QSvgGenerator_SetViewBoxWithViewBox(QSvgGenerator* self, QRectF* viewBox) {
	self->setViewBox(*viewBox);
}

struct miqt_string QSvgGenerator_FileName(const QSvgGenerator* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_SetFileName(QSvgGenerator* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

QIODevice* QSvgGenerator_OutputDevice(const QSvgGenerator* self) {
	return self->outputDevice();
}

void QSvgGenerator_SetOutputDevice(QSvgGenerator* self, QIODevice* outputDevice) {
	self->setOutputDevice(outputDevice);
}

void QSvgGenerator_SetResolution(QSvgGenerator* self, int dpi) {
	self->setResolution(static_cast<int>(dpi));
}

int QSvgGenerator_Resolution(const QSvgGenerator* self) {
	return self->resolution();
}

void QSvgGenerator_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QSvgGenerator_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_PaintEngine();
}

void QSvgGenerator_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__Metric = slot;
}

int QSvgGenerator_virtualbase_Metric(const void* self, int metric) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_Metric(metric);
}

void QSvgGenerator_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__DevType = slot;
}

int QSvgGenerator_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_DevType();
}

void QSvgGenerator_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__InitPainter = slot;
}

void QSvgGenerator_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_InitPainter(painter);
}

void QSvgGenerator_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QSvgGenerator_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_Redirected(offset);
}

void QSvgGenerator_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) )->handle__SharedPainter = slot;
}

QPainter* QSvgGenerator_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_SharedPainter();
}

void QSvgGenerator_Delete(QSvgGenerator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSvgGenerator*>( self );
	} else {
		delete self;
	}
}

