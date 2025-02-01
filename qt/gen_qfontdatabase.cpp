#include <QByteArray>
#include <QFont>
#include <QFontDatabase>
#include <QFontInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfontdatabase.h>
#include "gen_qfontdatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QFontDatabase* QFontDatabase_new() {
	return new QFontDatabase();
}

struct miqt_array /* of int */  QFontDatabase_standardSizes() {
	QList<int> _ret = QFontDatabase::standardSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_writingSystems(const QFontDatabase* self) {
	QList<QFontDatabase::WritingSystem> _ret = self->writingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QFontDatabase::WritingSystem _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_writingSystemsWithFamily(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<QFontDatabase::WritingSystem> _ret = self->writingSystems(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QFontDatabase::WritingSystem _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_families(const QFontDatabase* self) {
	QStringList _ret = self->families();
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

struct miqt_array /* of struct miqt_string */  QFontDatabase_styles(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QStringList _ret = self->styles(family_QString);
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

struct miqt_array /* of int */  QFontDatabase_pointSizes(QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<int> _ret = self->pointSizes(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_smoothSizes(QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = self->smoothSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFontDatabase_styleString(QFontDatabase* self, QFont* font) {
	QString _ret = self->styleString(*font);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_styleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo) {
	QString _ret = self->styleString(*fontInfo);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFontDatabase_font(const QFontDatabase* self, struct miqt_string family, struct miqt_string style, int pointSize) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return new QFont(self->font(family_QString, style_QString, static_cast<int>(pointSize)));
}

bool QFontDatabase_isBitmapScalable(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->isBitmapScalable(family_QString);
}

bool QFontDatabase_isSmoothlyScalable(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->isSmoothlyScalable(family_QString);
}

bool QFontDatabase_isScalable(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->isScalable(family_QString);
}

bool QFontDatabase_isFixedPitch(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->isFixedPitch(family_QString);
}

bool QFontDatabase_italic(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->italic(family_QString, style_QString);
}

bool QFontDatabase_bold(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->bold(family_QString, style_QString);
}

int QFontDatabase_weight(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->weight(family_QString, style_QString);
}

bool QFontDatabase_hasFamily(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->hasFamily(family_QString);
}

bool QFontDatabase_isPrivateFamily(const QFontDatabase* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return self->isPrivateFamily(family_QString);
}

struct miqt_string QFontDatabase_writingSystemName(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_writingSystemSample(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontDatabase_addApplicationFont(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFontDatabase::addApplicationFont(fileName_QString);
}

int QFontDatabase_addApplicationFontFromData(struct miqt_string fontData) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	return QFontDatabase::addApplicationFontFromData(fontData_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFontFamilies(int id) {
	QStringList _ret = QFontDatabase::applicationFontFamilies(static_cast<int>(id));
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

bool QFontDatabase_removeApplicationFont(int id) {
	return QFontDatabase::removeApplicationFont(static_cast<int>(id));
}

bool QFontDatabase_removeAllApplicationFonts() {
	return QFontDatabase::removeAllApplicationFonts();
}

bool QFontDatabase_supportsThreadedFontRendering() {
	return QFontDatabase::supportsThreadedFontRendering();
}

QFont* QFontDatabase_systemFont(int type) {
	return new QFont(QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(type)));
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_families1(const QFontDatabase* self, int writingSystem) {
	QStringList _ret = self->families(static_cast<QFontDatabase::WritingSystem>(writingSystem));
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

struct miqt_array /* of int */  QFontDatabase_pointSizes2(QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = self->pointSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_isBitmapScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->isBitmapScalable(family_QString, style_QString);
}

bool QFontDatabase_isSmoothlyScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->isSmoothlyScalable(family_QString, style_QString);
}

bool QFontDatabase_isScalable2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->isScalable(family_QString, style_QString);
}

bool QFontDatabase_isFixedPitch2(const QFontDatabase* self, struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return self->isFixedPitch(family_QString, style_QString);
}

void QFontDatabase_delete(QFontDatabase* self) {
	delete self;
}

