#include <QByteArray>
#include <QChar>
#include <QDebug>
#include <QIODeviceBase>
#include <QList>
#include <QObject>
#include <QQmlError>
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
	return new (std::nothrow) QQmlInfo(*param1);
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

QQmlInfo* QQmlInfo_operatorShiftLeftWithShort(QQmlInfo* self, short t) {
	QQmlInfo& _ret = self->operator<<(static_cast<short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QQmlInfo* QQmlInfo_operatorShiftLeftWithUnsignedshort(QQmlInfo* self, unsigned short t) {
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

void QQmlInfo_operatorAssign(QQmlInfo* self, QQmlInfo* param1) {
	self->operator=(*param1);
}

void QQmlInfo_delete(QQmlInfo* self) {
	delete self;
}

QQmlInfo* miqt_QmlDebugWithMe(QObject* me) {

	return new QQmlInfo(qmlDebug(me));
}

QQmlInfo* miqt_QmlDebug2(QObject* me, QQmlError* error) {

	return new QQmlInfo(qmlDebug(me, *error));
}

QQmlInfo* miqt_QmlDebug3(QObject* me, struct miqt_array /* of QQmlError* */  errors) {
	QList<QQmlError> errors_QList;
	errors_QList.reserve(errors.len);
	QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}

	return new QQmlInfo(qmlDebug(me, errors_QList));
}

QQmlInfo* miqt_QmlInfoWithMe(QObject* me) {

	return new QQmlInfo(qmlInfo(me));
}

QQmlInfo* miqt_QmlInfo2(QObject* me, QQmlError* error) {

	return new QQmlInfo(qmlInfo(me, *error));
}

QQmlInfo* miqt_QmlInfo3(QObject* me, struct miqt_array /* of QQmlError* */  errors) {
	QList<QQmlError> errors_QList;
	errors_QList.reserve(errors.len);
	QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}

	return new QQmlInfo(qmlInfo(me, errors_QList));
}

QQmlInfo* miqt_QmlWarningWithMe(QObject* me) {

	return new QQmlInfo(qmlWarning(me));
}

QQmlInfo* miqt_QmlWarning2(QObject* me, QQmlError* error) {

	return new QQmlInfo(qmlWarning(me, *error));
}

QQmlInfo* miqt_QmlWarning3(QObject* me, struct miqt_array /* of QQmlError* */  errors) {
	QList<QQmlError> errors_QList;
	errors_QList.reserve(errors.len);
	QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}

	return new QQmlInfo(qmlWarning(me, errors_QList));
}

