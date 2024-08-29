#include <QDate>
#include <QLibraryInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include "qlibraryinfo.h"

#include "gen_qlibraryinfo.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QLibraryInfo_Licensee(char** _out, int* _out_Strlen) {
	QString ret = QLibraryInfo::licensee();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibraryInfo_LicensedProducts(char** _out, int* _out_Strlen) {
	QString ret = QLibraryInfo::licensedProducts();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QLibraryInfo_BuildDate() {
	QDate ret = QLibraryInfo::buildDate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

const char* QLibraryInfo_Build() {
	return (const char*) QLibraryInfo::build();
}

bool QLibraryInfo_IsDebugBuild() {
	return QLibraryInfo::isDebugBuild();
}

QVersionNumber* QLibraryInfo_Version() {
	QVersionNumber ret = QLibraryInfo::version();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVersionNumber*>(new QVersionNumber(ret));
}

void QLibraryInfo_Location(uintptr_t param1, char** _out, int* _out_Strlen) {
	QString ret = QLibraryInfo::location(static_cast<QLibraryInfo::LibraryLocation>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLibraryInfo_PlatformPluginArguments(const char* platformName, size_t platformName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString platformName_QString = QString::fromUtf8(platformName, platformName_Strlen);
	QStringList ret = QLibraryInfo::platformPluginArguments(platformName_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QLibraryInfo_Delete(QLibraryInfo* self) {
	delete self;
}

