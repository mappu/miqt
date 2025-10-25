#include <QLinkedListData>
#include <qlinkedlist.h>
#include "gen_qlinkedlist.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLinkedListData* QLinkedListData_new() {
	return new (std::nothrow) QLinkedListData();
}

QLinkedListData* QLinkedListData_n(const QLinkedListData* self) {
	return self->n;
}

void QLinkedListData_setN(QLinkedListData* self, QLinkedListData* n) {
	self->n = n;
}

QLinkedListData* QLinkedListData_p(const QLinkedListData* self) {
	return self->p;
}

void QLinkedListData_setP(QLinkedListData* self, QLinkedListData* p) {
	self->p = p;
}

int QLinkedListData_size(const QLinkedListData* self) {
	return self->size;
}

void QLinkedListData_setSize(QLinkedListData* self, int size) {
	self->size = static_cast<int>(size);
}

unsigned int QLinkedListData_sharable(const QLinkedListData* self) {
	uint sharable_ret = self->sharable;
	return static_cast<unsigned int>(sharable_ret);
}

void QLinkedListData_setSharable(QLinkedListData* self, unsigned int sharable) {
	self->sharable = static_cast<uint>(sharable);
}

void QLinkedListData_delete(QLinkedListData* self) {
	delete self;
}

