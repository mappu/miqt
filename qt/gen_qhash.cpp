#include <QHashData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QHashData__Node
#include <QHashDummyValue>
#include "qhash.h"

#include "gen_qhash.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QHashData_WillGrow(QHashData* self) {
	return self->willGrow();
}

void QHashData_HasShrunk(QHashData* self) {
	self->hasShrunk();
}

void QHashData_Rehash(QHashData* self, int hint) {
	self->rehash(static_cast<int>(hint));
}

QHashData__Node* QHashData_FirstNode(QHashData* self) {
	return self->firstNode();
}

QHashData__Node* QHashData_NextNode(QHashData__Node* node) {
	return QHashData::nextNode(node);
}

QHashData__Node* QHashData_PreviousNode(QHashData__Node* node) {
	return QHashData::previousNode(node);
}

void QHashData_Delete(QHashData* self) {
	delete self;
}

QHashDummyValue* QHashDummyValue_new() {
	return new QHashDummyValue();
}

QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1) {
	return new QHashDummyValue(*param1);
}

void QHashDummyValue_Delete(QHashDummyValue* self) {
	delete self;
}

void QHashData__Node_Delete(QHashData__Node* self) {
	delete self;
}

