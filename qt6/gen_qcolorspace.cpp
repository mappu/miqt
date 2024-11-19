#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QList>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcolorspace.h>
#include "gen_qcolorspace.h"
#include "_cgo_export.h"

void QColorSpace_new(QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace();
	*outptr_QColorSpace = ret;
}

void QColorSpace_new2(int namedColorSpace, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
	*outptr_QColorSpace = ret;
}

void QColorSpace_new3(int primaries, int transferFunction, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
	*outptr_QColorSpace = ret;
}

void QColorSpace_new4(int primaries, float gamma, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
	*outptr_QColorSpace = ret;
}

void QColorSpace_new5(int primaries, struct miqt_array /* of uint16_t */  transferFunctionTable, QColorSpace** outptr_QColorSpace) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	QColorSpace* ret = new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), transferFunctionTable_QList);
	*outptr_QColorSpace = ret;
}

void QColorSpace_new6(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction));
	*outptr_QColorSpace = ret;
}

void QColorSpace_new7(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  transferFunctionTable, QColorSpace** outptr_QColorSpace) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	QColorSpace* ret = new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunctionTable_QList);
	*outptr_QColorSpace = ret;
}

void QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable, QColorSpace** outptr_QColorSpace) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	QColorSpace* ret = new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
	*outptr_QColorSpace = ret;
}

void QColorSpace_new9(QColorSpace* colorSpace, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(*colorSpace);
	*outptr_QColorSpace = ret;
}

void QColorSpace_new10(int primaries, int transferFunction, float gamma, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
	*outptr_QColorSpace = ret;
}

void QColorSpace_new11(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, float gamma, QColorSpace** outptr_QColorSpace) {
	QColorSpace* ret = new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
	*outptr_QColorSpace = ret;
}

void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

int QColorSpace_Primaries(const QColorSpace* self) {
	QColorSpace::Primaries _ret = self->primaries();
	return static_cast<int>(_ret);
}

int QColorSpace_TransferFunction(const QColorSpace* self) {
	QColorSpace::TransferFunction _ret = self->transferFunction();
	return static_cast<int>(_ret);
}

float QColorSpace_Gamma(const QColorSpace* self) {
	return self->gamma();
}

struct miqt_string QColorSpace_Description(const QColorSpace* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorSpace_SetDescription(QColorSpace* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

void QColorSpace_SetTransferFunction(QColorSpace* self, int transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

void QColorSpace_SetTransferFunctionWithTransferFunctionTable(QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	self->setTransferFunction(transferFunctionTable_QList);
}

void QColorSpace_SetTransferFunctions(QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	self->setTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, int transferFunction) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction)));
}

QColorSpace* QColorSpace_WithTransferFunctionWithTransferFunctionTable(const QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunction(transferFunctionTable_QList));
}

QColorSpace* QColorSpace_WithTransferFunctions(const QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList));
}

void QColorSpace_SetPrimaries(QColorSpace* self, int primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_SetPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

void QColorSpace_Detach(QColorSpace* self) {
	self->detach();
}

bool QColorSpace_IsValid(const QColorSpace* self) {
	return self->isValid();
}

QColorSpace* QColorSpace_FromIccProfile(struct miqt_string iccProfile) {
	QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
	return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

struct miqt_string QColorSpace_IccProfile(const QColorSpace* self) {
	QByteArray _qb = self->iccProfile();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

void QColorSpace_SetTransferFunction2(QColorSpace* self, int transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, int transferFunction, float gamma) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma)));
}

void QColorSpace_Delete(QColorSpace* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QColorSpace*>( self );
	} else {
		delete self;
	}
}

