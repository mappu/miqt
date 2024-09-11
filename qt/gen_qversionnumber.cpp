#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include "qversionnumber.h"

#include "gen_qversionnumber.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QVersionNumber* QVersionNumber_new() {
	return new QVersionNumber();
}

QVersionNumber* QVersionNumber_new2(int* seg, size_t seg_len) {
	QVector<int> seg_QList;
	seg_QList.reserve(seg_len);
	for(size_t i = 0; i < seg_len; ++i) {
		seg_QList.push_back(seg[i]);
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
	QVersionNumber ret = self->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(ret));
}

void QVersionNumber_Segments(const QVersionNumber* self, int** _out, size_t* _out_len) {
	QVector<int> ret = self->segments();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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
	QVersionNumber ret = QVersionNumber::commonPrefix(*v1, *v2);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(ret));
}

void QVersionNumber_ToString(const QVersionNumber* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QVersionNumber* QVersionNumber_FromString(const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QVersionNumber ret = QVersionNumber::fromString(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(ret));
}

QVersionNumber* QVersionNumber_FromString22(const char* stringVal, size_t stringVal_Strlen, int* suffixIndex) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QVersionNumber ret = QVersionNumber::fromString(stringVal_QString, static_cast<int*>(suffixIndex));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(ret));
}

void QVersionNumber_Delete(QVersionNumber* self) {
	delete self;
}

