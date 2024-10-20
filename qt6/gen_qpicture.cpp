#include <QIODevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "gen_qpicture.h"
#include "_cgo_export.h"

QPicture* QPicture_new() {
	return new QPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
	return new QPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	return new QPicture(static_cast<int>(formatVersion));
}

bool QPicture_IsNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_DevType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_Size(const QPicture* self) {
	uint _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_Data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_Play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_LoadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_SaveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
	self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
	return self->isDetached();
}

QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
	return self->paintEngine();
}

void QPicture_Delete(QPicture* self) {
	delete self;
}

