#include "gen_qsequentialanimationgroup.h"
#include "qsequentialanimationgroup.h"

#include <QAbstractAnimation>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
	return new QSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
	return new QSequentialAnimationGroup(parent);
}

QMetaObject* QSequentialAnimationGroup_MetaObject(QSequentialAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QSequentialAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSequentialAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
	return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
	return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(QSequentialAnimationGroup* self) {
	return self->currentAnimation();
}

int QSequentialAnimationGroup_Duration(QSequentialAnimationGroup* self) {
	return self->duration();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
	self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, void* slot) {
	QSequentialAnimationGroup::connect(self, static_cast<void (QSequentialAnimationGroup::*)(QAbstractAnimation*)>(&QSequentialAnimationGroup::currentAnimationChanged), self, [=](QAbstractAnimation* current) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSequentialAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSequentialAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSequentialAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSequentialAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSequentialAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
	delete self;
}

