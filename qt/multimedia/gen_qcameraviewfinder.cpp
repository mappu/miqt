#include <QCameraViewfinder>
#include <QEvent>
#include <QHideEvent>
#include <QMediaBindableInterface>
#include <QMediaObject>
#include <QMetaObject>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWidget>
#include <QWidget>
#include <qcameraviewfinder.h>
#include "gen_qcameraviewfinder.h"

#ifdef __cplusplus
extern "C" {
#endif

QMediaObject* miqt_exec_callback_QCameraViewfinder_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_SetMediaObject(void*, intptr_t, QMediaObject*);
QSize* miqt_exec_callback_QCameraViewfinder_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCameraViewfinder_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QCameraViewfinder_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCameraViewfinder_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_PaintEvent(void*, intptr_t, QPaintEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCameraViewfinder final : public QCameraViewfinder {
public:

	MiqtVirtualQCameraViewfinder(QWidget* parent): QCameraViewfinder(parent) {};
	MiqtVirtualQCameraViewfinder(): QCameraViewfinder() {};

	virtual ~MiqtVirtualQCameraViewfinder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QCameraViewfinder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QCameraViewfinder_MediaObject(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QCameraViewfinder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QCameraViewfinder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QCameraViewfinder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCameraViewfinder::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_SizeHint(const_cast<MiqtVirtualQCameraViewfinder*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCameraViewfinder::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QCameraViewfinder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QCameraViewfinder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QCameraViewfinder::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QCameraViewfinder::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QCameraViewfinder::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QCameraViewfinder::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QCameraViewfinder::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QCameraViewfinder::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QCameraViewfinder::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QCameraViewfinder::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QCameraViewfinder::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QCameraViewfinder::paintEvent(event);

	}

};

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent) {
	return new MiqtVirtualQCameraViewfinder(parent);
}

QCameraViewfinder* QCameraViewfinder_new2() {
	return new MiqtVirtualQCameraViewfinder();
}

void QCameraViewfinder_virtbase(QCameraViewfinder* src, QVideoWidget** outptr_QVideoWidget) {
	*outptr_QVideoWidget = static_cast<QVideoWidget*>(src);
}

QMetaObject* QCameraViewfinder_MetaObject(const QCameraViewfinder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinder_Metacast(QCameraViewfinder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinder_Tr(const char* s) {
	QString _ret = QCameraViewfinder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf8(const char* s) {
	QString _ret = QCameraViewfinder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QCameraViewfinder_MediaObject(const QCameraViewfinder* self) {
	return self->mediaObject();
}

struct miqt_string QCameraViewfinder_Tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinder_override_virtual_MediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MediaObject = slot;
	return true;
}

QMediaObject* QCameraViewfinder_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MediaObject();
}

bool QCameraViewfinder_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMediaObject = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SetMediaObject(object);
}

bool QCameraViewfinder_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QCameraViewfinder_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_SizeHint();
}

bool QCameraViewfinder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_Event(event);
}

bool QCameraViewfinder_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ShowEvent(event);
}

bool QCameraViewfinder_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_HideEvent(event);
}

bool QCameraViewfinder_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_ResizeEvent(event);
}

bool QCameraViewfinder_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_MoveEvent(event);
}

bool QCameraViewfinder_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_PaintEvent(event);
}

void QCameraViewfinder_Delete(QCameraViewfinder* self) {
	delete self;
}

