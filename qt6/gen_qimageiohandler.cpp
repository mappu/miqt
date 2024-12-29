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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQImageIOHandler : public virtual QImageIOHandler {
public:

	MiqtVirtualQImageIOHandler(): QImageIOHandler() {};

	virtual ~MiqtVirtualQImageIOHandler() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canRead() const override {
		if (handle__CanRead == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_CanRead(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__CanRead);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual bool read(QImage* image) override {
		if (handle__Read == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		QImage* sigval1 = image;

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_Read(this, handle__Read, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual bool write(const QImage& image) override {
		if (handle__Write == 0) {
			return QImageIOHandler::write(image);
		}
		
		const QImage& image_ret = image;
		// Cast returned reference into pointer
		QImage* sigval1 = const_cast<QImage*>(&image_ret);

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_Write(this, handle__Write, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Write(QImage* image) {

		return QImageIOHandler::write(*image);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Option = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant option(QImageIOHandler::ImageOption option) const override {
		if (handle__Option == 0) {
			return QImageIOHandler::option(option);
		}
		
		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QImageIOHandler_Option(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__Option, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Option(int option) const {

		return new QVariant(QImageIOHandler::option(static_cast<QImageIOHandler::ImageOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOption(QImageIOHandler::ImageOption option, const QVariant& value) override {
		if (handle__SetOption == 0) {
			QImageIOHandler::setOption(option, value);
			return;
		}
		
		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QImageIOHandler_SetOption(this, handle__SetOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetOption(int option, QVariant* value) {

		QImageIOHandler::setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsOption = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsOption(QImageIOHandler::ImageOption option) const override {
		if (handle__SupportsOption == 0) {
			return QImageIOHandler::supportsOption(option);
		}
		
		QImageIOHandler::ImageOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_SupportsOption(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__SupportsOption, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsOption(int option) const {

		return QImageIOHandler::supportsOption(static_cast<QImageIOHandler::ImageOption>(option));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JumpToNextImage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool jumpToNextImage() override {
		if (handle__JumpToNextImage == 0) {
			return QImageIOHandler::jumpToNextImage();
		}
		

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_JumpToNextImage(this, handle__JumpToNextImage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_JumpToNextImage() {

		return QImageIOHandler::jumpToNextImage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JumpToImage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool jumpToImage(int imageNumber) override {
		if (handle__JumpToImage == 0) {
			return QImageIOHandler::jumpToImage(imageNumber);
		}
		
		int sigval1 = imageNumber;

		bool callback_return_value = miqt_exec_callback_QImageIOHandler_JumpToImage(this, handle__JumpToImage, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_JumpToImage(int imageNumber) {

		return QImageIOHandler::jumpToImage(static_cast<int>(imageNumber));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LoopCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int loopCount() const override {
		if (handle__LoopCount == 0) {
			return QImageIOHandler::loopCount();
		}
		

		int callback_return_value = miqt_exec_callback_QImageIOHandler_LoopCount(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__LoopCount);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LoopCount() const {

		return QImageIOHandler::loopCount();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ImageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int imageCount() const override {
		if (handle__ImageCount == 0) {
			return QImageIOHandler::imageCount();
		}
		

		int callback_return_value = miqt_exec_callback_QImageIOHandler_ImageCount(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__ImageCount);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ImageCount() const {

		return QImageIOHandler::imageCount();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextImageDelay = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextImageDelay() const override {
		if (handle__NextImageDelay == 0) {
			return QImageIOHandler::nextImageDelay();
		}
		

		int callback_return_value = miqt_exec_callback_QImageIOHandler_NextImageDelay(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__NextImageDelay);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_NextImageDelay() const {

		return QImageIOHandler::nextImageDelay();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentImageNumber = 0;

	// Subclass to allow providing a Go implementation
	virtual int currentImageNumber() const override {
		if (handle__CurrentImageNumber == 0) {
			return QImageIOHandler::currentImageNumber();
		}
		

		int callback_return_value = miqt_exec_callback_QImageIOHandler_CurrentImageNumber(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__CurrentImageNumber);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_CurrentImageNumber() const {

		return QImageIOHandler::currentImageNumber();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentImageRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect currentImageRect() const override {
		if (handle__CurrentImageRect == 0) {
			return QImageIOHandler::currentImageRect();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QImageIOHandler_CurrentImageRect(const_cast<MiqtVirtualQImageIOHandler*>(this), handle__CurrentImageRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_CurrentImageRect() const {

		return new QRect(QImageIOHandler::currentImageRect());

	}

};

QImageIOHandler* QImageIOHandler_new() {
	return new MiqtVirtualQImageIOHandler();
}

void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageIOHandler_Device(const QImageIOHandler* self) {
	return self->device();
}

void QImageIOHandler_SetFormat(QImageIOHandler* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

void QImageIOHandler_SetFormatWithFormat(const QImageIOHandler* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QImageIOHandler_Format(const QImageIOHandler* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QImageIOHandler_CanRead(const QImageIOHandler* self) {
	return self->canRead();
}

bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image) {
	return self->read(image);
}

bool QImageIOHandler_Write(QImageIOHandler* self, QImage* image) {
	return self->write(*image);
}

QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option) {
	return new QVariant(self->option(static_cast<QImageIOHandler::ImageOption>(option)));
}

void QImageIOHandler_SetOption(QImageIOHandler* self, int option, QVariant* value) {
	self->setOption(static_cast<QImageIOHandler::ImageOption>(option), *value);
}

bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self) {
	return self->jumpToNextImage();
}

bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageIOHandler_LoopCount(const QImageIOHandler* self) {
	return self->loopCount();
}

int QImageIOHandler_ImageCount(const QImageIOHandler* self) {
	return self->imageCount();
}

int QImageIOHandler_NextImageDelay(const QImageIOHandler* self) {
	return self->nextImageDelay();
}

int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self) {
	return self->currentImageNumber();
}

QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self) {
	return new QRect(self->currentImageRect());
}

bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image) {
	return QImageIOHandler::allocateImage(*size, static_cast<QImage::Format>(format), image);
}

void QImageIOHandler_override_virtual_CanRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__CanRead = slot;
}

void QImageIOHandler_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__Read = slot;
}

void QImageIOHandler_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__Write = slot;
}

bool QImageIOHandler_virtualbase_Write(void* self, QImage* image) {
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_Write(image);
}

void QImageIOHandler_override_virtual_Option(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__Option = slot;
}

QVariant* QImageIOHandler_virtualbase_Option(const void* self, int option) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_Option(option);
}

void QImageIOHandler_override_virtual_SetOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__SetOption = slot;
}

void QImageIOHandler_virtualbase_SetOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_SetOption(option, value);
}

void QImageIOHandler_override_virtual_SupportsOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__SupportsOption = slot;
}

bool QImageIOHandler_virtualbase_SupportsOption(const void* self, int option) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_SupportsOption(option);
}

void QImageIOHandler_override_virtual_JumpToNextImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__JumpToNextImage = slot;
}

bool QImageIOHandler_virtualbase_JumpToNextImage(void* self) {
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_JumpToNextImage();
}

void QImageIOHandler_override_virtual_JumpToImage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__JumpToImage = slot;
}

bool QImageIOHandler_virtualbase_JumpToImage(void* self, int imageNumber) {
	return ( (MiqtVirtualQImageIOHandler*)(self) )->virtualbase_JumpToImage(imageNumber);
}

void QImageIOHandler_override_virtual_LoopCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__LoopCount = slot;
}

int QImageIOHandler_virtualbase_LoopCount(const void* self) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_LoopCount();
}

void QImageIOHandler_override_virtual_ImageCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__ImageCount = slot;
}

int QImageIOHandler_virtualbase_ImageCount(const void* self) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_ImageCount();
}

void QImageIOHandler_override_virtual_NextImageDelay(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__NextImageDelay = slot;
}

int QImageIOHandler_virtualbase_NextImageDelay(const void* self) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_NextImageDelay();
}

void QImageIOHandler_override_virtual_CurrentImageNumber(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__CurrentImageNumber = slot;
}

int QImageIOHandler_virtualbase_CurrentImageNumber(const void* self) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_CurrentImageNumber();
}

void QImageIOHandler_override_virtual_CurrentImageRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOHandler*>( (QImageIOHandler*)(self) )->handle__CurrentImageRect = slot;
}

QRect* QImageIOHandler_virtualbase_CurrentImageRect(const void* self) {
	return ( (const MiqtVirtualQImageIOHandler*)(self) )->virtualbase_CurrentImageRect();
}

void QImageIOHandler_Delete(QImageIOHandler* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQImageIOHandler*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQImageIOPlugin : public virtual QImageIOPlugin {
public:

	MiqtVirtualQImageIOPlugin(): QImageIOPlugin() {};
	MiqtVirtualQImageIOPlugin(QObject* parent): QImageIOPlugin(parent) {};

	virtual ~MiqtVirtualQImageIOPlugin() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Capabilities = 0;

	// Subclass to allow providing a Go implementation
	virtual QImageIOPlugin::Capabilities capabilities(QIODevice* device, const QByteArray& format) const override {
		if (handle__Capabilities == 0) {
			return QImageIOPlugin::Capabilities(); // Pure virtual, there is no base we can call
		}
		
		QIODevice* sigval1 = device;
		const QByteArray format_qb = format;
		struct miqt_string format_ms;
		format_ms.len = format_qb.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_qb.data(), format_ms.len);
		struct miqt_string sigval2 = format_ms;

		int callback_return_value = miqt_exec_callback_QImageIOPlugin_Capabilities(const_cast<MiqtVirtualQImageIOPlugin*>(this), handle__Capabilities, sigval1, sigval2);

		return static_cast<QImageIOPlugin::Capabilities>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
		if (handle__Create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		QIODevice* sigval1 = device;
		const QByteArray format_qb = format;
		struct miqt_string format_ms;
		format_ms.len = format_qb.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_qb.data(), format_ms.len);
		struct miqt_string sigval2 = format_ms;

		QImageIOHandler* callback_return_value = miqt_exec_callback_QImageIOPlugin_Create(const_cast<MiqtVirtualQImageIOPlugin*>(this), handle__Create, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QImageIOPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QImageIOPlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QImageIOPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QImageIOPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QImageIOPlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QImageIOPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QImageIOPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QImageIOPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QImageIOPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QImageIOPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QImageIOPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QImageIOPlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QImageIOPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QImageIOPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageIOPlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QImageIOPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QImageIOPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QImageIOPlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QImageIOPlugin::disconnectNotify(*signal);

	}

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

QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QImageIOPlugin_Tr(const char* s) {
	QString _ret = QImageIOPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	QImageIOPlugin::Capabilities _ret = self->capabilities(device, format_QByteArray);
	return static_cast<int>(_ret);
}

QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return self->create(device, format_QByteArray);
}

struct miqt_string QImageIOPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QImageIOPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QImageIOPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageIOPlugin_override_virtual_Capabilities(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__Capabilities = slot;
}

void QImageIOPlugin_override_virtual_Create(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__Create = slot;
}

void QImageIOPlugin_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__Event = slot;
}

bool QImageIOPlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_Event(event);
}

void QImageIOPlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__EventFilter = slot;
}

bool QImageIOPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

void QImageIOPlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__TimerEvent = slot;
}

void QImageIOPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_TimerEvent(event);
}

void QImageIOPlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__ChildEvent = slot;
}

void QImageIOPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_ChildEvent(event);
}

void QImageIOPlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__CustomEvent = slot;
}

void QImageIOPlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_CustomEvent(event);
}

void QImageIOPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__ConnectNotify = slot;
}

void QImageIOPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

void QImageIOPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQImageIOPlugin*>( (QImageIOPlugin*)(self) )->handle__DisconnectNotify = slot;
}

void QImageIOPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQImageIOPlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QImageIOPlugin_Delete(QImageIOPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQImageIOPlugin*>( self );
	} else {
		delete self;
	}
}

