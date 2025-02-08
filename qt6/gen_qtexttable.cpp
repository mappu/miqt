#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextObject>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <QTimerEvent>
#include <qtexttable.h>
#include "gen_qtexttable.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QTextTable_event(QTextTable*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextTable_eventFilter(QTextTable*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextTable_timerEvent(QTextTable*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextTable_childEvent(QTextTable*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextTable_customEvent(QTextTable*, intptr_t, QEvent*);
void miqt_exec_callback_QTextTable_connectNotify(QTextTable*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextTable_disconnectNotify(QTextTable*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QTextTableCell* QTextTableCell_new() {
	return new QTextTableCell();
}

QTextTableCell* QTextTableCell_new2(QTextTableCell* o) {
	return new QTextTableCell(*o);
}

void QTextTableCell_operatorAssign(QTextTableCell* self, QTextTableCell* o) {
	self->operator=(*o);
}

void QTextTableCell_setFormat(QTextTableCell* self, QTextCharFormat* format) {
	self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_format(const QTextTableCell* self) {
	return new QTextCharFormat(self->format());
}

int QTextTableCell_row(const QTextTableCell* self) {
	return self->row();
}

int QTextTableCell_column(const QTextTableCell* self) {
	return self->column();
}

int QTextTableCell_rowSpan(const QTextTableCell* self) {
	return self->rowSpan();
}

int QTextTableCell_columnSpan(const QTextTableCell* self) {
	return self->columnSpan();
}

bool QTextTableCell_isValid(const QTextTableCell* self) {
	return self->isValid();
}

QTextCursor* QTextTableCell_firstCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_lastCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_firstPosition(const QTextTableCell* self) {
	return self->firstPosition();
}

int QTextTableCell_lastPosition(const QTextTableCell* self) {
	return self->lastPosition();
}

bool QTextTableCell_operatorEqual(const QTextTableCell* self, QTextTableCell* other) {
	return (*self == *other);
}

bool QTextTableCell_operatorNotEqual(const QTextTableCell* self, QTextTableCell* other) {
	return (*self != *other);
}

QTextFrame__iterator* QTextTableCell_begin(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextTableCell_end(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->end());
}

int QTextTableCell_tableCellFormatIndex(const QTextTableCell* self) {
	return self->tableCellFormatIndex();
}

void QTextTableCell_delete(QTextTableCell* self) {
	delete self;
}

class MiqtVirtualQTextTable final : public QTextTable {
public:

	MiqtVirtualQTextTable(QTextDocument* doc): QTextTable(doc) {};

	virtual ~MiqtVirtualQTextTable() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextTable::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextTable_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTextTable::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextTable::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextTable_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTextTable::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTextTable::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTextTable::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextTable::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextTable::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextTable::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextTable::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextTable::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextTable_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextTable::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextTable::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextTable_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextTable::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QTextTable_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextTable_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextTable_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextTable_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextTable* QTextTable_new(QTextDocument* doc) {
	return new MiqtVirtualQTextTable(doc);
}

void QTextTable_virtbase(QTextTable* src, QTextFrame** outptr_QTextFrame) {
	*outptr_QTextFrame = static_cast<QTextFrame*>(src);
}

QMetaObject* QTextTable_metaObject(const QTextTable* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextTable_metacast(QTextTable* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextTable_tr(const char* s) {
	QString _ret = QTextTable::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextTable_resize(QTextTable* self, int rows, int cols) {
	self->resize(static_cast<int>(rows), static_cast<int>(cols));
}

void QTextTable_insertRows(QTextTable* self, int pos, int num) {
	self->insertRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_insertColumns(QTextTable* self, int pos, int num) {
	self->insertColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_appendRows(QTextTable* self, int count) {
	self->appendRows(static_cast<int>(count));
}

void QTextTable_appendColumns(QTextTable* self, int count) {
	self->appendColumns(static_cast<int>(count));
}

void QTextTable_removeRows(QTextTable* self, int pos, int num) {
	self->removeRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_removeColumns(QTextTable* self, int pos, int num) {
	self->removeColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_mergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->mergeCells(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

void QTextTable_mergeCellsWithCursor(QTextTable* self, QTextCursor* cursor) {
	self->mergeCells(*cursor);
}

void QTextTable_splitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->splitCell(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

int QTextTable_rows(const QTextTable* self) {
	return self->rows();
}

int QTextTable_columns(const QTextTable* self) {
	return self->columns();
}

QTextTableCell* QTextTable_cellAt(const QTextTable* self, int row, int col) {
	return new QTextTableCell(self->cellAt(static_cast<int>(row), static_cast<int>(col)));
}

QTextTableCell* QTextTable_cellAtWithPosition(const QTextTable* self, int position) {
	return new QTextTableCell(self->cellAt(static_cast<int>(position)));
}

QTextTableCell* QTextTable_cellAtWithQTextCursor(const QTextTable* self, QTextCursor* c) {
	return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_rowStart(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_rowEnd(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_setFormat(QTextTable* self, QTextTableFormat* format) {
	self->setFormat(*format);
}

QTextTableFormat* QTextTable_format(const QTextTable* self) {
	return new QTextTableFormat(self->format());
}

struct miqt_string QTextTable_tr2(const char* s, const char* c) {
	QString _ret = QTextTable::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextTable::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextTable_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextTable_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextTable*)(self) )->virtualbase_event(event);
}

bool QTextTable_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextTable_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextTable*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTextTable_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextTable_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_timerEvent(event);
}

bool QTextTable_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextTable_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_childEvent(event);
}

bool QTextTable_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextTable_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_customEvent(event);
}

bool QTextTable_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextTable_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextTable_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextTable_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QTextTable_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextTable_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextTable_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextTable_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextTable_delete(QTextTable* self) {
	delete self;
}

