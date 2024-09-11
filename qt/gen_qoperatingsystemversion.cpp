#include <QOperatingSystemVersion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qoperatingsystemversion.h"

#include "gen_qoperatingsystemversion.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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
	QOperatingSystemVersion ret = QOperatingSystemVersion::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QOperatingSystemVersion*>(new QOperatingSystemVersion(ret));
}

uintptr_t QOperatingSystemVersion_CurrentType() {
	QOperatingSystemVersion::OSType ret = QOperatingSystemVersion::currentType();
	return static_cast<uintptr_t>(ret);
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
	QOperatingSystemVersion::OSType ret = self->type();
	return static_cast<uintptr_t>(ret);
}

void QOperatingSystemVersion_Name(const QOperatingSystemVersion* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self) {
	delete self;
}

