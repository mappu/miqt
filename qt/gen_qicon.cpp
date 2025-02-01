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
#include <QVariant>
#include <QWindow>
#include <qicon.h>
#include "gen_qicon.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QIcon* QIcon_new() {
	return new QIcon();
}

QIcon* QIcon_new2(QPixmap* pixmap) {
	return new QIcon(*pixmap);
}

QIcon* QIcon_new3(QIcon* other) {
	return new QIcon(*other);
}

QIcon* QIcon_new4(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QIcon(fileName_QString);
}

QIcon* QIcon_new5(QIconEngine* engine) {
	return new QIcon(engine);
}

void QIcon_operatorAssign(QIcon* self, QIcon* other) {
	self->operator=(*other);
}

void QIcon_swap(QIcon* self, QIcon* other) {
	self->swap(*other);
}

QVariant* QIcon_ToQVariant(const QIcon* self) {
	return new QVariant(self->operator QVariant());
}

QPixmap* QIcon_pixmap(const QIcon* self, QSize* size) {
	return new QPixmap(self->pixmap(*size));
}

QPixmap* QIcon_pixmap2(const QIcon* self, int w, int h) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QIcon_pixmapWithExtent(const QIcon* self, int extent) {
	return new QPixmap(self->pixmap(static_cast<int>(extent)));
}

QPixmap* QIcon_pixmap3(const QIcon* self, QWindow* window, QSize* size) {
	return new QPixmap(self->pixmap(window, *size));
}

QSize* QIcon_actualSize(const QIcon* self, QSize* size) {
	return new QSize(self->actualSize(*size));
}

QSize* QIcon_actualSize2(const QIcon* self, QWindow* window, QSize* size) {
	return new QSize(self->actualSize(window, *size));
}

struct miqt_string QIcon_name(const QIcon* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_paint(const QIcon* self, QPainter* painter, QRect* rect) {
	self->paint(painter, *rect);
}

void QIcon_paint2(const QIcon* self, QPainter* painter, int x, int y, int w, int h) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

bool QIcon_isNull(const QIcon* self) {
	return self->isNull();
}

bool QIcon_isDetached(const QIcon* self) {
	return self->isDetached();
}

void QIcon_detach(QIcon* self) {
	self->detach();
}

long long QIcon_cacheKey(const QIcon* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

void QIcon_addPixmap(QIcon* self, QPixmap* pixmap) {
	self->addPixmap(*pixmap);
}

void QIcon_addFile(QIcon* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString);
}

struct miqt_array /* of QSize* */  QIcon_availableSizes(const QIcon* self) {
	QList<QSize> _ret = self->availableSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_setIsMask(QIcon* self, bool isMask) {
	self->setIsMask(isMask);
}

bool QIcon_isMask(const QIcon* self) {
	return self->isMask();
}

QIcon* QIcon_fromTheme(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QIcon(QIcon::fromTheme(name_QString));
}

QIcon* QIcon_fromTheme2(struct miqt_string name, QIcon* fallback) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QIcon(QIcon::fromTheme(name_QString, *fallback));
}

bool QIcon_hasThemeIcon(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QIcon::hasThemeIcon(name_QString);
}

struct miqt_array /* of struct miqt_string */  QIcon_themeSearchPaths() {
	QStringList _ret = QIcon::themeSearchPaths();
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

void QIcon_setThemeSearchPaths(struct miqt_array /* of struct miqt_string */  searchpath) {
	QStringList searchpath_QList;
	searchpath_QList.reserve(searchpath.len);
	struct miqt_string* searchpath_arr = static_cast<struct miqt_string*>(searchpath.data);
	for(size_t i = 0; i < searchpath.len; ++i) {
		QString searchpath_arr_i_QString = QString::fromUtf8(searchpath_arr[i].data, searchpath_arr[i].len);
		searchpath_QList.push_back(searchpath_arr_i_QString);
	}
	QIcon::setThemeSearchPaths(searchpath_QList);
}

struct miqt_array /* of struct miqt_string */  QIcon_fallbackSearchPaths() {
	QStringList _ret = QIcon::fallbackSearchPaths();
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

void QIcon_setFallbackSearchPaths(struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	QIcon::setFallbackSearchPaths(paths_QList);
}

struct miqt_string QIcon_themeName() {
	QString _ret = QIcon::themeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_setThemeName(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QIcon::setThemeName(path_QString);
}

struct miqt_string QIcon_fallbackThemeName() {
	QString _ret = QIcon::fallbackThemeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_setFallbackThemeName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QIcon::setFallbackThemeName(name_QString);
}

QPixmap* QIcon_pixmap22(const QIcon* self, QSize* size, int mode) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap32(const QIcon* self, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap33(const QIcon* self, int w, int h, int mode) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap4(const QIcon* self, int w, int h, int mode, int state) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap23(const QIcon* self, int extent, int mode) {
	return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap34(const QIcon* self, int extent, int mode, int state) {
	return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap35(const QIcon* self, QWindow* window, QSize* size, int mode) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap42(const QIcon* self, QWindow* window, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_actualSize22(const QIcon* self, QSize* size, int mode) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_actualSize3(const QIcon* self, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_actualSize32(const QIcon* self, QWindow* window, QSize* size, int mode) {
	return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_actualSize4(const QIcon* self, QWindow* window, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIcon_paint3(const QIcon* self, QPainter* painter, QRect* rect, int alignment) {
	self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment));
}

void QIcon_paint4(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode) {
	self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_paint5(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode, int state) {
	self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_paint6(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment));
}

void QIcon_paint7(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_paint8(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode, int state) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_addPixmap2(QIcon* self, QPixmap* pixmap, int mode) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode));
}

void QIcon_addPixmap3(QIcon* self, QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_addFile2(QIcon* self, struct miqt_string fileName, QSize* size) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size);
}

void QIcon_addFile3(QIcon* self, struct miqt_string fileName, QSize* size, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode));
}

void QIcon_addFile4(QIcon* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

struct miqt_array /* of QSize* */  QIcon_availableSizes1(const QIcon* self, int mode) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QIcon_availableSizes2(const QIcon* self, int mode, int state) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_delete(QIcon* self) {
	delete self;
}

