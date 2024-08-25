#include "gen_qerrormessage.h"
#include "qerrormessage.h"

#include <QErrorMessage>
#include <QMetaObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QErrorMessage* QErrorMessage_new() {
	return new QErrorMessage();
}

QErrorMessage* QErrorMessage_new2(QWidget* parent) {
	return new QErrorMessage(parent);
}

QMetaObject* QErrorMessage_MetaObject(QErrorMessage* self) {
	return (QMetaObject*) self->metaObject();
}

void QErrorMessage_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QErrorMessage_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QErrorMessage* QErrorMessage_QtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, const char* message, size_t message_Strlen) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, const char* message, size_t message_Strlen, const char* typeVal, size_t typeVal_Strlen) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	QString typeVal_QString = QString::fromUtf8(typeVal, typeVal_Strlen);
	self->showMessage(message_QString, typeVal_QString);
}

void QErrorMessage_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QErrorMessage_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QErrorMessage_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QErrorMessage_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QErrorMessage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QErrorMessage_Delete(QErrorMessage* self) {
	delete self;
}

