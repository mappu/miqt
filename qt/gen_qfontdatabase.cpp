#include <QByteArray>
#include <QFont>
#include <QFontDatabase>
#include <QFontInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qfontdatabase.h"
#include "gen_qfontdatabase.h"
#include "_cgo_export.h"

QFontDatabase* QFontDatabase_new() {
	return new QFontDatabase();
}

struct miqt_array* QFontDatabase_StandardSizes() {
	QList<int> _ret = QFontDatabase::standardSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_WritingSystems(const QFontDatabase* self) {
	QList<QFontDatabase::WritingSystem> _ret = self->writingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* _arr = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_WritingSystemsWithFamily(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QList<QFontDatabase::WritingSystem> _ret = self->writingSystems(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* _arr = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_Families(const QFontDatabase* self) {
	QStringList _ret = self->families();
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_Styles(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QStringList _ret = self->styles(family_QString);
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_PointSizes(QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QList<int> _ret = self->pointSizes(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_SmoothSizes(QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	QList<int> _ret = self->smoothSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QFontDatabase_StyleString(QFontDatabase* self, QFont* font) {
	QString _ret = self->styleString(*font);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDatabase_StyleStringWithFontInfo(QFontDatabase* self, QFontInfo* fontInfo) {
	QString _ret = self->styleString(*fontInfo);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QFont* QFontDatabase_Font(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style, int pointSize) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	QFont _ret = self->font(family_QString, style_QString, static_cast<int>(pointSize));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

bool QFontDatabase_IsBitmapScalable(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->isBitmapScalable(family_QString);
}

bool QFontDatabase_IsSmoothlyScalable(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->isSmoothlyScalable(family_QString);
}

bool QFontDatabase_IsScalable(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->isScalable(family_QString);
}

bool QFontDatabase_IsFixedPitch(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->isFixedPitch(family_QString);
}

bool QFontDatabase_Italic(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->italic(family_QString, style_QString);
}

bool QFontDatabase_Bold(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->bold(family_QString, style_QString);
}

int QFontDatabase_Weight(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->weight(family_QString, style_QString);
}

bool QFontDatabase_HasFamily(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->hasFamily(family_QString);
}

bool QFontDatabase_IsPrivateFamily(const QFontDatabase* self, struct miqt_string* family) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	return self->isPrivateFamily(family_QString);
}

struct miqt_string* QFontDatabase_WritingSystemName(uintptr_t writingSystem) {
	QString _ret = QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QFontDatabase_WritingSystemSample(uintptr_t writingSystem) {
	QString _ret = QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QFontDatabase_AddApplicationFont(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QFontDatabase::addApplicationFont(fileName_QString);
}

int QFontDatabase_AddApplicationFontFromData(QByteArray* fontData) {
	return QFontDatabase::addApplicationFontFromData(*fontData);
}

struct miqt_array* QFontDatabase_ApplicationFontFamilies(int id) {
	QStringList _ret = QFontDatabase::applicationFontFamilies(static_cast<int>(id));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_RemoveApplicationFont(int id) {
	return QFontDatabase::removeApplicationFont(static_cast<int>(id));
}

bool QFontDatabase_RemoveAllApplicationFonts() {
	return QFontDatabase::removeAllApplicationFonts();
}

bool QFontDatabase_SupportsThreadedFontRendering() {
	return QFontDatabase::supportsThreadedFontRendering();
}

QFont* QFontDatabase_SystemFont(uintptr_t typeVal) {
	QFont _ret = QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(typeVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

struct miqt_array* QFontDatabase_Families1(const QFontDatabase* self, uintptr_t writingSystem) {
	QStringList _ret = self->families(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QStringList from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QFontDatabase_PointSizes2(QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	QList<int> _ret = self->pointSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_IsBitmapScalable2(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->isBitmapScalable(family_QString, style_QString);
}

bool QFontDatabase_IsSmoothlyScalable2(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->isSmoothlyScalable(family_QString, style_QString);
}

bool QFontDatabase_IsScalable2(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->isScalable(family_QString, style_QString);
}

bool QFontDatabase_IsFixedPitch2(const QFontDatabase* self, struct miqt_string* family, struct miqt_string* style) {
	QString family_QString = QString::fromUtf8(&family->data, family->len);
	QString style_QString = QString::fromUtf8(&style->data, style->len);
	return self->isFixedPitch(family_QString, style_QString);
}

void QFontDatabase_Delete(QFontDatabase* self) {
	delete self;
}

