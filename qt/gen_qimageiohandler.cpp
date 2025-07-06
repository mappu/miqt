#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qimageiohandler.h>
#include "gen_qimageiohandler.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string miqt_exec_callback_QImageIOHandler_name(const QImageIOHandler*, intptr_t);
bool miqt_exec_callback_QImageIOHandler_canRead(const QImageIOHandler*, intptr_t);
bool miqt_exec_callback_QImageIOHandler_read(QImageIOHandler*, intptr_t, QImage*);
bool miqt_exec_callback_QImageIOHandler_write(QImageIOHandler*, intptr_t, QImage*);
QVariant* miqt_exec_callback_QImageIOHandler_option(const QImageIOHandler*, intptr_t, int);
void miqt_exec_callback_QImageIOHandler_setOption(QImageIOHandler*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QImageIOHandler_supportsOption(const QImageIOHandler*, intptr_t, int);
bool miqt_exec_callback_QImageIOHandler_jumpToNextImage(QImageIOHandler*, intptr_t);
bool miqt_exec_callback_QImageIOHandler_jumpToImage(QImageIOHandler*, intptr_t, int);
int miqt_exec_callback_QImageIOHandler_loopCount(const QImageIOHandler*, intptr_t);
int miqt_exec_callback_QImageIOHandler_imageCount(const QImageIOHandler*, intptr_t);
int miqt_exec_callback_QImageIOHandler_nextImageDelay(const QImageIOHandler*, intptr_t);
int miqt_exec_callback_QImageIOHandler_currentImageNumber(const QImageIOHandler*, intptr_t);
QRect* miqt_exec_callback_QImageIOHandler_currentImageRect(const QImageIOHandler*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQImageIOHandler final : public QImageIOHandler {
public:

	MiqtVirtualQImageIOHandler(): QImageIOHandler() {}

	virtual ~MiqtVirtualQImageIOHandler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__name = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray name() const override {
		if (handle__name == 0) {
			return QImageIOHandler::name();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QImageIOHandler_name(this, handle__name);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QByteArray;
	}

	friend struct miqt_string QImageIOHandler_virtualbase_name(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canRead() const override {
		if (handle__canRead == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_canRead(this, handle__canRead);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual bool read(QImage* image) override {
		if (handle__read == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		QImage* sigval1 = image;
		bool callback_return_value = miqt_exec_callback_QImageIOHandler_read(this, handle__read, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual bool write(const QImage& image) override {
		if (handle__write == 0) {
			return QImageIOHandler::write(image);
		}

		const QImage& image_ret = image;
		// Cast returned reference into pointer
		QImage* sigval1 = const_cast<QImage*>(&image_ret);
		bool callback_return_value = miqt_exec_callback_QImageIOHandler_write(this, handle__write, sigval1);
		return callback_return_value;
	}

	friend bool QImageIOHandler_virtualbase_write(void* self, QImage* image);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__option = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant option(QImageIOHandler::ImageOption option) const override {
		if (handle__option == 0) {
			return QImageIOHandler::option(option);
		}

		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		QVariant* callback_return_value = miqt_exec_callback_QImageIOHandler_option(this, handle__option, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QImageIOHandler_virtualbase_option(const void* self, int option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOption(QImageIOHandler::ImageOption option, const QVariant& value) override {
		if (handle__setOption == 0) {
			QImageIOHandler::setOption(option, value);
			return;
		}

		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QImageIOHandler_setOption(this, handle__setOption, sigval1, sigval2);

	}

	friend void QImageIOHandler_virtualbase_setOption(void* self, int option, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsOption = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsOption(QImageIOHandler::ImageOption option) const override {
		if (handle__supportsOption == 0) {
			return QImageIOHandler::supportsOption(option);
		}

		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		bool callback_return_value = miqt_exec_callback_QImageIOHandler_supportsOption(this, handle__supportsOption, sigval1);
		return callback_return_value;
	}

	friend bool QImageIOHandler_virtualbase_supportsOption(const void* self, int option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__jumpToNextImage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool jumpToNextImage() override {
		if (handle__jumpToNextImage == 0) {
			return QImageIOHandler::jumpToNextImage();
		}

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_jumpToNextImage(this, handle__jumpToNextImage);
		return callback_return_value;
	}

	friend bool QImageIOHandler_virtualbase_jumpToNextImage(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__jumpToImage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool jumpToImage(int imageNumber) override {
		if (handle__jumpToImage == 0) {
			return QImageIOHandler::jumpToImage(imageNumber);
		}

		int sigval1 = imageNumber;
		bool callback_return_value = miqt_exec_callback_QImageIOHandler_jumpToImage(this, handle__jumpToImage, sigval1);
		return callback_return_value;
	}

	friend bool QImageIOHandler_virtualbase_jumpToImage(void* self, int imageNumber);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loopCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int loopCount() const override {
		if (handle__loopCount == 0) {
			return QImageIOHandler::loopCount();
		}

		int callback_return_value = miqt_exec_callback_QImageIOHandler_loopCount(this, handle__loopCount);
		return static_cast<int>(callback_return_value);
	}

	friend int QImageIOHandler_virtualbase_loopCount(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__imageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int imageCount() const override {
		if (handle__imageCount == 0) {
			return QImageIOHandler::imageCount();
		}

		int callback_return_value = miqt_exec_callback_QImageIOHandler_imageCount(this, handle__imageCount);
		return static_cast<int>(callback_return_value);
	}

	friend int QImageIOHandler_virtualbase_imageCount(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextImageDelay = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextImageDelay() const override {
		if (handle__nextImageDelay == 0) {
			return QImageIOHandler::nextImageDelay();
		}

		int callback_return_value = miqt_exec_callback_QImageIOHandler_nextImageDelay(this, handle__nextImageDelay);
		return static_cast<int>(callback_return_value);
	}

	friend int QImageIOHandler_virtualbase_nextImageDelay(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentImageNumber = 0;

	// Subclass to allow providing a Go implementation
	virtual int currentImageNumber() const override {
		if (handle__currentImageNumber == 0) {
			return QImageIOHandler::currentImageNumber();
		}

		int callback_return_value = miqt_exec_callback_QImageIOHandler_currentImageNumber(this, handle__currentImageNumber);
		return static_cast<int>(callback_return_value);
	}

	friend int QImageIOHandler_virtualbase_currentImageNumber(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentImageRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect currentImageRect() const override {
		if (handle__currentImageRect == 0) {
			return QImageIOHandler::currentImageRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QImageIOHandler_currentImageRect(this, handle__currentImageRect);
		return *callback_return_value;
	}

	friend QRect* QImageIOHandler_virtualbase_currentImageRect(const void* self);

};

QImageIOHandler* QImageIOHandler_new() {
	return new (std::nothrow) MiqtVirtualQImageIOHandler();
}

void QImageIOHandler_setDevice(QImageIOHandler* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageIOHandler_device(const QImageIOHandler* self) {
	return self->device();
}

void QImageIOHandler_setFormat(QImageIOHandler* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

void QImageIOHandler_setFormatWithFormat(const QImageIOHandler* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QImageIOHandler_format(const QImageIOHandler* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOHandler_name(const QImageIOHandler* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QImageIOHandler_canRead(const QImageIOHandler* self) {
	return self->canRead();
}

bool QImageIOHandler_read(QImageIOHandler* self, QImage* image) {
	return self->read(image);
}

bool QImageIOHandler_write(QImageIOHandler* self, QImage* image) {
	return self->write(*image);
}

QVariant* QImageIOHandler_option(const QImageIOHandler* self, int option) {
	return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
}

void QImageIOHandler_setOption(QImageIOHandler* self, int option, QVariant* value) {
	self->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}

bool QImageIOHandler_supportsOption(const QImageIOHandler* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

bool QImageIOHandler_jumpToNextImage(QImageIOHandler* self) {
	return self->jumpToNextImage();
}

bool QImageIOHandler_jumpToImage(QImageIOHandler* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageIOHandler_loopCount(const QImageIOHandler* self) {
	return self->loopCount();
}

int QImageIOHandler_imageCount(const QImageIOHandler* self) {
	return self->imageCount();
}

int QImageIOHandler_nextImageDelay(const QImageIOHandler* self) {
	return self->nextImageDelay();
}

int QImageIOHandler_currentImageNumber(const QImageIOHandler* self) {
	return self->currentImageNumber();
}

QRect* QImageIOHandler_currentImageRect(const QImageIOHandler* self) {
	return new QRect(self->currentImageRect());
}

bool QImageIOHandler_override_virtual_name(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = slot;
	return true;
}

struct miqt_string QImageIOHandler_virtualbase_name(const void* self) {
	QByteArray _qb = static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QImageIOHandler_override_virtual_canRead(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canRead = slot;
	return true;
}

bool QImageIOHandler_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__read = slot;
	return true;
}

bool QImageIOHandler_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__write = slot;
	return true;
}

bool QImageIOHandler_virtualbase_write(void* self, QImage* image) {
	return static_cast<MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::write(*image);
}

bool QImageIOHandler_override_virtual_option(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__option = slot;
	return true;
}

QVariant* QImageIOHandler_virtualbase_option(const void* self, int option) {
	return new QVariant(static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::option(static_cast<MiqtVirtualQImageIOHandler::ImageOption>(option)));
}

bool QImageIOHandler_override_virtual_setOption(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOption = slot;
	return true;
}

void QImageIOHandler_virtualbase_setOption(void* self, int option, QVariant* value) {
	static_cast<MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::setOption(static_cast<MiqtVirtualQImageIOHandler::ImageOption>(option), *value);
}

bool QImageIOHandler_override_virtual_supportsOption(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsOption = slot;
	return true;
}

bool QImageIOHandler_virtualbase_supportsOption(const void* self, int option) {
	return static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::supportsOption(static_cast<MiqtVirtualQImageIOHandler::ImageOption>(option));
}

bool QImageIOHandler_override_virtual_jumpToNextImage(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__jumpToNextImage = slot;
	return true;
}

bool QImageIOHandler_virtualbase_jumpToNextImage(void* self) {
	return static_cast<MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::jumpToNextImage();
}

bool QImageIOHandler_override_virtual_jumpToImage(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__jumpToImage = slot;
	return true;
}

bool QImageIOHandler_virtualbase_jumpToImage(void* self, int imageNumber) {
	return static_cast<MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));
}

bool QImageIOHandler_override_virtual_loopCount(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__loopCount = slot;
	return true;
}

int QImageIOHandler_virtualbase_loopCount(const void* self) {
	return static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::loopCount();
}

bool QImageIOHandler_override_virtual_imageCount(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__imageCount = slot;
	return true;
}

int QImageIOHandler_virtualbase_imageCount(const void* self) {
	return static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::imageCount();
}

bool QImageIOHandler_override_virtual_nextImageDelay(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextImageDelay = slot;
	return true;
}

int QImageIOHandler_virtualbase_nextImageDelay(const void* self) {
	return static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::nextImageDelay();
}

bool QImageIOHandler_override_virtual_currentImageNumber(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentImageNumber = slot;
	return true;
}

int QImageIOHandler_virtualbase_currentImageNumber(const void* self) {
	return static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::currentImageNumber();
}

bool QImageIOHandler_override_virtual_currentImageRect(void* self, intptr_t slot) {
	MiqtVirtualQImageIOHandler* self_cast = dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentImageRect = slot;
	return true;
}

QRect* QImageIOHandler_virtualbase_currentImageRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQImageIOHandler*>(self)->QImageIOHandler::currentImageRect());
}

void QImageIOHandler_delete(QImageIOHandler* self) {
	delete self;
}

void QImageIOPlugin_virtbase(QImageIOPlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QImageIOPlugin_metaObject(const QImageIOPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageIOPlugin_metacast(QImageIOPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QImageIOPlugin_tr(const char* s) {
	QString _ret = QImageIOPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOPlugin_trUtf8(const char* s) {
	QString _ret = QImageIOPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QImageIOPlugin_capabilities(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	QImageIOPlugin::Capabilities _ret = self->capabilities(device, format_QByteArray);
	return static_cast<int>(_ret);
}

QImageIOHandler* QImageIOPlugin_create(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return self->create(device, format_QByteArray);
}

struct miqt_string QImageIOPlugin_tr2(const char* s, const char* c) {
	QString _ret = QImageIOPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOPlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QImageIOPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOPlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QImageIOPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageIOPlugin_delete(QImageIOPlugin* self) {
	delete self;
}

