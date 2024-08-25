#include "gen_qanimationgroup.h"
#include "qanimationgroup.h"

#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QMetaObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAnimationGroup_MetaObject(QAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void QAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAbstractAnimation* QAnimationGroup_AnimationAt(QAnimationGroup* self, int index) {
	return self->animationAt(static_cast<int>(index));
}

int QAnimationGroup_AnimationCount(QAnimationGroup* self) {
	return self->animationCount();
}

int QAnimationGroup_IndexOfAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	return self->indexOfAnimation(animation);
}

void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
	self->insertAnimation(static_cast<int>(index), animation);
}

void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index) {
	return self->takeAnimation(static_cast<int>(index));
}

void QAnimationGroup_Clear(QAnimationGroup* self) {
	self->clear();
}

void QAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationGroup_Delete(QAnimationGroup* self) {
	delete self;
}

