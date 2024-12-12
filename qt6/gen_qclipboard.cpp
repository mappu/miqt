#include <QClipboard>
#include <QImage>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qclipboard.h>
#include "gen_qclipboard.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QClipboard_virtbase(QClipboard* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QClipboard_MetaObject(const QClipboard* self) {
	return (QMetaObject*) self->metaObject();
}

void* QClipboard_Metacast(QClipboard* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QClipboard_Tr(const char* s) {
	QString _ret = QClipboard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_Clear(QClipboard* self) {
	self->clear();
}

bool QClipboard_SupportsSelection(const QClipboard* self) {
	return self->supportsSelection();
}

bool QClipboard_SupportsFindBuffer(const QClipboard* self) {
	return self->supportsFindBuffer();
}

bool QClipboard_OwnsSelection(const QClipboard* self) {
	return self->ownsSelection();
}

bool QClipboard_OwnsClipboard(const QClipboard* self) {
	return self->ownsClipboard();
}

bool QClipboard_OwnsFindBuffer(const QClipboard* self) {
	return self->ownsFindBuffer();
}

struct miqt_string QClipboard_Text(const QClipboard* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_TextWithSubtype(const QClipboard* self, struct miqt_string subtype) {
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

void QClipboard_SetText(QClipboard* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

QMimeData* QClipboard_MimeData(const QClipboard* self) {
	return (QMimeData*) self->mimeData();
}

void QClipboard_SetMimeData(QClipboard* self, QMimeData* data) {
	self->setMimeData(data);
}

QImage* QClipboard_Image(const QClipboard* self) {
	return new QImage(self->image());
}

QPixmap* QClipboard_Pixmap(const QClipboard* self) {
	return new QPixmap(self->pixmap());
}

void QClipboard_SetImage(QClipboard* self, QImage* param1) {
	self->setImage(*param1);
}

void QClipboard_SetPixmap(QClipboard* self, QPixmap* param1) {
	self->setPixmap(*param1);
}

void QClipboard_Changed(QClipboard* self, int mode) {
	self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_connect_Changed(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), self, [=](QClipboard::Mode mode) {
		QClipboard::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QClipboard_Changed(slot, sigval1);
	});
}

void QClipboard_SelectionChanged(QClipboard* self) {
	self->selectionChanged();
}

void QClipboard_connect_SelectionChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), self, [=]() {
		miqt_exec_callback_QClipboard_SelectionChanged(slot);
	});
}

void QClipboard_FindBufferChanged(QClipboard* self) {
	self->findBufferChanged();
}

void QClipboard_connect_FindBufferChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), self, [=]() {
		miqt_exec_callback_QClipboard_FindBufferChanged(slot);
	});
}

void QClipboard_DataChanged(QClipboard* self) {
	self->dataChanged();
}

void QClipboard_connect_DataChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), self, [=]() {
		miqt_exec_callback_QClipboard_DataChanged(slot);
	});
}

struct miqt_string QClipboard_Tr2(const char* s, const char* c) {
	QString _ret = QClipboard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_Tr3(const char* s, const char* c, int n) {
	QString _ret = QClipboard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_Clear1(QClipboard* self, int mode) {
	self->clear(static_cast<QClipboard::Mode>(mode));
}

struct miqt_string QClipboard_Text1(const QClipboard* self, int mode) {
	QString _ret = self->text(static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_Text2(const QClipboard* self, struct miqt_string subtype, int mode) {
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

void QClipboard_SetText2(QClipboard* self, struct miqt_string param1, int mode) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QClipboard::Mode>(mode));
}

QMimeData* QClipboard_MimeData1(const QClipboard* self, int mode) {
	return (QMimeData*) self->mimeData(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, int mode) {
	self->setMimeData(data, static_cast<QClipboard::Mode>(mode));
}

QImage* QClipboard_Image1(const QClipboard* self, int mode) {
	return new QImage(self->image(static_cast<QClipboard::Mode>(mode)));
}

QPixmap* QClipboard_Pixmap1(const QClipboard* self, int mode) {
	return new QPixmap(self->pixmap(static_cast<QClipboard::Mode>(mode)));
}

void QClipboard_SetImage2(QClipboard* self, QImage* param1, int mode) {
	self->setImage(*param1, static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetPixmap2(QClipboard* self, QPixmap* param1, int mode) {
	self->setPixmap(*param1, static_cast<QClipboard::Mode>(mode));
}

