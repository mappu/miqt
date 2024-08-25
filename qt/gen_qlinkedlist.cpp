#include "gen_qlinkedlist.h"
#include "qlinkedlist.h"

#include <QLinkedListData>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLinkedListData* QLinkedListData_new() {
	return new QLinkedListData();
}

void QLinkedListData_Delete(QLinkedListData* self) {
	delete self;
}

