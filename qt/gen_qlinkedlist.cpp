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
	return new QLinkedListData();
}

void QLinkedListData_delete(QLinkedListData* self) {
	delete self;
}

