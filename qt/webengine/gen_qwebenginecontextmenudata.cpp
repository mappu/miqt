#include <QList>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineContextMenuData>
#include <qwebenginecontextmenudata.h>
#include "gen_qwebenginecontextmenudata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineContextMenuData* QWebEngineContextMenuData_new() {
	return new QWebEngineContextMenuData();
}

QWebEngineContextMenuData* QWebEngineContextMenuData_new2(QWebEngineContextMenuData* other) {
	return new QWebEngineContextMenuData(*other);
}

void QWebEngineContextMenuData_operatorAssign(QWebEngineContextMenuData* self, QWebEngineContextMenuData* other) {
	self->operator=(*other);
}

bool QWebEngineContextMenuData_isValid(const QWebEngineContextMenuData* self) {
	return self->isValid();
}

QPoint* QWebEngineContextMenuData_position(const QWebEngineContextMenuData* self) {
	return new QPoint(self->position());
}

struct miqt_string QWebEngineContextMenuData_selectedText(const QWebEngineContextMenuData* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineContextMenuData_linkText(const QWebEngineContextMenuData* self) {
	QString _ret = self->linkText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineContextMenuData_linkUrl(const QWebEngineContextMenuData* self) {
	return new QUrl(self->linkUrl());
}

QUrl* QWebEngineContextMenuData_mediaUrl(const QWebEngineContextMenuData* self) {
	return new QUrl(self->mediaUrl());
}

int QWebEngineContextMenuData_mediaType(const QWebEngineContextMenuData* self) {
	QWebEngineContextMenuData::MediaType _ret = self->mediaType();
	return static_cast<int>(_ret);
}

bool QWebEngineContextMenuData_isContentEditable(const QWebEngineContextMenuData* self) {
	return self->isContentEditable();
}

struct miqt_string QWebEngineContextMenuData_misspelledWord(const QWebEngineContextMenuData* self) {
	QString _ret = self->misspelledWord();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QWebEngineContextMenuData_spellCheckerSuggestions(const QWebEngineContextMenuData* self) {
	QStringList _ret = self->spellCheckerSuggestions();
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

int QWebEngineContextMenuData_mediaFlags(const QWebEngineContextMenuData* self) {
	QWebEngineContextMenuData::MediaFlags _ret = self->mediaFlags();
	return static_cast<int>(_ret);
}

int QWebEngineContextMenuData_editFlags(const QWebEngineContextMenuData* self) {
	QWebEngineContextMenuData::EditFlags _ret = self->editFlags();
	return static_cast<int>(_ret);
}

void QWebEngineContextMenuData_delete(QWebEngineContextMenuData* self) {
	delete self;
}

