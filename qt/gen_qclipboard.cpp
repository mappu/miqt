#include "gen_qclipboard.h"
#include "qclipboard.h"

#include <QClipboard>
#include <QMetaObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QClipboard_MetaObject(QClipboard* self) {
	return (QMetaObject*) self->metaObject();
}

void QClipboard_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QClipboard_SupportsSelection(QClipboard* self) {
	return self->supportsSelection();
}

bool QClipboard_SupportsFindBuffer(QClipboard* self) {
	return self->supportsFindBuffer();
}

bool QClipboard_OwnsSelection(QClipboard* self) {
	return self->ownsSelection();
}

bool QClipboard_OwnsClipboard(QClipboard* self) {
	return self->ownsClipboard();
}

bool QClipboard_OwnsFindBuffer(QClipboard* self) {
	return self->ownsFindBuffer();
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

void QClipboard_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QClipboard_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QClipboard::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

