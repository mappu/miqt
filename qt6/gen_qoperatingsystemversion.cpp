#include <QOperatingSystemVersion>
#include <QOperatingSystemVersionBase>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qoperatingsystemversion.h>
#include "gen_qoperatingsystemversion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor) {
	return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1) {
	return new QOperatingSystemVersionBase(*param1);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor) {
	return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro) {
	return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_current() {
	return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}

struct miqt_string QOperatingSystemVersionBase_name(QOperatingSystemVersionBase* osversion) {
	QString _ret = QOperatingSystemVersionBase::name(*osversion);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QOperatingSystemVersionBase_currentType() {
	QOperatingSystemVersionBase::OSType _ret = QOperatingSystemVersionBase::currentType();
	return static_cast<int>(_ret);
}

QVersionNumber* QOperatingSystemVersionBase_version(const QOperatingSystemVersionBase* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersionBase_majorVersion(const QOperatingSystemVersionBase* self) {
	return self->majorVersion();
}

int QOperatingSystemVersionBase_minorVersion(const QOperatingSystemVersionBase* self) {
	return self->minorVersion();
}

int QOperatingSystemVersionBase_microVersion(const QOperatingSystemVersionBase* self) {
	return self->microVersion();
}

int QOperatingSystemVersionBase_segmentCount(const QOperatingSystemVersionBase* self) {
	return self->segmentCount();
}

int QOperatingSystemVersionBase_type(const QOperatingSystemVersionBase* self) {
	QOperatingSystemVersionBase::OSType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QOperatingSystemVersionBase_name2(const QOperatingSystemVersionBase* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOperatingSystemVersionBase_delete(QOperatingSystemVersionBase* self) {
	delete self;
}

QOperatingSystemVersion* QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion) {
	return new QOperatingSystemVersion(*osversion);
}

QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new3(QOperatingSystemVersion* param1) {
	return new QOperatingSystemVersion(*param1);
}

QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

void QOperatingSystemVersion_virtbase(QOperatingSystemVersion* src, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(src);
}

QOperatingSystemVersion* QOperatingSystemVersion_current() {
	return new QOperatingSystemVersion(QOperatingSystemVersion::current());
}

int QOperatingSystemVersion_currentType() {
	QOperatingSystemVersion::OSType _ret = QOperatingSystemVersion::currentType();
	return static_cast<int>(_ret);
}

QVersionNumber* QOperatingSystemVersion_version(const QOperatingSystemVersion* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersion_majorVersion(const QOperatingSystemVersion* self) {
	return self->majorVersion();
}

int QOperatingSystemVersion_minorVersion(const QOperatingSystemVersion* self) {
	return self->minorVersion();
}

int QOperatingSystemVersion_microVersion(const QOperatingSystemVersion* self) {
	return self->microVersion();
}

int QOperatingSystemVersion_segmentCount(const QOperatingSystemVersion* self) {
	return self->segmentCount();
}

int QOperatingSystemVersion_type(const QOperatingSystemVersion* self) {
	QOperatingSystemVersion::OSType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QOperatingSystemVersion_name(const QOperatingSystemVersion* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOperatingSystemVersion_delete(QOperatingSystemVersion* self) {
	delete self;
}

