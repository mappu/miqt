#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qversionnumber.h>
#include "gen_qversionnumber.h"
#include "_cgo_export.h"

QVersionNumber* QVersionNumber_new() {
	return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(struct miqt_array /* of int */  seg) {
	QVector<int> seg_QList;
	seg_QList.reserve(seg.len);
	int* seg_arr = static_cast<int*>(seg.data);
	for(size_t i = 0; i < seg.len; ++i) {
		seg_QList.push_back(static_cast<int>(seg_arr[i]));
	}
	return new QVersionNumber(seg_QList);
}

QVersionNumber* QVersionNumber_new3(int maj) {
	return new QVersionNumber(static_cast<int>(maj));
}

QVersionNumber* QVersionNumber_new4(int maj, int min) {
	return new QVersionNumber(static_cast<int>(maj), static_cast<int>(min));
}

QVersionNumber* QVersionNumber_new5(int maj, int min, int mic) {
	return new QVersionNumber(static_cast<int>(maj), static_cast<int>(min), static_cast<int>(mic));
}

bool QVersionNumber_IsNull(const QVersionNumber* self) {
	return self->isNull();
}

bool QVersionNumber_IsNormalized(const QVersionNumber* self) {
	return self->isNormalized();
}

int QVersionNumber_MajorVersion(const QVersionNumber* self) {
	return self->majorVersion();
}

int QVersionNumber_MinorVersion(const QVersionNumber* self) {
	return self->minorVersion();
}

int QVersionNumber_MicroVersion(const QVersionNumber* self) {
	return self->microVersion();
}

QVersionNumber* QVersionNumber_Normalized(const QVersionNumber* self) {
	return new QVersionNumber(self->normalized());
}

struct miqt_array /* of int */  QVersionNumber_Segments(const QVersionNumber* self) {
	QVector<int> _ret = self->segments();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QVersionNumber_SegmentAt(const QVersionNumber* self, int index) {
	return self->segmentAt(static_cast<int>(index));
}

int QVersionNumber_SegmentCount(const QVersionNumber* self) {
	return self->segmentCount();
}

bool QVersionNumber_IsPrefixOf(const QVersionNumber* self, QVersionNumber* other) {
	return self->isPrefixOf(*other);
}

int QVersionNumber_Compare(QVersionNumber* v1, QVersionNumber* v2) {
	return QVersionNumber::compare(*v1, *v2);
}

QVersionNumber* QVersionNumber_CommonPrefix(QVersionNumber* v1, QVersionNumber* v2) {
	return new QVersionNumber(QVersionNumber::commonPrefix(*v1, *v2));
}

struct miqt_string QVersionNumber_ToString(const QVersionNumber* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVersionNumber* QVersionNumber_FromString(struct miqt_string stringVal) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	return new QVersionNumber(QVersionNumber::fromString(stringVal_QString));
}

QVersionNumber* QVersionNumber_FromString22(struct miqt_string stringVal, int* suffixIndex) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	return new QVersionNumber(QVersionNumber::fromString(stringVal_QString, static_cast<int*>(suffixIndex)));
}

void QVersionNumber_Delete(QVersionNumber* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVersionNumber*>( self );
	} else {
		delete self;
	}
}

