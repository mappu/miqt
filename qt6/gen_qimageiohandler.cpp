#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QImageIOHandler>
#include <QImageIOPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qimageiohandler.h>
#include "gen_qimageiohandler.h"

#ifdef __cplusplus
extern "C" {
#endif

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
int miqt_exec_callback_QImageIOPlugin_capabilities(const QImageIOPlugin*, intptr_t, QIODevice*, struct miqt_string);
QImageIOHandler* miqt_exec_callback_QImageIOPlugin_create(const QImageIOPlugin*, intptr_t, QIODevice*, struct miqt_string);
bool miqt_exec_callback_QImageIOPlugin_event(QImageIOPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QImageIOPlugin_eventFilter(QImageIOPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QImageIOPlugin_timerEvent(QImageIOPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QImageIOPlugin_childEvent(QImageIOPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QImageIOPlugin_customEvent(QImageIOPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QImageIOPlugin_connectNotify(QImageIOPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QImageIOPlugin_disconnectNotify(QImageIOPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQImageIOHandler final : public QImageIOHandler {
public:

	MiqtVirtualQImageIOHandler(): QImageIOHandler() {};

	virtual ~MiqtVirtualQImageIOHandler() override = default;

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

	// Wrapper to allow calling protected method
	bool virtualbase_write(QImage* image) {

		return QImageIOHandler::write(*image);

	}

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

	// Wrapper to allow calling protected method
	QVariant* virtualbase_option(int option) const {

		return new QVariant(QImageIOHandler::option(static_cast<QImageIOHandler::ImageOption>(option)));

	}

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

	// Wrapper to allow calling protected method
	void virtualbase_setOption(int option, QVariant* value) {

		QImageIOHandler::setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);

	}

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

	// Wrapper to allow calling protected method
	bool virtualbase_supportsOption(int option) const {

		return QImageIOHandler::supportsOption(static_cast<QImageIOHandler::ImageOption>(option));

	}

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

	// Wrapper to allow calling protected method
	bool virtualbase_jumpToNextImage() {

		return QImageIOHandler::jumpToNextImage();

	}

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

	// Wrapper to allow calling protected method
	bool virtualbase_jumpToImage(int imageNumber) {

		return QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_loopCount() const {

		return QImageIOHandler::loopCount();

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_imageCount() const {

		return QImageIOHandler::imageCount();

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_nextImageDelay() const {

		return QImageIOHandler::nextImageDelay();

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_currentImageNumber() const {

		return QImageIOHandler::currentImageNumber();

	}

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

	// Wrapper to allow calling protected method
	QRect* virtualbase_currentImageRect() const {

		return new QRect(QImageIOHandler::currentImageRect());

	}

};

QImageIOHandler* QImageIOHandler_new() {
	return new MiqtVirtualQImageIOHandler();
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

bool QImageIOHandler_allocateImage(QSize* size, int format, QImage* image) {
	return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
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
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_write(image);
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_option(option);
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
	( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_setOption(option, value);
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_supportsOption(option);
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
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_jumpToNextImage();
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
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_jumpToImage(imageNumber);
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_loopCount();
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_imageCount();
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_nextImageDelay();
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_currentImageNumber();
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
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_currentImageRect();
}

void QImageIOHandler_delete(QImageIOHandler* self) {
	delete self;
}

class MiqtVirtualQImageIOPlugin final : public QImageIOPlugin {
public:

	MiqtVirtualQImageIOPlugin(): QImageIOPlugin() {};
	MiqtVirtualQImageIOPlugin(QObject* parent): QImageIOPlugin(parent) {};

	virtual ~MiqtVirtualQImageIOPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__capabilities = 0;

	// Subclass to allow providing a Go implementation
	virtual QImageIOPlugin::Capabilities capabilities(QIODevice* device, const QByteArray& format) const override {
		if (handle__capabilities == 0) {
			return QImageIOPlugin::Capabilities(); // Pure virtual, there is no base we can call
		}
		
		QIODevice* sigval1 = device;
		const QByteArray format_qb = format;
		struct miqt_string format_ms;
		format_ms.len = format_qb.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_qb.data(), format_ms.len);
		struct miqt_string sigval2 = format_ms;

		int callback_return_value = miqt_exec_callback_QImageIOPlugin_capabilities(this, handle__capabilities, sigval1, sigval2);

		return static_cast<QImageIOPlugin::Capabilities>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
		if (handle__create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		QIODevice* sigval1 = device;
		const QByteArray format_qb = format;
		struct miqt_string format_ms;
		format_ms.len = format_qb.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_qb.data(), format_ms.len);
		struct miqt_string sigval2 = format_ms;

		QImageIOHandler* callback_return_value = miqt_exec_callback_QImageIOPlugin_create(this, handle__create, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QImageIOPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QImageIOPlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QImageIOPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QImageIOPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QImageIOPlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QImageIOPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QImageIOPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QImageIOPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QImageIOPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QImageIOPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QImageIOPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QImageIOPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QImageIOPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageIOPlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QImageIOPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QImageIOPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageIOPlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QImageIOPlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QImageIOPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QImageIOPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QImageIOPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QImageIOPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QImageIOPlugin* QImageIOPlugin_new() {
	return new MiqtVirtualQImageIOPlugin();
}

QImageIOPlugin* QImageIOPlugin_new2(QObject* parent) {
	return new MiqtVirtualQImageIOPlugin(parent);
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

bool QImageIOPlugin_override_virtual_capabilities(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__capabilities = slot;
	return true;
}

bool QImageIOPlugin_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QImageIOPlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QImageIOPlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_event(event);
}

bool QImageIOPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QImageIOPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QImageIOPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QImageIOPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QImageIOPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QImageIOPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_childEvent(event);
}

bool QImageIOPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QImageIOPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_customEvent(event);
}

bool QImageIOPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QImageIOPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QImageIOPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QImageIOPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QImageIOPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QImageIOPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QImageIOPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QImageIOPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQImageIOPlugin* self_cast = dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QImageIOPlugin_delete(QImageIOPlugin* self) {
	delete self;
}

