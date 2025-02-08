#include <QClipboard>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qclipboard.h>
#include "gen_qclipboard.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QClipboard_changed(intptr_t, int);
void miqt_exec_callback_QClipboard_selectionChanged(intptr_t);
void miqt_exec_callback_QClipboard_findBufferChanged(intptr_t);
void miqt_exec_callback_QClipboard_dataChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QClipboard_virtbase(QClipboard* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QClipboard_metaObject(const QClipboard* self) {
	return (QMetaObject*) self->metaObject();
}

void* QClipboard_metacast(QClipboard* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QClipboard_tr(const char* s) {
	QString _ret = QClipboard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_trUtf8(const char* s) {
	QString _ret = QClipboard::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_clear(QClipboard* self) {
	self->clear();
}

bool QClipboard_supportsSelection(const QClipboard* self) {
	return self->supportsSelection();
}

bool QClipboard_supportsFindBuffer(const QClipboard* self) {
	return self->supportsFindBuffer();
}

bool QClipboard_ownsSelection(const QClipboard* self) {
	return self->ownsSelection();
}

bool QClipboard_ownsClipboard(const QClipboard* self) {
	return self->ownsClipboard();
}

bool QClipboard_ownsFindBuffer(const QClipboard* self) {
	return self->ownsFindBuffer();
}

struct miqt_string QClipboard_text(const QClipboard* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_textWithSubtype(const QClipboard* self, struct miqt_string subtype) {
	QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
	QString _ret = self->text(subtype_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_setText(QClipboard* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

QMimeData* QClipboard_mimeData(const QClipboard* self) {
	return (QMimeData*) self->mimeData();
}

void QClipboard_setMimeData(QClipboard* self, QMimeData* data) {
	self->setMimeData(data);
}

QImage* QClipboard_image(const QClipboard* self) {
	return new QImage(self->image());
}

QPixmap* QClipboard_pixmap(const QClipboard* self) {
	return new QPixmap(self->pixmap());
}

void QClipboard_setImage(QClipboard* self, QImage* param1) {
	self->setImage(*param1);
}

void QClipboard_setPixmap(QClipboard* self, QPixmap* param1) {
	self->setPixmap(*param1);
}

void QClipboard_changed(QClipboard* self, int mode) {
	self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_connect_changed(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), self, [=](QClipboard::Mode mode) {
		QClipboard::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QClipboard_changed(slot, sigval1);
	});
}

void QClipboard_selectionChanged(QClipboard* self) {
	self->selectionChanged();
}

void QClipboard_connect_selectionChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), self, [=]() {
		miqt_exec_callback_QClipboard_selectionChanged(slot);
	});
}

void QClipboard_findBufferChanged(QClipboard* self) {
	self->findBufferChanged();
}

void QClipboard_connect_findBufferChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), self, [=]() {
		miqt_exec_callback_QClipboard_findBufferChanged(slot);
	});
}

void QClipboard_dataChanged(QClipboard* self) {
	self->dataChanged();
}

void QClipboard_connect_dataChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), self, [=]() {
		miqt_exec_callback_QClipboard_dataChanged(slot);
	});
}

struct miqt_string QClipboard_tr2(const char* s, const char* c) {
	QString _ret = QClipboard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_tr3(const char* s, const char* c, int n) {
	QString _ret = QClipboard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_trUtf82(const char* s, const char* c) {
	QString _ret = QClipboard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QClipboard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_clear1(QClipboard* self, int mode) {
	self->clear(static_cast<QClipboard::Mode>(mode));
}

struct miqt_string QClipboard_text1(const QClipboard* self, int mode) {
	QString _ret = self->text(static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_text2(const QClipboard* self, struct miqt_string subtype, int mode) {
	QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
	QString _ret = self->text(subtype_QString, static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_setText2(QClipboard* self, struct miqt_string param1, int mode) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QClipboard::Mode>(mode));
}

QMimeData* QClipboard_mimeData1(const QClipboard* self, int mode) {
	return (QMimeData*) self->mimeData(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_setMimeData2(QClipboard* self, QMimeData* data, int mode) {
	self->setMimeData(data, static_cast<QClipboard::Mode>(mode));
}

QImage* QClipboard_image1(const QClipboard* self, int mode) {
	return new QImage(self->image(static_cast<QClipboard::Mode>(mode)));
}

QPixmap* QClipboard_pixmap1(const QClipboard* self, int mode) {
	return new QPixmap(self->pixmap(static_cast<QClipboard::Mode>(mode)));
}

void QClipboard_setImage2(QClipboard* self, QImage* param1, int mode) {
	self->setImage(*param1, static_cast<QClipboard::Mode>(mode));
}

void QClipboard_setPixmap2(QClipboard* self, QPixmap* param1, int mode) {
	self->setPixmap(*param1, static_cast<QClipboard::Mode>(mode));
}

