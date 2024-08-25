#include "gen_qcborstreamwriter.h"
#include "qcborstreamwriter.h"

#include <QByteArray>
#include <QCborStreamWriter>
#include <QIODevice>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCborStreamWriter* QCborStreamWriter_new(QIODevice* device) {
	return new QCborStreamWriter(device);
}

QCborStreamWriter* QCborStreamWriter_new2(QByteArray* data) {
	return new QCborStreamWriter(data);
}

void QCborStreamWriter_SetDevice(QCborStreamWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QCborStreamWriter_Device(QCborStreamWriter* self) {
	return self->device();
}

void QCborStreamWriter_Append(QCborStreamWriter* self, uint64_t u) {
	self->append((quint64)(u));
}

void QCborStreamWriter_AppendWithQint64(QCborStreamWriter* self, int64_t i) {
	self->append((qint64)(i));
}

void QCborStreamWriter_AppendWithBa(QCborStreamWriter* self, QByteArray* ba) {
	self->append(*ba);
}

void QCborStreamWriter_AppendWithFloat(QCborStreamWriter* self, float f) {
	self->append(static_cast<float>(f));
}

void QCborStreamWriter_AppendWithDouble(QCborStreamWriter* self, double d) {
	self->append(static_cast<double>(d));
}

void QCborStreamWriter_AppendByteString(QCborStreamWriter* self, char* data, size_t lenVal) {
	self->appendByteString(data, static_cast<qsizetype>(lenVal));
}

void QCborStreamWriter_AppendTextString(QCborStreamWriter* self, char* utf8, size_t lenVal) {
	self->appendTextString(utf8, static_cast<qsizetype>(lenVal));
}

void QCborStreamWriter_AppendWithBool(QCborStreamWriter* self, bool b) {
	self->append(b);
}

void QCborStreamWriter_AppendNull(QCborStreamWriter* self) {
	self->appendNull();
}

void QCborStreamWriter_AppendUndefined(QCborStreamWriter* self) {
	self->appendUndefined();
}

void QCborStreamWriter_AppendWithInt(QCborStreamWriter* self, int i) {
	self->append(static_cast<int>(i));
}

void QCborStreamWriter_AppendWithUint(QCborStreamWriter* self, unsigned int u) {
	self->append(static_cast<uint>(u));
}

void QCborStreamWriter_AppendWithStr(QCborStreamWriter* self, char* str) {
	self->append(str);
}

void QCborStreamWriter_StartArray(QCborStreamWriter* self) {
	self->startArray();
}

void QCborStreamWriter_StartArrayWithCount(QCborStreamWriter* self, uint64_t count) {
	self->startArray((quint64)(count));
}

bool QCborStreamWriter_EndArray(QCborStreamWriter* self) {
	return self->endArray();
}

void QCborStreamWriter_StartMap(QCborStreamWriter* self) {
	self->startMap();
}

void QCborStreamWriter_StartMapWithCount(QCborStreamWriter* self, uint64_t count) {
	self->startMap((quint64)(count));
}

bool QCborStreamWriter_EndMap(QCborStreamWriter* self) {
	return self->endMap();
}

void QCborStreamWriter_Append2(QCborStreamWriter* self, char* str, size_t size) {
	self->append(str, static_cast<qsizetype>(size));
}

void QCborStreamWriter_Delete(QCborStreamWriter* self) {
	delete self;
}

