#include <QAbstractPlanarVideoBuffer>
#include <QAbstractVideoBuffer>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include "gen_qabstractvideobuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractVideoBuffer_release(QAbstractVideoBuffer*, intptr_t);
int miqt_exec_callback_QAbstractVideoBuffer_mapMode(const QAbstractVideoBuffer*, intptr_t);
unsigned char* miqt_exec_callback_QAbstractVideoBuffer_map(QAbstractVideoBuffer*, intptr_t, int, int*, int*);
void miqt_exec_callback_QAbstractVideoBuffer_unmap(QAbstractVideoBuffer*, intptr_t);
QVariant* miqt_exec_callback_QAbstractVideoBuffer_handle(const QAbstractVideoBuffer*, intptr_t);
unsigned char* miqt_exec_callback_QAbstractPlanarVideoBuffer_map(QAbstractPlanarVideoBuffer*, intptr_t, int, int*, int*);
void miqt_exec_callback_QAbstractPlanarVideoBuffer_release(QAbstractPlanarVideoBuffer*, intptr_t);
int miqt_exec_callback_QAbstractPlanarVideoBuffer_mapMode(const QAbstractPlanarVideoBuffer*, intptr_t);
void miqt_exec_callback_QAbstractPlanarVideoBuffer_unmap(QAbstractPlanarVideoBuffer*, intptr_t);
QVariant* miqt_exec_callback_QAbstractPlanarVideoBuffer_handle(const QAbstractPlanarVideoBuffer*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractVideoBuffer final : public QAbstractVideoBuffer {
public:

	MiqtVirtualQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType type): QAbstractVideoBuffer(type) {};

	virtual ~MiqtVirtualQAbstractVideoBuffer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__release = 0;

	// Subclass to allow providing a Go implementation
	virtual void release() override {
		if (handle__release == 0) {
			QAbstractVideoBuffer::release();
			return;
		}
		

		miqt_exec_callback_QAbstractVideoBuffer_release(this, handle__release);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_release() {

		QAbstractVideoBuffer::release();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractVideoBuffer::MapMode mapMode() const override {
		if (handle__mapMode == 0) {
			return (QAbstractVideoBuffer::MapMode)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_mapMode(this, handle__mapMode);

		return static_cast<QAbstractVideoBuffer::MapMode>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__map = 0;

	// Subclass to allow providing a Go implementation
	virtual uchar* map(QAbstractVideoBuffer::MapMode mode, int* numBytes, int* bytesPerLine) override {
		if (handle__map == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		QAbstractVideoBuffer::MapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		int* sigval2 = numBytes;
		int* sigval3 = bytesPerLine;

		unsigned char* callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_map(this, handle__map, sigval1, sigval2, sigval3);

		return static_cast<uchar*>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void unmap() override {
		if (handle__unmap == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractVideoBuffer_unmap(this, handle__unmap);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__handle = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant handle() const override {
		if (handle__handle == 0) {
			return QAbstractVideoBuffer::handle();
		}
		

		QVariant* callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_handle(this, handle__handle);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_handle() const {

		return new QVariant(QAbstractVideoBuffer::handle());

	}

};

QAbstractVideoBuffer* QAbstractVideoBuffer_new(int type) {
	return new MiqtVirtualQAbstractVideoBuffer(static_cast<QAbstractVideoBuffer::HandleType>(type));
}

void QAbstractVideoBuffer_release(QAbstractVideoBuffer* self) {
	self->release();
}

int QAbstractVideoBuffer_handleType(const QAbstractVideoBuffer* self) {
	QAbstractVideoBuffer::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

int QAbstractVideoBuffer_mapMode(const QAbstractVideoBuffer* self) {
	QAbstractVideoBuffer::MapMode _ret = self->mapMode();
	return static_cast<int>(_ret);
}

unsigned char* QAbstractVideoBuffer_map(QAbstractVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine) {
	uchar* _ret = self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
	return static_cast<unsigned char*>(_ret);
}

void QAbstractVideoBuffer_unmap(QAbstractVideoBuffer* self) {
	self->unmap();
}

QVariant* QAbstractVideoBuffer_handle(const QAbstractVideoBuffer* self) {
	return new QVariant(self->handle());
}

bool QAbstractVideoBuffer_override_virtual_release(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__release = slot;
	return true;
}

void QAbstractVideoBuffer_virtualbase_release(void* self) {
	( (MiqtVirtualQAbstractVideoBuffer*)(self) )->virtualbase_release();
}

bool QAbstractVideoBuffer_override_virtual_mapMode(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapMode = slot;
	return true;
}

bool QAbstractVideoBuffer_override_virtual_map(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__map = slot;
	return true;
}

bool QAbstractVideoBuffer_override_virtual_unmap(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unmap = slot;
	return true;
}

bool QAbstractVideoBuffer_override_virtual_handle(void* self, intptr_t slot) {
	MiqtVirtualQAbstractVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__handle = slot;
	return true;
}

QVariant* QAbstractVideoBuffer_virtualbase_handle(const void* self) {
	return ( (const MiqtVirtualQAbstractVideoBuffer*)(self) )->virtualbase_handle();
}

void QAbstractVideoBuffer_delete(QAbstractVideoBuffer* self) {
	delete self;
}

class MiqtVirtualQAbstractPlanarVideoBuffer final : public QAbstractPlanarVideoBuffer {
public:

	MiqtVirtualQAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType type): QAbstractPlanarVideoBuffer(type) {};

	virtual ~MiqtVirtualQAbstractPlanarVideoBuffer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__map = 0;

	// Subclass to allow providing a Go implementation
	virtual uchar* map(QAbstractVideoBuffer::MapMode mode, int* numBytes, int* bytesPerLine) override {
		if (handle__map == 0) {
			return QAbstractPlanarVideoBuffer::map(mode, numBytes, bytesPerLine);
		}
		
		QAbstractVideoBuffer::MapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		int* sigval2 = numBytes;
		int* sigval3 = bytesPerLine;

		unsigned char* callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_map(this, handle__map, sigval1, sigval2, sigval3);

		return static_cast<uchar*>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	unsigned char* virtualbase_map(int mode, int* numBytes, int* bytesPerLine) {

		uchar* _ret = QAbstractPlanarVideoBuffer::map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
		return static_cast<unsigned char*>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__release = 0;

	// Subclass to allow providing a Go implementation
	virtual void release() override {
		if (handle__release == 0) {
			QAbstractPlanarVideoBuffer::release();
			return;
		}
		

		miqt_exec_callback_QAbstractPlanarVideoBuffer_release(this, handle__release);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_release() {

		QAbstractPlanarVideoBuffer::release();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractVideoBuffer::MapMode mapMode() const override {
		if (handle__mapMode == 0) {
			return (QAbstractVideoBuffer::MapMode)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_mapMode(this, handle__mapMode);

		return static_cast<QAbstractVideoBuffer::MapMode>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void unmap() override {
		if (handle__unmap == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractPlanarVideoBuffer_unmap(this, handle__unmap);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__handle = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant handle() const override {
		if (handle__handle == 0) {
			return QAbstractPlanarVideoBuffer::handle();
		}
		

		QVariant* callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_handle(this, handle__handle);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_handle() const {

		return new QVariant(QAbstractPlanarVideoBuffer::handle());

	}

};

QAbstractPlanarVideoBuffer* QAbstractPlanarVideoBuffer_new(int type) {
	return new MiqtVirtualQAbstractPlanarVideoBuffer(static_cast<QAbstractVideoBuffer::HandleType>(type));
}

void QAbstractPlanarVideoBuffer_virtbase(QAbstractPlanarVideoBuffer* src, QAbstractVideoBuffer** outptr_QAbstractVideoBuffer) {
	*outptr_QAbstractVideoBuffer = static_cast<QAbstractVideoBuffer*>(src);
}

unsigned char* QAbstractPlanarVideoBuffer_map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine) {
	uchar* _ret = self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
	return static_cast<unsigned char*>(_ret);
}

bool QAbstractPlanarVideoBuffer_override_virtual_map(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPlanarVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__map = slot;
	return true;
}

unsigned char* QAbstractPlanarVideoBuffer_virtualbase_map(void* self, int mode, int* numBytes, int* bytesPerLine) {
	return ( (MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_map(mode, numBytes, bytesPerLine);
}

bool QAbstractPlanarVideoBuffer_override_virtual_release(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPlanarVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__release = slot;
	return true;
}

void QAbstractPlanarVideoBuffer_virtualbase_release(void* self) {
	( (MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_release();
}

bool QAbstractPlanarVideoBuffer_override_virtual_mapMode(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPlanarVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapMode = slot;
	return true;
}

bool QAbstractPlanarVideoBuffer_override_virtual_unmap(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPlanarVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unmap = slot;
	return true;
}

bool QAbstractPlanarVideoBuffer_override_virtual_handle(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPlanarVideoBuffer* self_cast = dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__handle = slot;
	return true;
}

QVariant* QAbstractPlanarVideoBuffer_virtualbase_handle(const void* self) {
	return ( (const MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_handle();
}

void QAbstractPlanarVideoBuffer_delete(QAbstractPlanarVideoBuffer* self) {
	delete self;
}

