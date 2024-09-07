#include <QClipboard>
#include <QImage>
#include <QMetaObject>
#include <QMimeData>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qclipboard.h"

#include "gen_qclipboard.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QClipboard_MetaObject(QClipboard* self) {
	return (QMetaObject*) const_cast<const QClipboard*>(self)->metaObject();
}

void QClipboard_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_Clear(QClipboard* self) {
	self->clear();
}

bool QClipboard_SupportsSelection(QClipboard* self) {
	return const_cast<const QClipboard*>(self)->supportsSelection();
}

bool QClipboard_SupportsFindBuffer(QClipboard* self) {
	return const_cast<const QClipboard*>(self)->supportsFindBuffer();
}

bool QClipboard_OwnsSelection(QClipboard* self) {
	return const_cast<const QClipboard*>(self)->ownsSelection();
}

bool QClipboard_OwnsClipboard(QClipboard* self) {
	return const_cast<const QClipboard*>(self)->ownsClipboard();
}

bool QClipboard_OwnsFindBuffer(QClipboard* self) {
	return const_cast<const QClipboard*>(self)->ownsFindBuffer();
}

void QClipboard_Text(QClipboard* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QClipboard*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TextWithSubtype(QClipboard* self, const char* subtype, size_t subtype_Strlen, char** _out, int* _out_Strlen) {
	QString subtype_QString = QString::fromUtf8(subtype, subtype_Strlen);
	QString ret = const_cast<const QClipboard*>(self)->text(subtype_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_SetText(QClipboard* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->setText(param1_QString);
}

QMimeData* QClipboard_MimeData(QClipboard* self) {
	return (QMimeData*) const_cast<const QClipboard*>(self)->mimeData();
}

void QClipboard_SetMimeData(QClipboard* self, QMimeData* data) {
	self->setMimeData(data);
}

QImage* QClipboard_Image(QClipboard* self) {
	QImage ret = const_cast<const QClipboard*>(self)->image();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QPixmap* QClipboard_Pixmap(QClipboard* self) {
	QPixmap ret = const_cast<const QClipboard*>(self)->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QClipboard_SetImage(QClipboard* self, QImage* param1) {
	self->setImage(*param1);
}

void QClipboard_SetPixmap(QClipboard* self, QPixmap* param1) {
	self->setPixmap(*param1);
}

void QClipboard_Changed(QClipboard* self, uintptr_t mode) {
	self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_connect_Changed(QClipboard* self, void* slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), self, [=](QClipboard::Mode mode) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QClipboard_SelectionChanged(QClipboard* self) {
	self->selectionChanged();
}

void QClipboard_connect_SelectionChanged(QClipboard* self, void* slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QClipboard_FindBufferChanged(QClipboard* self) {
	self->findBufferChanged();
}

void QClipboard_connect_FindBufferChanged(QClipboard* self, void* slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QClipboard_DataChanged(QClipboard* self) {
	self->dataChanged();
}

void QClipboard_connect_DataChanged(QClipboard* self, void* slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QClipboard_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_Clear1(QClipboard* self, uintptr_t mode) {
	self->clear(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_Text1(QClipboard* self, uintptr_t mode, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QClipboard*>(self)->text(static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_Text2(QClipboard* self, const char* subtype, size_t subtype_Strlen, uintptr_t mode, char** _out, int* _out_Strlen) {
	QString subtype_QString = QString::fromUtf8(subtype, subtype_Strlen);
	QString ret = const_cast<const QClipboard*>(self)->text(subtype_QString, static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_SetText2(QClipboard* self, const char* param1, size_t param1_Strlen, uintptr_t mode) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	self->setText(param1_QString, static_cast<QClipboard::Mode>(mode));
}

QMimeData* QClipboard_MimeData1(QClipboard* self, uintptr_t mode) {
	return (QMimeData*) const_cast<const QClipboard*>(self)->mimeData(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, uintptr_t mode) {
	self->setMimeData(data, static_cast<QClipboard::Mode>(mode));
}

QImage* QClipboard_Image1(QClipboard* self, uintptr_t mode) {
	QImage ret = const_cast<const QClipboard*>(self)->image(static_cast<QClipboard::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QPixmap* QClipboard_Pixmap1(QClipboard* self, uintptr_t mode) {
	QPixmap ret = const_cast<const QClipboard*>(self)->pixmap(static_cast<QClipboard::Mode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QClipboard_SetImage2(QClipboard* self, QImage* param1, uintptr_t mode) {
	self->setImage(*param1, static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetPixmap2(QClipboard* self, QPixmap* param1, uintptr_t mode) {
	self->setPixmap(*param1, static_cast<QClipboard::Mode>(mode));
}

