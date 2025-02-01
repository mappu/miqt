#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPictureIO>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "gen_qpicture.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPicture_devType(const QPicture*, intptr_t);
void miqt_exec_callback_QPicture_setData(QPicture*, intptr_t, const char*, unsigned int);
QPaintEngine* miqt_exec_callback_QPicture_paintEngine(const QPicture*, intptr_t);
int miqt_exec_callback_QPicture_metric(const QPicture*, intptr_t, int);
void miqt_exec_callback_QPicture_initPainter(const QPicture*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPicture_redirected(const QPicture*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPicture_sharedPainter(const QPicture*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPicture final : public QPicture {
public:

	MiqtVirtualQPicture(): QPicture() {};
	MiqtVirtualQPicture(const QPicture& param1): QPicture(param1) {};
	MiqtVirtualQPicture(int formatVersion): QPicture(formatVersion) {};

	virtual ~MiqtVirtualQPicture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPicture::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPicture_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPicture::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(const char* data, uint size) override {
		if (handle__setData == 0) {
			QPicture::setData(data, size);
			return;
		}
		
		const char* sigval1 = (const char*) data;
		uint size_ret = size;
		unsigned int sigval2 = static_cast<unsigned int>(size_ret);

		miqt_exec_callback_QPicture_setData(this, handle__setData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setData(const char* data, unsigned int size) {

		QPicture::setData(data, static_cast<uint>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPicture::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPicture_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPicture::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
		if (handle__metric == 0) {
			return QPicture::metric(m);
		}
		
		QPaintDevice::PaintDeviceMetric m_ret = m;
		int sigval1 = static_cast<int>(m_ret);

		int callback_return_value = miqt_exec_callback_QPicture_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int m) const {

		return QPicture::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPicture::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPicture_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPicture::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPicture::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPicture_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPicture::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPicture::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPicture_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPicture::sharedPainter();

	}

};

QPicture* QPicture_new() {
	return new MiqtVirtualQPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
	return new MiqtVirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	return new MiqtVirtualQPicture(static_cast<int>(formatVersion));
}

void QPicture_virtbase(QPicture* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPicture_isNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_devType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_size(const QPicture* self) {
	uint _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_setData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_loadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_saveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_boundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_setBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_operatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_detach(QPicture* self) {
	self->detach();
}

bool QPicture_isDetached(const QPicture* self) {
	return self->isDetached();
}

const char* QPicture_pictureFormat(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return (const char*) QPicture::pictureFormat(fileName_QString);
}

struct miqt_array /* of struct miqt_string */  QPicture_inputFormats() {
	QList<QByteArray> _ret = QPicture::inputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QPicture_outputFormats() {
	QList<QByteArray> _ret = QPicture::outputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QPicture_inputFormatList() {
	QStringList _ret = QPicture::inputFormatList();
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

struct miqt_array /* of struct miqt_string */  QPicture_outputFormatList() {
	QStringList _ret = QPicture::outputFormatList();
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

QPaintEngine* QPicture_paintEngine(const QPicture* self) {
	return self->paintEngine();
}

bool QPicture_load2(QPicture* self, QIODevice* dev, const char* format) {
	return self->load(dev, format);
}

bool QPicture_load22(QPicture* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QPicture_save2(QPicture* self, QIODevice* dev, const char* format) {
	return self->save(dev, format);
}

bool QPicture_save22(QPicture* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QPicture_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPicture_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_devType();
}

bool QPicture_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size) {
	( (MiqtVirtualQPicture*)(self) )->virtualbase_setData(data, size);
}

bool QPicture_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPicture_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_paintEngine();
}

bool QPicture_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPicture_virtualbase_metric(const void* self, int m) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_metric(m);
}

bool QPicture_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPicture_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPicture*)(self) )->virtualbase_initPainter(painter);
}

bool QPicture_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPicture_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_redirected(offset);
}

bool QPicture_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPicture_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_sharedPainter();
}

void QPicture_delete(QPicture* self) {
	delete self;
}

QPictureIO* QPictureIO_new() {
	return new QPictureIO();
}

QPictureIO* QPictureIO_new2(QIODevice* ioDevice, const char* format) {
	return new QPictureIO(ioDevice, format);
}

QPictureIO* QPictureIO_new3(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QPictureIO(fileName_QString, format);
}

QPicture* QPictureIO_picture(const QPictureIO* self) {
	const QPicture& _ret = self->picture();
	// Cast returned reference into pointer
	return const_cast<QPicture*>(&_ret);
}

int QPictureIO_status(const QPictureIO* self) {
	return self->status();
}

const char* QPictureIO_format(const QPictureIO* self) {
	return (const char*) self->format();
}

QIODevice* QPictureIO_ioDevice(const QPictureIO* self) {
	return self->ioDevice();
}

struct miqt_string QPictureIO_fileName(const QPictureIO* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPictureIO_quality(const QPictureIO* self) {
	return self->quality();
}

struct miqt_string QPictureIO_description(const QPictureIO* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QPictureIO_parameters(const QPictureIO* self) {
	return (const char*) self->parameters();
}

float QPictureIO_gamma(const QPictureIO* self) {
	return self->gamma();
}

void QPictureIO_setPicture(QPictureIO* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QPictureIO_setStatus(QPictureIO* self, int status) {
	self->setStatus(static_cast<int>(status));
}

void QPictureIO_setFormat(QPictureIO* self, const char* format) {
	self->setFormat(format);
}

void QPictureIO_setIODevice(QPictureIO* self, QIODevice* iODevice) {
	self->setIODevice(iODevice);
}

void QPictureIO_setFileName(QPictureIO* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

void QPictureIO_setQuality(QPictureIO* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QPictureIO_setDescription(QPictureIO* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

void QPictureIO_setParameters(QPictureIO* self, const char* parameters) {
	self->setParameters(parameters);
}

void QPictureIO_setGamma(QPictureIO* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

bool QPictureIO_read(QPictureIO* self) {
	return self->read();
}

bool QPictureIO_write(QPictureIO* self) {
	return self->write();
}

struct miqt_string QPictureIO_pictureFormat(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QPictureIO::pictureFormat(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureIO_pictureFormatWithQIODevice(QIODevice* param1) {
	QByteArray _qb = QPictureIO::pictureFormat(param1);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QPictureIO_inputFormats() {
	QList<QByteArray> _ret = QPictureIO::inputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QPictureIO_outputFormats() {
	QList<QByteArray> _ret = QPictureIO::outputFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPictureIO_delete(QPictureIO* self) {
	delete self;
}

