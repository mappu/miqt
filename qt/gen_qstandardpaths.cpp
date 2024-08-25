#include "gen_qstandardpaths.h"
#include "qstandardpaths.h"

#include <QList>
#include <QStandardPaths>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
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

