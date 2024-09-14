#include <QOperatingSystemVersion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qoperatingsystemversion.h"
#include "gen_qoperatingsystemversion.h"
#include "_cgo_export.h"

QOperatingSystemVersion* QOperatingSystemVersion_new(uintptr_t osType, int vmajor) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new2(uintptr_t osType, int vmajor, int vminor) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new3(uintptr_t osType, int vmajor, int vminor, int vmicro) {
	return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

QOperatingSystemVersion* QOperatingSystemVersion_Current() {
	QOperatingSystemVersion _ret = QOperatingSystemVersion::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QOperatingSystemVersion*>(new QOperatingSystemVersion(_ret));
}

uintptr_t QOperatingSystemVersion_CurrentType() {
	QOperatingSystemVersion::OSType _ret = QOperatingSystemVersion::currentType();
	return static_cast<uintptr_t>(_ret);
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

uintptr_t QOperatingSystemVersion_Type(const QOperatingSystemVersion* self) {
	QOperatingSystemVersion::OSType _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

struct miqt_string* QOperatingSystemVersion_Name(const QOperatingSystemVersion* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self) {
	delete self;
}

