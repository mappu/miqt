#include "gen_qoperatingsystemversion.h"
#include "qoperatingsystemversion.h"

#include <QOperatingSystemVersion>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QOperatingSystemVersion* QOperatingSystemVersion_Current() {
	QOperatingSystemVersion ret = QOperatingSystemVersion::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QOperatingSystemVersion*>(new QOperatingSystemVersion(ret));
}

int QOperatingSystemVersion_MajorVersion(QOperatingSystemVersion* self) {
	return self->majorVersion();
}

int QOperatingSystemVersion_MinorVersion(QOperatingSystemVersion* self) {
	return self->minorVersion();
}

int QOperatingSystemVersion_MicroVersion(QOperatingSystemVersion* self) {
	return self->microVersion();
}

int QOperatingSystemVersion_SegmentCount(QOperatingSystemVersion* self) {
	return self->segmentCount();
}

void QOperatingSystemVersion_Name(QOperatingSystemVersion* self, char** _out, int* _out_Strlen) {
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

