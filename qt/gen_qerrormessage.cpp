#include <QErrorMessage>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qerrormessage.h"
#include "gen_qerrormessage.h"
#include "_cgo_export.h"

QErrorMessage* QErrorMessage_new() {
	return new QErrorMessage();
}

QErrorMessage* QErrorMessage_new2(QWidget* parent) {
	return new QErrorMessage(parent);
}

QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QErrorMessage_Tr(const char* s) {
	QString _ret = QErrorMessage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QErrorMessage_TrUtf8(const char* s) {
	QString _ret = QErrorMessage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QErrorMessage* QErrorMessage_QtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string* message) {
	QString message_QString = QString::fromUtf8(&message->data, message->len);
	self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string* message, struct miqt_string* typeVal) {
	QString message_QString = QString::fromUtf8(&message->data, message->len);
	QString typeVal_QString = QString::fromUtf8(&typeVal->data, typeVal->len);
	self->showMessage(message_QString, typeVal_QString);
}

struct miqt_string* QErrorMessage_Tr2(const char* s, const char* c) {
	QString _ret = QErrorMessage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QErrorMessage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QErrorMessage_TrUtf82(const char* s, const char* c) {
	QString _ret = QErrorMessage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QErrorMessage_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QErrorMessage_Delete(QErrorMessage* self) {
	delete self;
}

