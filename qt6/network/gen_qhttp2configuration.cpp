#include <QHttp2Configuration>
#include <qhttp2configuration.h>
#include "gen_qhttp2configuration.h"
#include "_cgo_export.h"

void QHttp2Configuration_new(QHttp2Configuration** outptr_QHttp2Configuration) {
	QHttp2Configuration* ret = new QHttp2Configuration();
	*outptr_QHttp2Configuration = ret;
}

void QHttp2Configuration_new2(QHttp2Configuration* other, QHttp2Configuration** outptr_QHttp2Configuration) {
	QHttp2Configuration* ret = new QHttp2Configuration(*other);
	*outptr_QHttp2Configuration = ret;
}

void QHttp2Configuration_OperatorAssign(QHttp2Configuration* self, QHttp2Configuration* other) {
	self->operator=(*other);
}

void QHttp2Configuration_SetServerPushEnabled(QHttp2Configuration* self, bool enable) {
	self->setServerPushEnabled(enable);
}

bool QHttp2Configuration_ServerPushEnabled(const QHttp2Configuration* self) {
	return self->serverPushEnabled();
}

void QHttp2Configuration_SetHuffmanCompressionEnabled(QHttp2Configuration* self, bool enable) {
	self->setHuffmanCompressionEnabled(enable);
}

bool QHttp2Configuration_HuffmanCompressionEnabled(const QHttp2Configuration* self) {
	return self->huffmanCompressionEnabled();
}

bool QHttp2Configuration_SetSessionReceiveWindowSize(QHttp2Configuration* self, unsigned int size) {
	return self->setSessionReceiveWindowSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_SessionReceiveWindowSize(const QHttp2Configuration* self) {
	return self->sessionReceiveWindowSize();
}

bool QHttp2Configuration_SetStreamReceiveWindowSize(QHttp2Configuration* self, unsigned int size) {
	return self->setStreamReceiveWindowSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_StreamReceiveWindowSize(const QHttp2Configuration* self) {
	return self->streamReceiveWindowSize();
}

bool QHttp2Configuration_SetMaxFrameSize(QHttp2Configuration* self, unsigned int size) {
	return self->setMaxFrameSize(static_cast<unsigned int>(size));
}

unsigned int QHttp2Configuration_MaxFrameSize(const QHttp2Configuration* self) {
	return self->maxFrameSize();
}

void QHttp2Configuration_Swap(QHttp2Configuration* self, QHttp2Configuration* other) {
	self->swap(*other);
}

void QHttp2Configuration_Delete(QHttp2Configuration* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHttp2Configuration*>( self );
	} else {
		delete self;
	}
}

