#include <QAbstractPlanarVideoBuffer>
#include <QAbstractVideoBuffer>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include "gen_qabstractvideobuffer.h"
#include "_cgo_export.h"

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

void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractVideoBuffer*>( self );
	} else {
		delete self;
	}
}

unsigned char* QAbstractPlanarVideoBuffer_Map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine) {
	uchar* _ret = self->map(static_cast<QAbstractVideoBuffer::MapMode>(mode), static_cast<int*>(numBytes), static_cast<int*>(bytesPerLine));
	return static_cast<unsigned char*>(_ret);
}

void QAbstractPlanarVideoBuffer_Delete(QAbstractPlanarVideoBuffer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractPlanarVideoBuffer*>( self );
	} else {
		delete self;
	}
}

