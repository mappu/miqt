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

bool miqt_exec_callback_QTextTable_Event(QTextTable*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextTable_EventFilter(QTextTable*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTextTable_TimerEvent(QTextTable*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextTable_ChildEvent(QTextTable*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextTable_CustomEvent(QTextTable*, intptr_t, QEvent*);
void miqt_exec_callback_QTextTable_ConnectNotify(QTextTable*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextTable_DisconnectNotify(QTextTable*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QTextTableCell* QTextTableCell_new() {
	return new QTextTableCell();
}

QTextTableCell* QTextTableCell_new2(QTextTableCell* o) {
	return new QTextTableCell(*o);
}

void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o) {
	self->operator=(*o);
}

void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format) {
	self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self) {
	return new QTextCharFormat(self->format());
}

int QTextTableCell_Row(const QTextTableCell* self) {
	return self->row();
}

int QTextTableCell_Column(const QTextTableCell* self) {
	return self->column();
}

int QTextTableCell_RowSpan(const QTextTableCell* self) {
	return self->rowSpan();
}

int QTextTableCell_ColumnSpan(const QTextTableCell* self) {
	return self->columnSpan();
}

bool QTextTableCell_IsValid(const QTextTableCell* self) {
	return self->isValid();
}

QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_FirstPosition(const QTextTableCell* self) {
	return self->firstPosition();
}

int QTextTableCell_LastPosition(const QTextTableCell* self) {
	return self->lastPosition();
}

bool QTextTableCell_OperatorEqual(const QTextTableCell* self, QTextTableCell* other) {
	return (*self == *other);
}

bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, QTextTableCell* other) {
	return (*self != *other);
}

QTextFrame__iterator* QTextTableCell_Begin(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextTableCell_End(const QTextTableCell* self) {
	return new QTextFrame::iterator(self->end());
}

int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self) {
	return self->tableCellFormatIndex();
}

void QTextTableCell_Delete(QTextTableCell* self) {
	delete self;
}

class MiqtVirtualQTextTable final : public QTextTable {
public:

	MiqtVirtualQTextTable(QTextDocument* doc): QTextTable(doc) {};

	virtual ~MiqtVirtualQTextTable() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTextTable::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTextTable_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTextTable::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTextTable::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTextTable_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTextTable::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTextTable::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTextTable::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTextTable::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTextTable::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTextTable::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextTable_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTextTable::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTextTable::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextTable_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTextTable::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTextTable::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextTable_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTextTable::disconnectNotify(*signal);

	}

};

QTextTable* QTextTable_new(QTextDocument* doc) {
	return new MiqtVirtualQTextTable(doc);
}

void QTextTable_virtbase(QTextTable* src, QTextFrame** outptr_QTextFrame) {
	*outptr_QTextFrame = static_cast<QTextFrame*>(src);
}

QMetaObject* QTextTable_MetaObject(const QTextTable* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextTable_Metacast(QTextTable* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextTable_Tr(const char* s) {
	QString _ret = QTextTable::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_TrUtf8(const char* s) {
	QString _ret = QTextTable::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextTable_Resize(QTextTable* self, int rows, int cols) {
	self->resize(static_cast<int>(rows), static_cast<int>(cols));
}

void QTextTable_InsertRows(QTextTable* self, int pos, int num) {
	self->insertRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_InsertColumns(QTextTable* self, int pos, int num) {
	self->insertColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_AppendRows(QTextTable* self, int count) {
	self->appendRows(static_cast<int>(count));
}

void QTextTable_AppendColumns(QTextTable* self, int count) {
	self->appendColumns(static_cast<int>(count));
}

void QTextTable_RemoveRows(QTextTable* self, int pos, int num) {
	self->removeRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_RemoveColumns(QTextTable* self, int pos, int num) {
	self->removeColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->mergeCells(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

void QTextTable_MergeCellsWithCursor(QTextTable* self, QTextCursor* cursor) {
	self->mergeCells(*cursor);
}

void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->splitCell(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

int QTextTable_Rows(const QTextTable* self) {
	return self->rows();
}

int QTextTable_Columns(const QTextTable* self) {
	return self->columns();
}

QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col) {
	return new QTextTableCell(self->cellAt(static_cast<int>(row), static_cast<int>(col)));
}

QTextTableCell* QTextTable_CellAtWithPosition(const QTextTable* self, int position) {
	return new QTextTableCell(self->cellAt(static_cast<int>(position)));
}

QTextTableCell* QTextTable_CellAtWithQTextCursor(const QTextTable* self, QTextCursor* c) {
	return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_RowStart(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_RowEnd(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format) {
	self->setFormat(*format);
}

QTextTableFormat* QTextTable_Format(const QTextTable* self) {
	return new QTextTableFormat(self->format());
}

struct miqt_string QTextTable_Tr2(const char* s, const char* c) {
	QString _ret = QTextTable::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextTable::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextTable::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextTable::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextTable_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTextTable_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTextTable*)(self) )->virtualbase_Event(event);
}

bool QTextTable_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTextTable_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTextTable*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTextTable_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTextTable_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_TimerEvent(event);
}

bool QTextTable_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTextTable_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_ChildEvent(event);
}

bool QTextTable_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTextTable_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_CustomEvent(event);
}

bool QTextTable_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTextTable_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTextTable_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = dynamic_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTextTable_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextTable*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTextTable_Delete(QTextTable* self) {
	delete self;
}

