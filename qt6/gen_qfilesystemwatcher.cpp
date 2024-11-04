#include <QFileSystemWatcher>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfilesystemwatcher.h>
#include "gen_qfilesystemwatcher.h"
#include "_cgo_export.h"

QFileSystemWatcher* QFileSystemWatcher_new() {
	return new QFileSystemWatcher();
}

QFileSystemWatcher* QFileSystemWatcher_new2(struct miqt_array /* of struct miqt_string */ paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	return new QFileSystemWatcher(paths_QList);
}

QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent) {
	return new QFileSystemWatcher(parent);
}

QFileSystemWatcher* QFileSystemWatcher_new4(struct miqt_array /* of struct miqt_string */ paths, QObject* parent) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	return new QFileSystemWatcher(paths_QList, parent);
}

QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileSystemWatcher_Tr(const char* s) {
	QString _ret = QFileSystemWatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return self->addPath(file_QString);
}

struct miqt_array QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */ files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	QStringList _ret = self->addPaths(files_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return self->removePath(file_QString);
}

struct miqt_array QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */ files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	QStringList _ret = self->removePaths(files_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QFileSystemWatcher_Files(const QFileSystemWatcher* self) {
	QStringList _ret = self->files();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QFileSystemWatcher_Directories(const QFileSystemWatcher* self) {
	QStringList _ret = self->directories();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFileSystemWatcher_Tr2(const char* s, const char* c) {
	QString _ret = QFileSystemWatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemWatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileSystemWatcher_Delete(QFileSystemWatcher* self) {
	delete self;
}

