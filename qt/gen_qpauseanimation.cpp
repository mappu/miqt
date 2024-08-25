#include "gen_qpauseanimation.h"
#include "qpauseanimation.h"

#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPauseAnimation* QPauseAnimation_new() {
	return new QPauseAnimation();
}

QPauseAnimation* QPauseAnimation_new2(int msecs) {
	return new QPauseAnimation(static_cast<int>(msecs));
}

QPauseAnimation* QPauseAnimation_new3(QObject* parent) {
	return new QPauseAnimation(parent);
}

QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent) {
	return new QPauseAnimation(static_cast<int>(msecs), parent);
}

QMetaObject* QPauseAnimation_MetaObject(QPauseAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void QPauseAnimation_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPauseAnimation_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QPauseAnimation_Duration(QPauseAnimation* self) {
	return self->duration();
}

void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

void QPauseAnimation_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPauseAnimation_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPauseAnimation_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPauseAnimation_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPauseAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPauseAnimation_Delete(QPauseAnimation* self) {
	delete self;
}

