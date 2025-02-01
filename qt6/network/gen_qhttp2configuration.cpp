#include <QHttp2Configuration>
#include <qhttp2configuration.h>
#include "gen_qhttp2configuration.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QHttp2Configuration* QHttp2Configuration_new() {
	return new QHttp2Configuration();
}

QHttp2Configuration* QHttp2Configuration_new2(QHttp2Configuration* other) {
	return new QHttp2Configuration(*other);
}

void QHttp2Configuration_operatorAssign(QHttp2Configuration* self, QHttp2Configuration* other) {
	self->operator=(*other);
}

void QHttp2Configuration_setServerPushEnabled(QHttp2Configuration* self, bool enable) {
	self->setServerPushEnabled(enable);
}

bool QHttp2Configuration_serverPushEnabled(const QHttp2Configuration* self) {
	return self->serverPushEnabled();
}

void QHttp2Configuration_setHuffmanCompressionEnabled(QHttp2Configuration* self, bool enable) {
	self->setHuffmanCompressionEnabled(enable);
}

bool QHttp2Configuration_huffmanCompressionEnabled(const QHttp2Configuration* self) {
	return self->huffmanCompressionEnabled();
}

bool QHttp2Configuration_setSessionReceiveWindowSize(QHttp2Configuration* self, unsigned int size) {
	return self->setSessionReceiveWindowSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_sessionReceiveWindowSize(const QHttp2Configuration* self) {
	return self->sessionReceiveWindowSize();
}

bool QHttp2Configuration_setStreamReceiveWindowSize(QHttp2Configuration* self, unsigned int size) {
	return self->setStreamReceiveWindowSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_streamReceiveWindowSize(const QHttp2Configuration* self) {
	return self->streamReceiveWindowSize();
}

bool QHttp2Configuration_setMaxFrameSize(QHttp2Configuration* self, unsigned int size) {
	return self->setMaxFrameSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_maxFrameSize(const QHttp2Configuration* self) {
	return self->maxFrameSize();
}

void QHttp2Configuration_swap(QHttp2Configuration* self, QHttp2Configuration* other) {
	self->swap(*other);
}

void QHttp2Configuration_delete(QHttp2Configuration* self) {
	delete self;
}

