#include <QByteArray>
#include <QChar>
#include <QDebug>
#include <QIODeviceBase>
#include <QQmlInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qqmlinfo.h>
#include "gen_qqmlinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlInfo* QQmlInfo_new(QQmlInfo* param1) {
	return new QQmlInfo(*param1);
}

void QQmlInfo_virtbase(QQmlInfo* src, QDebug** outptr_QDebug) {
	*outptr_QDebug = static_cast<QDebug*>(src);
}

QQmlInfo* QQmlInfo_operatorShiftLeft(QQmlInfo* self, QChar* t) {
	QQmlInfo& _ret = self->operator<<(*t);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithBool(QQmlInfo* self, bool t) {
	QQmlInfo& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithChar(QQmlInfo* self, char t) {
	QQmlInfo& _ret = self->operator<<(static_cast<char>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithShort(QQmlInfo* self, int16_t t) {
	QQmlInfo& _ret = self->operator<<(static_cast<short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedshort(QQmlInfo* self, uint16_t t) {
	QQmlInfo& _ret = self->operator<<(static_cast<unsigned short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithInt(QQmlInfo* self, int t) {
	QQmlInfo& _ret = self->operator<<(static_cast<int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedint(QQmlInfo* self, unsigned int t) {
	QQmlInfo& _ret = self->operator<<(static_cast<unsigned int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithLong(QQmlInfo* self, long t) {
	QQmlInfo& _ret = self->operator<<(static_cast<long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedlong(QQmlInfo* self, unsigned long t) {
	QQmlInfo& _ret = self->operator<<(static_cast<unsigned long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithQint64(QQmlInfo* self, long long t) {
	QQmlInfo& _ret = self->operator<<(static_cast<qint64>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithQuint64(QQmlInfo* self, unsigned long long t) {
	QQmlInfo& _ret = self->operator<<(static_cast<quint64>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithFloat(QQmlInfo* self, float t) {
	QQmlInfo& _ret = self->operator<<(static_cast<float>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithDouble(QQmlInfo* self, double t) {
	QQmlInfo& _ret = self->operator<<(static_cast<double>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeft2(QQmlInfo* self, const char* t) {
	QQmlInfo& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithQString(QQmlInfo* self, struct miqt_string t) {
	QString t_QString = QString::fromUtf8(t.data, t.len);
	QQmlInfo& _ret = self->operator<<(t_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithQByteArray(QQmlInfo* self, struct miqt_string t) {
	QByteArray t_QByteArray(t.data, t.len);
	QQmlInfo& _ret = self->operator<<(t_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithVoid(QQmlInfo* self, const void* t) {
	QQmlInfo& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithQUrl(QQmlInfo* self, QUrl* t) {
	QQmlInfo& _ret = self->operator<<(*t);
	// Cast returned reference into pointer
	return &_ret;
}

void QQmlInfo_delete(QQmlInfo* self) {
	delete self;
}

