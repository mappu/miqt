#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineContextMenuRequest>
#include <qwebenginecontextmenurequest.h>
#include "gen_qwebenginecontextmenurequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineContextMenuRequest_virtbase(QWebEngineContextMenuRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineContextMenuRequest_metaObject(const QWebEngineContextMenuRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineContextMenuRequest_metacast(QWebEngineContextMenuRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineContextMenuRequest_tr(const char* s) {
	QString _ret = QWebEngineContextMenuRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPoint* QWebEngineContextMenuRequest_position(const QWebEngineContextMenuRequest* self) {
	return new QPoint(self->position());
}

struct miqt_string QWebEngineContextMenuRequest_selectedText(const QWebEngineContextMenuRequest* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineContextMenuRequest_linkText(const QWebEngineContextMenuRequest* self) {
	QString _ret = self->linkText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineContextMenuRequest_linkUrl(const QWebEngineContextMenuRequest* self) {
	return new QUrl(self->linkUrl());
}

QUrl* QWebEngineContextMenuRequest_mediaUrl(const QWebEngineContextMenuRequest* self) {
	return new QUrl(self->mediaUrl());
}

int QWebEngineContextMenuRequest_mediaType(const QWebEngineContextMenuRequest* self) {
	QWebEngineContextMenuRequest::MediaType _ret = self->mediaType();
	return static_cast<int>(_ret);
}

bool QWebEngineContextMenuRequest_isContentEditable(const QWebEngineContextMenuRequest* self) {
	return self->isContentEditable();
}

struct miqt_string QWebEngineContextMenuRequest_misspelledWord(const QWebEngineContextMenuRequest* self) {
	QString _ret = self->misspelledWord();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QWebEngineContextMenuRequest_spellCheckerSuggestions(const QWebEngineContextMenuRequest* self) {
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

bool QWebEngineContextMenuRequest_isAccepted(const QWebEngineContextMenuRequest* self) {
	return self->isAccepted();
}

void QWebEngineContextMenuRequest_setAccepted(QWebEngineContextMenuRequest* self, bool accepted) {
	self->setAccepted(accepted);
}

int QWebEngineContextMenuRequest_mediaFlags(const QWebEngineContextMenuRequest* self) {
	QWebEngineContextMenuRequest::MediaFlags _ret = self->mediaFlags();
	return static_cast<int>(_ret);
}

int QWebEngineContextMenuRequest_editFlags(const QWebEngineContextMenuRequest* self) {
	QWebEngineContextMenuRequest::EditFlags _ret = self->editFlags();
	return static_cast<int>(_ret);
}

struct miqt_string QWebEngineContextMenuRequest_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineContextMenuRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineContextMenuRequest_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineContextMenuRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineContextMenuRequest_delete(QWebEngineContextMenuRequest* self) {
	delete self;
}

