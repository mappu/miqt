#include <QAbstractPlanarVideoBuffer>
#include <QAbstractVideoBuffer>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include "gen_qabstractvideobuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractVideoBuffer_Release(void*, intptr_t);
int miqt_exec_callback_QAbstractVideoBuffer_MapMode(void*, intptr_t);
unsigned char* miqt_exec_callback_QAbstractVideoBuffer_Map(void*, intptr_t, int, int*, int*);
void miqt_exec_callback_QAbstractVideoBuffer_Unmap(void*, intptr_t);
QVariant* miqt_exec_callback_QAbstractVideoBuffer_Handle(void*, intptr_t);
unsigned char* miqt_exec_callback_QAbstractPlanarVideoBuffer_Map(void*, intptr_t, int, int*, int*);
void miqt_exec_callback_QAbstractPlanarVideoBuffer_Release(void*, intptr_t);
int miqt_exec_callback_QAbstractPlanarVideoBuffer_MapMode(void*, intptr_t);
void miqt_exec_callback_QAbstractPlanarVideoBuffer_Unmap(void*, intptr_t);
QVariant* miqt_exec_callback_QAbstractPlanarVideoBuffer_Handle(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractVideoBuffer : public virtual QAbstractVideoBuffer {
public:

	MiqtVirtualQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType typeVal): QAbstractVideoBuffer(typeVal) {};

	virtual ~MiqtVirtualQAbstractVideoBuffer() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Release = 0;

	// Subclass to allow providing a Go implementation
	virtual void release() override {
		if (handle__Release == 0) {
			QAbstractVideoBuffer::release();
			return;
		}
		

		miqt_exec_callback_QAbstractVideoBuffer_Release(this, handle__Release);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Release() {

		QAbstractVideoBuffer::release();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractVideoBuffer::MapMode mapMode() const override {
		if (handle__MapMode == 0) {
			return (QAbstractVideoBuffer::MapMode)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_MapMode(const_cast<MiqtVirtualQAbstractVideoBuffer*>(this), handle__MapMode);

		return static_cast<QAbstractVideoBuffer::MapMode>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Map = 0;

	// Subclass to allow providing a Go implementation
	virtual uchar* map(QAbstractVideoBuffer::MapMode mode, int* numBytes, int* bytesPerLine) override {
		if (handle__Map == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		QAbstractVideoBuffer::MapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		int* sigval2 = numBytes;
		int* sigval3 = bytesPerLine;

		unsigned char* callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_Map(this, handle__Map, sigval1, sigval2, sigval3);

		return static_cast<uchar*>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void unmap() override {
		if (handle__Unmap == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractVideoBuffer_Unmap(this, handle__Unmap);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Handle = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant handle() const override {
		if (handle__Handle == 0) {
			return QAbstractVideoBuffer::handle();
		}
		

		QVariant* callback_return_value = miqt_exec_callback_QAbstractVideoBuffer_Handle(const_cast<MiqtVirtualQAbstractVideoBuffer*>(this), handle__Handle);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Handle() const {

		return new QVariant(QAbstractVideoBuffer::handle());

	}

};

QAbstractVideoBuffer* QAbstractVideoBuffer_new(int typeVal) {
	return new MiqtVirtualQAbstractVideoBuffer(static_cast<QAbstractVideoBuffer::HandleType>(typeVal));
}

void QAbstractVideoBuffer_Release(QAbstractVideoBuffer* self) {
	self->release();
}

int QAbstractVideoBuffer_HandleType(const QAbstractVideoBuffer* self) {
	QAbstractVideoBuffer::HandleType _ret = self->handleType();
	return static_cast<int>(_ret);
}

int QAbstractVideoBuffer_MapMode(const QAbstractVideoBuffer* self) {
	QAbstractVideoBuffer::MapMode _ret = self->mapMode();
	return static_cast<int>(_ret);
}

unsigned char* QAbstractVideoBuffer_Map(QAbstractVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine) {
	uchar* _ret = self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
	return static_cast<unsigned char*>(_ret);
}

void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self) {
	self->unmap();
}

QVariant* QAbstractVideoBuffer_Handle(const QAbstractVideoBuffer* self) {
	return new QVariant(self->handle());
}

void QAbstractVideoBuffer_override_virtual_Release(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) )->handle__Release = slot;
}

void QAbstractVideoBuffer_virtualbase_Release(void* self) {
	( (MiqtVirtualQAbstractVideoBuffer*)(self) )->virtualbase_Release();
}

void QAbstractVideoBuffer_override_virtual_MapMode(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) )->handle__MapMode = slot;
}

void QAbstractVideoBuffer_override_virtual_Map(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) )->handle__Map = slot;
}

void QAbstractVideoBuffer_override_virtual_Unmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) )->handle__Unmap = slot;
}

void QAbstractVideoBuffer_override_virtual_Handle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( (QAbstractVideoBuffer*)(self) )->handle__Handle = slot;
}

QVariant* QAbstractVideoBuffer_virtualbase_Handle(const void* self) {
	return ( (const MiqtVirtualQAbstractVideoBuffer*)(self) )->virtualbase_Handle();
}

void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractVideoBuffer*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQAbstractPlanarVideoBuffer : public virtual QAbstractPlanarVideoBuffer {
public:

	MiqtVirtualQAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType typeVal): QAbstractPlanarVideoBuffer(typeVal) {};

	virtual ~MiqtVirtualQAbstractPlanarVideoBuffer() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Map = 0;

	// Subclass to allow providing a Go implementation
	virtual uchar* map(QAbstractVideoBuffer::MapMode mode, int* numBytes, int* bytesPerLine) override {
		if (handle__Map == 0) {
			return QAbstractPlanarVideoBuffer::map(mode, numBytes, bytesPerLine);
		}
		
		QAbstractVideoBuffer::MapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		int* sigval2 = numBytes;
		int* sigval3 = bytesPerLine;

		unsigned char* callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_Map(this, handle__Map, sigval1, sigval2, sigval3);

		return static_cast<uchar*>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	unsigned char* virtualbase_Map(int mode, int* numBytes, int* bytesPerLine) {

		uchar* _ret = QAbstractPlanarVideoBuffer::map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
		return static_cast<unsigned char*>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Release = 0;

	// Subclass to allow providing a Go implementation
	virtual void release() override {
		if (handle__Release == 0) {
			QAbstractPlanarVideoBuffer::release();
			return;
		}
		

		miqt_exec_callback_QAbstractPlanarVideoBuffer_Release(this, handle__Release);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Release() {

		QAbstractPlanarVideoBuffer::release();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractVideoBuffer::MapMode mapMode() const override {
		if (handle__MapMode == 0) {
			return (QAbstractVideoBuffer::MapMode)(0); // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_MapMode(const_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>(this), handle__MapMode);

		return static_cast<QAbstractVideoBuffer::MapMode>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void unmap() override {
		if (handle__Unmap == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_QAbstractPlanarVideoBuffer_Unmap(this, handle__Unmap);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Handle = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant handle() const override {
		if (handle__Handle == 0) {
			return QAbstractPlanarVideoBuffer::handle();
		}
		

		QVariant* callback_return_value = miqt_exec_callback_QAbstractPlanarVideoBuffer_Handle(const_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>(this), handle__Handle);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Handle() const {

		return new QVariant(QAbstractPlanarVideoBuffer::handle());

	}

};

QAbstractPlanarVideoBuffer* QAbstractPlanarVideoBuffer_new(int typeVal) {
	return new MiqtVirtualQAbstractPlanarVideoBuffer(static_cast<QAbstractVideoBuffer::HandleType>(typeVal));
}

void QAbstractPlanarVideoBuffer_virtbase(QAbstractPlanarVideoBuffer* src, QAbstractVideoBuffer** outptr_QAbstractVideoBuffer) {
	*outptr_QAbstractVideoBuffer = static_cast<QAbstractVideoBuffer*>(src);
}

unsigned char* QAbstractPlanarVideoBuffer_Map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine) {
	uchar* _ret = self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
	return static_cast<unsigned char*>(_ret);
}

void QAbstractPlanarVideoBuffer_override_virtual_Map(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) )->handle__Map = slot;
}

unsigned char* QAbstractPlanarVideoBuffer_virtualbase_Map(void* self, int mode, int* numBytes, int* bytesPerLine) {
	return ( (MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_Map(mode, numBytes, bytesPerLine);
}

void QAbstractPlanarVideoBuffer_override_virtual_Release(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) )->handle__Release = slot;
}

void QAbstractPlanarVideoBuffer_virtualbase_Release(void* self) {
	( (MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_Release();
}

void QAbstractPlanarVideoBuffer_override_virtual_MapMode(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) )->handle__MapMode = slot;
}

void QAbstractPlanarVideoBuffer_override_virtual_Unmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) )->handle__Unmap = slot;
}

void QAbstractPlanarVideoBuffer_override_virtual_Handle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( (QAbstractPlanarVideoBuffer*)(self) )->handle__Handle = slot;
}

QVariant* QAbstractPlanarVideoBuffer_virtualbase_Handle(const void* self) {
	return ( (const MiqtVirtualQAbstractPlanarVideoBuffer*)(self) )->virtualbase_Handle();
}

void QAbstractPlanarVideoBuffer_Delete(QAbstractPlanarVideoBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractPlanarVideoBuffer*>( self );
	} else {
		delete self;
	}
}

