#include <QOperatingSystemVersion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qoperatingsystemversion.h>
#include "gen_qoperatingsystemversion.h"
#include "_cgo_export.h"

void QOperatingSystemVersion_new(int osType, int vmajor, QOperatingSystemVersion** outptr_QOperatingSystemVersion) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor));
	*outptr_QOperatingSystemVersion = ret;
}

void QOperatingSystemVersion_new2(int osType, int vmajor, int vminor, QOperatingSystemVersion** outptr_QOperatingSystemVersion) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
	*outptr_QOperatingSystemVersion = ret;
}

void QOperatingSystemVersion_new3(int osType, int vmajor, int vminor, int vmicro, QOperatingSystemVersion** outptr_QOperatingSystemVersion) {
	QOperatingSystemVersion* ret = new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
	*outptr_QOperatingSystemVersion = ret;
}

QOperatingSystemVersion* QOperatingSystemVersion_Current() {
	return new QOperatingSystemVersion(QOperatingSystemVersion::current());
}

int QOperatingSystemVersion_CurrentType() {
	QOperatingSystemVersion::OSType _ret = QOperatingSystemVersion::currentType();
	return static_cast<int>(_ret);
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

