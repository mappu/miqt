#include <QOperatingSystemVersion>
#include <QOperatingSystemVersionBase>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qoperatingsystemversion.h>
#include "gen_qoperatingsystemversion.h"
#include "_cgo_export.h"

void QOperatingSystemVersionBase_new(int osType, int vmajor, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersionBase* ret = new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor));
	*outptr_QOperatingSystemVersionBase = ret;
}

void QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersionBase* ret = new QOperatingSystemVersionBase(*param1);
	*outptr_QOperatingSystemVersionBase = ret;
}

void QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersionBase* ret = new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
	*outptr_QOperatingSystemVersionBase = ret;
}

void QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersionBase* ret = new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
	*outptr_QOperatingSystemVersionBase = ret;
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_Current() {
	return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}

struct miqt_string QOperatingSystemVersionBase_Name(QOperatingSystemVersionBase* osversion) {
	QString _ret = QOperatingSystemVersionBase::name(*osversion);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QOperatingSystemVersionBase_CurrentType() {
	QOperatingSystemVersionBase::OSType _ret = QOperatingSystemVersionBase::currentType();
	return static_cast<int>(_ret);
}

QVersionNumber* QOperatingSystemVersionBase_Version(const QOperatingSystemVersionBase* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersionBase_MajorVersion(const QOperatingSystemVersionBase* self) {
	return self->majorVersion();
}

int QOperatingSystemVersionBase_MinorVersion(const QOperatingSystemVersionBase* self) {
	return self->minorVersion();
}

int QOperatingSystemVersionBase_MicroVersion(const QOperatingSystemVersionBase* self) {
	return self->microVersion();
}

int QOperatingSystemVersionBase_SegmentCount(const QOperatingSystemVersionBase* self) {
	return self->segmentCount();
}

int QOperatingSystemVersionBase_Type(const QOperatingSystemVersionBase* self) {
	QOperatingSystemVersionBase::OSType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QOperatingSystemVersionBase_Name2(const QOperatingSystemVersionBase* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOperatingSystemVersionBase_Delete(QOperatingSystemVersionBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QOperatingSystemVersionBase*>( self );
	} else {
		delete self;
	}
}

void QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion, QOperatingSystemVersion** outptr_QOperatingSystemVersion, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(*osversion);
	*outptr_QOperatingSystemVersion = ret;
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(ret);
}

void QOperatingSystemVersion_new2(int osType, int vmajor, QOperatingSystemVersion** outptr_QOperatingSystemVersion, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor));
	*outptr_QOperatingSystemVersion = ret;
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(ret);
}

void QOperatingSystemVersion_new3(QOperatingSystemVersion* param1, QOperatingSystemVersion** outptr_QOperatingSystemVersion, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(*param1);
	*outptr_QOperatingSystemVersion = ret;
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(ret);
}

void QOperatingSystemVersion_new4(int osType, int vmajor, int vminor, QOperatingSystemVersion** outptr_QOperatingSystemVersion, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
	*outptr_QOperatingSystemVersion = ret;
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(ret);
}

void QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro, QOperatingSystemVersion** outptr_QOperatingSystemVersion, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
	*outptr_QOperatingSystemVersion = ret;
	*outptr_QOperatingSystemVersionBase = static_cast<QOperatingSystemVersionBase*>(ret);
}

QOperatingSystemVersion* QOperatingSystemVersion_Current() {
	return new QOperatingSystemVersion(QOperatingSystemVersion::current());
}

int QOperatingSystemVersion_CurrentType() {
	QOperatingSystemVersion::OSType _ret = QOperatingSystemVersion::currentType();
	return static_cast<int>(_ret);
}

QVersionNumber* QOperatingSystemVersion_Version(const QOperatingSystemVersion* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersion_MajorVersion(const QOperatingSystemVersion* self) {
	return self->majorVersion();
}

int QOperatingSystemVersion_MinorVersion(const QOperatingSystemVersion* self) {
	return self->minorVersion();
}

int QOperatingSystemVersion_MicroVersion(const QOperatingSystemVersion* self) {
	return self->microVersion();
}

int QOperatingSystemVersion_SegmentCount(const QOperatingSystemVersion* self) {
	return self->segmentCount();
}

int QOperatingSystemVersion_Type(const QOperatingSystemVersion* self) {
	QOperatingSystemVersion::OSType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QOperatingSystemVersion_Name(const QOperatingSystemVersion* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QOperatingSystemVersion*>( self );
	} else {
		delete self;
	}
}

