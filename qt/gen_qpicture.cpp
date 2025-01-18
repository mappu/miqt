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

int miqt_exec_callback_QPicture_DevType(void*, intptr_t);
void miqt_exec_callback_QPicture_SetData(void*, intptr_t, const char*, unsigned int);
QPaintEngine* miqt_exec_callback_QPicture_PaintEngine(void*, intptr_t);
int miqt_exec_callback_QPicture_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPicture_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPicture_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPicture_SharedPainter(void*, intptr_t);
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
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPicture::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPicture_DevType(const_cast<MiqtVirtualQPicture*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPicture::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(const char* data, uint size) override {
		if (handle__SetData == 0) {
			QPicture::setData(data, size);
			return;
		}
		
		const char* sigval1 = (const char*) data;
		uint size_ret = size;
		unsigned int sigval2 = static_cast<unsigned int>(size_ret);

		miqt_exec_callback_QPicture_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(const char* data, unsigned int size) {

		QPicture::setData(data, static_cast<uint>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPicture::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPicture_PaintEngine(const_cast<MiqtVirtualQPicture*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPicture::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
		if (handle__Metric == 0) {
			return QPicture::metric(m);
		}
		
		QPaintDevice::PaintDeviceMetric m_ret = m;
		int sigval1 = static_cast<int>(m_ret);

		int callback_return_value = miqt_exec_callback_QPicture_Metric(const_cast<MiqtVirtualQPicture*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int m) const {

		return QPicture::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPicture::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPicture_InitPainter(const_cast<MiqtVirtualQPicture*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPicture::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPicture::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPicture_Redirected(const_cast<MiqtVirtualQPicture*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPicture::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPicture::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPicture_SharedPainter(const_cast<MiqtVirtualQPicture*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

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

bool QPicture_IsNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_DevType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_Size(const QPicture* self) {
	uint _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_Data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_Play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_LoadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_SaveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
	self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
	return self->isDetached();
}

const char* QPicture_PictureFormat(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return (const char*) QPicture::pictureFormat(fileName_QString);
}

struct miqt_array /* of struct miqt_string */  QPicture_InputFormats() {
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

struct miqt_array /* of struct miqt_string */  QPicture_OutputFormats() {
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

struct miqt_array /* of struct miqt_string */  QPicture_InputFormatList() {
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

struct miqt_array /* of struct miqt_string */  QPicture_OutputFormatList() {
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

QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
	return self->paintEngine();
}

bool QPicture_Load2(QPicture* self, QIODevice* dev, const char* format) {
	return self->load(dev, format);
}

bool QPicture_Load22(QPicture* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QPicture_Save2(QPicture* self, QIODevice* dev, const char* format) {
	return self->save(dev, format);
}

bool QPicture_Save22(QPicture* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QPicture_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPicture_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_DevType();
}

bool QPicture_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

void QPicture_virtualbase_SetData(void* self, const char* data, unsigned int size) {
	( (MiqtVirtualQPicture*)(self) )->virtualbase_SetData(data, size);
}

bool QPicture_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPicture_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_PaintEngine();
}

bool QPicture_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPicture_virtualbase_Metric(const void* self, int m) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_Metric(m);
}

bool QPicture_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPicture_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPicture*)(self) )->virtualbase_InitPainter(painter);
}

bool QPicture_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPicture_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_Redirected(offset);
}

bool QPicture_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPicture_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_SharedPainter();
}

void QPicture_Delete(QPicture* self) {
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

QPicture* QPictureIO_Picture(const QPictureIO* self) {
	const QPicture& _ret = self->picture();
	// Cast returned reference into pointer
	return const_cast<QPicture*>(&_ret);
}

int QPictureIO_Status(const QPictureIO* self) {
	return self->status();
}

const char* QPictureIO_Format(const QPictureIO* self) {
	return (const char*) self->format();
}

QIODevice* QPictureIO_IoDevice(const QPictureIO* self) {
	return self->ioDevice();
}

struct miqt_string QPictureIO_FileName(const QPictureIO* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPictureIO_Quality(const QPictureIO* self) {
	return self->quality();
}

struct miqt_string QPictureIO_Description(const QPictureIO* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QPictureIO_Parameters(const QPictureIO* self) {
	return (const char*) self->parameters();
}

float QPictureIO_Gamma(const QPictureIO* self) {
	return self->gamma();
}

void QPictureIO_SetPicture(QPictureIO* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QPictureIO_SetStatus(QPictureIO* self, int status) {
	self->setStatus(static_cast<int>(status));
}

void QPictureIO_SetFormat(QPictureIO* self, const char* format) {
	self->setFormat(format);
}

void QPictureIO_SetIODevice(QPictureIO* self, QIODevice* iODevice) {
	self->setIODevice(iODevice);
}

void QPictureIO_SetFileName(QPictureIO* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

void QPictureIO_SetQuality(QPictureIO* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QPictureIO_SetDescription(QPictureIO* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

void QPictureIO_SetParameters(QPictureIO* self, const char* parameters) {
	self->setParameters(parameters);
}

void QPictureIO_SetGamma(QPictureIO* self, float gamma) {
	self->setGamma(static_cast<float>(gamma));
}

bool QPictureIO_Read(QPictureIO* self) {
	return self->read();
}

bool QPictureIO_Write(QPictureIO* self) {
	return self->write();
}

struct miqt_string QPictureIO_PictureFormat(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QPictureIO::pictureFormat(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureIO_PictureFormatWithQIODevice(QIODevice* param1) {
	QByteArray _qb = QPictureIO::pictureFormat(param1);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QPictureIO_InputFormats() {
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

struct miqt_array /* of struct miqt_string */  QPictureIO_OutputFormats() {
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

void QPictureIO_Delete(QPictureIO* self) {
	delete self;
}

