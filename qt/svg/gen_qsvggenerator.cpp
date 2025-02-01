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

#ifdef __cplusplus
extern "C" {
#endif

QPaintEngine* miqt_exec_callback_QSvgGenerator_paintEngine(const QSvgGenerator*, intptr_t);
int miqt_exec_callback_QSvgGenerator_metric(const QSvgGenerator*, intptr_t, int);
int miqt_exec_callback_QSvgGenerator_devType(const QSvgGenerator*, intptr_t);
void miqt_exec_callback_QSvgGenerator_initPainter(const QSvgGenerator*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSvgGenerator_redirected(const QSvgGenerator*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSvgGenerator_sharedPainter(const QSvgGenerator*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSvgGenerator final : public QSvgGenerator {
public:

	MiqtVirtualQSvgGenerator(): QSvgGenerator() {};

	virtual ~MiqtVirtualQSvgGenerator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSvgGenerator::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSvgGenerator_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QSvgGenerator::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__metric == 0) {
			return QSvgGenerator::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QSvgGenerator_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int metric) const {

		return QSvgGenerator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSvgGenerator::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSvgGenerator_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QSvgGenerator::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSvgGenerator::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSvgGenerator_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QSvgGenerator::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSvgGenerator::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSvgGenerator_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QSvgGenerator::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSvgGenerator::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSvgGenerator_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QSvgGenerator::sharedPainter();

	}

};

QSvgGenerator* QSvgGenerator_new() {
	return new MiqtVirtualQSvgGenerator();
}

void QSvgGenerator_virtbase(QSvgGenerator* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

struct miqt_string QSvgGenerator_title(const QSvgGenerator* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_setTitle(QSvgGenerator* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QSvgGenerator_description(const QSvgGenerator* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_setDescription(QSvgGenerator* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

QSize* QSvgGenerator_size(const QSvgGenerator* self) {
	return new QSize(self->size());
}

void QSvgGenerator_setSize(QSvgGenerator* self, QSize* size) {
	self->setSize(*size);
}

QRect* QSvgGenerator_viewBox(const QSvgGenerator* self) {
	return new QRect(self->viewBox());
}

QRectF* QSvgGenerator_viewBoxF(const QSvgGenerator* self) {
	return new QRectF(self->viewBoxF());
}

void QSvgGenerator_setViewBox(QSvgGenerator* self, QRect* viewBox) {
	self->setViewBox(*viewBox);
}

void QSvgGenerator_setViewBoxWithViewBox(QSvgGenerator* self, QRectF* viewBox) {
	self->setViewBox(*viewBox);
}

struct miqt_string QSvgGenerator_fileName(const QSvgGenerator* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgGenerator_setFileName(QSvgGenerator* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

QIODevice* QSvgGenerator_outputDevice(const QSvgGenerator* self) {
	return self->outputDevice();
}

void QSvgGenerator_setOutputDevice(QSvgGenerator* self, QIODevice* outputDevice) {
	self->setOutputDevice(outputDevice);
}

void QSvgGenerator_setResolution(QSvgGenerator* self, int dpi) {
	self->setResolution(static_cast<int>(dpi));
}

int QSvgGenerator_resolution(const QSvgGenerator* self) {
	return self->resolution();
}

bool QSvgGenerator_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSvgGenerator_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_paintEngine();
}

bool QSvgGenerator_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QSvgGenerator_virtualbase_metric(const void* self, int metric) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_metric(metric);
}

bool QSvgGenerator_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QSvgGenerator_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_devType();
}

bool QSvgGenerator_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QSvgGenerator_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_initPainter(painter);
}

bool QSvgGenerator_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSvgGenerator_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_redirected(offset);
}

bool QSvgGenerator_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSvgGenerator* self_cast = dynamic_cast<MiqtVirtualQSvgGenerator*>( (QSvgGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSvgGenerator_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQSvgGenerator*)(self) )->virtualbase_sharedPainter();
}

void QSvgGenerator_delete(QSvgGenerator* self) {
	delete self;
}

