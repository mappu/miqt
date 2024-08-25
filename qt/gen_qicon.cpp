#include "gen_qicon.h"
#include "qicon.h"

#include <QIcon>
#include <QIconEngine>
#include <QList>
#include <QPixmap>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QIcon* QIcon_new() {
	return new QIcon();
}

QIcon* QIcon_new2(QPixmap* pixmap) {
	return new QIcon(*pixmap);
}

QIcon* QIcon_new3(QIcon* other) {
	return new QIcon(*other);
}

QIcon* QIcon_new4(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QIcon(fileName_QString);
}

QIcon* QIcon_new5(QIconEngine* engine) {
	return new QIcon(engine);
}

void QIcon_OperatorAssign(QIcon* self, QIcon* other) {
	self->operator=(*other);
}

void QIcon_Swap(QIcon* self, QIcon* other) {
	self->swap(*other);
}

void QIcon_Name(QIcon* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QIcon_IsNull(QIcon* self) {
	return self->isNull();
}

bool QIcon_IsDetached(QIcon* self) {
	return self->isDetached();
}

void QIcon_Detach(QIcon* self) {
	self->detach();
}

int64_t QIcon_CacheKey(QIcon* self) {
	return self->cacheKey();
}

void QIcon_SetIsMask(QIcon* self, bool isMask) {
	self->setIsMask(isMask);
}

bool QIcon_IsMask(QIcon* self) {
	return self->isMask();
}

QIcon* QIcon_FromTheme(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QIcon ret = QIcon::fromTheme(name_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

QIcon* QIcon_FromTheme2(const char* name, size_t name_Strlen, QIcon* fallback) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QIcon ret = QIcon::fromTheme(name_QString, *fallback);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

bool QIcon_HasThemeIcon(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return QIcon::hasThemeIcon(name_QString);
}

void QIcon_ThemeSearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QIcon::themeSearchPaths();
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

void QIcon_SetThemeSearchPaths(char** searchpath, uint64_t* searchpath_Lengths, size_t searchpath_len) {
	QList<QString> searchpath_QList;
	searchpath_QList.reserve(searchpath_len);
	for(size_t i = 0; i < searchpath_len; ++i) {
		searchpath_QList.push_back(QString::fromUtf8(searchpath[i], searchpath_Lengths[i]));
	}
	QIcon::setThemeSearchPaths(searchpath_QList);
}

void QIcon_FallbackSearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QIcon::fallbackSearchPaths();
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

void QIcon_SetFallbackSearchPaths(char** paths, uint64_t* paths_Lengths, size_t paths_len) {
	QList<QString> paths_QList;
	paths_QList.reserve(paths_len);
	for(size_t i = 0; i < paths_len; ++i) {
		paths_QList.push_back(QString::fromUtf8(paths[i], paths_Lengths[i]));
	}
	QIcon::setFallbackSearchPaths(paths_QList);
}

void QIcon_ThemeName(char** _out, int* _out_Strlen) {
	QString ret = QIcon::themeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIcon_SetThemeName(const char* path, size_t path_Strlen) {
	QString path_QString = QString::fromUtf8(path, path_Strlen);
	QIcon::setThemeName(path_QString);
}

void QIcon_FallbackThemeName(char** _out, int* _out_Strlen) {
	QString ret = QIcon::fallbackThemeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIcon_SetFallbackThemeName(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QIcon::setFallbackThemeName(name_QString);
}

void QIcon_Delete(QIcon* self) {
	delete self;
}

