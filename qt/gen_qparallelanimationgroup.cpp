#include "gen_qparallelanimationgroup.h"
#include "qparallelanimationgroup.h"

#include <QMetaObject>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	return new QParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	return new QParallelAnimationGroup(parent);
}

QMetaObject* QParallelAnimationGroup_MetaObject(QParallelAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QParallelAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QParallelAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QParallelAnimationGroup_Duration(QParallelAnimationGroup* self) {
	return self->duration();
}

void QParallelAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QParallelAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QParallelAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QParallelAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QParallelAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
	delete self;
}

