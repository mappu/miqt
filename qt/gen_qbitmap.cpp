#include <QBitmap>
#include <QImage>
#include <QMatrix>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include "qbitmap.h"
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

QBitmap* QBitmap_new5(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(QBitmap* other) {
	return new QBitmap(*other);
}

QBitmap* QBitmap_new7(struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QBitmap(fileName_QString, format);
}

void QBitmap_OperatorAssign(QBitmap* self, QBitmap* other) {
	self->operator=(*other);
}

void QBitmap_OperatorAssignWithQPixmap(QBitmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

void QBitmap_Clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_FromImage(QImage* image) {
	QBitmap _ret = QBitmap::fromImage(*image);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits) {
	QBitmap _ret = QBitmap::fromData(*size, static_cast<const uchar*>(bits));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, QMatrix* param1) {
	QBitmap _ret = self->transformed(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QBitmap_TransformedWithMatrix(const QBitmap* self, QTransform* matrix) {
	QBitmap _ret = self->transformed(*matrix);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QBitmap_FromImage2(QImage* image, int flags) {
	QBitmap _ret = QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, uintptr_t monoFormat) {
	QBitmap _ret = QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

void QBitmap_Delete(QBitmap* self) {
	delete self;
}

