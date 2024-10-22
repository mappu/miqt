#include <QBitmap>
#include <QImage>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qbitmap.h>
#include "gen_qbitmap.h"
#include "_cgo_export.h"

QBitmap* QBitmap_new() {
	return new QBitmap();
}

QBitmap* QBitmap_new2(QPixmap* param1) {
	return new QBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
	return new QBitmap(static_cast<int>(w), static_cast<int>(h));
}

QBitmap* QBitmap_new4(QSize* param1) {
	return new QBitmap(*param1);
}

QBitmap* QBitmap_new5(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(QBitmap* param1) {
	return new QBitmap(*param1);
}

QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QBitmap(fileName_QString, format);
}

void QBitmap_OperatorAssign(QBitmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

void QBitmap_Clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_FromImage(QImage* image) {
	return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits)));
}

QBitmap* QBitmap_FromPixmap(QPixmap* pixmap) {
	return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

void QBitmap_OperatorAssignWithQBitmap(QBitmap* self, QBitmap* param1) {
	self->operator=(*param1);
}

QBitmap* QBitmap_FromImage2(QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

void QBitmap_Delete(QBitmap* self) {
	delete self;
}

