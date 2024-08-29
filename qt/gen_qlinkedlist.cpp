#include <QLinkedListData>
#include "qlinkedlist.h"

#include "gen_qlinkedlist.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLinkedListData* QLinkedListData_new() {
	return new QLinkedListData();
}

void QLinkedListData_Delete(QLinkedListData* self) {
	delete self;
}

