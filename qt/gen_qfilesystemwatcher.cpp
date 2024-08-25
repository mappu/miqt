#include "gen_qfilesystemwatcher.h"
#include "qfilesystemwatcher.h"

#include <QFileSystemWatcher>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileSystemWatcher* QFileSystemWatcher_new() {
	return new QFileSystemWatcher();
}

QFileSystemWatcher* QFileSystemWatcher_new2(char** paths, uint64_t* paths_Lengths, size_t paths_len) {
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	return new QFileSystemWatcher(paths_QList);
}

QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent) {
	return new QFileSystemWatcher(parent);
}

QFileSystemWatcher* QFileSystemWatcher_new4(char** paths, uint64_t* paths_Lengths, size_t paths_len, QObject* parent) {
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	return new QFileSystemWatcher(paths_QList, parent);
}

QMetaObject* QFileSystemWatcher_MetaObject(QFileSystemWatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void QFileSystemWatcher_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemWatcher_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return self->addPath(file_QString);
}

void QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, char** files, uint64_t* files_Lengths, size_t files_len, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> files_QList;
	files_QList.reserve(files_len);
	for(size_t i = 0; i < files_len; ++i) {
		files_QList.push_back(QString::fromUtf8(files[i], files_Lengths[i]));
	}
	QList<QString> ret = self->addPaths(files_QList);
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

bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return self->removePath(file_QString);
}

void QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, char** files, uint64_t* files_Lengths, size_t files_len, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> files_QList;
	files_QList.reserve(files_len);
	for(size_t i = 0; i < files_len; ++i) {
		files_QList.push_back(QString::fromUtf8(files[i], files_Lengths[i]));
	}
	QList<QString> ret = self->removePaths(files_QList);
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

void QFileSystemWatcher_Files(QFileSystemWatcher* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->files();
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

void QFileSystemWatcher_Directories(QFileSystemWatcher* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->directories();
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

void QFileSystemWatcher_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemWatcher_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemWatcher_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemWatcher_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSystemWatcher::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSystemWatcher_Delete(QFileSystemWatcher* self) {
	delete self;
}

