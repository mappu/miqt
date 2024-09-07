#include <QIcon>
#include <QIconEngine>
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include "qicon.h"

#include "gen_qicon.h"

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

QPixmap* QIcon_Pixmap(QIcon* self, QSize* size) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(*size);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap2(QIcon* self, int w, int h) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_PixmapWithExtent(QIcon* self, int extent) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(extent));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap3(QIcon* self, QWindow* window, QSize* size) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(window, *size);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QSize* QIcon_ActualSize(QIcon* self, QSize* size) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(*size);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QIcon_ActualSize2(QIcon* self, QWindow* window, QSize* size) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(window, *size);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QIcon_Name(QIcon* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QIcon*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIcon_Paint(QIcon* self, QPainter* painter, QRect* rect) {
	const_cast<const QIcon*>(self)->paint(painter, *rect);
}

void QIcon_Paint2(QIcon* self, QPainter* painter, int x, int y, int w, int h) {
	const_cast<const QIcon*>(self)->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

bool QIcon_IsNull(QIcon* self) {
	return const_cast<const QIcon*>(self)->isNull();
}

bool QIcon_IsDetached(QIcon* self) {
	return const_cast<const QIcon*>(self)->isDetached();
}

void QIcon_Detach(QIcon* self) {
	self->detach();
}

long long QIcon_CacheKey(QIcon* self) {
	return const_cast<const QIcon*>(self)->cacheKey();
}

void QIcon_AddPixmap(QIcon* self, QPixmap* pixmap) {
	self->addPixmap(*pixmap);
}

void QIcon_AddFile(QIcon* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFile(fileName_QString);
}

void QIcon_AvailableSizes(QIcon* self, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIcon*>(self)->availableSizes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIcon_SetIsMask(QIcon* self, bool isMask) {
	self->setIsMask(isMask);
}

bool QIcon_IsMask(QIcon* self) {
	return const_cast<const QIcon*>(self)->isMask();
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
	QStringList ret = QIcon::themeSearchPaths();
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
	QStringList ret = QIcon::fallbackSearchPaths();
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

QPixmap* QIcon_Pixmap22(QIcon* self, QSize* size, uintptr_t mode) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(*size, static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap32(QIcon* self, QSize* size, uintptr_t mode, uintptr_t state) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap33(QIcon* self, int w, int h, uintptr_t mode) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap4(QIcon* self, int w, int h, uintptr_t mode, uintptr_t state) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap23(QIcon* self, int extent, uintptr_t mode) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap34(QIcon* self, int extent, uintptr_t mode, uintptr_t state) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap35(QIcon* self, QWindow* window, QSize* size, uintptr_t mode) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(window, *size, static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QIcon_Pixmap42(QIcon* self, QWindow* window, QSize* size, uintptr_t mode, uintptr_t state) {
	QPixmap ret = const_cast<const QIcon*>(self)->pixmap(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QSize* QIcon_ActualSize22(QIcon* self, QSize* size, uintptr_t mode) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(*size, static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QIcon_ActualSize3(QIcon* self, QSize* size, uintptr_t mode, uintptr_t state) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QIcon_ActualSize32(QIcon* self, QWindow* window, QSize* size, uintptr_t mode) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(window, *size, static_cast<QIcon::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QIcon_ActualSize4(QIcon* self, QWindow* window, QSize* size, uintptr_t mode, uintptr_t state) {
	QSize ret = const_cast<const QIcon*>(self)->actualSize(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QIcon_Paint3(QIcon* self, QPainter* painter, QRect* rect, int alignment) {
	const_cast<const QIcon*>(self)->paint(painter, *rect, static_cast<Qt::Alignment>(alignment));
}

void QIcon_Paint4(QIcon* self, QPainter* painter, QRect* rect, int alignment, uintptr_t mode) {
	const_cast<const QIcon*>(self)->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_Paint5(QIcon* self, QPainter* painter, QRect* rect, int alignment, uintptr_t mode, uintptr_t state) {
	const_cast<const QIcon*>(self)->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_Paint6(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment) {
	const_cast<const QIcon*>(self)->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment));
}

void QIcon_Paint7(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, uintptr_t mode) {
	const_cast<const QIcon*>(self)->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_Paint8(QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, uintptr_t mode, uintptr_t state) {
	const_cast<const QIcon*>(self)->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AddPixmap2(QIcon* self, QPixmap* pixmap, uintptr_t mode) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode));
}

void QIcon_AddPixmap3(QIcon* self, QPixmap* pixmap, uintptr_t mode, uintptr_t state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AddFile2(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFile(fileName_QString, *size);
}

void QIcon_AddFile3(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode));
}

void QIcon_AddFile4(QIcon* self, const char* fileName, size_t fileName_Strlen, QSize* size, uintptr_t mode, uintptr_t state) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AvailableSizes1(QIcon* self, uintptr_t mode, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIcon*>(self)->availableSizes(static_cast<QIcon::Mode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIcon_AvailableSizes2(QIcon* self, uintptr_t mode, uintptr_t state, QSize*** _out, size_t* _out_len) {
	QList<QSize> ret = const_cast<const QIcon*>(self)->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QSize** __out = static_cast<QSize**>(malloc(sizeof(QSize**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QSize(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QIcon_Delete(QIcon* self) {
	delete self;
}

