#include <QByteArray>
#include <QCborStreamWriter>
#include <QIODevice>
#include <qcborstreamwriter.h>
#include "gen_qcborstreamwriter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QCborStreamWriter* QCborStreamWriter_new(QIODevice* device) {
	return new QCborStreamWriter(device);
}

void QCborStreamWriter_setDevice(QCborStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QCborStreamWriter_device(const QCborStreamWriter* self) {
	return self->device();
}

void QCborStreamWriter_append(QCborStreamWriter* self, unsigned long long u) {
	self->append(static_cast<quint64>(u));
}

void QCborStreamWriter_appendWithQint64(QCborStreamWriter* self, long long i) {
	self->append(static_cast<qint64>(i));
}

void QCborStreamWriter_appendWithQCborNegativeInteger(QCborStreamWriter* self, uint64_t n) {
	self->append(static_cast<QCborNegativeInteger>(n));
}

void QCborStreamWriter_appendWithBa(QCborStreamWriter* self, struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	self->append(ba_QByteArray);
}

void QCborStreamWriter_appendWithTag(QCborStreamWriter* self, uint64_t tag) {
	self->append(static_cast<QCborTag>(tag));
}

void QCborStreamWriter_append3(QCborStreamWriter* self, int tag) {
	self->append(static_cast<QCborKnownTags>(tag));
}

void QCborStreamWriter_appendWithSt(QCborStreamWriter* self, uint8_t st) {
	self->append(static_cast<QCborSimpleType>(st));
}

void QCborStreamWriter_appendWithFloat(QCborStreamWriter* self, float f) {
	self->append(static_cast<float>(f));
}

void QCborStreamWriter_appendWithDouble(QCborStreamWriter* self, double d) {
	self->append(static_cast<double>(d));
}

void QCborStreamWriter_appendByteString(QCborStreamWriter* self, const char* data, ptrdiff_t len) {
	self->appendByteString(data, (qsizetype)(len));
}

void QCborStreamWriter_appendTextString(QCborStreamWriter* self, const char* utf8, ptrdiff_t len) {
	self->appendTextString(utf8, (qsizetype)(len));
}

void QCborStreamWriter_appendWithBool(QCborStreamWriter* self, bool b) {
	self->append(b);
}

void QCborStreamWriter_appendNull(QCborStreamWriter* self) {
	self->appendNull();
}

void QCborStreamWriter_appendUndefined(QCborStreamWriter* self) {
	self->appendUndefined();
}

void QCborStreamWriter_appendWithInt(QCborStreamWriter* self, int i) {
	self->append(static_cast<int>(i));
}

void QCborStreamWriter_appendWithUint(QCborStreamWriter* self, unsigned int u) {
	self->append(static_cast<uint>(u));
}

void QCborStreamWriter_append4(QCborStreamWriter* self, const char* str) {
	self->append(str);
}

void QCborStreamWriter_startArray(QCborStreamWriter* self) {
	self->startArray();
}

void QCborStreamWriter_startArrayWithCount(QCborStreamWriter* self, unsigned long long count) {
	self->startArray(static_cast<quint64>(count));
}

bool QCborStreamWriter_endArray(QCborStreamWriter* self) {
	return self->endArray();
}

void QCborStreamWriter_startMap(QCborStreamWriter* self) {
	self->startMap();
}

void QCborStreamWriter_startMapWithCount(QCborStreamWriter* self, unsigned long long count) {
	self->startMap(static_cast<quint64>(count));
}

bool QCborStreamWriter_endMap(QCborStreamWriter* self) {
	return self->endMap();
}

void QCborStreamWriter_append22(QCborStreamWriter* self, const char* str, ptrdiff_t size) {
	self->append(str, (qsizetype)(size));
}

void QCborStreamWriter_delete(QCborStreamWriter* self) {
	delete self;
}

