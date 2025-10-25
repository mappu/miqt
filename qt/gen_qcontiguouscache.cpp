#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "gen_qcontiguouscache.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QContiguousCacheData_alloc(const QContiguousCacheData* self) {
	return self->alloc;
}

void QContiguousCacheData_setAlloc(QContiguousCacheData* self, int alloc) {
	self->alloc = static_cast<int>(alloc);
}

int QContiguousCacheData_count(const QContiguousCacheData* self) {
	return self->count;
}

void QContiguousCacheData_setCount(QContiguousCacheData* self, int count) {
	self->count = static_cast<int>(count);
}

int QContiguousCacheData_start(const QContiguousCacheData* self) {
	return self->start;
}

void QContiguousCacheData_setStart(QContiguousCacheData* self, int start) {
	self->start = static_cast<int>(start);
}

int QContiguousCacheData_offset(const QContiguousCacheData* self) {
	return self->offset;
}

void QContiguousCacheData_setOffset(QContiguousCacheData* self, int offset) {
	self->offset = static_cast<int>(offset);
}

unsigned int QContiguousCacheData_sharable(const QContiguousCacheData* self) {
	uint sharable_ret = self->sharable;
	return static_cast<unsigned int>(sharable_ret);
}

void QContiguousCacheData_setSharable(QContiguousCacheData* self, unsigned int sharable) {
	self->sharable = static_cast<uint>(sharable);
}

unsigned int QContiguousCacheData_reserved(const QContiguousCacheData* self) {
	uint reserved_ret = self->reserved;
	return static_cast<unsigned int>(reserved_ret);
}

void QContiguousCacheData_setReserved(QContiguousCacheData* self, unsigned int reserved) {
	self->reserved = static_cast<uint>(reserved);
}

QContiguousCacheData* QContiguousCacheData_allocateData(int size, int alignment) {
	return QContiguousCacheData::allocateData(static_cast<int>(size), static_cast<int>(alignment));
}

void QContiguousCacheData_freeData(QContiguousCacheData* data) {
	QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_delete(QContiguousCacheData* self) {
	delete self;
}

