#include <QList>
#include <QStandardPaths>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qstandardpaths.h"

#include "gen_qstandardpaths.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QStandardPaths_WritableLocation(uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QStandardPaths::writableLocation(static_cast<QStandardPaths::StandardLocation>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardPaths_StandardLocations(uintptr_t typeVal, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QStandardPaths::standardLocations(static_cast<QStandardPaths::StandardLocation>(typeVal));
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

void QStandardPaths_Locate(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = QStandardPaths::locate(static_cast<QStandardPaths::StandardLocation>(typeVal), fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardPaths_LocateAll(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QStringList ret = QStandardPaths::locateAll(static_cast<QStandardPaths::StandardLocation>(typeVal), fileName_QString);
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

void QStandardPaths_DisplayName(uintptr_t typeVal, char** _out, int* _out_Strlen) {
	QString ret = QStandardPaths::displayName(static_cast<QStandardPaths::StandardLocation>(typeVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardPaths_FindExecutable(const char* executableName, size_t executableName_Strlen, char** _out, int* _out_Strlen) {
	QString executableName_QString = QString::fromUtf8(executableName, executableName_Strlen);
	QString ret = QStandardPaths::findExecutable(executableName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardPaths_EnableTestMode(bool testMode) {
	QStandardPaths::enableTestMode(testMode);
}

void QStandardPaths_SetTestModeEnabled(bool testMode) {
	QStandardPaths::setTestModeEnabled(testMode);
}

bool QStandardPaths_IsTestModeEnabled() {
	return QStandardPaths::isTestModeEnabled();
}

void QStandardPaths_Locate3(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, int options, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = QStandardPaths::locate(static_cast<QStandardPaths::StandardLocation>(typeVal), fileName_QString, static_cast<QStandardPaths::LocateOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStandardPaths_LocateAll3(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, int options, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QStringList ret = QStandardPaths::locateAll(static_cast<QStandardPaths::StandardLocation>(typeVal), fileName_QString, static_cast<QStandardPaths::LocateOptions>(options));
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

void QStandardPaths_FindExecutable2(const char* executableName, size_t executableName_Strlen, char** paths, uint64_t* paths_Lengths, size_t paths_len, char** _out, int* _out_Strlen) {
	QString executableName_QString = QString::fromUtf8(executableName, executableName_Strlen);
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	QString ret = QStandardPaths::findExecutable(executableName_QString, paths_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

